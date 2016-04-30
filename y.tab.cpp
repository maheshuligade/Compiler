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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   369

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  79
/* YYNRULES -- Number of states.  */
#define YYNSTATES  176

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
       0,     0,     3,     8,    14,    15,    19,    20,    23,    25,
      29,    33,    35,    37,    42,    46,    48,    49,    52,    55,
      56,    60,    68,    72,    73,    81,    85,    86,    89,    90,
      94,    98,   100,   102,   105,   110,   115,   119,   121,   122,
     125,   127,   132,   138,   144,   153,   164,   173,   179,   183,
     187,   191,   195,   199,   203,   207,   209,   211,   214,   217,
     221,   225,   229,   233,   237,   241,   244,   248,   252,   254,
     256,   261,   265,   267,   268,   270,   275,   279,   281,   283
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      53,     0,    -1,    54,    55,    62,    65,    -1,    42,    12,
      44,    56,    45,    -1,    -1,    37,    56,    38,    -1,    -1,
      56,    57,    -1,    57,    -1,    80,    58,     7,    -1,    58,
      46,    59,    -1,    59,    -1,    79,    -1,    12,    47,    60,
      48,    -1,    60,     7,    61,    -1,    61,    -1,    -1,    80,
      70,    -1,    62,    63,    -1,    -1,    64,    72,    45,    -1,
      80,    12,    47,    60,    48,    44,    67,    -1,    66,    72,
      45,    -1,    -1,    31,    30,    47,    60,    48,    44,    67,
      -1,    37,    68,    38,    -1,    -1,    68,    69,    -1,    -1,
      80,    70,     7,    -1,    70,    46,    71,    -1,    71,    -1,
      12,    -1,    49,    12,    -1,    12,    50,    77,    51,    -1,
      28,    74,    73,    29,    -1,    33,    77,     7,    -1,    75,
      -1,    -1,    75,    76,    -1,    76,    -1,    79,    10,    77,
       7,    -1,     8,    47,    79,    48,     7,    -1,     9,    47,
      77,    48,     7,    -1,    15,    47,    77,    48,    16,    74,
      18,     7,    -1,    15,    47,    77,    48,    16,    74,    17,
      74,    18,     7,    -1,    19,    47,    77,    48,    20,    74,
      21,     7,    -1,    12,    47,    78,    48,     7,    -1,    77,
       3,    77,    -1,    77,     4,    77,    -1,    77,     5,    77,
      -1,    77,     6,    77,    -1,    77,    14,    77,    -1,    77,
      13,    77,    -1,    47,    77,    48,    -1,    11,    -1,    79,
      -1,     4,    77,    -1,     3,    77,    -1,    77,    22,    77,
      -1,    77,    23,    77,    -1,    77,    24,    77,    -1,    77,
      25,    77,    -1,    77,    27,    77,    -1,    77,    26,    77,
      -1,    34,    77,    -1,    77,    35,    77,    -1,    77,    36,
      77,    -1,    39,    -1,    40,    -1,    12,    47,    78,    48,
      -1,    78,    46,    77,    -1,    77,    -1,    -1,    12,    -1,
      12,    50,    77,    51,    -1,    12,    41,    12,    -1,    31,
      -1,    32,    -1,    12,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    44,    44,    77,   141,   143,   174,   178,   183,   190,
     225,   230,   240,   243,   256,   261,   271,   278,   310,   316,
     318,   367,   400,   424,   429,   466,   476,   485,   494,   507,
     530,   536,   543,   555,   567,   598,   612,   631,   632,   633,
     641,   644,   682,   686,   690,   694,   698,   703,   723,   732,
     737,   741,   745,   749,   753,   754,   755,   756,   760,   764,
     768,   772,   776,   780,   784,   788,   792,   796,   800,   804,
     808,   845,   881,   913,   979,   991,  1003,  1067,  1068,  1069
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
  "USER_DEFINED_DATATYPES", "GLOBAL_DEF_BLOCK", "GLOBAL_DEF_LISTS",
  "GLOBAL_DECL", "G_ID_LIST", "G_ID", "ARGS", "ARG", "FUNC_DEF_BLOCKS",
  "FUNC_DEF_BLOCK", "FUNC_NAME_ARG_LOCAL", "MAIN_BLOCK",
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
       0,    52,    53,    54,    54,    55,    55,    56,    56,    57,
      58,    58,    59,    59,    60,    60,    60,    61,    62,    62,
      63,    64,    65,    65,    66,    67,    67,    68,    68,    69,
      70,    70,    71,    71,    71,    72,    73,    74,    74,    75,
      75,    76,    76,    76,    76,    76,    76,    76,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    78,    78,    78,    79,    79,    79,    80,    80,    80
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     5,     0,     3,     0,     2,     1,     3,
       3,     1,     1,     4,     3,     1,     0,     2,     2,     0,
       3,     7,     3,     0,     7,     3,     0,     2,     0,     3,
       3,     1,     1,     2,     4,     4,     3,     1,     0,     2,
       1,     4,     5,     5,     8,    10,     8,     5,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     2,     2,     3,
       3,     3,     3,     3,     3,     2,     3,     3,     1,     1,
       4,     3,     1,     0,     1,     4,     3,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     6,     0,     1,     0,    19,     0,    79,
      77,    78,     0,     8,     0,    23,     0,     5,     7,    74,
       0,    11,    12,    77,    18,     0,     2,     0,     0,     3,
       0,    16,     0,     9,     0,     0,    38,     0,     0,     0,
      76,     0,    15,     0,     0,     0,    55,    74,     0,    68,
      69,     0,     0,    56,    10,    16,     0,     0,    74,     0,
       0,     0,    37,    40,     0,    20,    22,    16,     0,    13,
      32,     0,    17,    31,    58,    57,    73,    65,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    75,     0,     0,     0,    73,     0,     0,
       0,     0,    39,     0,     0,    14,     0,    33,     0,    72,
       0,    54,    48,    49,    50,    51,    53,    52,    59,    60,
      61,    62,    64,    63,    66,    67,     0,    74,     0,     0,
       0,     0,     0,     0,    35,     0,     0,     0,    30,     0,
      70,    26,     0,     0,     0,     0,     0,    36,    41,    26,
      34,    71,    28,    24,    42,    43,    47,    38,    38,    21,
       0,     0,     0,    25,    27,     0,    38,     0,     0,     0,
       0,    44,    46,    29,     0,    45
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     7,    12,    13,    20,    21,    41,    42,
      15,    24,    25,    26,    27,   153,   160,   164,    72,    73,
      37,   101,    61,    62,    63,   109,   110,    53,    14
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -67
static const yytype_int16 yypact[] =
{
     -39,     7,    25,    20,    -9,   -67,     0,   -67,     0,   -67,
     -67,   -67,   216,   -67,    64,     2,    41,   -67,   -67,    33,
      -6,   -67,   -67,    54,   -67,    74,   -67,    74,    93,   -67,
     115,     0,     4,   -67,    64,    95,   121,   108,   116,   113,
     -67,    -3,   -67,     1,     4,     4,   -67,    87,     4,   -67,
     -67,     4,    84,   -67,   -67,     0,   119,   135,   138,   136,
     137,   129,   121,   -67,   153,   -67,   -67,     0,     0,   -67,
     139,   178,   146,   -67,    23,    23,     4,   -67,   145,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,   -67,    -2,   179,     4,     4,     4,     4,
       4,   169,   -67,     4,    -1,   -67,     4,   -67,     1,   277,
      -7,   -67,    23,    23,   125,   125,   192,   192,   118,   118,
     118,   118,   344,   344,   302,   329,   163,   -24,   160,   151,
      53,   191,   197,   237,   -67,   262,   165,    90,   -67,     4,
     -67,   175,   218,   222,   223,   215,   214,   -67,   -67,   175,
     -67,   277,   -67,   -67,   -67,   -67,   -67,   121,   121,   -67,
     299,   128,   217,   -67,   -67,     1,   121,   228,   229,     3,
     219,   -67,   -67,   -67,   239,   -67
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -67,   -67,   -67,   -67,   241,    40,   -67,   221,   -46,   184,
     -67,   -67,   -67,   -67,   -67,   104,   -67,   -67,    91,   149,
     231,   -67,   -66,   -67,   208,   -21,   174,   -14,   -13
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      22,    33,    28,     1,    68,    68,    68,    44,    45,    94,
     173,    52,     9,    70,     9,    46,    47,    30,    43,     4,
      22,   104,    64,    74,    75,     5,    32,    77,    81,    82,
      78,    10,    11,    23,    11,     8,    83,    84,    48,   139,
      34,   140,    43,    49,    50,    69,   126,   136,    64,   108,
      71,    51,    18,     9,    43,    43,    18,     6,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,    10,    11,    30,   129,    19,   131,   132,   133,
      31,   128,   135,    32,    35,   137,    29,    79,    80,    81,
      82,   161,   162,    79,    80,    81,    82,    83,    84,   139,
     170,   144,    36,    83,    84,    39,    85,    86,    87,    88,
      89,    90,    85,    86,    87,    88,    89,    90,   151,    91,
      92,    79,    80,    81,    82,    91,    92,    40,    30,    56,
      57,    83,    84,    58,    76,    93,    59,    32,    83,    84,
      60,   150,    55,    64,    64,   166,   167,   165,    79,    80,
      81,    82,    64,    65,    79,    80,    81,    82,    83,    84,
      67,    66,   100,   103,    83,    84,    95,    85,    86,    87,
      88,    89,    90,    85,    86,    87,    88,    89,    90,    30,
      91,    92,    96,    98,    99,    97,    91,    92,    32,   106,
     107,   127,   108,   111,    79,    80,    81,    82,   134,   143,
      79,    80,    81,    82,    83,    84,    84,   141,   142,   149,
      83,    84,   152,    85,    86,    87,    88,    89,    90,    85,
      86,    87,    88,    89,    90,   154,    91,    92,     9,   155,
     156,   157,    91,    92,   158,   171,   172,   174,   168,   145,
      79,    80,    81,    82,   147,   146,   175,    10,    11,    16,
      83,    84,   105,   159,    17,    54,   169,   138,    38,    85,
      86,    87,    88,    89,    90,    79,    80,    81,    82,   148,
     102,   130,    91,    92,     0,    83,    84,     0,     0,     0,
      79,    80,    81,    82,    85,    86,    87,    88,    89,    90,
      83,    84,     0,     0,     0,     0,     0,    91,    92,    85,
      86,    87,    88,    89,    90,    79,    80,    81,    82,     0,
       0,     9,    91,    92,     0,    83,    84,     0,     0,     0,
       0,     0,     0,     0,    85,    86,    87,    88,    89,    90,
      10,    11,    79,    80,    81,    82,     0,   163,    92,     0,
       0,     0,    83,    84,     0,     0,     0,    79,    80,    81,
      82,    85,    86,    87,    88,    89,    90,    83,    84,     0,
       0,     0,     0,     0,     0,     0,    85,    86,    87,    88
};

static const yytype_int16 yycheck[] =
{
      14,     7,    15,    42,     7,     7,     7,     3,     4,    55,
       7,    32,    12,    12,    12,    11,    12,    41,    31,    12,
      34,    67,    36,    44,    45,     0,    50,    48,     5,     6,
      51,    31,    32,    31,    32,    44,    13,    14,    34,    46,
      46,    48,    55,    39,    40,    48,    48,    48,    62,    46,
      49,    47,    12,    12,    67,    68,    16,    37,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    31,    32,    41,    96,    12,    98,    99,   100,
      47,    95,   103,    50,    30,   106,    45,     3,     4,     5,
       6,   157,   158,     3,     4,     5,     6,    13,    14,    46,
     166,    48,    28,    13,    14,    12,    22,    23,    24,    25,
      26,    27,    22,    23,    24,    25,    26,    27,   139,    35,
      36,     3,     4,     5,     6,    35,    36,    12,    41,     8,
       9,    13,    14,    12,    47,    51,    15,    50,    13,    14,
      19,    51,    47,   157,   158,    17,    18,   160,     3,     4,
       5,     6,   166,    45,     3,     4,     5,     6,    13,    14,
      47,    45,    33,    10,    13,    14,    47,    22,    23,    24,
      25,    26,    27,    22,    23,    24,    25,    26,    27,    41,
      35,    36,    47,    47,    47,    47,    35,    36,    50,    50,
      12,    12,    46,    48,     3,     4,     5,     6,    29,    48,
       3,     4,     5,     6,    13,    14,    14,    44,    48,    44,
      13,    14,    37,    22,    23,    24,    25,    26,    27,    22,
      23,    24,    25,    26,    27,     7,    35,    36,    12,     7,
       7,    16,    35,    36,    20,     7,     7,    18,    21,    48,
       3,     4,     5,     6,     7,    48,     7,    31,    32,     8,
      13,    14,    68,   149,    38,    34,   165,   108,    27,    22,
      23,    24,    25,    26,    27,     3,     4,     5,     6,     7,
      62,    97,    35,    36,    -1,    13,    14,    -1,    -1,    -1,
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
       0,    42,    53,    54,    12,     0,    37,    55,    44,    12,
      31,    32,    56,    57,    80,    62,    56,    38,    57,    12,
      58,    59,    79,    31,    63,    64,    65,    66,    80,    45,
      41,    47,    50,     7,    46,    30,    28,    72,    72,    12,
      12,    60,    61,    80,     3,     4,    11,    12,    34,    39,
      40,    47,    77,    79,    59,    47,     8,     9,    12,    15,
      19,    74,    75,    76,    79,    45,    45,    47,     7,    48,
      12,    49,    70,    71,    77,    77,    47,    77,    77,     3,
       4,     5,     6,    13,    14,    22,    23,    24,    25,    26,
      27,    35,    36,    51,    60,    47,    47,    47,    47,    47,
      33,    73,    76,    10,    60,    61,    50,    12,    46,    77,
      78,    48,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    48,    12,    79,    77,
      78,    77,    77,    77,    29,    77,    48,    77,    71,    46,
      48,    44,    48,    48,    48,    48,    48,     7,     7,    44,
      51,    77,    37,    67,     7,     7,     7,    16,    20,    67,
      68,    74,    74,    38,    69,    80,    17,    18,    21,    70,
      74,     7,     7,     7,    18,     7
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
#line 77 "interpreter1.y"
    {


																	if ((yyvsp[(4) - (5)]) == NULL)
																	{
																		yyerror("User defined data types required atleast one member.");
																		exit(0);
																	}
																	// cout<<"NAME = "<<$4->NAME<<endl;
																	struct tnode *temp = new tnode;
																	struct Fieldlist *temp_2,*temp_3;
																	int size = 0;
																	temp = (yyvsp[(4) - (5)]);

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
																	// cout<<"NAME = "<<$2->NAME<<endl;
																	Tinstall((yyvsp[(2) - (5)])->NAME,temp_3);

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
#line 141 "interpreter1.y"
    {}
    break;

  case 5:
#line 143 "interpreter1.y"
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
													delete temp;
												}
    break;

  case 6:
#line 174 "interpreter1.y"
    {(yyval)=NULL;}
    break;

  case 7:
#line 178 "interpreter1.y"
    {	
													// $$ = $1;
													// $$->Arg_List = $2;
													(yyval) = Make_Arg_Node_List_for_global((yyvsp[(1) - (2)]),(yyvsp[(2) - (2)]),'G');
												}
    break;

  case 8:
#line 183 "interpreter1.y"
    { (yyval) = Make_Arg_Node_List_for_global((yyvsp[(1) - (1)]),NULL,'G');}
    break;

  case 9:
#line 190 "interpreter1.y"
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
												delete temp;

												(yyval) = (yyvsp[(2) - (3)]);
											}
    break;

  case 10:
#line 225 "interpreter1.y"
    {	
												(yyval)=(yyvsp[(3) - (3)]);
												(yyval)->Arg_List=(yyvsp[(1) - (3)]);

											}
    break;

  case 11:
#line 230 "interpreter1.y"
    {	
												(yyval)=(yyvsp[(1) - (1)]);
												if ((yyval)==NULL)
												{
													(yyval) = new tnode;
												}
												(yyval)->Arg_List=NULL;
												
											}
    break;

  case 12:
#line 240 "interpreter1.y"
    {
												(yyval)=(yyvsp[(1) - (1)]);
											}
    break;

  case 13:
#line 243 "interpreter1.y"
    {
	 											// $$=$1;
												(yyval)=Make_Node(get_type((yyvsp[(1) - (4)])),Node_Type_ARRAY,'f',(yyvsp[(1) - (4)])->NAME,(yyvsp[(1) - (4)]),makeLeafNode(1),NULL,(yyvsp[(3) - (4)]));
												// $$->Lentry = new Lsymbol;	
												(yyval)->Lentry = (yyvsp[(3) - (4)])->Lentry;
												//cout<<"NAME="<<$3->Lentry->NAME<<endl;
											}
    break;

  case 14:
#line 256 "interpreter1.y"
    {
						//$$=$3;
						//$$->Arg_List=$1;
						(yyval)->Lentry = Make_Arg_Node_List((yyvsp[(1) - (3)])->Lentry,(yyvsp[(3) - (3)])->Lentry,'A');
					}
    break;

  case 15:
#line 261 "interpreter1.y"
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

  case 16:
#line 271 "interpreter1.y"
    {	(yyval) = new tnode;	
						(yyval)->Lentry = NULL;
					}
    break;

  case 17:
#line 278 "interpreter1.y"
    {

						struct Lsymbol *temp= new Lsymbol;
						temp = (yyvsp[(2) - (2)])->Lentry;
						while (temp!=NULL)
						{
							temp->TYPE=(yyvsp[(1) - (2)])->type;

							temp=temp->Next;
						}
						delete temp;

						(yyval)=(yyvsp[(2) - (2)]);
						(yyval)->Lentry = (yyvsp[(2) - (2)])->Lentry;

					}
    break;

  case 18:
#line 310 "interpreter1.y"
    {
																			//$$=$1;
																			(yyval)=Make_Node(Tlookup(VOID_NAME),Node_Type_DUMMY,'D',NULL,NULL,NULL,NULL,NULL);
																			(yyval)->ptr1=(yyvsp[(1) - (2)]);
																			(yyval)->ptr2=(yyvsp[(2) - (2)]);
																		}
    break;

  case 19:
#line 316 "interpreter1.y"
    {(yyval)=NULL;}
    break;

  case 20:
#line 318 "interpreter1.y"
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

  case 21:
#line 368 "interpreter1.y"
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

  case 22:
#line 401 "interpreter1.y"
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

  case 23:
#line 424 "interpreter1.y"
    {
												yyerror("‘main’ funtion is not defined in this scope.");
											}
    break;

  case 24:
#line 431 "interpreter1.y"
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

  case 25:
#line 466 "interpreter1.y"
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

  case 26:
#line 476 "interpreter1.y"
    {	
													// $$ = NULL;
													(yyval) = new tnode;

													(yyval)->Lentry = NULL;
												}
    break;

  case 27:
#line 485 "interpreter1.y"
    {	
													//$1->Lentry->Next = $2->Lentry;
													//$$ = $1;
													(yyval) = new tnode;

													(yyval)->Lentry = Make_Arg_Node_List((yyvsp[(2) - (2)])->Lentry,(yyvsp[(1) - (2)])->Lentry,'V');
													// Glookup(last_function_used_type_check.top())->Arg_List->Lentry->Next = $$->Lentry;
												}
    break;

  case 28:
#line 494 "interpreter1.y"
    {
													// if ($$ == NULL)
													// {
														(yyval) = new tnode;
													// }
													// if ($$->Lentry == NULL)
													// {
													// 	$$->Lentry = new Lsymbol;
													// }
													(yyval)->Lentry = NULL;
												}
    break;

  case 29:
#line 507 "interpreter1.y"
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
												delete temp;

												(yyval)=(yyvsp[(2) - (3)]);
											}
    break;

  case 30:
#line 530 "interpreter1.y"
    {	
												// $$->Lentry=$3->Lentry;
												// $$->Lentry->Next=$1->Lentry;
												(yyval)->Lentry = Make_Arg_Node_List((yyvsp[(1) - (3)])->Lentry,(yyvsp[(3) - (3)])->Lentry,'V');

											}
    break;

  case 31:
#line 536 "interpreter1.y"
    {	
												// $$->Lentry = $1->Lentry;
												// $$->Lentry->Next = NULL;
												(yyval)->Lentry = Make_Arg_Node_List((yyvsp[(1) - (1)])->Lentry,NULL,'V');
												
											}
    break;

  case 32:
#line 543 "interpreter1.y"
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

  case 33:
#line 555 "interpreter1.y"
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

  case 34:
#line 567 "interpreter1.y"
    {
											yyerror("Array" + string(" ‘") + (yyvsp[(1) - (4)])->NAME + "’ should be declared as global.");
											(yyval)=Make_Node(Tlookup(VOID_NAME),Node_Type_ARRAY,'A',(yyvsp[(1) - (4)])->NAME,(yyvsp[(1) - (4)]),(yyvsp[(3) - (4)]),NULL,NULL);
											(yyval)->Lentry = Make_Arg_Node((yyvsp[(1) - (4)])->NAME,Tlookup(VOID_NAME),2,PASS_BY_VALUE);
											(yyval)->Lentry->Next = NULL;
										}
    break;

  case 35:
#line 598 "interpreter1.y"
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

  case 36:
#line 612 "interpreter1.y"
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

  case 37:
#line 631 "interpreter1.y"
    {(yyval)=(yyvsp[(1) - (1)]); cout<<"IN Slist"<<endl;}
    break;

  case 38:
#line 632 "interpreter1.y"
    {(yyval)=NULL;}
    break;

  case 39:
#line 633 "interpreter1.y"
    {		

							(yyval)=Make_Node(Tlookup(VOID_NAME),Node_Type_DUMMY,'D',NULL,NULL,NULL,NULL,NULL);
							(yyval)->ptr1=(yyvsp[(1) - (2)]);
							(yyval)->ptr2=(yyvsp[(2) - (2)]);
							

					}
    break;

  case 40:
#line 641 "interpreter1.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 41:
#line 644 "interpreter1.y"
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

  case 42:
#line 682 "interpreter1.y"
    {
										cout<<"IN read"<<endl;
										(yyval)=Make_Node(Tlookup(VOID_NAME),Node_Type_READ,'r',NULL,(yyvsp[(3) - (5)]),NULL,NULL,NULL);
									}
    break;

  case 43:
#line 686 "interpreter1.y"
    {	
										cout<<"In write"<<endl;
										(yyval)=Make_Node(Tlookup(VOID_NAME),Node_Type_WRITE,'W',NULL,(yyvsp[(3) - (5)]),NULL,NULL,NULL);
									}
    break;

  case 44:
#line 690 "interpreter1.y"
    {
												
												(yyval)=Make_Node(Tlookup(VOID_NAME),Node_Type_IF,'i',NULL,(yyvsp[(3) - (8)]),(yyvsp[(6) - (8)]),NULL,NULL);
											}
    break;

  case 45:
#line 694 "interpreter1.y"
    {	
														
														(yyval)=Make_Node(Tlookup(VOID_NAME),Node_Type_IF,'I',NULL,(yyvsp[(3) - (10)]),(yyvsp[(6) - (10)]),(yyvsp[(8) - (10)]),NULL);
													}
    break;

  case 46:
#line 698 "interpreter1.y"
    {
													
													(yyval)=Make_Node(Tlookup(VOID_NAME),Node_Type_WHILE,'w',NULL,(yyvsp[(3) - (8)]),(yyvsp[(6) - (8)]),NULL,NULL);
	
												}
    break;

  case 47:
#line 703 "interpreter1.y"
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

  case 48:
#line 723 "interpreter1.y"
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

  case 49:
#line 732 "interpreter1.y"
    {
							
							(yyval)=Make_Node(Tlookup(INTEGER_NAME),Node_Type_MINUS,'-',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 50:
#line 737 "interpreter1.y"
    {
							
							(yyval)=Make_Node(Tlookup(INTEGER_NAME),Node_Type_DIV,'/',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 51:
#line 741 "interpreter1.y"
    {
							
							(yyval)=Make_Node(Tlookup(INTEGER_NAME),Node_Type_MUL,'*',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 52:
#line 745 "interpreter1.y"
    {	
							
							(yyval)=Make_Node(Tlookup(INTEGER_NAME),Node_Type_POWER,'^',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 53:
#line 749 "interpreter1.y"
    {
							
							(yyval)=Make_Node(Tlookup(INTEGER_NAME),Node_Type_MODULUS,'%',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 54:
#line 753 "interpreter1.y"
    {(yyval)=(yyvsp[(2) - (3)]);(yyval)->type=(yyvsp[(2) - (3)])->type;}
    break;

  case 55:
#line 754 "interpreter1.y"
    {cout<<"IN NUM"<<endl;(yyval)=(yyvsp[(1) - (1)]);(yyval)->type=(yyvsp[(1) - (1)])->type;}
    break;

  case 56:
#line 755 "interpreter1.y"
    {(yyval)=(yyvsp[(1) - (1)]); (yyval)->type=(yyvsp[(1) - (1)])->type; /*cout<<"IDS="<<evaluate($1->ptr2)<<endl;*/}
    break;

  case 57:
#line 756 "interpreter1.y"
    {
							
							(yyval)=Make_Node(Tlookup(INTEGER_NAME),Node_Type_MINUS,'-',NULL,makeLeafNode(0),(yyvsp[(2) - (2)]),NULL,NULL);
						}
    break;

  case 58:
#line 760 "interpreter1.y"
    {
							
							(yyval)=Make_Node(Tlookup(INTEGER_NAME),Node_Type_PLUS,'+',NULL,makeLeafNode(0),(yyvsp[(2) - (2)]),NULL,NULL);
						}
    break;

  case 59:
#line 764 "interpreter1.y"
    {
							
							(yyval)=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_LT,'<',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 60:
#line 768 "interpreter1.y"
    {
							
							(yyval)=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_LE,'L',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 61:
#line 772 "interpreter1.y"
    {
							
							(yyval)=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_GT,'>',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 62:
#line 776 "interpreter1.y"
    {
							
							(yyval)=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_GE,'G',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 63:
#line 780 "interpreter1.y"
    {
							
							(yyval)=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_NE,'N',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 64:
#line 784 "interpreter1.y"
    {
							
							(yyval)=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_EQ,'E',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 65:
#line 788 "interpreter1.y"
    {
							
							(yyval)=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_NOT,'L',NULL,(yyvsp[(2) - (2)]),NULL,NULL,NULL);
						}
    break;

  case 66:
#line 792 "interpreter1.y"
    {
							
							(yyval)=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_OR,'L',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 67:
#line 796 "interpreter1.y"
    {
							
							(yyval)=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_AND,'L',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 68:
#line 800 "interpreter1.y"
    {
							(yyval)=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_BOOLEAN_CONSTANT,1,NULL,(yyvsp[(1) - (1)]),NULL,NULL,NULL);

						}
    break;

  case 69:
#line 804 "interpreter1.y"
    {
							(yyval)=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_BOOLEAN_CONSTANT,0,NULL,(yyvsp[(1) - (1)]),NULL,NULL,NULL);

						}
    break;

  case 70:
#line 808 "interpreter1.y"
    {	
							// cout<<"Arg_List = "<<$3->Arg_List<<endl;
							(yyval)=Make_Node(get_type((yyvsp[(1) - (4)])),Node_Type_FUNCTION_CALL,'c',(yyvsp[(1) - (4)])->NAME,(yyvsp[(3) - (4)]),NULL,NULL,(yyvsp[(3) - (4)]));
							// cout<<"Arg_List = "<<$3->Lentry->TYPE<<endl;
							// cout<<"ptr1 = "<<$$->Arg_List<<endl;
							// lookup_variable("hello","w");
							// cout<<"$1->NAME = "<<$1->NAME<<endl;
							// cout<<"last_function_used_type_check = "<<last_function_used_type_check.top()<<endl;
							


							// struct tnode *temp = new tnode;
							// temp = $$->Arg_List;
							// // temp = Glookup(last_function_used_type_check.top())->Local;
							// while (temp != NULL)
							// {

							// 	if (lookup_variable(last_function_used_type_check.top(),temp->NAME)!=NULL)
							// 	{
							// 		// cout<<"change"<<endl;
							// 		temp->TYPE = lookup_variable(last_function_used_type_check.top(),temp->NAME)->TYPE;
							// 		cout<<"		type="<<temp->type<<" NAME2="<<temp->Node_Type<<endl;
							// 	}
							// 	else
							// 	{
							// 		// cout<<"change2"<<endl;
							// 		temp->TYPE = Glookup(temp->NAME)->TYPE;
							// 		// cout<<"		type="<<temp->TYPE<<" NAME2="<<temp->NAME<<endl;
							// 	}
							// 	cout<<"		type="<<temp->TYPE<<" NAME2="<<temp->NAME<<endl;
							// 	temp = temp->Arg_List;
							// }


						}
    break;

  case 71:
#line 845 "interpreter1.y"
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
								while (temp->Arg_List != NULL)
								{
									// cout<<"temp = "<<temp->Node_Type<<endl;
									temp = temp->Arg_List;
								}
								// temp->Arg_List = new tnode;
								temp->Arg_List = (yyvsp[(3) - (3)]);
								// $3->Arg_List = $1;
								// $$->Arg_List = $3;
								// $3->Arg_List = NULL;
								// cout<<$3->NAME<<endl;
							}
    break;

  case 72:
#line 881 "interpreter1.y"
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

  case 73:
#line 913 "interpreter1.y"
    {	
								(yyval) = new tnode;
								// $$->Arg_List = new tnode;
								// $$->Lentry = NULL;
								(yyval) = NULL;
							}
    break;

  case 74:
#line 979 "interpreter1.y"
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

  case 75:
#line 991 "interpreter1.y"
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

  case 76:
#line 1003 "interpreter1.y"
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
										(yyval)=Make_Node(Tlookup(VOID_NAME),Node_Type_ARRAY,'u',(yyvsp[(3) - (3)])->NAME,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
										(yyval)->Lentry = Make_Arg_Node((yyvsp[(1) - (3)])->NAME,Tlookup(VOID_NAME),1,LOCAL_VARIABLE);
										(yyval)->Lentry->Next = NULL;
									}
									else
									{
										// cout<<"TYPE = "<<Flookup($3->NAME,Glookup($1->NAME)->TYPE->Fields)->TYPE->NAME<<" NAME= "<<$3->NAME<<endl;

										(yyval)=Make_Node(Flookup((yyvsp[(3) - (3)])->NAME,Glookup((yyvsp[(1) - (3)])->NAME)->TYPE->Fields)->TYPE,Node_Type_ARRAY,'u',(yyvsp[(3) - (3)])->NAME,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
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
								(yyval)=Make_Node(Flookup((yyvsp[(3) - (3)])->NAME,Glookup((yyvsp[(1) - (3)])->NAME)->TYPE->Fields)->TYPE,Node_Type_ARRAY,'u',(yyvsp[(3) - (3)])->NAME,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
								(yyval)->Lentry = Make_Arg_Node((yyvsp[(1) - (3)])->NAME,Flookup((yyvsp[(3) - (3)])->NAME,Glookup((yyvsp[(1) - (3)])->NAME)->TYPE->Fields)->TYPE,1,LOCAL_VARIABLE);
								(yyval)->Lentry->Next = NULL;
							}
							// cout<<Glookup($1->NAME)->TYPE->Fields->TYPE->NAME<<endl;
							// Flookup($3->NAME,Glookup($1->NAME)->TYPE->Fields);
							// cout<<"TYPE = "<<Flookup($3->NAME,Glookup($1->NAME)->TYPE->Fields)<<" NAME= "<<$3->NAME<<endl;
							
						}
    break;

  case 77:
#line 1067 "interpreter1.y"
    {(yyval)=Make_Node(Tlookup(INTEGER_NAME),TYPE_INT,'T',NULL,NULL,NULL,NULL,NULL); }
    break;

  case 78:
#line 1068 "interpreter1.y"
    {(yyval)=Make_Node(Tlookup(BOOLEAN_NAME),TYPE_BOOLEAN,'T',NULL,NULL,NULL,NULL,NULL);}
    break;

  case 79:
#line 1069 "interpreter1.y"
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
#line 2783 "y.tab.cpp"
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


#line 1079 "interpreter1.y"


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
