%option noyywrap
%option caseless

%{
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <list>
#include "table.h"
#include "y.tab.h"
using namespace std;
int yylex(void);
%}

%%
[ \t]+ ;
create		{return CREATE;}
database	{return DATABASE;}
databases	{return DATABASES;}
show		{return SHOW;}
use			{return USE;}
drop		{return DROP;}
table		{return TABLE;}
tables		{return TABLES;}
insert		{return INSERT;}
into		{return INTO;}
values		{return VALUES;}
delete		{return DELETE;}
from		{return FROM;}
where		{return WHERE;}
and			{return AND;}
or			{return OR;}
not			{return NOT;}
update		{return UPDATE;}
set			{return SET;}
select		{return SELECT;}
exit		{return EXIT;}
int			{return INT;}
char\([0-9]+\)		{
    yylval.num = atoi(yytext+5);
    return CHAR;
}

">=" {return NOTLESS;}
"<=" {return NOTGREATER;}
"!=" |
"<>" {return NOTEQUAL;}

";" |
"(" |
")" |
"," |
"+" |
"-" |
"*" |
"/" |
"." |
"=" |
"<" |
">" |
"!" {return yytext[0];}

\n	{return NEWLINE;}


'[^']*' {
    yylval.str = (char*)malloc(yyleng - 1);
    strncpy(yylval.str, yytext + 1, yyleng - 2);
    yylval.str[yyleng - 1]=0;
    return STRING;
}

[a-zA-Z][a-zA-Z0-9_]* {
    yylval.str = (char*)malloc(yyleng + 1);
    strncpy(yylval.str, yytext, yyleng);
    yylval.str[yyleng]=0;
    return ID;
}

[0-9]+ {
    yylval.num = atoi(yytext);
    return NUMBER;
}



%%

