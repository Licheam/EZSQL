/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED

#include <list>
#include "database.h"
#include "table.h"
#include "condition.h"
#include "utils.h"
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    CREATE = 258,                  /* CREATE  */
    USE = 259,                     /* USE  */
    SHOW = 260,                    /* SHOW  */
    DROP = 261,                    /* DROP  */
    DATABASE = 262,                /* DATABASE  */
    DATABASES = 263,               /* DATABASES  */
    TABLE = 264,                   /* TABLE  */
    TABLES = 265,                  /* TABLES  */
    INSERT = 266,                  /* INSERT  */
    INTO = 267,                    /* INTO  */
    VALUES = 268,                  /* VALUES  */
    DELETE = 269,                  /* DELETE  */
    FROM = 270,                    /* FROM  */
    WHERE = 271,                   /* WHERE  */
    SET = 272,                     /* SET  */
    UPDATE = 273,                  /* UPDATE  */
    SELECT = 274,                  /* SELECT  */
    EXIT = 275,                    /* EXIT  */
    NEWLINE = 276,                 /* NEWLINE  */
    INT = 277,                     /* INT  */
    ID = 278,                      /* ID  */
    STRING = 279,                  /* STRING  */
    CHAR = 280,                    /* CHAR  */
    NUMBER = 281,                  /* NUMBER  */
    OR = 282,                      /* OR  */
    AND = 283,                     /* AND  */
    NOT = 284,                     /* NOT  */
    NOTLESS = 285,                 /* NOTLESS  */
    NOTGREATER = 286,              /* NOTGREATER  */
    NOTEQUAL = 287,                /* NOTEQUAL  */
    UMINUS = 288                   /* UMINUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define CREATE 258
#define USE 259
#define SHOW 260
#define DROP 261
#define DATABASE 262
#define DATABASES 263
#define TABLE 264
#define TABLES 265
#define INSERT 266
#define INTO 267
#define VALUES 268
#define DELETE 269
#define FROM 270
#define WHERE 271
#define SET 272
#define UPDATE 273
#define SELECT 274
#define EXIT 275
#define NEWLINE 276
#define INT 277
#define ID 278
#define STRING 279
#define CHAR 280
#define NUMBER 281
#define OR 282
#define AND 283
#define NOT 284
#define NOTLESS 285
#define NOTGREATER 286
#define NOTEQUAL 287
#define UMINUS 288

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 18 "ezsql.y"

	char *str;
    int num;
    tableheader *tblheader;//tableheader
    std::list<tableheader*> *tblheaders;//std::list<tableheader*>
    std::list<std::string> *strlist;
    char *data;
    std::list<char *> *datas;
    condition *cond;
    table *tbl;

#line 145 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
