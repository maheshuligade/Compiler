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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   370

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  81
/* YYNRULES -- Number of states.  */
#define YYNSTATES  178

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
       0,     0,     3,     8,    11,    12,    17,    20,    24,    25,
      28,    30,    34,    38,    40,    42,    47,    51,    53,    54,
      57,    60,    61,    65,    73,    77,    78,    86,    90,    91,
      94,    95,    99,   103,   105,   107,   110,   115,   120,   124,
     126,   127,   130,   132,   137,   143,   149,   158,   169,   178,
     184,   188,   192,   196,   200,   204,   208,   212,   214,   216,
     219,   222,   226,   230,   234,   238,   242,   246,   249,   253,
     257,   259,   261,   266,   270,   272,   273,   275,   280,   284,
     286,   288
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      53,     0,    -1,    54,    57,    64,    67,    -1,    54,    55,
      -1,    -1,    56,    44,    58,    45,    -1,    42,    12,    -1,
      37,    58,    38,    -1,    -1,    58,    59,    -1,    59,    -1,
      82,    60,     7,    -1,    60,    46,    61,    -1,    61,    -1,
      81,    -1,    12,    47,    62,    48,    -1,    62,     7,    63,
      -1,    63,    -1,    -1,    82,    72,    -1,    64,    65,    -1,
      -1,    66,    74,    45,    -1,    82,    12,    47,    62,    48,
      44,    69,    -1,    68,    74,    45,    -1,    -1,    31,    30,
      47,    62,    48,    44,    69,    -1,    37,    70,    38,    -1,
      -1,    70,    71,    -1,    -1,    82,    72,     7,    -1,    72,
      46,    73,    -1,    73,    -1,    12,    -1,    49,    12,    -1,
      12,    50,    79,    51,    -1,    28,    76,    75,    29,    -1,
      33,    79,     7,    -1,    77,    -1,    -1,    77,    78,    -1,
      78,    -1,    81,    10,    79,     7,    -1,     8,    47,    81,
      48,     7,    -1,     9,    47,    79,    48,     7,    -1,    15,
      47,    79,    48,    16,    76,    18,     7,    -1,    15,    47,
      79,    48,    16,    76,    17,    76,    18,     7,    -1,    19,
      47,    79,    48,    20,    76,    21,     7,    -1,    12,    47,
      80,    48,     7,    -1,    79,     3,    79,    -1,    79,     4,
      79,    -1,    79,     5,    79,    -1,    79,     6,    79,    -1,
      79,    14,    79,    -1,    79,    13,    79,    -1,    47,    79,
      48,    -1,    11,    -1,    81,    -1,     4,    79,    -1,     3,
      79,    -1,    79,    22,    79,    -1,    79,    23,    79,    -1,
      79,    24,    79,    -1,    79,    25,    79,    -1,    79,    27,
      79,    -1,    79,    26,    79,    -1,    34,    79,    -1,    79,
      35,    79,    -1,    79,    36,    79,    -1,    39,    -1,    40,
      -1,    12,    47,    80,    48,    -1,    80,    46,    79,    -1,
      79,    -1,    -1,    12,    -1,    12,    50,    79,    51,    -1,
      81,    41,    12,    -1,    31,    -1,    32,    -1,    12,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    44,    44,    78,    79,    81,   149,   151,   183,   187,
     192,   199,   234,   239,   249,   252,   265,   270,   280,   287,
     322,   328,   330,   379,   412,   436,   441,   478,   488,   498,
     507,   520,   543,   549,   556,   568,   580,   611,   625,   644,
     645,   646,   654,   657,   695,   699,   703,   707,   711,   716,
     736,   745,   750,   754,   758,   762,   766,   767,   768,   775,
     779,   783,   787,   791,   795,   799,   803,   807,   811,   815,
     819,   823,   827,   864,   902,   934,  1000,  1012,  1024,  1171,
    1172,  1173
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
  "USER_DEFINED_DATATYPES_LIST", "USER_DEFINED_DATATYPES", "TYPEDEF_ID",
  "GLOBAL_DEF_BLOCK", "GLOBAL_DEF_LISTS", "GLOBAL_DECL", "G_ID_LIST",
  "G_ID", "ARGS", "ARG", "FUNC_DEF_BLOCKS", "FUNC_DEF_BLOCK",
  "FUNC_NAME_ARG_LOCAL", "MAIN_BLOCK", "MAIN_NAME_ARG_LOCAL",
  "LOCAL_DEF_BLOCK", "LOCAL_DEF_LISTS", "LOCAL_DECL", "L_ID_LIST", "L_ID",
  "BODY", "RETURN_TYPE", "Slist", "Stmts", "Stmt", "expr", "ID_LIST",
  "IDS", "TYPE", 0
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
       0,    52,    53,    54,    54,    55,    56,    57,    57,    58,
      58,    59,    60,    60,    61,    61,    62,    62,    62,    63,
      64,    64,    65,    66,    67,    67,    68,    69,    69,    70,
      70,    71,    72,    72,    73,    73,    73,    74,    75,    76,
      76,    77,    77,    78,    78,    78,    78,    78,    78,    78,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    80,    80,    80,    81,    81,    81,    82,
      82,    82
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     2,     0,     4,     2,     3,     0,     2,
       1,     3,     3,     1,     1,     4,     3,     1,     0,     2,
       2,     0,     3,     7,     3,     0,     7,     3,     0,     2,
       0,     3,     3,     1,     1,     2,     4,     4,     3,     1,
       0,     2,     1,     4,     5,     5,     8,    10,     8,     5,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     2,
       2,     3,     3,     3,     3,     3,     3,     2,     3,     3,
       1,     1,     4,     3,     1,     0,     1,     4,     3,     1,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     8,     1,     0,     0,     3,     0,    21,    81,
      79,    80,     0,    10,     0,     6,     0,    25,     7,     9,
      76,     0,    13,    14,     0,    79,    20,     0,     2,     0,
       0,    18,     0,    11,     0,     0,     5,     0,    40,     0,
       0,     0,     0,    17,     0,     0,     0,    57,    76,     0,
      70,    71,     0,     0,    58,    12,    78,    18,     0,     0,
      76,     0,     0,     0,    39,    42,     0,    22,    24,    18,
       0,    15,    34,     0,    19,    33,    60,    59,    75,    67,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    77,     0,     0,     0,    75,
       0,     0,     0,     0,    41,     0,     0,    16,     0,    35,
       0,    74,     0,    56,    50,    51,    52,    53,    55,    54,
      61,    62,    63,    64,    66,    65,    68,    69,     0,    76,
       0,     0,     0,     0,     0,     0,    37,     0,     0,     0,
      32,     0,    72,    28,     0,     0,     0,     0,     0,    38,
      43,    28,    36,    73,    30,    26,    44,    45,    49,    40,
      40,    23,     0,     0,     0,    27,    29,     0,    40,     0,
       0,     0,     0,    46,    48,    31,     0,    47
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     6,     7,     8,    12,    13,    21,    22,
      42,    43,    17,    26,    27,    28,    29,   155,   162,   166,
      74,    75,    39,   103,    63,    64,    65,   111,   112,    54,
      14
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -39
static const yytype_int16 yypact[] =
{
     -39,    23,   113,   -39,    67,    29,   -39,    -9,   -39,   -39,
     -39,   -39,    -5,   -39,    37,   -39,    67,   117,   -39,   -39,
     -18,    -1,   -39,    12,    40,    52,   -39,    72,   -39,    72,
     108,    67,     0,   -39,    37,   109,   -39,    81,   118,    94,
     124,   106,    -2,   -39,   -11,     0,     0,   -39,    54,     0,
     -39,   -39,     0,    83,    12,   -39,   -39,    67,   125,   134,
      85,   137,   140,   152,   118,   -39,    34,   -39,   -39,    67,
      67,   -39,   121,   184,   151,   -39,   177,   177,     0,   -39,
     138,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -39,     3,   186,     0,     0,
       0,     0,     0,   170,   -39,     0,     8,   -39,     0,   -39,
     -11,   280,    90,   -39,   177,   177,    77,    77,   190,   190,
     245,   245,   245,   245,   345,   345,   305,   320,   156,   155,
      32,   153,   122,   189,   204,   240,   -39,   265,   162,    89,
     -39,     0,   -39,   182,   213,   214,   215,   207,   212,   -39,
     -39,   182,   -39,   280,   -39,   -39,   -39,   -39,   -39,   118,
     118,   -39,     5,    -4,   217,   -39,   -39,   -11,   118,   226,
     227,     2,   218,   -39,   -39,   -39,   228,   -39
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -39,   -39,   -39,   -39,   -39,   -39,   225,     6,   -39,   208,
     -38,   185,   -39,   -39,   -39,   -39,   -39,   105,   -39,   -39,
      93,   147,   232,   -39,   -37,   -39,   209,   -24,   175,   -14,
     -15
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      23,    72,    30,    45,    46,    70,    33,     9,    53,   175,
      70,    47,    48,   168,   169,    70,    44,     9,    19,    96,
      23,    76,    77,     3,    66,    79,    10,    11,    80,    31,
      19,   106,    32,    18,    49,    16,    10,    11,    73,    50,
      51,    15,    44,   165,   105,    34,    71,    52,   110,    20,
      66,   128,     9,    35,    44,    44,   138,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,    10,    11,    35,   131,    35,   133,   134,   135,     9,
     144,   137,    37,   130,   139,    36,    81,    82,    83,    84,
      85,    86,    81,    82,    83,    84,    85,    86,    10,    11,
      38,    78,    85,    86,    32,    87,    88,    89,    90,    91,
      92,    87,    88,    89,    90,    91,    92,   153,    93,    94,
      41,    56,   163,   164,    93,    94,    58,    59,    57,     9,
      60,   172,    99,    61,    95,    32,   141,    62,   142,    67,
     152,    81,    82,    83,    84,    66,    66,   167,    25,    11,
       4,    85,    86,    69,    66,     5,    81,    82,    83,    84,
      87,    88,    89,    90,    91,    92,    85,    86,   141,    68,
     146,   108,    97,    93,    94,    87,    88,    89,    90,    91,
      92,    98,    83,    84,   100,   102,   113,   101,    93,    94,
      85,    86,    81,    82,    83,    84,   109,   110,   129,   136,
     143,   145,    85,    86,    86,    32,   151,    81,    82,    83,
      84,    87,    88,    89,    90,    91,    92,    85,    86,   154,
     156,   157,   158,   159,    93,    94,    87,    88,    89,    90,
      91,    92,   160,   173,   174,   177,   176,   147,   170,    93,
      94,    24,    55,    81,    82,    83,    84,   149,    81,    82,
      83,    84,   148,    85,    86,   107,   161,   140,    85,    86,
     171,    40,    87,    88,    89,    90,    91,    92,    81,    82,
      83,    84,   150,   104,   132,    93,    94,     0,    85,    86,
       0,     0,     0,    81,    82,    83,    84,    87,    88,    89,
      90,    91,    92,    85,    86,     0,     0,     0,     0,     0,
      93,    94,    87,    88,    89,    90,    91,    92,    81,    82,
      83,    84,     0,     0,     0,    93,    94,     0,    85,    86,
       0,     0,     0,    81,    82,    83,    84,    87,    88,    89,
      90,    91,    92,    85,    86,     0,     0,     0,     0,     0,
       0,    94,    87,    88,    89,    90,    91,    92,    81,    82,
      83,    84,     0,     0,     0,     0,     0,     0,    85,    86,
       0,     0,     0,     0,     0,     0,     0,    87,    88,    89,
      90
};

static const yytype_int16 yycheck[] =
{
      14,    12,    17,     3,     4,     7,     7,    12,    32,     7,
       7,    11,    12,    17,    18,     7,    31,    12,    12,    57,
      34,    45,    46,     0,    38,    49,    31,    32,    52,    47,
      24,    69,    50,    38,    34,    44,    31,    32,    49,    39,
      40,    12,    57,    38,    10,    46,    48,    47,    46,    12,
      64,    48,    12,    41,    69,    70,    48,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    31,    32,    41,    98,    41,   100,   101,   102,    12,
      48,   105,    30,    97,   108,    45,     3,     4,     5,     6,
      13,    14,     3,     4,     5,     6,    13,    14,    31,    32,
      28,    47,    13,    14,    50,    22,    23,    24,    25,    26,
      27,    22,    23,    24,    25,    26,    27,   141,    35,    36,
      12,    12,   159,   160,    35,    36,     8,     9,    47,    12,
      12,   168,    47,    15,    51,    50,    46,    19,    48,    45,
      51,     3,     4,     5,     6,   159,   160,   162,    31,    32,
      37,    13,    14,    47,   168,    42,     3,     4,     5,     6,
      22,    23,    24,    25,    26,    27,    13,    14,    46,    45,
      48,    50,    47,    35,    36,    22,    23,    24,    25,    26,
      27,    47,     5,     6,    47,    33,    48,    47,    35,    36,
      13,    14,     3,     4,     5,     6,    12,    46,    12,    29,
      44,    48,    13,    14,    14,    50,    44,     3,     4,     5,
       6,    22,    23,    24,    25,    26,    27,    13,    14,    37,
       7,     7,     7,    16,    35,    36,    22,    23,    24,    25,
      26,    27,    20,     7,     7,     7,    18,    48,    21,    35,
      36,    16,    34,     3,     4,     5,     6,     7,     3,     4,
       5,     6,    48,    13,    14,    70,   151,   110,    13,    14,
     167,    29,    22,    23,    24,    25,    26,    27,     3,     4,
       5,     6,     7,    64,    99,    35,    36,    -1,    13,    14,
      -1,    -1,    -1,     3,     4,     5,     6,    22,    23,    24,
      25,    26,    27,    13,    14,    -1,    -1,    -1,    -1,    -1,
      35,    36,    22,    23,    24,    25,    26,    27,     3,     4,
       5,     6,    -1,    -1,    -1,    35,    36,    -1,    13,    14,
      -1,    -1,    -1,     3,     4,     5,     6,    22,    23,    24,
      25,    26,    27,    13,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    36,    22,    23,    24,    25,    26,    27,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    53,    54,     0,    37,    42,    55,    56,    57,    12,
      31,    32,    58,    59,    82,    12,    44,    64,    38,    59,
      12,    60,    61,    81,    58,    31,    65,    66,    67,    68,
      82,    47,    50,     7,    46,    41,    45,    30,    28,    74,
      74,    12,    62,    63,    82,     3,     4,    11,    12,    34,
      39,    40,    47,    79,    81,    61,    12,    47,     8,     9,
      12,    15,    19,    76,    77,    78,    81,    45,    45,    47,
       7,    48,    12,    49,    72,    73,    79,    79,    47,    79,
      79,     3,     4,     5,     6,    13,    14,    22,    23,    24,
      25,    26,    27,    35,    36,    51,    62,    47,    47,    47,
      47,    47,    33,    75,    78,    10,    62,    63,    50,    12,
      46,    79,    80,    48,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    48,    12,
      81,    79,    80,    79,    79,    79,    29,    79,    48,    79,
      73,    46,    48,    44,    48,    48,    48,    48,    48,     7,
       7,    44,    51,    79,    37,    69,     7,     7,     7,    16,
      20,    69,    70,    76,    76,    38,    71,    82,    17,    18,
      21,    72,    76,     7,     7,     7,    18,     7
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
														// cout<<"END"<<endl;
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
#line 78 "interpreter1.y"
    {}
    break;

  case 4:
#line 79 "interpreter1.y"
    {}
    break;

  case 5:
#line 81 "interpreter1.y"
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

  case 6:
#line 149 "interpreter1.y"
    {(yyval) = new  tnode; (yyval) = (yyvsp[(2) - (2)]); Tinstall((yyvsp[(2) - (2)])->NAME,NULL);}
    break;

  case 7:
#line 151 "interpreter1.y"
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
															temp->value = 'u';
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

  case 8:
#line 183 "interpreter1.y"
    {(yyval)=NULL;}
    break;

  case 9:
#line 187 "interpreter1.y"
    {	
													// $$ = $1;
													// $$->Arg_List = $2;
													(yyval) = Make_Arg_Node_List_for_global((yyvsp[(1) - (2)]),(yyvsp[(2) - (2)]),'G');
												}
    break;

  case 10:
#line 192 "interpreter1.y"
    { (yyval) = Make_Arg_Node_List_for_global((yyvsp[(1) - (1)]),NULL,'G');}
    break;

  case 11:
#line 199 "interpreter1.y"
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

  case 12:
#line 234 "interpreter1.y"
    {	
												(yyval)=(yyvsp[(3) - (3)]);
												(yyval)->Arg_List=(yyvsp[(1) - (3)]);

											}
    break;

  case 13:
#line 239 "interpreter1.y"
    {	
												(yyval)=(yyvsp[(1) - (1)]);
												if ((yyval)==NULL)
												{
													(yyval) = new tnode;
												}
												(yyval)->Arg_List=NULL;
												
											}
    break;

  case 14:
#line 249 "interpreter1.y"
    {
												(yyval)=(yyvsp[(1) - (1)]);
											}
    break;

  case 15:
#line 252 "interpreter1.y"
    {
	 											// $$=$1;
												(yyval)=Make_Node(get_type((yyvsp[(1) - (4)])),Node_Type_ARRAY,'f',(yyvsp[(1) - (4)])->NAME,(yyvsp[(1) - (4)]),makeLeafNode(1),NULL,(yyvsp[(3) - (4)]));
												// $$->Lentry = new Lsymbol;	
												(yyval)->Lentry = (yyvsp[(3) - (4)])->Lentry;
												//cout<<"NAME="<<$3->Lentry->NAME<<endl;
											}
    break;

  case 16:
#line 265 "interpreter1.y"
    {
						//$$=$3;
						//$$->Arg_List=$1;
						(yyval)->Lentry = Make_Arg_Node_List((yyvsp[(1) - (3)])->Lentry,(yyvsp[(3) - (3)])->Lentry,'A');
					}
    break;

  case 17:
#line 270 "interpreter1.y"
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

  case 18:
#line 280 "interpreter1.y"
    {	(yyval) = new tnode;	
						(yyval)->Lentry = NULL;
					}
    break;

  case 19:
#line 287 "interpreter1.y"
    {

						struct Lsymbol *temp= new Lsymbol;
						temp = (yyvsp[(2) - (2)])->Lentry;
						while (temp!=NULL)
						{
							temp->TYPE=(yyvsp[(1) - (2)])->type;
							if ((temp->TYPE != Tlookup(INTEGER_NAME)) && (temp->TYPE != Tlookup(BOOLEAN_NAME)))
							{
								temp->value = 'u';
							}
							temp=temp->Next;
						}
						// delete temp;

						(yyval)=(yyvsp[(2) - (2)]);
						(yyval)->Lentry = (yyvsp[(2) - (2)])->Lentry;

					}
    break;

  case 20:
#line 322 "interpreter1.y"
    {
																			//$$=$1;
																			(yyval)=Make_Node(Tlookup(VOID_NAME),Node_Type_DUMMY,'D',NULL,NULL,NULL,NULL,NULL);
																			(yyval)->ptr1=(yyvsp[(1) - (2)]);
																			(yyval)->ptr2=(yyvsp[(2) - (2)]);
																		}
    break;

  case 21:
#line 328 "interpreter1.y"
    {(yyval)=NULL;}
    break;

  case 22:
#line 330 "interpreter1.y"
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

  case 23:
#line 380 "interpreter1.y"
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

  case 24:
#line 413 "interpreter1.y"
    {	
												/**
													This makes the funtion node $$->Lentry points to the local symbol table 
													of the respective function.
													for main funtion there is no need to have the definiations in the global
													declaration.for that we need to install main function in the global symbol 
													table.
												**/
												// cout<<"IN main body"<<endl;
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

  case 25:
#line 436 "interpreter1.y"
    {
												yyerror("‘main’ funtion is not defined in this scope.");
											}
    break;

  case 26:
#line 443 "interpreter1.y"
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
												// cout<<"After main Local"<<endl;
											}
    break;

  case 27:
#line 478 "interpreter1.y"
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

  case 28:
#line 488 "interpreter1.y"
    {	
													// $$ = NULL;
													(yyval) = new tnode;
													(yyval)->Lentry = new Lsymbol;

													(yyval)->Lentry = NULL;
												}
    break;

  case 29:
#line 498 "interpreter1.y"
    {	
													//$1->Lentry->Next = $2->Lentry;
													//$$ = $1;
													(yyval) = new tnode;

													(yyval)->Lentry = Make_Arg_Node_List((yyvsp[(2) - (2)])->Lentry,(yyvsp[(1) - (2)])->Lentry,'V');
													// Glookup(last_function_used_type_check.top())->Arg_List->Lentry->Next = $$->Lentry;
												}
    break;

  case 30:
#line 507 "interpreter1.y"
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

  case 31:
#line 520 "interpreter1.y"
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

  case 32:
#line 543 "interpreter1.y"
    {	
												// $$->Lentry=$3->Lentry;
												// $$->Lentry->Next=$1->Lentry;
												(yyval)->Lentry = Make_Arg_Node_List((yyvsp[(1) - (3)])->Lentry,(yyvsp[(3) - (3)])->Lentry,'V');

											}
    break;

  case 33:
#line 549 "interpreter1.y"
    {	
												// $$->Lentry = $1->Lentry;
												// $$->Lentry->Next = NULL;
												(yyval)->Lentry = Make_Arg_Node_List((yyvsp[(1) - (1)])->Lentry,NULL,'V');
												
											}
    break;

  case 34:
#line 556 "interpreter1.y"
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

  case 35:
#line 568 "interpreter1.y"
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

  case 36:
#line 580 "interpreter1.y"
    {
											yyerror("Array" + string(" ‘") + (yyvsp[(1) - (4)])->NAME + "’ should be declared as global.");
											(yyval)=Make_Node(Tlookup(VOID_NAME),Node_Type_ARRAY,'A',(yyvsp[(1) - (4)])->NAME,(yyvsp[(1) - (4)]),(yyvsp[(3) - (4)]),NULL,NULL);
											(yyval)->Lentry = Make_Arg_Node((yyvsp[(1) - (4)])->NAME,Tlookup(VOID_NAME),2,PASS_BY_VALUE);
											(yyval)->Lentry->Next = NULL;
										}
    break;

  case 37:
#line 611 "interpreter1.y"
    {
										//$$=$2;
										(yyval)=Make_Node(Tlookup(VOID_NAME),Node_Type_DUMMY,'D',NULL,NULL,NULL,NULL,NULL);
										(yyval)->ptr1=(yyvsp[(2) - (4)]);
										(yyval)->ptr2=(yyvsp[(3) - (4)]);
										// evaluate($$);
										// cout<<"In body"<<endl;
										// 	<<"Memory"<<endl;
										// for (int i = 0; i < 20; i++)
										// {
										// 	cout<<i<<" "<<Memory[i]<<" "<<endl;
										// }
										// exit(0);
									}
    break;

  case 38:
#line 625 "interpreter1.y"
    {	
										// cout<<"IN return"<<endl;
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

  case 39:
#line 644 "interpreter1.y"
    {(yyval)=(yyvsp[(1) - (1)]); /*cout<<"IN Slist"<<endl;*/}
    break;

  case 40:
#line 645 "interpreter1.y"
    {(yyval) = new tnode;	(yyval)=NULL;}
    break;

  case 41:
#line 646 "interpreter1.y"
    {		

							(yyval)=Make_Node(Tlookup(VOID_NAME),Node_Type_DUMMY,'D',NULL,NULL,NULL,NULL,NULL);
							(yyval)->ptr1=(yyvsp[(1) - (2)]);
							(yyval)->ptr2=(yyvsp[(2) - (2)]);
							

					}
    break;

  case 42:
#line 654 "interpreter1.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 43:
#line 657 "interpreter1.y"
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

  case 44:
#line 695 "interpreter1.y"
    {
										// cout<<"IN read"<<endl;
										(yyval)=Make_Node(Tlookup(VOID_NAME),Node_Type_READ,'r',NULL,(yyvsp[(3) - (5)]),NULL,NULL,NULL);
									}
    break;

  case 45:
#line 699 "interpreter1.y"
    {	
										// cout<<"In write"<<endl;
										(yyval)=Make_Node(Tlookup(VOID_NAME),Node_Type_WRITE,'W',NULL,(yyvsp[(3) - (5)]),NULL,NULL,NULL);
									}
    break;

  case 46:
#line 703 "interpreter1.y"
    {
												
												(yyval)=Make_Node(Tlookup(VOID_NAME),Node_Type_IF,'i',NULL,(yyvsp[(3) - (8)]),(yyvsp[(6) - (8)]),NULL,NULL);
											}
    break;

  case 47:
#line 707 "interpreter1.y"
    {	
														
														(yyval)=Make_Node(Tlookup(VOID_NAME),Node_Type_IF,'I',NULL,(yyvsp[(3) - (10)]),(yyvsp[(6) - (10)]),(yyvsp[(8) - (10)]),NULL);
													}
    break;

  case 48:
#line 711 "interpreter1.y"
    {
													
													(yyval)=Make_Node(Tlookup(VOID_NAME),Node_Type_WHILE,'w',NULL,(yyvsp[(3) - (8)]),(yyvsp[(6) - (8)]),NULL,NULL);
	
												}
    break;

  case 49:
#line 716 "interpreter1.y"
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

  case 50:
#line 736 "interpreter1.y"
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

  case 51:
#line 745 "interpreter1.y"
    {
							
							(yyval)=Make_Node(Tlookup(INTEGER_NAME),Node_Type_MINUS,'-',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 52:
#line 750 "interpreter1.y"
    {
							
							(yyval)=Make_Node(Tlookup(INTEGER_NAME),Node_Type_DIV,'/',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 53:
#line 754 "interpreter1.y"
    {
							
							(yyval)=Make_Node(Tlookup(INTEGER_NAME),Node_Type_MUL,'*',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 54:
#line 758 "interpreter1.y"
    {	
							
							(yyval)=Make_Node(Tlookup(INTEGER_NAME),Node_Type_POWER,'^',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 55:
#line 762 "interpreter1.y"
    {
							
							(yyval)=Make_Node(Tlookup(INTEGER_NAME),Node_Type_MODULUS,'%',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 56:
#line 766 "interpreter1.y"
    {(yyval)=(yyvsp[(2) - (3)]);(yyval)->type=(yyvsp[(2) - (3)])->type;}
    break;

  case 57:
#line 767 "interpreter1.y"
    {/*cout<<"IN NUM"<<endl;*/(yyval)=(yyvsp[(1) - (1)]);(yyval)->type=(yyvsp[(1) - (1)])->type;}
    break;

  case 58:
#line 768 "interpreter1.y"
    {
							(yyval)=(yyvsp[(1) - (1)]); (yyval)->type=(yyvsp[(1) - (1)])->type; /*cout<<"IDS="<<evaluate($1->ptr2)<<endl;*/
							if (((yyvsp[(1) - (1)])->type != Tlookup(INTEGER_NAME)) && ((yyvsp[(1) - (1)])->type != Tlookup(BOOLEAN_NAME)))
							{
								(yyvsp[(1) - (1)])->value = 'u';
							}
						}
    break;

  case 59:
#line 775 "interpreter1.y"
    {
							
							(yyval)=Make_Node(Tlookup(INTEGER_NAME),Node_Type_MINUS,'-',NULL,makeLeafNode(0),(yyvsp[(2) - (2)]),NULL,NULL);
						}
    break;

  case 60:
#line 779 "interpreter1.y"
    {
							
							(yyval)=Make_Node(Tlookup(INTEGER_NAME),Node_Type_PLUS,'+',NULL,makeLeafNode(0),(yyvsp[(2) - (2)]),NULL,NULL);
						}
    break;

  case 61:
#line 783 "interpreter1.y"
    {
							
							(yyval)=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_LT,'<',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 62:
#line 787 "interpreter1.y"
    {
							
							(yyval)=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_LE,'L',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 63:
#line 791 "interpreter1.y"
    {
							
							(yyval)=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_GT,'>',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 64:
#line 795 "interpreter1.y"
    {
							
							(yyval)=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_GE,'G',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 65:
#line 799 "interpreter1.y"
    {
							
							(yyval)=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_NE,'N',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 66:
#line 803 "interpreter1.y"
    {
							
							(yyval)=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_EQ,'E',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 67:
#line 807 "interpreter1.y"
    {
							
							(yyval)=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_NOT,'L',NULL,(yyvsp[(2) - (2)]),NULL,NULL,NULL);
						}
    break;

  case 68:
#line 811 "interpreter1.y"
    {
							
							(yyval)=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_OR,'L',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 69:
#line 815 "interpreter1.y"
    {
							
							(yyval)=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_AND,'L',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 70:
#line 819 "interpreter1.y"
    {
							(yyval)=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_BOOLEAN_CONSTANT,1,NULL,(yyvsp[(1) - (1)]),NULL,NULL,NULL);

						}
    break;

  case 71:
#line 823 "interpreter1.y"
    {
							(yyval)=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_BOOLEAN_CONSTANT,0,NULL,(yyvsp[(1) - (1)]),NULL,NULL,NULL);

						}
    break;

  case 72:
#line 827 "interpreter1.y"
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

  case 73:
#line 864 "interpreter1.y"
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

  case 74:
#line 902 "interpreter1.y"
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

  case 75:
#line 934 "interpreter1.y"
    {	
								(yyval) = new tnode;
								(yyval)->Arg_List = new tnode;
								// $$->Lentry = NULL;
								(yyval) = NULL;
							}
    break;

  case 76:
#line 1000 "interpreter1.y"
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

  case 77:
#line 1012 "interpreter1.y"
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

  case 78:
#line 1024 "interpreter1.y"
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
									struct Typetable *temp = new Typetable;
									temp = lookup_variable(last_function_used_type_check.top(),(yyvsp[(1) - (3)])->NAME)->TYPE;
									// cout<<temp->NAME<<endl;
									struct Fieldlist *temp_2 = new Fieldlist;
									temp_2 = (yyvsp[(1) - (3)])->Fields;

									if ((yyvsp[(1) - (3)])->Fields == NULL)
									{
										(yyvsp[(1) - (3)])->Fields = new Fieldlist;
										// $1->Fields = Flookup($3->NAME,temp->Fields);
										// $1->Fields->Next = NULL;
										(yyvsp[(1) - (3)])->Fields->NAME = (char *)malloc(20*sizeof(char));
										// cout<<$1->Fields->NAME<<endl;
										strcpy((yyvsp[(1) - (3)])->Fields->NAME,(yyvsp[(3) - (3)])->NAME);
										(yyvsp[(1) - (3)])->Fields->TYPE = new Typetable;
										(yyvsp[(1) - (3)])->Fields->TYPE = Flookup((yyvsp[(3) - (3)])->NAME,temp->Fields)->TYPE;
										// cout<< "        "<<$1->Fields->NAME<<endl;
										(yyvsp[(1) - (3)])->Fields->Next = NULL;
										// $1->Fields->Next = new Fieldlist;
										// $1->Fields->Next = $3->Fields;
									}
									else
									{

										cout<<"in list"<<endl;
									
										while (temp_2 != NULL)
										{
											cout<<"         "<<temp_2->NAME<<endl;
											temp_2 = temp_2->Next;
										}
										temp_2 = new Fieldlist;
										temp_2->NAME =  (char *)malloc(20*sizeof(char));
										strcpy(temp_2->NAME,(yyvsp[(3) - (3)])->NAME);
										temp_2->TYPE = new Typetable;
										temp_2->TYPE = Flookup((yyvsp[(3) - (3)])->NAME,temp->Fields)->TYPE;
										// temp_2->Next = new Fieldlist;
										// temp_2->Next = $3->Fields;
										// temp_2 = Flookup($3->NAME,temp->Fields);
										// temp_2->Next = NULL;
										// cout<<$3->NAME<<endl;

										// temp_2->Next = new Fieldlist;
										// temp_2->Next->NAME =  (char *)malloc(20*sizeof(char));
										// strcpy(temp_2->Next->NAME,$3->NAME);
										// temp_2->Next->TYPE = new Typetable;
										// temp_2->Next->TYPE = Flookup($3->NAME,temp->Fields)->TYPE;

										(yyvsp[(1) - (3)])->Fields->Next = new Fieldlist;
										(yyvsp[(1) - (3)])->Fields->Next->NAME =  (char *)malloc(20*sizeof(char));
										strcpy( (yyvsp[(1) - (3)])->Fields->Next->NAME,(yyvsp[(3) - (3)])->NAME);
										(yyvsp[(1) - (3)])->Fields->Next->TYPE = new Typetable;
										(yyvsp[(1) - (3)])->Fields->Next->TYPE = Flookup((yyvsp[(3) - (3)])->NAME,temp->Fields)->TYPE;
									}
									// cout<<"             "<<temp<<endl;

									// $$->Fields = new Fieldlist;
									
									// $$->Fields = $1->Fields;
									(yyval)=Make_Node(Flookup((yyvsp[(3) - (3)])->NAME,temp->Fields)->TYPE,Node_Type_ARRAY,'u',(yyvsp[(1) - (3)])->NAME,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
									// $$->Fields = new Fieldlist;
									// $$->Fields = Flookup($3->NAME,temp->Fields);
									// $$->Fields->Next = new Fieldlist;
									// if ($1->Fields == NULL)
									// {
									// 	cout<<"                                     NULL"<<endl;
									// }
									
									(yyval)->Fields = new Fieldlist;
									(yyval)->Fields = (yyvsp[(1) - (3)])->Fields;
									(yyval)->Lentry = Make_Arg_Node((yyvsp[(1) - (3)])->NAME,Flookup((yyvsp[(3) - (3)])->NAME,temp->Fields)->TYPE,1,LOCAL_VARIABLE);
									(yyval)->Lentry->Next = NULL;



									// cout<<"\nbefore"<<endl;
									// cout<<$1->NAME<<"."<<$3->NAME<<endl;
									// temp_2 = $1->Fields;
									// while (temp_2 != NULL)
									// {
									// 	cout<<"         "<<temp_2->NAME<<endl;
									// 	temp_2 = temp_2->Next;
									// }
									// cout<<"after\n"<<endl;
							}
							// cout<<Glookup($1->NAME)->TYPE->Fields->TYPE->NAME<<endl;
							// Flookup($3->NAME,Glookup($1->NAME)->TYPE->Fields);
							// cout<<"TYPE = "<<Flookup($3->NAME,Glookup($1->NAME)->TYPE->Fields)<<" NAME= "<<$3->NAME<<endl;
							
						}
    break;

  case 79:
#line 1171 "interpreter1.y"
    {(yyval)=Make_Node(Tlookup(INTEGER_NAME),TYPE_INT,'T',NULL,NULL,NULL,NULL,NULL); }
    break;

  case 80:
#line 1172 "interpreter1.y"
    {(yyval)=Make_Node(Tlookup(BOOLEAN_NAME),TYPE_BOOLEAN,'T',NULL,NULL,NULL,NULL,NULL);}
    break;

  case 81:
#line 1173 "interpreter1.y"
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
#line 2898 "y.tab.cpp"
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


#line 1183 "interpreter1.y"


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
	
	Glookup(FREE)->Arg_List = new tnode;
	Glookup(FREE)->Arg_List->Lentry = new Lsymbol;

	Glookup(FREE)->Arg_List->Lentry->NAME = (char *)malloc(20*sizeof(char));
	strcpy(Glookup(FREE)->Arg_List->Lentry->NAME,"A");
	Glookup(FREE)->Arg_List->Lentry->TYPE = Tlookup(INTEGER_NAME);
	Glookup(FREE)->Arg_List->Lentry->pass_by_type = PASS_BY_VALUE;
	// cout<<Glookup(FREE)->Arg_List<<endl;
	// /Ginstall($2->NAME,$2->type,size,'U',$4);
	// Tlookup(INTEGER_NAME);
	// cout<<"IN"<<endl;
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
