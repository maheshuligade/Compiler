/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PLUS = 258,
     MINUS = 259,
     DIV = 260,
     MUL = 261,
     SEMICOLON = 262,
     READ = 263,
     WRITE = 264,
     EQUAL = 265,
     NUM = 266,
     ID = 267,
     MODULUS = 268,
     POWER = 269,
     IF = 270,
     THEN = 271,
     ELSE = 272,
     ENDIF = 273,
     WHILE = 274,
     DO = 275,
     ENDWHILE = 276,
     LESS = 277,
     LTEQUAL = 278,
     GREATER = 279,
     GTEQUAL = 280,
     ISEQUAL = 281,
     NOTEQUAL = 282,
     BEGIN1 = 283,
     END = 284,
     MAIN = 285,
     INTEGER = 286,
     BOOLEAN = 287,
     RETURN = 288,
     NOT = 289,
     OR = 290,
     AND = 291,
     DECL = 292,
     ENDDECL = 293,
     TRUE = 294,
     FALSE = 295,
     DOT = 296,
     TYPEDEF = 297,
     ASSIGNMENT = 298
   };
#endif
/* Tokens.  */
#define PLUS 258
#define MINUS 259
#define DIV 260
#define MUL 261
#define SEMICOLON 262
#define READ 263
#define WRITE 264
#define EQUAL 265
#define NUM 266
#define ID 267
#define MODULUS 268
#define POWER 269
#define IF 270
#define THEN 271
#define ELSE 272
#define ENDIF 273
#define WHILE 274
#define DO 275
#define ENDWHILE 276
#define LESS 277
#define LTEQUAL 278
#define GREATER 279
#define GTEQUAL 280
#define ISEQUAL 281
#define NOTEQUAL 282
#define BEGIN1 283
#define END 284
#define MAIN 285
#define INTEGER 286
#define BOOLEAN 287
#define RETURN 288
#define NOT 289
#define OR 290
#define AND 291
#define DECL 292
#define ENDDECL 293
#define TRUE 294
#define FALSE 295
#define DOT 296
#define TYPEDEF 297
#define ASSIGNMENT 298




/* Copy the first part of user declarations.  */
#line 1 "interpreter1.y"

	#include <iostream>
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include "exptree.hpp"
	using namespace std;
	extern 	int alphabet[200];
	extern 	int yyleng;
	extern struct Gsymbol *Gsymbol_table;
	// extern int Memory[1000];
	extern FILE *yyin;
	extern int no_of_error;
	
	int BP=1535;
	int SP=1535;
	int i;
	int yylex();
	char input_file_name[100],sim_code_filename[100];
	FILE *fp,*sim_code_file;


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 214 "y.tab.cpp"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   369

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  80
/* YYNRULES -- Number of states.  */
#define YYNSTATES  177

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    49,     2,
      47,    48,     2,     2,    46,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    50,     2,    51,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    44,     2,    45,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,    13,    14,    17,    21,    22,    25,
      27,    31,    35,    37,    39,    44,    48,    50,    51,    54,
      57,    58,    62,    70,    74,    75,    83,    87,    88,    91,
      92,    96,   100,   102,   104,   107,   112,   117,   121,   123,
     124,   127,   129,   134,   140,   146,   155,   166,   175,   181,
     185,   189,   193,   197,   201,   205,   209,   211,   213,   216,
     219,   223,   227,   231,   235,   239,   243,   246,   250,   254,
     256,   258,   263,   267,   269,   270,   272,   277,   281,   283,
     285
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      53,     0,    -1,    54,    56,    63,    66,    -1,    55,    44,
      57,    45,    -1,    -1,    42,    12,    -1,    37,    57,    38,
      -1,    -1,    57,    58,    -1,    58,    -1,    81,    59,     7,
      -1,    59,    46,    60,    -1,    60,    -1,    80,    -1,    12,
      47,    61,    48,    -1,    61,     7,    62,    -1,    62,    -1,
      -1,    81,    71,    -1,    63,    64,    -1,    -1,    65,    73,
      45,    -1,    81,    12,    47,    61,    48,    44,    68,    -1,
      67,    73,    45,    -1,    -1,    31,    30,    47,    61,    48,
      44,    68,    -1,    37,    69,    38,    -1,    -1,    69,    70,
      -1,    -1,    81,    71,     7,    -1,    71,    46,    72,    -1,
      72,    -1,    12,    -1,    49,    12,    -1,    12,    50,    78,
      51,    -1,    28,    75,    74,    29,    -1,    33,    78,     7,
      -1,    76,    -1,    -1,    76,    77,    -1,    77,    -1,    80,
      10,    78,     7,    -1,     8,    47,    80,    48,     7,    -1,
       9,    47,    78,    48,     7,    -1,    15,    47,    78,    48,
      16,    75,    18,     7,    -1,    15,    47,    78,    48,    16,
      75,    17,    75,    18,     7,    -1,    19,    47,    78,    48,
      20,    75,    21,     7,    -1,    12,    47,    79,    48,     7,
      -1,    78,     3,    78,    -1,    78,     4,    78,    -1,    78,
       5,    78,    -1,    78,     6,    78,    -1,    78,    14,    78,
      -1,    78,    13,    78,    -1,    47,    78,    48,    -1,    11,
      -1,    80,    -1,     4,    78,    -1,     3,    78,    -1,    78,
      22,    78,    -1,    78,    23,    78,    -1,    78,    24,    78,
      -1,    78,    25,    78,    -1,    78,    27,    78,    -1,    78,
      26,    78,    -1,    34,    78,    -1,    78,    35,    78,    -1,
      78,    36,    78,    -1,    39,    -1,    40,    -1,    12,    47,
      79,    48,    -1,    79,    46,    78,    -1,    78,    -1,    -1,
      12,    -1,    12,    50,    78,    51,    -1,    12,    41,    12,
      -1,    31,    -1,    32,    -1,    12,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    44,    44,    80,   145,   148,   150,   181,   185,   190,
     197,   232,   237,   247,   250,   263,   268,   278,   285,   317,
     323,   325,   374,   407,   431,   436,   473,   483,   493,   502,
     515,   538,   544,   551,   563,   575,   606,   620,   639,   640,
     641,   649,   652,   690,   694,   698,   702,   706,   711,   731,
     740,   745,   749,   753,   757,   761,   762,   763,   764,   768,
     772,   776,   780,   784,   788,   792,   796,   800,   804,   808,
     812,   816,   853,   891,   923,   989,  1001,  1013,  1080,  1081,
    1082
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PLUS", "MINUS", "DIV", "MUL",
  "SEMICOLON", "READ", "WRITE", "EQUAL", "NUM", "ID", "MODULUS", "POWER",
  "IF", "THEN", "ELSE", "ENDIF", "WHILE", "DO", "ENDWHILE", "LESS",
  "LTEQUAL", "GREATER", "GTEQUAL", "ISEQUAL", "NOTEQUAL", "BEGIN1", "END",
  "MAIN", "INTEGER", "BOOLEAN", "RETURN", "NOT", "OR", "AND", "DECL",
  "ENDDECL", "TRUE", "FALSE", "DOT", "TYPEDEF", "ASSIGNMENT", "'{'", "'}'",
  "','", "'('", "')'", "'&'", "'['", "']'", "$accept", "PROGRAM",
  "USER_DEFINED_DATATYPES", "TYPEDEF_ID", "GLOBAL_DEF_BLOCK",
  "GLOBAL_DEF_LISTS", "GLOBAL_DECL", "G_ID_LIST", "G_ID", "ARGS", "ARG",
  "FUNC_DEF_BLOCKS", "FUNC_DEF_BLOCK", "FUNC_NAME_ARG_LOCAL", "MAIN_BLOCK",
  "MAIN_NAME_ARG_LOCAL", "LOCAL_DEF_BLOCK", "LOCAL_DEF_LISTS",
  "LOCAL_DECL", "L_ID_LIST", "L_ID", "BODY", "RETURN_TYPE", "Slist",
  "Stmts", "Stmt", "expr", "ID_LIST", "IDS", "TYPE", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   123,   125,    44,    40,    41,    38,
      91,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    54,    54,    55,    56,    56,    57,    57,
      58,    59,    59,    60,    60,    61,    61,    61,    62,    63,
      63,    64,    65,    66,    66,    67,    68,    68,    69,    69,
      70,    71,    71,    72,    72,    72,    73,    74,    75,    75,
      76,    76,    77,    77,    77,    77,    77,    77,    77,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    79,    79,    79,    80,    80,    80,    81,    81,
      81
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     4,     0,     2,     3,     0,     2,     1,
       3,     3,     1,     1,     4,     3,     1,     0,     2,     2,
       0,     3,     7,     3,     0,     7,     3,     0,     2,     0,
       3,     3,     1,     1,     2,     4,     4,     3,     1,     0,
       2,     1,     4,     5,     5,     8,    10,     8,     5,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     2,     2,
       3,     3,     3,     3,     3,     3,     2,     3,     3,     1,
       1,     4,     3,     1,     0,     1,     4,     3,     1,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     7,     0,     5,     1,     0,    20,     0,
      80,    78,    79,     0,     9,     0,    24,     0,     6,     8,
      75,     0,    12,    13,    78,    19,     0,     2,     0,     0,
       3,     0,    17,     0,    10,     0,     0,    39,     0,     0,
       0,    77,     0,    16,     0,     0,     0,    56,    75,     0,
      69,    70,     0,     0,    57,    11,    17,     0,     0,    75,
       0,     0,     0,    38,    41,     0,    21,    23,    17,     0,
      14,    33,     0,    18,    32,    59,    58,    74,    66,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    76,     0,     0,     0,    74,     0,
       0,     0,     0,    40,     0,     0,    15,     0,    34,     0,
      73,     0,    55,    49,    50,    51,    52,    54,    53,    60,
      61,    62,    63,    65,    64,    67,    68,     0,    75,     0,
       0,     0,     0,     0,     0,    36,     0,     0,     0,    31,
       0,    71,    27,     0,     0,     0,     0,     0,    37,    42,
      27,    35,    72,    29,    25,    43,    44,    48,    39,    39,
      22,     0,     0,     0,    26,    28,     0,    39,     0,     0,
       0,     0,    45,    47,    30,     0,    46
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     8,    13,    14,    21,    22,    42,
      43,    16,    25,    26,    27,    28,   154,   161,   165,    73,
      74,    38,   102,    62,    63,    64,   110,   111,    54,    15
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -68
static const yytype_int16 yypact[] =
{
     -39,     7,    25,    15,    32,   -68,   -68,     0,   -68,     0,
     -68,   -68,   -68,   216,   -68,    29,     2,    41,   -68,   -68,
      33,    -6,   -68,   -68,    54,   -68,    74,   -68,    74,    93,
     -68,   115,     0,     4,   -68,    29,    91,   121,    94,    97,
     106,   -68,    -3,   -68,     1,     4,     4,   -68,    87,     4,
     -68,   -68,     4,    84,   -68,   -68,     0,   116,   119,   138,
     135,   136,   156,   121,   -68,   174,   -68,   -68,     0,     0,
     -68,   111,   178,   146,   -68,    23,    23,     4,   -68,   145,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,   -68,    -2,   179,     4,     4,     4,
       4,     4,   169,   -68,     4,    -1,   -68,     4,   -68,     1,
     277,    53,   -68,    23,    23,    43,    43,   192,   192,   118,
     118,   118,   118,   344,   344,   302,   329,   163,   -24,   160,
     151,   114,   191,   197,   237,   -68,   262,   165,    90,   -68,
       4,   -68,   175,   218,   222,   223,   215,   214,   -68,   -68,
     175,   -68,   277,   -68,   -68,   -68,   -68,   -68,   121,   121,
     -68,   299,   128,   217,   -68,   -68,     1,   121,   228,   229,
       3,   219,   -68,   -68,   -68,   239,   -68
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -68,   -68,   -68,   -68,   -68,   240,    22,   -68,   220,   -47,
     183,   -68,   -68,   -68,   -68,   -68,   103,   -68,   -68,    92,
     147,   242,   -68,   -67,   -68,   194,   -22,   173,   -15,   -14
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      23,    34,    29,     1,    69,    69,    69,    45,    46,    95,
     174,    53,    10,    71,    10,    47,    48,    31,    44,     5,
      23,   105,    65,    75,    76,     6,    33,    78,    82,    83,
      79,    11,    12,    24,    12,    19,    84,    85,    49,    19,
      35,    20,    44,    50,    51,    70,   127,   137,    65,   109,
      72,    52,     7,    10,    44,    44,    84,    85,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,    11,    12,    31,   130,     9,   132,   133,   134,
      32,   129,   136,    33,    36,   138,    30,    80,    81,    82,
      83,   162,   163,    80,    81,    82,    83,    84,    85,   140,
     171,   141,    37,    84,    85,    40,    86,    87,    88,    89,
      90,    91,    86,    87,    88,    89,    90,    91,   152,    92,
      93,    80,    81,    82,    83,    92,    93,    41,    31,    57,
      58,    84,    85,    59,    77,    94,    60,    33,    56,    66,
      61,   151,    67,    65,    65,   167,   168,   166,    80,    81,
      82,    83,    65,    68,    80,    81,    82,    83,    84,    85,
     140,   107,   145,    96,    84,    85,    97,    86,    87,    88,
      89,    90,    91,    86,    87,    88,    89,    90,    91,    31,
      92,    93,    99,   100,   104,    98,    92,    93,    33,   101,
     108,   128,   109,   112,    80,    81,    82,    83,   135,   144,
      80,    81,    82,    83,    84,    85,    85,   142,   143,   150,
      84,    85,   153,    86,    87,    88,    89,    90,    91,    86,
      87,    88,    89,    90,    91,   155,    92,    93,    10,   156,
     157,   158,    92,    93,   159,   172,   173,   175,   169,   146,
      80,    81,    82,    83,   148,   147,   176,    11,    12,    17,
      84,    85,   106,   160,    18,    55,   139,   103,   170,    86,
      87,    88,    89,    90,    91,    80,    81,    82,    83,   149,
      39,   131,    92,    93,     0,    84,    85,     0,     0,     0,
      80,    81,    82,    83,    86,    87,    88,    89,    90,    91,
      84,    85,     0,     0,     0,     0,     0,    92,    93,    86,
      87,    88,    89,    90,    91,    80,    81,    82,    83,     0,
       0,    10,    92,    93,     0,    84,    85,     0,     0,     0,
       0,     0,     0,     0,    86,    87,    88,    89,    90,    91,
      11,    12,    80,    81,    82,    83,     0,   164,    93,     0,
       0,     0,    84,    85,     0,     0,     0,    80,    81,    82,
      83,    86,    87,    88,    89,    90,    91,    84,    85,     0,
       0,     0,     0,     0,     0,     0,    86,    87,    88,    89
};

static const yytype_int16 yycheck[] =
{
      15,     7,    16,    42,     7,     7,     7,     3,     4,    56,
       7,    33,    12,    12,    12,    11,    12,    41,    32,    12,
      35,    68,    37,    45,    46,     0,    50,    49,     5,     6,
      52,    31,    32,    31,    32,    13,    13,    14,    34,    17,
      46,    12,    56,    39,    40,    48,    48,    48,    63,    46,
      49,    47,    37,    12,    68,    69,    13,    14,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    31,    32,    41,    97,    44,    99,   100,   101,
      47,    96,   104,    50,    30,   107,    45,     3,     4,     5,
       6,   158,   159,     3,     4,     5,     6,    13,    14,    46,
     167,    48,    28,    13,    14,    12,    22,    23,    24,    25,
      26,    27,    22,    23,    24,    25,    26,    27,   140,    35,
      36,     3,     4,     5,     6,    35,    36,    12,    41,     8,
       9,    13,    14,    12,    47,    51,    15,    50,    47,    45,
      19,    51,    45,   158,   159,    17,    18,   161,     3,     4,
       5,     6,   167,    47,     3,     4,     5,     6,    13,    14,
      46,    50,    48,    47,    13,    14,    47,    22,    23,    24,
      25,    26,    27,    22,    23,    24,    25,    26,    27,    41,
      35,    36,    47,    47,    10,    47,    35,    36,    50,    33,
      12,    12,    46,    48,     3,     4,     5,     6,    29,    48,
       3,     4,     5,     6,    13,    14,    14,    44,    48,    44,
      13,    14,    37,    22,    23,    24,    25,    26,    27,    22,
      23,    24,    25,    26,    27,     7,    35,    36,    12,     7,
       7,    16,    35,    36,    20,     7,     7,    18,    21,    48,
       3,     4,     5,     6,     7,    48,     7,    31,    32,     9,
      13,    14,    69,   150,    38,    35,   109,    63,   166,    22,
      23,    24,    25,    26,    27,     3,     4,     5,     6,     7,
      28,    98,    35,    36,    -1,    13,    14,    -1,    -1,    -1,
       3,     4,     5,     6,    22,    23,    24,    25,    26,    27,
      13,    14,    -1,    -1,    -1,    -1,    -1,    35,    36,    22,
      23,    24,    25,    26,    27,     3,     4,     5,     6,    -1,
      -1,    12,    35,    36,    -1,    13,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,    27,
      31,    32,     3,     4,     5,     6,    -1,    38,    36,    -1,
      -1,    -1,    13,    14,    -1,    -1,    -1,     3,     4,     5,
       6,    22,    23,    24,    25,    26,    27,    13,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    42,    53,    54,    55,    12,     0,    37,    56,    44,
      12,    31,    32,    57,    58,    81,    63,    57,    38,    58,
      12,    59,    60,    80,    31,    64,    65,    66,    67,    81,
      45,    41,    47,    50,     7,    46,    30,    28,    73,    73,
      12,    12,    61,    62,    81,     3,     4,    11,    12,    34,
      39,    40,    47,    78,    80,    60,    47,     8,     9,    12,
      15,    19,    75,    76,    77,    80,    45,    45,    47,     7,
      48,    12,    49,    71,    72,    78,    78,    47,    78,    78,
       3,     4,     5,     6,    13,    14,    22,    23,    24,    25,
      26,    27,    35,    36,    51,    61,    47,    47,    47,    47,
      47,    33,    74,    77,    10,    61,    62,    50,    12,    46,
      78,    79,    48,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    48,    12,    80,
      78,    79,    78,    78,    78,    29,    78,    48,    78,    72,
      46,    48,    44,    48,    48,    48,    48,    48,     7,     7,
      44,    51,    78,    37,    68,     7,     7,     7,    16,    20,
      68,    69,    75,    75,    38,    70,    81,    17,    18,    21,
      71,    75,     7,     7,     7,    18,     7
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 44 "interpreter1.y"
    {		
														(yyval)=Make_Node(Tlookup(VOID_NAME),Node_Type_DUMMY,'D',NULL,NULL,NULL,NULL,NULL);
														(yyval)->ptr1=(yyvsp[(4) - (4)]);
														(yyval)->ptr2=(yyvsp[(3) - (4)]);

														// while (!last_function_used_type_check.empty())
														// {
														// 	cout<<last_function_used_type_check.top()<<endl;
														// 	last_function_used_type_check.pop();
														// }
														cout<<"END"<<endl;
														if (no_of_error==0)
														{
															//type_check($$);
															/*evaluate($3);*/
															fprintf(sim_code_file, "START\n");
															fprintf(sim_code_file, "MOV BP,257\n");
															fprintf(sim_code_file, "MOV SP,257\n");
															fprintf(sim_code_file, "PUSH BP\n");
															fprintf(sim_code_file, "MOV R0,SP\n");
															fprintf(sim_code_file, "MOV R1,%d\n",get_global_var_no());
															fprintf(sim_code_file, "ADD R0,R1\n");
															fprintf(sim_code_file, "MOV SP,R0\n");
															fprintf(sim_code_file, "PUSH BP\n");
															fprintf(sim_code_file, "call initialize\n");
															fprintf(sim_code_file, "call main\n");
															fprintf(sim_code_file, "HALT\n");
															codegen((yyval));
															print_code_initialize();
															print_code_allocate();
															print_code_free();
														}
													}
    break;

  case 3:
#line 80 "interpreter1.y"
    {

																	if ((yyvsp[(3) - (4)]) == NULL)
																	{
																		yyerror("User defined data types required atleast one member.");
																		exit(0);
																	}
																	// cout<<"NAME = "<<$4->NAME<<endl;
																	struct tnode *temp = new tnode;
																	struct Fieldlist *temp_2,*temp_3;
																	int size = 0;
																	temp = (yyvsp[(3) - (4)]);

																	temp_2 = new Fieldlist;
																	temp_2->NAME = (char *)malloc(20*sizeof(char));

																	// temp_3 = new Fieldlist;

																	temp_3 = temp_2;
																	
																	while (temp != NULL)
																	{																			
																		// cout<<"NAME =    "<<temp->NAME<<" type = "<<temp->type->NAME<<endl;

																		strcpy(temp_2->NAME,temp->NAME); 
																		temp_2->TYPE = Tlookup(temp->type->NAME);

																		if (temp->Arg_List != NULL)
																		{
																			temp_2->Next = new Fieldlist;
																			temp_2->Next->NAME = (char *)malloc(20*sizeof(char));
																		}

																		temp = temp->Arg_List;
																		temp_2 = temp_2->Next;
																		

																		size++;
																	}

																	// cout<<"size = "<<size<<endl;

																	// while(temp_3 != NULL)
																	// {
																	// 	// cout<<"NAME =    "<<temp_3->NAME<<" type = "<<temp_3->TYPE->NAME<<endl;

																	// 	temp_3 = temp_3->Next;
																	// }
																	// cout<<"NAME = "<<$1->NAME<<endl;
																		
																	Tlookup((yyvsp[(1) - (4)])->NAME)->Fields = temp_3;
																	if (size > 8)
																	{
																		yyerror("User defined data types  can have maximum eight member.");
																		// exit(0);
																	}
																	// Finstall(temp_2,$2->NAME);
																	// cout<<"NAME = "<<$2->NAME<<endl;
																	// cout<<"TYPE = "<<Tlookup($2->NAME)->NAME<<endl;
																	// Ginstall($2->NAME,$2->type,size,'U',$4);
																	// cout<<"Data Type = "<<Tlookup($2->NAME)->Fields->NAME<<endl;


															}
    break;

  case 4:
#line 145 "interpreter1.y"
    {}
    break;

  case 5:
#line 148 "interpreter1.y"
    {(yyval) = new  tnode; (yyval) = (yyvsp[(2) - (2)]); Tinstall((yyvsp[(2) - (2)])->NAME,NULL);}
    break;

  case 6:
#line 150 "interpreter1.y"
    {
													//$$=$2;cout<<"NAME = "<<$2->type->NAME<<endl;
													struct tnode *temp = new tnode;
													temp=(yyvsp[(2) - (3)]);
													while (temp != NULL)
													{	
														// cout<<"NAME =    "<<temp->NAME<<" type = "<<temp->type->NAME<<char(temp->value)<<endl;
														

														if (temp->value == 'f')
														{
															Ginstall(temp->NAME,(yyvsp[(1) - (3)])->type,evaluate(temp->ptr2),temp->value,temp);
															Glookup(temp->NAME)->TYPE = temp->type;

														}
														else if ((temp->type != NULL)&&(strcmp(temp->type->NAME,INTEGER_NAME) != 0) && (strcmp(temp->type->NAME,BOOLEAN_NAME) != 0) && (strcmp(temp->type->NAME,VOID_NAME) != 0))
														{
															Ginstall(temp->NAME,(yyvsp[(1) - (3)])->type,evaluate(temp->ptr2),temp->value,temp);
															Glookup(temp->NAME)->TYPE = temp->type;
														}
														else
														{
															Ginstall(temp->NAME,(yyvsp[(1) - (3)])->type,evaluate(temp->ptr2),temp->value,NULL);
															Glookup(temp->NAME)->TYPE = temp->type;

														}
														temp=temp->Arg_List;

													}
													// delete temp;
												}
    break;

  case 7:
#line 181 "interpreter1.y"
    {(yyval)=NULL;}
    break;

  case 8:
#line 185 "interpreter1.y"
    {	
													// $$ = $1;
													// $$->Arg_List = $2;
													(yyval) = Make_Arg_Node_List_for_global((yyvsp[(1) - (2)]),(yyvsp[(2) - (2)]),'G');
												}
    break;

  case 9:
#line 190 "interpreter1.y"
    { (yyval) = Make_Arg_Node_List_for_global((yyvsp[(1) - (1)]),NULL,'G');}
    break;

  case 10:
#line 197 "interpreter1.y"
    {	
												struct tnode *temp = new tnode;
												temp=(yyvsp[(2) - (3)]);
												while (temp!=NULL)
												{	
													temp->type = (yyvsp[(1) - (3)])->type;
													// cout<<"NAME="<<temp->NAME<<" TYPE="<<$1->type<<endl;
													// if (temp->value == 'f')
													// {
													// 	//cout<<"NAME = "<<temp->NAME<<endl;
													// 	// cout<<"NAME="<<temp->Lentry->Next->NAME<<endl;
													// 	Ginstall(temp->NAME,$1->type,evaluate(temp->ptr2),temp->value,temp);
													// 	// struct Lsymbol *temp_2 = new Lsymbol;

													// 	// temp_2 =Glookup(temp->NAME)->Lentry;

													// 	// while(temp_2!=NULL)
													// 	// {
													// 	// 	cout<<"temp f = "<<temp_2->NAME<<" type = "<<temp_2->TYPE<<endl;
													// 	// 	temp_2 = temp_2->Next;
													// 	// }
													// 	// cout<<"size = "<<sizeof(struct Gsymbol)<<endl;

													// }
													// else
													// {
													// 	Ginstall(temp->NAME,$1->type,evaluate(temp->ptr2),temp->value,NULL);
													// }
													temp=temp->Arg_List;
												}
												// delete temp;

												(yyval) = (yyvsp[(2) - (3)]);
											}
    break;

  case 11:
#line 232 "interpreter1.y"
    {	
												(yyval)=(yyvsp[(3) - (3)]);
												(yyval)->Arg_List=(yyvsp[(1) - (3)]);

											}
    break;

  case 12:
#line 237 "interpreter1.y"
    {	
												(yyval)=(yyvsp[(1) - (1)]);
												if ((yyval)==NULL)
												{
													(yyval) = new tnode;
												}
												(yyval)->Arg_List=NULL;
												
											}
    break;

  case 13:
#line 247 "interpreter1.y"
    {
												(yyval)=(yyvsp[(1) - (1)]);
											}
    break;

  case 14:
#line 250 "interpreter1.y"
    {
	 											// $$=$1;
												(yyval)=Make_Node(get_type((yyvsp[(1) - (4)])),Node_Type_ARRAY,'f',(yyvsp[(1) - (4)])->NAME,(yyvsp[(1) - (4)]),makeLeafNode(1),NULL,(yyvsp[(3) - (4)]));
												// $$->Lentry = new Lsymbol;	
												(yyval)->Lentry = (yyvsp[(3) - (4)])->Lentry;
												//cout<<"NAME="<<$3->Lentry->NAME<<endl;
											}
    break;

  case 15:
#line 263 "interpreter1.y"
    {
						//$$=$3;
						//$$->Arg_List=$1;
						(yyval)->Lentry = Make_Arg_Node_List((yyvsp[(1) - (3)])->Lentry,(yyvsp[(3) - (3)])->Lentry,'A');
					}
    break;

  case 16:
#line 268 "interpreter1.y"
    {	
						//$$=$1;
						if ((yyval)==NULL)
						{
							(yyval) = new tnode;
						}
						//$$->Arg_List=$1;
						(yyval)->Lentry = Make_Arg_Node_List((yyvsp[(1) - (1)])->Lentry,NULL,'A');

					}
    break;

  case 17:
#line 278 "interpreter1.y"
    {	(yyval) = new tnode;	
						(yyval)->Lentry = NULL;
					}
    break;

  case 18:
#line 285 "interpreter1.y"
    {

						struct Lsymbol *temp= new Lsymbol;
						temp = (yyvsp[(2) - (2)])->Lentry;
						while (temp!=NULL)
						{
							temp->TYPE=(yyvsp[(1) - (2)])->type;

							temp=temp->Next;
						}
						// delete temp;

						(yyval)=(yyvsp[(2) - (2)]);
						(yyval)->Lentry = (yyvsp[(2) - (2)])->Lentry;

					}
    break;

  case 19:
#line 317 "interpreter1.y"
    {
																			//$$=$1;
																			(yyval)=Make_Node(Tlookup(VOID_NAME),Node_Type_DUMMY,'D',NULL,NULL,NULL,NULL,NULL);
																			(yyval)->ptr1=(yyvsp[(1) - (2)]);
																			(yyval)->ptr2=(yyvsp[(2) - (2)]);
																		}
    break;

  case 20:
#line 323 "interpreter1.y"
    {(yyval)=NULL;}
    break;

  case 21:
#line 325 "interpreter1.y"
    {	
												/**
													This makes the funtion node $$->Lentry points to the local symbol table 
													of the respective function.
												**/
												// $$->Arg_List->Arg_List->Lentry = $1->Arg_List->Lentry;

												if (Glookup((yyvsp[(1) - (3)])->NAME) !=  NULL)
												{
													Glookup((yyvsp[(1) - (3)])->NAME)->BODY = (yyvsp[(2) - (3)]); //For storing the fuction body
												}
												(yyval)=Make_Node((yyvsp[(1) - (3)])->type,Node_Type_FUNCTION_DEF,'f',(yyvsp[(1) - (3)])->NAME,(yyvsp[(2) - (3)]),NULL,NULL,(yyvsp[(1) - (3)])->Arg_List);
												// $$->Lentry = Make_Arg_Node_List($7->Lentry,$4->Lentry);
												// Glookup($2->NAME)->Arg_List->Lentry = $$->Lentry;
												// last_function_used_type_check.push(($2->NAME));

												// if ($7!=NULL)
												// {
												// 	$$->Lentry = $7->Lentry; 
												// }

												// struct Lsymbol *temp= new Lsymbol;
												// temp = $1->Arg_List->Lentry;
												// while (temp!=NULL)
												// {
												// 	cout<<"type=" <<temp->TYPE<<" NAME = "<<temp->NAME<<endl;
											
												// 	temp=temp->Next;
												// }
												// delete temp;
												// struct Lsymbol *temp = new Lsymbol;
												// temp = $1->Arg_List->Lentry;
												// while (temp != NULL)
												// {

												// 	// if (lookup_variable($1->NAME,temp->NAME)!=NULL)
												// 	// {
												// 	// 	cout<<"change"<<endl;
												// 	// 	temp->TYPE = lookup_variable($1->NAME,temp->NAME)->TYPE;
												// 	// cout<<"		type="<<temp->TYPE<<" NAME2="<<temp->NAME<<endl;
												// 	// }
												// 	cout<<"		type="<<temp->TYPE<<" NAME2="<<temp->NAME<<endl;
												// 	temp = temp->Next;
												// }
												// last_function_used_type_check.pop();

											}
    break;

  case 22:
#line 375 "interpreter1.y"
    {	

	
												if ((yyval) == NULL)
												{
													(yyval) = new tnode;
												}

												(yyval)->type = (yyvsp[(1) - (7)])->type;
												(yyval)->NAME = (yyvsp[(2) - (7)])->NAME;
												(yyval)->Arg_List = (yyvsp[(4) - (7)]);

												(yyvsp[(7) - (7)])->Lentry = Mark_Variables_local((yyvsp[(7) - (7)])->Lentry);

												(yyval)->Lentry = Make_Arg_Node_List((yyvsp[(7) - (7)])->Lentry,(yyvsp[(4) - (7)])->Lentry,'V');
												
												if (Glookup((yyvsp[(2) - (7)])->NAME) == NULL)
												{
													yyerror(std::string ("Function named ‘") + (yyvsp[(2) - (7)])->NAME + "’ is  not declared in this scope.");
													exit(0);
												}
												else
												{

													Glookup((yyvsp[(2) - (7)])->NAME)->Local = (yyval)->Lentry;
												}
												// Glookup($2->NAME)->Arg_List->Lentry = $$->Lentry;									
												last_function_used_type_check.push(((yyvsp[(2) - (7)])->NAME));

												
											}
    break;

  case 23:
#line 408 "interpreter1.y"
    {	
												/**
													This makes the funtion node $$->Lentry points to the local symbol table 
													of the respective function.
													for main funtion there is no need to have the definiations in the global
													declaration.for that we need to install main function in the global symbol 
													table.
												**/
												cout<<"IN main body"<<endl;
												Glookup((yyvsp[(1) - (3)])->NAME)->BODY = (yyvsp[(2) - (3)]); //For storing the fuction body
												(yyval)=Make_Node(Tlookup(INTEGER_NAME),Node_Type_FUNCTION_DEF,'f',(yyvsp[(1) - (3)])->NAME,(yyvsp[(2) - (3)]),NULL,NULL,(yyvsp[(1) - (3)])->Arg_List);
												// $$->Lentry = Make_Arg_Node_List($7->Lentry,$4->Lentry);
												// Glookup($2->NAME)->Arg_List->Lentry = $$->Lentry;
												// last_function_used_type_check.push(($2->NAME));

												// if ($7!=NULL)
												// {
												// 	$$->Lentry = $7->Lentry; 
												// }
												// last_function_used_type_check.pop();


											}
    break;

  case 24:
#line 431 "interpreter1.y"
    {
												yyerror("‘main’ funtion is not defined in this scope.");
											}
    break;

  case 25:
#line 438 "interpreter1.y"
    {	
												if ((yyvsp[(4) - (7)])->Lentry!=NULL)
												{
													cout<<input_file_name<<":"<<(yyvsp[(4) - (7)])->Lentry->line_no<<":"<<(yyvsp[(4) - (7)])->Lentry->col_no<<":"<<"error:"<<"main funtion can not have any arguments"<<endl;
													no_of_error++;
												}

												//$$=$7;/*evaluate($$);*/
												// $2->NAME="main";
												
												if ((yyvsp[(2) - (7)])->NAME ==  NULL)
												{
													(yyvsp[(2) - (7)])->NAME = (char *)malloc(20*sizeof(char));
												}
												strcpy((yyvsp[(2) - (7)])->NAME,"main");
												Ginstall((yyvsp[(2) - (7)])->NAME,Tlookup(INTEGER_NAME),1,'f',(yyvsp[(4) - (7)]));
												if ((yyval) == NULL)
												{
													(yyval) = new tnode;
												}
												(yyval)->type = (yyvsp[(1) - (7)])->type;

												(yyval)->NAME = (yyvsp[(2) - (7)])->NAME;
												(yyval)->Arg_List = (yyvsp[(4) - (7)]);

												(yyvsp[(7) - (7)])->Lentry = Mark_Variables_local((yyvsp[(7) - (7)])->Lentry);

												(yyval)->Lentry = Make_Arg_Node_List((yyvsp[(7) - (7)])->Lentry,(yyvsp[(4) - (7)])->Lentry,'V');
												Glookup((yyvsp[(2) - (7)])->NAME)->Local = (yyval)->Lentry;
												// Glookup($2->NAME)->Arg_List->Lentry = $$->Lentry;
											//	Glookup($2->NAME)->Arg_List->Arg_List = new tnode;
												// Glookup($2->NAME)->Arg_List->Arg_List = $4;									
												last_function_used_type_check.push(((yyvsp[(2) - (7)])->NAME));
												cout<<"After main Local"<<endl;
											}
    break;

  case 26:
#line 473 "interpreter1.y"
    {	
													// $$ = $2;
													// if ($$ == NULL)
													// {
														(yyval) = new tnode;
													// }
													(yyval)->Lentry = (yyvsp[(2) - (3)])->Lentry;
													// Glookup(last_function_used_type_check.top())->Arg_List->Lentry->Next = $$->Lentry;

												}
    break;

  case 27:
#line 483 "interpreter1.y"
    {	
													// $$ = NULL;
													(yyval) = new tnode;
													(yyval)->Lentry = new Lsymbol;

													(yyval)->Lentry = NULL;
												}
    break;

  case 28:
#line 493 "interpreter1.y"
    {	
													//$1->Lentry->Next = $2->Lentry;
													//$$ = $1;
													(yyval) = new tnode;

													(yyval)->Lentry = Make_Arg_Node_List((yyvsp[(2) - (2)])->Lentry,(yyvsp[(1) - (2)])->Lentry,'V');
													// Glookup(last_function_used_type_check.top())->Arg_List->Lentry->Next = $$->Lentry;
												}
    break;

  case 29:
#line 502 "interpreter1.y"
    {
													// if ($$ == NULL)
													// {
														(yyval) = new tnode;
													// }
													// if ($$->Lentry == NULL)
													// {
														(yyval)->Lentry = new Lsymbol;
													// }
													(yyval)->Lentry = NULL;
												}
    break;

  case 30:
#line 515 "interpreter1.y"
    {	
												struct Lsymbol *temp= new Lsymbol;
												temp = (yyvsp[(2) - (3)])->Lentry;
												while (temp!=NULL)
												{
													temp->TYPE=(yyvsp[(1) - (3)])->type;
													// cout<<"evaluate="<<evaluate(temp->ptr2)<<endl;
													//cout<<"Value="<<char(temp->value)<<endl;
													// cout<<"NAME="<<temp->NAME<<endl;
													//cout<<"type=" <<temp->TYPE<<" NAME = "<<temp->NAME<<endl;
													//Ginstall(temp->NAME,$1->type,evaluate(temp->ptr2),temp->value,NULL);
													//if (temp->value!='A')
													{
														// /Linstall(temp->NAME,$1->type);
													}
													
													temp=temp->Next;
												}
												// delete temp;

												(yyval)=(yyvsp[(2) - (3)]);
											}
    break;

  case 31:
#line 538 "interpreter1.y"
    {	
												// $$->Lentry=$3->Lentry;
												// $$->Lentry->Next=$1->Lentry;
												(yyval)->Lentry = Make_Arg_Node_List((yyvsp[(1) - (3)])->Lentry,(yyvsp[(3) - (3)])->Lentry,'V');

											}
    break;

  case 32:
#line 544 "interpreter1.y"
    {	
												// $$->Lentry = $1->Lentry;
												// $$->Lentry->Next = NULL;
												(yyval)->Lentry = Make_Arg_Node_List((yyvsp[(1) - (1)])->Lentry,NULL,'V');
												
											}
    break;

  case 33:
#line 551 "interpreter1.y"
    {
											if (Glookup((yyvsp[(1) - (1)])->NAME)!=NULL)
											{	
												if (Glookup((yyvsp[(1) - (1)])->NAME)->size > 1)
												{
													yyerror(string("‘") + (yyvsp[(1) - (1)])->NAME + "’ was declared as array.");
												}	
											}
											(yyval)=Make_Node(Tlookup(VOID_NAME),Node_Type_ARRAY,'a',(yyvsp[(1) - (1)])->NAME,(yyvsp[(1) - (1)]),makeLeafNode(1),NULL,NULL);
											(yyval)->Lentry = Make_Arg_Node((yyvsp[(1) - (1)])->NAME,Tlookup(VOID_NAME),1,PASS_BY_VALUE);
											(yyval)->Lentry->Next = NULL;
										}
    break;

  case 34:
#line 563 "interpreter1.y"
    {
											if (Glookup((yyvsp[(1) - (2)])->NAME)!=NULL)
											{	
												if (Glookup((yyvsp[(1) - (2)])->NAME)->size > 1)
												{
													yyerror(string("‘") + (yyvsp[(1) - (2)])->NAME + "’ was declared as array.");
												}	
											}
											(yyval)=Make_Node(Tlookup(VOID_NAME),Node_Type_ARRAY,'a',(yyvsp[(2) - (2)])->NAME,(yyvsp[(2) - (2)]),makeLeafNode(1),NULL,NULL);
											(yyval)->Lentry = Make_Arg_Node((yyvsp[(2) - (2)])->NAME,Tlookup(VOID_NAME),1,PASS_BY_REFERENCE);
											(yyval)->Lentry->Next = NULL;
										}
    break;

  case 35:
#line 575 "interpreter1.y"
    {
											yyerror("Array" + string(" ‘") + (yyvsp[(1) - (4)])->NAME + "’ should be declared as global.");
											(yyval)=Make_Node(Tlookup(VOID_NAME),Node_Type_ARRAY,'A',(yyvsp[(1) - (4)])->NAME,(yyvsp[(1) - (4)]),(yyvsp[(3) - (4)]),NULL,NULL);
											(yyval)->Lentry = Make_Arg_Node((yyvsp[(1) - (4)])->NAME,Tlookup(VOID_NAME),2,PASS_BY_VALUE);
											(yyval)->Lentry->Next = NULL;
										}
    break;

  case 36:
#line 606 "interpreter1.y"
    {
										//$$=$2;
										(yyval)=Make_Node(Tlookup(VOID_NAME),Node_Type_DUMMY,'D',NULL,NULL,NULL,NULL,NULL);
										(yyval)->ptr1=(yyvsp[(2) - (4)]);
										(yyval)->ptr2=(yyvsp[(3) - (4)]);
										// evaluate($$);
										cout<<"In body"<<endl;
										// 	<<"Memory"<<endl;
										// for (int i = 0; i < 20; i++)
										// {
										// 	cout<<i<<" "<<Memory[i]<<" "<<endl;
										// }
										// exit(0);
									}
    break;

  case 37:
#line 620 "interpreter1.y"
    {	
										cout<<"IN return"<<endl;
										//cout<<"Node_Type="<<$2->Node_Type<<endl;
										if ((yyvsp[(2) - (3)])->Node_Type == Node_Type_ARRAY)
										{
											if (lookup_variable(last_function_used_type_check.top(),(yyvsp[(2) - (3)])->NAME) != NULL)
											{
												(yyvsp[(2) - (3)])->type = lookup_variable(last_function_used_type_check.top(),(yyvsp[(2) - (3)])->NAME)->TYPE;
											}
											else if(Glookup((yyvsp[(2) - (3)])->NAME) != NULL)
											{
												(yyvsp[(2) - (3)])->type = Glookup((yyvsp[(2) - (3)])->NAME)->TYPE;
											}
											// $2->type = get_type($2);
											// cout<<$2->type<<endl;
										}
										(yyval)=Make_Node((yyvsp[(2) - (3)])->type,Node_Type_RETURN,'R',NULL,(yyvsp[(2) - (3)]),NULL,NULL,NULL);
									}
    break;

  case 38:
#line 639 "interpreter1.y"
    {(yyval)=(yyvsp[(1) - (1)]); cout<<"IN Slist"<<endl;}
    break;

  case 39:
#line 640 "interpreter1.y"
    {(yyval) = new tnode;	(yyval)=NULL;}
    break;

  case 40:
#line 641 "interpreter1.y"
    {		

							(yyval)=Make_Node(Tlookup(VOID_NAME),Node_Type_DUMMY,'D',NULL,NULL,NULL,NULL,NULL);
							(yyval)->ptr1=(yyvsp[(1) - (2)]);
							(yyval)->ptr2=(yyvsp[(2) - (2)]);
							

					}
    break;

  case 41:
#line 649 "interpreter1.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 42:
#line 652 "interpreter1.y"
    { 
										//$1->type=$3->type;
										// if ($1->type==TYPE_VOID)
										// {
										// 	//cout<<"Glookup(ptr1->NAME)="<<Glookup($1->NAME)->TYPE<<endl;
										// 	$$=Make_Node(Glookup($1->NAME)->TYPE,Node_Type_ASSIGNMENT,'=',$1->NAME,$1,$3,NULL,NULL);
										// }
										// else
										// {
											//cout<<"expr Node_Type="<<$3->Node_Type<<endl;
											(yyval)=Make_Node((yyvsp[(1) - (4)])->type,Node_Type_ASSIGNMENT,'=',(yyvsp[(1) - (4)])->NAME,(yyvsp[(1) - (4)]),(yyvsp[(3) - (4)]),NULL,NULL);
											// cout<<"ptr1="<<endl;
										//}

										// if ($3->value == 'c')
										// {
										// 	struct Lsymbol *temp = new Lsymbol;
										// 	temp = $3->Arg_List->Lentry;
										// 	while (temp != NULL)
										// 	{

										// 		// if (lookup_variable($1->NAME,temp->NAME)!=NULL)
										// 		// {
										// 		// 	cout<<"change"<<endl;
										// 		// 	temp->TYPE = lookup_variable($1->NAME,temp->NAME)->TYPE;
										// 		// cout<<"		type="<<temp->TYPE<<" NAME2="<<temp->NAME<<endl;
										// 		// }
										// 		cout<<"		type="<<temp->TYPE<<" NAME2="<<temp->NAME<<endl;
										// 		temp = temp->Next;
										// 	}
										// }
									}
    break;

  case 43:
#line 690 "interpreter1.y"
    {
										cout<<"IN read"<<endl;
										(yyval)=Make_Node(Tlookup(VOID_NAME),Node_Type_READ,'r',NULL,(yyvsp[(3) - (5)]),NULL,NULL,NULL);
									}
    break;

  case 44:
#line 694 "interpreter1.y"
    {	
										cout<<"In write"<<endl;
										(yyval)=Make_Node(Tlookup(VOID_NAME),Node_Type_WRITE,'W',NULL,(yyvsp[(3) - (5)]),NULL,NULL,NULL);
									}
    break;

  case 45:
#line 698 "interpreter1.y"
    {
												
												(yyval)=Make_Node(Tlookup(VOID_NAME),Node_Type_IF,'i',NULL,(yyvsp[(3) - (8)]),(yyvsp[(6) - (8)]),NULL,NULL);
											}
    break;

  case 46:
#line 702 "interpreter1.y"
    {	
														
														(yyval)=Make_Node(Tlookup(VOID_NAME),Node_Type_IF,'I',NULL,(yyvsp[(3) - (10)]),(yyvsp[(6) - (10)]),(yyvsp[(8) - (10)]),NULL);
													}
    break;

  case 47:
#line 706 "interpreter1.y"
    {
													
													(yyval)=Make_Node(Tlookup(VOID_NAME),Node_Type_WHILE,'w',NULL,(yyvsp[(3) - (8)]),(yyvsp[(6) - (8)]),NULL,NULL);
	
												}
    break;

  case 48:
#line 711 "interpreter1.y"
    {
										// $$=NULL;
										// if (Glookup($1->NAME) != NULL)
										// {
										// 	if (Glookup($1->NAME)->Local == NULL)
										// 	{
										// 		yyerror(string("Definiation of function named ‘") + $1->NAME + "’ does not exist in this scope.");
										// 	}
										// }
										// if ((strcmp($3->Arg_List->NAME ,last_function_used_type_check.top())) != 0)
										// {
										// 	cout<<"NULL"<<endl;
										// }

										(yyval)=Make_Node(get_type((yyvsp[(1) - (5)])),Node_Type_FUNCTION_CALL,'c',(yyvsp[(1) - (5)])->NAME,(yyvsp[(3) - (5)]),NULL,NULL,(yyvsp[(3) - (5)]));

									}
    break;

  case 49:
#line 731 "interpreter1.y"
    {	
							// //if ($1->type==TYPE_VOID)
							// {
							// 	cout<<"Glookup(ptr1->NAME)="<<Glookup($3->NAME)->TYPE<<endl;
							// 	//$$=Make_Node(Glookup($1->NAME)->TYPE,Node_Type_ASSIGNMENT,'=',$1->NAME,$1,$3,NULL,NULL);
							// }
							//cout<<"ptr1->type="<<$1->type<<" ptr2->type="<<$3->type<<endl;
							(yyval)=Make_Node(Tlookup(INTEGER_NAME),Node_Type_PLUS,'+',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 50:
#line 740 "interpreter1.y"
    {
							
							(yyval)=Make_Node(Tlookup(INTEGER_NAME),Node_Type_MINUS,'-',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 51:
#line 745 "interpreter1.y"
    {
							
							(yyval)=Make_Node(Tlookup(INTEGER_NAME),Node_Type_DIV,'/',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 52:
#line 749 "interpreter1.y"
    {
							
							(yyval)=Make_Node(Tlookup(INTEGER_NAME),Node_Type_MUL,'*',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 53:
#line 753 "interpreter1.y"
    {	
							
							(yyval)=Make_Node(Tlookup(INTEGER_NAME),Node_Type_POWER,'^',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 54:
#line 757 "interpreter1.y"
    {
							
							(yyval)=Make_Node(Tlookup(INTEGER_NAME),Node_Type_MODULUS,'%',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 55:
#line 761 "interpreter1.y"
    {(yyval)=(yyvsp[(2) - (3)]);(yyval)->type=(yyvsp[(2) - (3)])->type;}
    break;

  case 56:
#line 762 "interpreter1.y"
    {cout<<"IN NUM"<<endl;(yyval)=(yyvsp[(1) - (1)]);(yyval)->type=(yyvsp[(1) - (1)])->type;}
    break;

  case 57:
#line 763 "interpreter1.y"
    {(yyval)=(yyvsp[(1) - (1)]); (yyval)->type=(yyvsp[(1) - (1)])->type; /*cout<<"IDS="<<evaluate($1->ptr2)<<endl;*/}
    break;

  case 58:
#line 764 "interpreter1.y"
    {
							
							(yyval)=Make_Node(Tlookup(INTEGER_NAME),Node_Type_MINUS,'-',NULL,makeLeafNode(0),(yyvsp[(2) - (2)]),NULL,NULL);
						}
    break;

  case 59:
#line 768 "interpreter1.y"
    {
							
							(yyval)=Make_Node(Tlookup(INTEGER_NAME),Node_Type_PLUS,'+',NULL,makeLeafNode(0),(yyvsp[(2) - (2)]),NULL,NULL);
						}
    break;

  case 60:
#line 772 "interpreter1.y"
    {
							
							(yyval)=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_LT,'<',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 61:
#line 776 "interpreter1.y"
    {
							
							(yyval)=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_LE,'L',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 62:
#line 780 "interpreter1.y"
    {
							
							(yyval)=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_GT,'>',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 63:
#line 784 "interpreter1.y"
    {
							
							(yyval)=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_GE,'G',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 64:
#line 788 "interpreter1.y"
    {
							
							(yyval)=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_NE,'N',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 65:
#line 792 "interpreter1.y"
    {
							
							(yyval)=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_EQ,'E',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 66:
#line 796 "interpreter1.y"
    {
							
							(yyval)=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_NOT,'L',NULL,(yyvsp[(2) - (2)]),NULL,NULL,NULL);
						}
    break;

  case 67:
#line 800 "interpreter1.y"
    {
							
							(yyval)=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_OR,'L',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 68:
#line 804 "interpreter1.y"
    {
							
							(yyval)=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_AND,'L',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 69:
#line 808 "interpreter1.y"
    {
							(yyval)=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_BOOLEAN_CONSTANT,1,NULL,(yyvsp[(1) - (1)]),NULL,NULL,NULL);

						}
    break;

  case 70:
#line 812 "interpreter1.y"
    {
							(yyval)=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_BOOLEAN_CONSTANT,0,NULL,(yyvsp[(1) - (1)]),NULL,NULL,NULL);

						}
    break;

  case 71:
#line 816 "interpreter1.y"
    {	
							// cout<<"Arg_List = "<<$3->Arg_List<<endl;
							(yyval)=Make_Node(get_type((yyvsp[(1) - (4)])),Node_Type_FUNCTION_CALL,'c',(yyvsp[(1) - (4)])->NAME,(yyvsp[(3) - (4)]),NULL,NULL,(yyvsp[(3) - (4)]));
							// cout<<"Arg_List = "<<$3->Lentry->TYPE<<endl;
							// cout<<"ptr1 = "<<$$->Arg_List<<endl;
							// lookup_variable("hello","w");
							// cout<<"$1->NAME = "<<$1->NAME<<endl;
							// cout<<"last_function_used_type_check = "<<last_function_used_type_check.top()<<endl;
							


							// struct tnode *temp = new tnode;
							// temp = $$->ptr3;
							// // temp = Glookup(last_function_used_type_check.top())->Local;
							// while (temp != NULL)
							// {

							// 	if (lookup_variable(last_function_used_type_check.top(),temp->NAME)!=NULL)
							// 	{
							// 		// cout<<"change"<<endl;
							// 		temp->TYPE = lookup_variable(last_function_used_type_check.top(),temp->NAME)->TYPE;
									// cout<<"		type="<<temp->type<<" NAME2="<<temp->NAME<<endl;
							// 	}
							// 	else
							// 	{
							// 		// cout<<"change2"<<endl;
							// 		temp->TYPE = Glookup(temp->NAME)->TYPE;
							// 		// cout<<"		type="<<temp->TYPE<<" NAME2="<<temp->NAME<<endl;
							// 	}
							// 	cout<<"		type="<<temp->TYPE<<" NAME2="<<temp->NAME<<endl;
							// 	temp = temp->ptr3;
							// }


						}
    break;

  case 72:
#line 853 "interpreter1.y"
    {
								(yyval)=new tnode;
									
								if ((yyvsp[(3) - (3)])->Node_Type == Node_Type_ARRAY)
								{	
									if (lookup_variable(last_function_used_type_check.top(),(yyvsp[(3) - (3)])->NAME) != NULL)
									{
										// $3->Lentry->TYPE = lookup_variable(last_function_used_type_check.top(),$3->NAME)->TYPE;
										(yyvsp[(3) - (3)])->type = lookup_variable(last_function_used_type_check.top(),(yyvsp[(3) - (3)])->NAME)->TYPE;
										// $3->type = lookup_variable(last_function_used_type_check.top(),$3->NAME)->TYPE;
										// cout<<lookup_variable(last_function_used_type_check.top(),$1->NAME)->TYPE<<endl;
									}
									else if (Glookup((yyvsp[(3) - (3)])->NAME)->size > 1)
									{
										// yyerror("Array" + string(" ‘") + $3->NAME + "’ can not be passed to the function.");
									}
								}

								// $$->Lentry = Make_Arg_Node_List($3->Lentry,$1->Lentry,'c');
								// cout<<"Node_Type2 = "<<$3->type<<endl;
								(yyval) = (yyvsp[(1) - (3)]);
								// $1->Arg_List = $3;
								struct tnode *temp = new tnode;
								temp = (yyvsp[(1) - (3)]);
								// cout<<$3->NAME<<endl;
								while (temp->ptr3 != NULL)
								{
									// cout<<"temp = "<<temp->Node_Type<<endl;
									temp = temp->ptr3;
								}
								// temp->Arg_List = new tnode;
								temp->ptr3 = (yyvsp[(3) - (3)]);
								// $3->Arg_List = $1;
								// $$->Arg_List = $3;
								// $3->Arg_List = NULL;
								// cout<<$3->NAME<<endl;

							}
    break;

  case 73:
#line 891 "interpreter1.y"
    {
								(yyval)=new tnode;
								if ((yyvsp[(1) - (1)])->Node_Type == Node_Type_ARRAY)
								{
									if (lookup_variable(last_function_used_type_check.top(),(yyvsp[(1) - (1)])->NAME) != NULL)
									{
									// cout<<"In FUNC_ARG"<<endl;
									// cout<<"Node_Type = "<<char($1->value)<<endl;
										// $1->Lentry->TYPE = lookup_variable(last_function_used_type_check.top(),$1->NAME)->TYPE;
										(yyvsp[(1) - (1)])->type = lookup_variable(last_function_used_type_check.top(),(yyvsp[(1) - (1)])->NAME)->TYPE;
									// $1->type = lookup_variable(last_function_used_type_check.top(),$1->NAME)->TYPE;
									// cout<<lookup_variable(last_function_used_type_check.top(),$1->NAME)->TYPE<<endl;
									}
									else if(Glookup((yyvsp[(1) - (1)])->NAME) != NULL)
									{	
										if ((yyvsp[(1) - (1)])->Node_Type == Node_Type_ARRAY && Glookup((yyvsp[(1) - (1)])->NAME)->size > 1)
										{
											// yyerror("Array" + string(" ‘") + $1->NAME + "’ can not be passed to the function.");
										}
									}
								}

								//$$=NULL;
								// $$->Lentry = Make_Arg_Node_List($1->Lentry,NULL,'c');
								// $$->Lentry = Make_Arg_Node($1->NAME,get_type($1),1,LOCAL_VARIABLE);
								// cout<<"Node_Type = "<<$1->type<<endl;
								// cout<<$1->NAME<<endl;
								// $$ = $1;
								// $1->Arg_List = NULL;
								(yyval) = (yyvsp[(1) - (1)]);

							}
    break;

  case 74:
#line 923 "interpreter1.y"
    {	
								(yyval) = new tnode;
								(yyval)->Arg_List = new tnode;
								// $$->Lentry = NULL;
								(yyval) = NULL;
							}
    break;

  case 75:
#line 989 "interpreter1.y"
    {	
							if (Glookup((yyvsp[(1) - (1)])->NAME) != NULL)
							{	
								if (Glookup((yyvsp[(1) - (1)])->NAME)->size > 1)
								{
									yyerror(string("‘") + (yyvsp[(1) - (1)])->NAME + "’ was declared as array.");
								}	
							}
							(yyval)=Make_Node(get_type((yyvsp[(1) - (1)])),Node_Type_ARRAY,'a',(yyvsp[(1) - (1)])->NAME,(yyvsp[(1) - (1)]),makeLeafNode(1),NULL,NULL);
							(yyval)->Lentry = Make_Arg_Node((yyvsp[(1) - (1)])->NAME,get_type((yyvsp[(1) - (1)])),1,LOCAL_VARIABLE);
							(yyval)->Lentry->Next = NULL;
						}
    break;

  case 76:
#line 1001 "interpreter1.y"
    {
							if (Glookup((yyvsp[(1) - (4)])->NAME)!=NULL)
							{	
								if (Glookup((yyvsp[(1) - (4)])->NAME)->value=='a')
								{
									yyerror(string("‘") + (yyvsp[(1) - (4)])->NAME + "’ is not a array.");
								}	
							}
							(yyval)=Make_Node(get_type((yyvsp[(1) - (4)])),Node_Type_ARRAY,'A',(yyvsp[(1) - (4)])->NAME,(yyvsp[(1) - (4)]),(yyvsp[(3) - (4)]),NULL,NULL);
							(yyval)->Lentry = Make_Arg_Node((yyvsp[(1) - (4)])->NAME,get_type((yyvsp[(1) - (4)])),1,LOCAL_VARIABLE);
							(yyval)->Lentry->Next = NULL;
						}
    break;

  case 77:
#line 1013 "interpreter1.y"
    {
							// cout<<Glookup($1->NAME)->TYPE->NAME<<endl;
							if (lookup_variable(last_function_used_type_check.top(),(yyvsp[(1) - (3)])->NAME) == NULL)
							{
								if (Glookup((yyvsp[(1) - (3)])->NAME) == NULL)
								{	
									yyerror(string("User defined variable ‘") + (yyvsp[(1) - (3)])->NAME + "’ is  not defined in this scope.");
									exit(0);
									// cout<<"NAME = "<<$1->NAME<<endl;
								}
							}
							
							if (Glookup((yyvsp[(1) - (3)])->NAME) != NULL)
							{
								if (Glookup((yyvsp[(1) - (3)])->NAME)->TYPE == NULL)
								{
									yyerror(string("Unknown type of User defined variable ‘") + (yyvsp[(1) - (3)])->NAME + "’.");
								}
								// cout<<"IN Tlookup"<<endl;
								// cout<<"NAME = "<<$1->NAME<<endl;
								// cout<<Glookup($1->NAME)->TYPE->NAME<<endl;
								// cout<<Glookup($1->NAME)->TYPE->Fields<<endl;
								// cout<<"Fields = "<<Tlookup($1->type->NAME)<<endl;
								// cout<<Glookup($1->NAME)->TYPE<<endl;
								// cout<<Flookup($3->NAME,Glookup($1->NAME)->TYPE->Fields)<<endl;
								if (Glookup((yyvsp[(1) - (3)])->NAME)->TYPE != NULL)
								{
									if (Flookup((yyvsp[(3) - (3)])->NAME,Glookup((yyvsp[(1) - (3)])->NAME)->TYPE->Fields) == NULL )
									{
										yyerror("‘" + string((yyvsp[(3) - (3)])->NAME) + "’ is not a member of user defined variable ‘"+ (yyvsp[(1) - (3)])->NAME + "’.");
										(yyval) = Make_Node(Tlookup(VOID_NAME),Node_Type_ARRAY,'u',(yyvsp[(1) - (3)])->NAME,NULL,NULL,NULL,NULL);
										(yyval)->Fields = Flookup((yyvsp[(3) - (3)])->NAME,Glookup((yyvsp[(1) - (3)])->NAME)->TYPE->Fields);
										(yyval)->Lentry = Make_Arg_Node((yyvsp[(1) - (3)])->NAME,Tlookup(VOID_NAME),1,LOCAL_VARIABLE);
										(yyval)->Lentry->Next = NULL;
									}
									else
									{
										// cout<<"TYPE = "<<Flookup($3->NAME,Glookup($1->NAME)->TYPE->Fields)->TYPE->NAME<<" NAME= "<<$3->NAME<<endl;

										(yyval) = Make_Node(Flookup((yyvsp[(3) - (3)])->NAME,Glookup((yyvsp[(1) - (3)])->NAME)->TYPE->Fields)->TYPE,Node_Type_ARRAY,'u',(yyvsp[(1) - (3)])->NAME,NULL,NULL,NULL,NULL);
										(yyval)->Fields = Flookup((yyvsp[(3) - (3)])->NAME,Glookup((yyvsp[(1) - (3)])->NAME)->TYPE->Fields);
										(yyval)->Lentry = Make_Arg_Node((yyvsp[(1) - (3)])->NAME,Flookup((yyvsp[(3) - (3)])->NAME,Glookup((yyvsp[(1) - (3)])->NAME)->TYPE->Fields)->TYPE,1,LOCAL_VARIABLE);
										(yyval)->Lentry->Next = NULL;
									}
								}


								// if (Flookup($3->NAME,Glookup($1->NAME)->TYPE->Fields) == NULL)
								// {
								// 	yyerror($3->NAME + string(" is not a member of User defined variable ‘") + $1->NAME + "’.");
								// }
								
							}
							else
							{
									(yyval)=Make_Node(Flookup((yyvsp[(3) - (3)])->NAME,Glookup((yyvsp[(1) - (3)])->NAME)->TYPE->Fields)->TYPE,Node_Type_ARRAY,'u',(yyvsp[(1) - (3)])->NAME,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
									(yyval)->Fields = Flookup((yyvsp[(3) - (3)])->NAME,Glookup((yyvsp[(1) - (3)])->NAME)->TYPE->Fields);
									(yyval)->Lentry = Make_Arg_Node((yyvsp[(1) - (3)])->NAME,Flookup((yyvsp[(3) - (3)])->NAME,Glookup((yyvsp[(1) - (3)])->NAME)->TYPE->Fields)->TYPE,1,LOCAL_VARIABLE);
									(yyval)->Lentry->Next = NULL;
							}
							// cout<<Glookup($1->NAME)->TYPE->Fields->TYPE->NAME<<endl;
							// Flookup($3->NAME,Glookup($1->NAME)->TYPE->Fields);
							// cout<<"TYPE = "<<Flookup($3->NAME,Glookup($1->NAME)->TYPE->Fields)<<" NAME= "<<$3->NAME<<endl;
							
						}
    break;

  case 78:
#line 1080 "interpreter1.y"
    {(yyval)=Make_Node(Tlookup(INTEGER_NAME),TYPE_INT,'T',NULL,NULL,NULL,NULL,NULL); }
    break;

  case 79:
#line 1081 "interpreter1.y"
    {(yyval)=Make_Node(Tlookup(BOOLEAN_NAME),TYPE_BOOLEAN,'T',NULL,NULL,NULL,NULL,NULL);}
    break;

  case 80:
#line 1082 "interpreter1.y"
    {	
					// cout<<"NAME = "<<Tlookup($1->NAME)<<endl;
					if (Tlookup((yyvsp[(1) - (1)])->NAME) == NULL)
					{
						yyerror(string("Unknown type of User defined variable ‘") + (yyvsp[(1) - (1)])->NAME + "’.");
					}
					(yyval)=Make_Node(Tlookup((yyvsp[(1) - (1)])->NAME),TYPE_USER,'T',NULL,NULL,NULL,NULL,NULL);
				}
    break;


/* Line 1267 of yacc.c.  */
#line 2798 "y.tab.cpp"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 1092 "interpreter1.y"


int yyerror(string s)
{
	cout<<input_file_name<<":"<<yylineno<<":"<<column_no<<":"<<"error:"<<s<<endl;
	no_of_error++;
	return 0;
}

int main(int argc,char const *argv[])
{	
	
	Typetable_Crate();
	if (argc < 2)
	{
		cout<<"silc:fatal error: no input files\ncompilation terminated."<<endl;
		exit(-1);
	}
	else if (argc>1)
	{
		fp=fopen(argv[1],"r");
		strcpy(input_file_name,argv[1]);
		strcpy(sim_code_filename,argv[1]);
		change_extension(sim_code_filename);
		sim_code_file=fopen(sim_code_filename,"w");
		


		//fprintf(sim_code_file, "MOV BP,1535\n");
		//fprintf(sim_code_file, "MOV SP,1535\n");
		yyin=fp;
	}
	

	/**Main function name is pushed into the last_function_used_type_check stack for type_check**/

	char *main = (char *)malloc(20*sizeof(char));
	strcpy(main,"main");
	last_function_used_type_check.push(main);
	
	char *INITIALIZE = (char *)malloc(20*sizeof(char));
	strcpy(INITIALIZE,"initialize");
	char *ALLOCATE = (char *)malloc(20*sizeof(char));
	strcpy(ALLOCATE,"allocate");
	char *FREE = (char *)malloc(20*sizeof(char));
	strcpy(FREE,"free");

	Ginstall(INITIALIZE,Tlookup(INTEGER_NAME),1,'f',NULL);
	Ginstall(ALLOCATE,Tlookup(INTEGER_NAME),1,'f',NULL);
	Ginstall(FREE,Tlookup(INTEGER_NAME),1,'f',NULL);
	// /Ginstall($2->NAME,$2->type,size,'U',$4);
	// Tlookup(INTEGER_NAME);
	cout<<"IN"<<endl;
	// cout<<"Tlookup = "<<Tlookup(INTEGER_NAME)<<endl; //Why not to remove?
	yyparse();
	// cout<<"OUT"<<endl;
	fclose(sim_code_file);
	
	if (no_of_error!=0)
	{
		remove(sim_code_filename);
	}
	return 0;
}	
