/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "ezsql.y"

#include <list>
#include "database.h"
#include "table.h"
#include "condition.h"
#include "utils.h"

using namespace std;


extern int yylex(void);
void yyerror(const char *str){
    fprintf(stderr,"error:%s\n",str);
}


#line 88 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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

#line 219 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_CREATE = 3,                     /* CREATE  */
  YYSYMBOL_USE = 4,                        /* USE  */
  YYSYMBOL_SHOW = 5,                       /* SHOW  */
  YYSYMBOL_DROP = 6,                       /* DROP  */
  YYSYMBOL_DATABASE = 7,                   /* DATABASE  */
  YYSYMBOL_DATABASES = 8,                  /* DATABASES  */
  YYSYMBOL_TABLE = 9,                      /* TABLE  */
  YYSYMBOL_TABLES = 10,                    /* TABLES  */
  YYSYMBOL_INSERT = 11,                    /* INSERT  */
  YYSYMBOL_INTO = 12,                      /* INTO  */
  YYSYMBOL_VALUES = 13,                    /* VALUES  */
  YYSYMBOL_DELETE = 14,                    /* DELETE  */
  YYSYMBOL_FROM = 15,                      /* FROM  */
  YYSYMBOL_WHERE = 16,                     /* WHERE  */
  YYSYMBOL_SET = 17,                       /* SET  */
  YYSYMBOL_UPDATE = 18,                    /* UPDATE  */
  YYSYMBOL_SELECT = 19,                    /* SELECT  */
  YYSYMBOL_EXIT = 20,                      /* EXIT  */
  YYSYMBOL_NEWLINE = 21,                   /* NEWLINE  */
  YYSYMBOL_INT = 22,                       /* INT  */
  YYSYMBOL_ID = 23,                        /* ID  */
  YYSYMBOL_STRING = 24,                    /* STRING  */
  YYSYMBOL_CHAR = 25,                      /* CHAR  */
  YYSYMBOL_NUMBER = 26,                    /* NUMBER  */
  YYSYMBOL_OR = 27,                        /* OR  */
  YYSYMBOL_AND = 28,                       /* AND  */
  YYSYMBOL_NOT = 29,                       /* NOT  */
  YYSYMBOL_30_ = 30,                       /* '='  */
  YYSYMBOL_31_ = 31,                       /* '>'  */
  YYSYMBOL_32_ = 32,                       /* '<'  */
  YYSYMBOL_NOTLESS = 33,                   /* NOTLESS  */
  YYSYMBOL_NOTGREATER = 34,                /* NOTGREATER  */
  YYSYMBOL_NOTEQUAL = 35,                  /* NOTEQUAL  */
  YYSYMBOL_36_ = 36,                       /* '+'  */
  YYSYMBOL_37_ = 37,                       /* '-'  */
  YYSYMBOL_38_ = 38,                       /* '*'  */
  YYSYMBOL_39_ = 39,                       /* '/'  */
  YYSYMBOL_UMINUS = 40,                    /* UMINUS  */
  YYSYMBOL_41_ = 41,                       /* ';'  */
  YYSYMBOL_42_ = 42,                       /* '('  */
  YYSYMBOL_43_ = 43,                       /* ')'  */
  YYSYMBOL_44_ = 44,                       /* ','  */
  YYSYMBOL_45_ = 45,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 46,                  /* $accept  */
  YYSYMBOL_start = 47,                     /* start  */
  YYSYMBOL_line = 48,                      /* line  */
  YYSYMBOL_statements = 49,                /* statements  */
  YYSYMBOL_statement = 50,                 /* statement  */
  YYSYMBOL_createdb = 51,                  /* createdb  */
  YYSYMBOL_dropdb = 52,                    /* dropdb  */
  YYSYMBOL_showdb = 53,                    /* showdb  */
  YYSYMBOL_usedb = 54,                     /* usedb  */
  YYSYMBOL_createtbl = 55,                 /* createtbl  */
  YYSYMBOL_droptbl = 56,                   /* droptbl  */
  YYSYMBOL_showtbl = 57,                   /* showtbl  */
  YYSYMBOL_nametypes = 58,                 /* nametypes  */
  YYSYMBOL_nametype = 59,                  /* nametype  */
  YYSYMBOL_tblinsert = 60,                 /* tblinsert  */
  YYSYMBOL_names = 61,                     /* names  */
  YYSYMBOL_vals = 62,                      /* vals  */
  YYSYMBOL_val = 63,                       /* val  */
  YYSYMBOL_selecttbl = 64,                 /* selecttbl  */
  YYSYMBOL_temptbl = 65,                   /* temptbl  */
  YYSYMBOL_cal = 66,                       /* cal  */
  YYSYMBOL_conditions = 67,                /* conditions  */
  YYSYMBOL_condition = 68,                 /* condition  */
  YYSYMBOL_condtype = 69,                  /* condtype  */
  YYSYMBOL_compare = 70                    /* compare  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  35
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   150

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  68
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  133

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   288


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      42,    43,    38,    36,    44,    37,    45,    39,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    41,
      32,    30,    31,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    33,    34,    35,    40
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    54,    54,    55,    58,    59,    62,    63,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    79,    84,    89,
      94,    99,   104,   109,   114,   118,   124,   129,   136,   139,
     144,   148,   154,   158,   164,   167,   172,   177,   182,   188,
     192,   197,   201,   206,   209,   213,   218,   219,   220,   221,
     222,   223,   224,   227,   234,   241,   242,   249,   254,   263,
     269,   275,   281,   289,   290,   291,   292,   293,   294
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "CREATE", "USE",
  "SHOW", "DROP", "DATABASE", "DATABASES", "TABLE", "TABLES", "INSERT",
  "INTO", "VALUES", "DELETE", "FROM", "WHERE", "SET", "UPDATE", "SELECT",
  "EXIT", "NEWLINE", "INT", "ID", "STRING", "CHAR", "NUMBER", "OR", "AND",
  "NOT", "'='", "'>'", "'<'", "NOTLESS", "NOTGREATER", "NOTEQUAL", "'+'",
  "'-'", "'*'", "'/'", "UMINUS", "';'", "'('", "')'", "','", "'.'",
  "$accept", "start", "line", "statements", "statement", "createdb",
  "dropdb", "showdb", "usedb", "createtbl", "droptbl", "showtbl",
  "nametypes", "nametype", "tblinsert", "names", "vals", "val",
  "selecttbl", "temptbl", "cal", "conditions", "condition", "condtype",
  "compare", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-67)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      12,    37,    16,    99,   101,    64,    15,   -67,   -17,     3,
     -67,    56,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,    39,    67,    68,    73,    78,    79,    76,    89,
      98,   -67,    81,    -4,    80,   -67,   -67,   -67,   -67,   -67,
      83,    84,   -67,   -67,   -67,    86,    87,     6,     9,    24,
     102,   -67,   -67,   106,   -67,   -67,    88,   108,   116,   117,
     118,   119,   -67,    30,   -14,   -67,    46,    13,    45,    55,
      45,    55,   -67,   -67,    95,   106,   -67,   -67,    47,    47,
      72,   -67,    27,   109,    92,   -67,    45,    45,    27,    58,
     -67,    71,   -67,    58,   -67,   -67,   -67,   -67,    57,    97,
      46,    47,    47,    47,   100,   120,   -67,    57,   -23,    45,
      45,   -67,   -67,   -67,   -67,   -67,   -67,    55,   -67,   -67,
     -67,   103,   103,   -67,    46,   -67,   -67,   111,   -67,   -67,
      74,   104,   -67
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     4,     0,     0,
       2,     0,     6,     8,     9,    10,    11,    12,    13,    14,
      15,    16,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    30,     0,     0,     0,     1,     3,     5,     7,    36,
       0,     0,    20,    19,    23,     0,     0,     0,     0,     0,
       0,    45,    17,     0,    18,    22,     0,     0,    39,    43,
      40,    44,    31,     0,     0,    24,     0,     0,     0,     0,
       0,     0,    27,    26,     0,     0,    35,    52,     0,     0,
       0,    32,    34,     0,    62,    60,     0,     0,    59,    37,
      57,     0,    41,    38,    42,    21,    25,    51,     0,     0,
       0,     0,     0,     0,     0,     0,    56,    59,     0,     0,
       0,    67,    64,    63,    66,    65,    68,     0,    50,    28,
      33,    46,    47,    48,     0,    61,    55,    53,    54,    58,
       0,     0,    29
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -67,   -67,   131,   -67,   133,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,    75,   -67,    90,    22,    48,   -67,    -7,
     -66,   -60,    42,    32,   -67
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    64,    65,    20,    33,    80,    81,    21,    22,
      88,    89,    90,    91,   117
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      82,    34,     6,    35,   109,   110,     1,     2,     3,     4,
      93,    49,    97,    98,     5,     1,     2,     3,     4,    56,
     126,   107,     6,     5,     7,     8,   106,   108,     6,    74,
      75,     6,    58,     7,    82,   121,   122,   123,    31,    25,
      50,    59,    61,     6,    23,     8,    24,    60,    57,   127,
     128,     8,    72,    32,     8,    73,    83,    50,    82,     1,
       2,     3,     4,   101,   102,   103,     8,     5,    84,    85,
      76,    77,    77,    77,    86,     6,    30,    37,    84,    85,
      39,    77,    78,    78,    78,   109,   110,    87,    79,    79,
      40,    41,    78,   101,   102,   103,    48,    79,     8,    45,
     118,   111,   112,   113,   114,   115,   116,    26,    28,    27,
      29,    92,    46,    94,    42,    99,   100,   131,   100,    43,
      44,    47,   104,    51,    52,    62,    53,    54,    55,    63,
      66,    31,    68,    69,    70,    71,    95,   105,   119,   110,
      36,   103,   124,   125,    38,   132,   130,    67,   120,   129,
      96
};

static const yytype_int8 yycheck[] =
{
      66,     8,    19,     0,    27,    28,     3,     4,     5,     6,
      70,    15,    78,    79,    11,     3,     4,     5,     6,    13,
      43,    87,    19,    11,    21,    42,    86,    87,    19,    43,
      44,    19,    23,    21,   100,   101,   102,   103,    23,    23,
      44,    48,    49,    19,     7,    42,     9,    23,    42,   109,
     110,    42,    22,    38,    42,    25,    43,    44,   124,     3,
       4,     5,     6,    36,    37,    38,    42,    11,    23,    24,
      24,    26,    26,    26,    29,    19,    12,    21,    23,    24,
      41,    26,    37,    37,    37,    27,    28,    42,    42,    42,
      23,    23,    37,    36,    37,    38,    15,    42,    42,    23,
      43,    30,    31,    32,    33,    34,    35,     8,     7,    10,
       9,    69,    23,    71,    41,    43,    44,    43,    44,    41,
      41,    23,    13,    43,    41,    23,    42,    41,    41,    23,
      42,    23,    16,    16,    16,    16,    41,    45,    41,    28,
       9,    38,    42,    23,    11,    41,   124,    57,   100,   117,
      75
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,    11,    19,    21,    42,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      60,    64,    65,     7,     9,    23,     8,    10,     7,     9,
      12,    23,    38,    61,    65,     0,    48,    21,    50,    41,
      23,    23,    41,    41,    41,    23,    23,    23,    15,    15,
      44,    43,    41,    42,    41,    41,    13,    42,    23,    65,
      23,    65,    23,    23,    58,    59,    42,    61,    16,    16,
      16,    16,    22,    25,    43,    44,    24,    26,    37,    42,
      62,    63,    66,    43,    23,    24,    29,    42,    66,    67,
      68,    69,    68,    67,    68,    41,    59,    66,    66,    43,
      44,    36,    37,    38,    13,    45,    67,    66,    67,    27,
      28,    30,    31,    32,    33,    34,    35,    70,    43,    41,
      63,    66,    66,    66,    42,    23,    43,    67,    67,    69,
      62,    43,    41
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    46,    47,    47,    48,    48,    49,    49,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    58,    59,    59,    60,    60,
      61,    61,    62,    62,    63,    63,    64,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    66,    66,    66,    66,
      66,    66,    66,    67,    67,    67,    67,    67,    68,    69,
      69,    69,    69,    70,    70,    70,    70,    70,    70
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     4,     3,
       3,     7,     4,     3,     1,     3,     2,     2,     8,    11,
       1,     3,     1,     3,     1,     1,     2,     6,     6,     4,
       4,     6,     6,     4,     4,     3,     3,     3,     3,     3,
       3,     2,     1,     3,     3,     3,     2,     1,     3,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* start: line  */
#line 54 "ezsql.y"
                {}
#line 1357 "y.tab.c"
    break;

  case 3: /* start: start line  */
#line 55 "ezsql.y"
                        {}
#line 1363 "y.tab.c"
    break;

  case 4: /* line: NEWLINE  */
#line 58 "ezsql.y"
                        {std::cout<<std::endl<<"SQL>>";}
#line 1369 "y.tab.c"
    break;

  case 5: /* line: statements NEWLINE  */
#line 59 "ezsql.y"
                                        {std::cout<<std::endl<<"SQL>>";}
#line 1375 "y.tab.c"
    break;

  case 8: /* statement: createdb  */
#line 66 "ezsql.y"
                      {}
#line 1381 "y.tab.c"
    break;

  case 9: /* statement: dropdb  */
#line 67 "ezsql.y"
                    {}
#line 1387 "y.tab.c"
    break;

  case 10: /* statement: showdb  */
#line 68 "ezsql.y"
                    {}
#line 1393 "y.tab.c"
    break;

  case 11: /* statement: usedb  */
#line 69 "ezsql.y"
                   {}
#line 1399 "y.tab.c"
    break;

  case 12: /* statement: createtbl  */
#line 70 "ezsql.y"
                       {}
#line 1405 "y.tab.c"
    break;

  case 13: /* statement: droptbl  */
#line 71 "ezsql.y"
                     {}
#line 1411 "y.tab.c"
    break;

  case 14: /* statement: showtbl  */
#line 72 "ezsql.y"
                     {}
#line 1417 "y.tab.c"
    break;

  case 15: /* statement: tblinsert  */
#line 73 "ezsql.y"
                       {}
#line 1423 "y.tab.c"
    break;

  case 16: /* statement: selecttbl  */
#line 74 "ezsql.y"
                       {}
#line 1429 "y.tab.c"
    break;

  case 17: /* createdb: CREATE DATABASE ID ';'  */
#line 79 "ezsql.y"
                                     {
    create_database((yyvsp[-1].str));
}
#line 1437 "y.tab.c"
    break;

  case 18: /* dropdb: DROP DATABASE ID ';'  */
#line 84 "ezsql.y"
                                 {
    drop_database((yyvsp[-1].str));
}
#line 1445 "y.tab.c"
    break;

  case 19: /* showdb: SHOW DATABASES ';'  */
#line 89 "ezsql.y"
                               {
    show_databases();
}
#line 1453 "y.tab.c"
    break;

  case 20: /* usedb: USE ID ';'  */
#line 94 "ezsql.y"
                       {
    use_database((yyvsp[-1].str));
}
#line 1461 "y.tab.c"
    break;

  case 21: /* createtbl: CREATE TABLE ID '(' nametypes ')' ';'  */
#line 99 "ezsql.y"
                                                    {
    create_table((yyvsp[-4].str), (yyvsp[-2].tblheaders));
}
#line 1469 "y.tab.c"
    break;

  case 22: /* droptbl: DROP TABLE ID ';'  */
#line 104 "ezsql.y"
                            {
    drop_table((yyvsp[-1].str));
}
#line 1477 "y.tab.c"
    break;

  case 23: /* showtbl: SHOW TABLES ';'  */
#line 109 "ezsql.y"
                          {
    show_tables();
}
#line 1485 "y.tab.c"
    break;

  case 24: /* nametypes: nametype  */
#line 114 "ezsql.y"
                       {
    (yyval.tblheaders) = new std::list<tableheader*>();
    (yyval.tblheaders)->push_back((yyvsp[0].tblheader));
}
#line 1494 "y.tab.c"
    break;

  case 25: /* nametypes: nametypes ',' nametype  */
#line 118 "ezsql.y"
                                     {
    (yyval.tblheaders) = (yyvsp[-2].tblheaders);
    (yyval.tblheaders)->push_back((yyvsp[0].tblheader));
}
#line 1503 "y.tab.c"
    break;

  case 26: /* nametype: ID CHAR  */
#line 124 "ezsql.y"
                      {
    (yyval.tblheader) = new tableheader();
    (yyval.tblheader)->type = (yyvsp[0].num);
    (yyval.tblheader)->colname = (yyvsp[-1].str);
}
#line 1513 "y.tab.c"
    break;

  case 27: /* nametype: ID INT  */
#line 129 "ezsql.y"
                     {
    (yyval.tblheader) = new tableheader();
    (yyval.tblheader)->type = 0;
    (yyval.tblheader)->colname = (yyvsp[-1].str);
}
#line 1523 "y.tab.c"
    break;

  case 28: /* tblinsert: INSERT INTO ID VALUES '(' vals ')' ';'  */
#line 136 "ezsql.y"
                                                      {
    table_insert((yyvsp[-5].str), (yyvsp[-2].datas));
}
#line 1531 "y.tab.c"
    break;

  case 29: /* tblinsert: INSERT INTO ID '(' names ')' VALUES '(' vals ')' ';'  */
#line 139 "ezsql.y"
                                                                   {
    table_insert((yyvsp[-8].str), (yyvsp[-2].datas), (yyvsp[-6].strlist));
}
#line 1539 "y.tab.c"
    break;

  case 30: /* names: ID  */
#line 144 "ezsql.y"
             {
    (yyval.strlist) = new list<string>();
    (yyval.strlist)->push_back((yyvsp[0].str));
}
#line 1548 "y.tab.c"
    break;

  case 31: /* names: names ',' ID  */
#line 148 "ezsql.y"
                       {
    (yyval.strlist) = (yyvsp[-2].strlist);
    (yyval.strlist)->push_back((yyvsp[0].str));
}
#line 1557 "y.tab.c"
    break;

  case 32: /* vals: val  */
#line 154 "ezsql.y"
              {
    (yyval.datas) = new std::list<char *>();
    (yyval.datas)->push_back((yyvsp[0].data));
}
#line 1566 "y.tab.c"
    break;

  case 33: /* vals: vals ',' val  */
#line 158 "ezsql.y"
                       {
    (yyval.datas) = (yyvsp[-2].datas);
    (yyvsp[-2].datas)->push_back((yyvsp[0].data));
}
#line 1575 "y.tab.c"
    break;

  case 34: /* val: cal  */
#line 164 "ezsql.y"
          {
    (yyval.data) = mkchar((yyvsp[0].num));
}
#line 1583 "y.tab.c"
    break;

  case 35: /* val: STRING  */
#line 167 "ezsql.y"
             {
    (yyval.data) = mkchar((yyvsp[0].str));
}
#line 1591 "y.tab.c"
    break;

  case 36: /* selecttbl: temptbl ';'  */
#line 172 "ezsql.y"
                          {
    table_show(*(yyvsp[-1].tbl));
}
#line 1599 "y.tab.c"
    break;

  case 37: /* temptbl: SELECT '*' FROM ID WHERE conditions  */
#line 177 "ezsql.y"
                                                {
    (yyval.tbl) = new table();
    *(yyval.tbl) = get_table((yyvsp[-2].str));
    table_select(*(yyval.tbl), (yyvsp[0].cond));
}
#line 1609 "y.tab.c"
    break;

  case 38: /* temptbl: SELECT names FROM ID WHERE conditions  */
#line 182 "ezsql.y"
                                                    {
    (yyval.tbl) = new table();
    *(yyval.tbl) = get_table((yyvsp[-2].str));
    table_select(*(yyval.tbl), (yyvsp[0].cond));
    table_reduce(*(yyval.tbl), *(yyvsp[-4].strlist));
}
#line 1620 "y.tab.c"
    break;

  case 39: /* temptbl: SELECT '*' FROM ID  */
#line 188 "ezsql.y"
                                 {
    (yyval.tbl) = new table();
    *(yyval.tbl) = get_table((yyvsp[0].str));
}
#line 1629 "y.tab.c"
    break;

  case 40: /* temptbl: SELECT names FROM ID  */
#line 192 "ezsql.y"
                                   {
    (yyval.tbl) = new table();
    *(yyval.tbl) = get_table((yyvsp[0].str));
    table_reduce(*(yyval.tbl), *(yyvsp[-2].strlist));
}
#line 1639 "y.tab.c"
    break;

  case 41: /* temptbl: SELECT '*' FROM temptbl WHERE condition  */
#line 197 "ezsql.y"
                                                      {
    (yyval.tbl) = (yyvsp[-2].tbl);
    table_select(*(yyval.tbl), (yyvsp[0].cond));
}
#line 1648 "y.tab.c"
    break;

  case 42: /* temptbl: SELECT names FROM temptbl WHERE condition  */
#line 201 "ezsql.y"
                                                        {
    (yyval.tbl) = (yyvsp[-2].tbl);
    table_select(*(yyval.tbl), (yyvsp[0].cond));
    table_reduce(*(yyval.tbl), *(yyvsp[-4].strlist));
}
#line 1658 "y.tab.c"
    break;

  case 43: /* temptbl: SELECT '*' FROM temptbl  */
#line 206 "ezsql.y"
                                      {
    (yyval.tbl) = (yyvsp[0].tbl);
}
#line 1666 "y.tab.c"
    break;

  case 44: /* temptbl: SELECT names FROM temptbl  */
#line 209 "ezsql.y"
                                        {
    (yyval.tbl) = (yyvsp[0].tbl);
    table_reduce(*(yyval.tbl), *(yyvsp[-2].strlist));   
}
#line 1675 "y.tab.c"
    break;

  case 45: /* temptbl: '(' temptbl ')'  */
#line 213 "ezsql.y"
                              {
    (yyval.tbl) = (yyvsp[-1].tbl);
}
#line 1683 "y.tab.c"
    break;

  case 46: /* cal: cal '+' cal  */
#line 218 "ezsql.y"
                  { (yyval.num) = (yyvsp[-2].num) + (yyvsp[0].num);}
#line 1689 "y.tab.c"
    break;

  case 47: /* cal: cal '-' cal  */
#line 219 "ezsql.y"
                      { (yyval.num) = (yyvsp[-2].num) - (yyvsp[0].num);}
#line 1695 "y.tab.c"
    break;

  case 48: /* cal: cal '*' cal  */
#line 220 "ezsql.y"
                      { (yyval.num) = (yyvsp[-2].num) * (yyvsp[0].num);}
#line 1701 "y.tab.c"
    break;

  case 49: /* cal: cal '-' cal  */
#line 221 "ezsql.y"
                      { (yyval.num) = (yyvsp[-2].num) / (yyvsp[0].num);}
#line 1707 "y.tab.c"
    break;

  case 50: /* cal: '(' cal ')'  */
#line 222 "ezsql.y"
                      { (yyval.num) = (yyvsp[-1].num);}
#line 1713 "y.tab.c"
    break;

  case 51: /* cal: '-' cal  */
#line 223 "ezsql.y"
                               { (yyval.num) = - (yyvsp[0].num);}
#line 1719 "y.tab.c"
    break;

  case 52: /* cal: NUMBER  */
#line 224 "ezsql.y"
                 {(yyval.num) = (yyvsp[0].num);}
#line 1725 "y.tab.c"
    break;

  case 53: /* conditions: conditions OR conditions  */
#line 227 "ezsql.y"
                                                {
	(yyval.cond) = new condition();
    (yyval.cond)->type = 2;
    (yyval.cond)->opt = 1;
    (yyval.cond)->left = (yyvsp[-2].cond);
    (yyval.cond)->right = (yyvsp[0].cond);
}
#line 1737 "y.tab.c"
    break;

  case 54: /* conditions: conditions AND conditions  */
#line 234 "ezsql.y"
                                                        {
	(yyval.cond) = new condition();
    (yyval.cond)->type = 2;
    (yyval.cond)->opt = 2;
    (yyval.cond)->left = (yyvsp[-2].cond);
    (yyval.cond)->right = (yyvsp[0].cond);
}
#line 1749 "y.tab.c"
    break;

  case 55: /* conditions: '(' conditions ')'  */
#line 241 "ezsql.y"
                                             { (yyval.cond) = (yyvsp[-1].cond);}
#line 1755 "y.tab.c"
    break;

  case 56: /* conditions: NOT conditions  */
#line 242 "ezsql.y"
                                                {
	(yyval.cond) = new condition();
    (yyval.cond)->type = 2;
    (yyval.cond)->opt = 3;
    (yyval.cond)->left = NULL;
    (yyval.cond)->right = (yyvsp[0].cond);
}
#line 1767 "y.tab.c"
    break;

  case 57: /* conditions: condition  */
#line 249 "ezsql.y"
                                    {
	(yyval.cond) = (yyvsp[0].cond);
}
#line 1775 "y.tab.c"
    break;

  case 58: /* condition: condtype compare condtype  */
#line 254 "ezsql.y"
                                                {
	(yyval.cond) = new condition();
    (yyval.cond)->left = (yyvsp[-2].cond);
    (yyval.cond)->right = (yyvsp[0].cond);
	(yyval.cond)->type = 1;
    (yyval.cond)->opt = (yyvsp[-1].num);
}
#line 1787 "y.tab.c"
    break;

  case 59: /* condtype: cal  */
#line 263 "ezsql.y"
                      {
	(yyval.cond) = new condition();
    (yyval.cond)->type = 3;
    (yyval.cond)->opt = 1;
	(yyval.cond)->num = (yyvsp[0].num);
}
#line 1798 "y.tab.c"
    break;

  case 60: /* condtype: STRING  */
#line 269 "ezsql.y"
                                 {
	(yyval.cond) = new condition();
	(yyval.cond)->type = 3;
    (yyval.cond)->opt = 2;
	(yyval.cond)->str = (yyvsp[0].str);
}
#line 1809 "y.tab.c"
    break;

  case 61: /* condtype: ID '.' ID  */
#line 275 "ezsql.y"
                                    {
	(yyval.cond) = new condition();
	(yyval.cond)->type = 3;
    (yyval.cond)->opt = 3;
	(yyval.cond)->colname = (yyvsp[-2].str);
}
#line 1820 "y.tab.c"
    break;

  case 62: /* condtype: ID  */
#line 281 "ezsql.y"
                 {
    (yyval.cond) = new condition();
	(yyval.cond)->type = 3;
    (yyval.cond)->opt = 3;
	(yyval.cond)->colname = (yyvsp[0].str);
}
#line 1831 "y.tab.c"
    break;

  case 63: /* compare: '<'  */
#line 289 "ezsql.y"
                { (yyval.num) = 1;}
#line 1837 "y.tab.c"
    break;

  case 64: /* compare: '>'  */
#line 290 "ezsql.y"
                        { (yyval.num) = 2;}
#line 1843 "y.tab.c"
    break;

  case 65: /* compare: NOTGREATER  */
#line 291 "ezsql.y"
                                { (yyval.num) = 3;}
#line 1849 "y.tab.c"
    break;

  case 66: /* compare: NOTLESS  */
#line 292 "ezsql.y"
                                { (yyval.num) = 4;}
#line 1855 "y.tab.c"
    break;

  case 67: /* compare: '='  */
#line 293 "ezsql.y"
                        { (yyval.num) = 5;}
#line 1861 "y.tab.c"
    break;

  case 68: /* compare: NOTEQUAL  */
#line 294 "ezsql.y"
                                { (yyval.num) = 6;}
#line 1867 "y.tab.c"
    break;


#line 1871 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 297 "ezsql.y"
