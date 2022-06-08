%{
#include <list>
#include "database.h"
#include "table.h"
#include "utils.h"

using namespace std;


extern int yylex(void);
void yyerror(const char *str){
    fprintf(stderr,"error:%s\n",str);
}

%}

%union{
	char *str;
    int num;
    tableheader *tblheader;//tableheader
    std::list<tableheader*> *tblheaders;//std::list<tableheader*>
    std::list<std::string> *strlist;
    char *data;
    std::list<char *> *datas;
    condition *cond;
}

%token CREATE USE SHOW DROP DATABASE DATABASES TABLE TABLES INSERT INTO VALUES DELETE
%token FROM WHERE SET UPDATE SELECT EXIT
%token NEWLINE INT
%token<str> ID STRING
%token<num> CHAR NUMBER

%type<num> cal compare
%type<tblheader> nametype
%type<tblheaders> nametypes
%type<strlist> names
%type<data> val
%type<datas> vals
%type<cond> conditions condition condtype

%left OR
%left AND
%right NOT
%left '=' '>' '<' NOTLESS NOTGREATER NOTEQUAL
%left '+' '-'
%left '*' '/'
%right UMINUS

%%
start : line	{}
	  | start line	{}
;

line    : NEWLINE	{std::cout<<std::endl<<"SQL>>";}
	    | statements NEWLINE	{std::cout<<std::endl<<"SQL>>";}
;

statements  : statement
            | statements statement
;

statement   : createdb{}
            | dropdb{}
            | showdb{}
            | usedb{}
            | createtbl{}
            | droptbl{}
            | showtbl{}
            | tblinsert{}
            | selecttbl{}
;

exit : EXIT		{ return 0;}

createdb    : CREATE DATABASE ID ';' {
    create_database($3);
}
;

dropdb    : DROP DATABASE ID ';' {
    drop_database($3);
}
;

showdb    : SHOW DATABASES ';' {
    show_databases();
}
;

usedb     : USE ID ';' {
    use_database($2);
}
;

createtbl   : CREATE TABLE ID '(' nametypes ')' ';' {
    create_table($3, $5);
}
;

droptbl : DROP TABLE ID ';' {
    drop_table($3);
}
;

showtbl : SHOW TABLES ';' {
    show_tables();
}
;

nametypes   : nametype {
    $$ = new std::list<tableheader*>();
    $$->push_back($1);
}
            | nametypes ',' nametype {
    $$ = $1;
    $$->push_back($3);
}
;

nametype    : ID CHAR {
    $$ = new tableheader();
    $$->type = $2;
    $$->colname = $1;
}
            | ID INT {
    $$ = new tableheader();
    $$->type = 0;
    $$->colname = $1;
}
;

tblinsert    : INSERT INTO ID VALUES '(' vals ')' ';' {
    table_insert($3, $6);
}
            | INSERT INTO ID '(' names ')' VALUES '(' vals ')' ';' {
    table_insert($3, $9, $5);
}
;

names   : ID {
    $$ = new list<string>();
    $$->push_back($1);
}
        | names ',' ID {
    $$ = $1;
    $$->push_back($3);
}
;

vals    : val {
    $$ = new list<char *>();
    $$->push_back($1);
}
        | vals ',' val {
    $$ = $1;
    $1->push_back($3);
}
;

val : cal {
    $$ = mkchar($1);
}
    | STRING {
    $$ = mkchar($1);
}
;

selecttbl   : temptbl ';' {

}
;

temptbl   : SELECT '*' FROM ID WHERE  {

}
            | SELECT '*' FROM ID {

}
            | SELECT names FROM ID {

}
;

cal : cal '+' cal { $$ = $1 + $3;}
	| cal '-' cal { $$ = $1 - $3;}
	| cal '*' cal { $$ = $1 * $3;}
	| cal '-' cal { $$ = $1 / $3;}
	| '(' cal ')' { $$ = $2;}
	| '-' cal %prec UMINUS { $$ = - $2;}
	| NUMBER {$$ = $1}
;

conditions 	: conditions OR conditions	{
	$$ = new condition();
    $$->type = 2;
    $$->opt = 1;
    $$->left = $1;
    $$->right = $3;
}
			| conditions AND conditions	{
	$$ = new condition();
    $$->type = 2;
    $$->opt = 2;
    $$->left = $1;
    $$->right = $3;
}
			| '(' conditions ')' { $$ = $2;}
			| NOT conditions	{
	$$ = new condition();
    $$->type = 2;
    $$->opt = 3;
    $$->left = NULL;
    $$->right = $3;
}
			| condition {
	$$ = $1;
}
;

condition 	: condtype compare condtype	{
	$$ = new condition();
	$$->type = 1;
    $$->opt = compare;
}
;

condtype	: cal {
	$$ = new condition();
	$$ -> type = 1;
	$$ -> digits = $1;
}
			| STRING {
	$$ = new condition();
	$$ -> type = 2;
	$$ -> str = $1 -> getStringValue();
}			
			| ID '.' ID {
	$$ = $3;
}
            | ID {
    $$ = $1;
}
;

compare	: '<'	{ $$ = 1;}
		| '>'	{ $$ = 2;}
		| NOTGREATER	{ $$ = 3;}
		| NOTLESS	{ $$ = 4;}
		| '='	{ $$ = 5;}
		| NOTEQUAL	{ $$ = 6;}
;

%%