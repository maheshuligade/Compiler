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
     ASSIGNMENT = 296
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
#define ASSIGNMENT 296




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
#line 209 "y.tab.cpp"

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
#define YYLAST   332

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  67
/* YYNRULES -- Number of states.  */
#define YYNSTATES  149

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      43,    44,     2,     2,    42,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    47,     2,    48,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    45,     2,    46,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     7,    11,    12,    15,    16,    20,    24,
      26,    28,    33,    37,    39,    41,    42,    45,    46,    56,
      66,    67,    71,    72,    75,    76,    80,    84,    86,    88,
      93,    98,   102,   104,   105,   108,   110,   115,   121,   127,
     136,   147,   156,   160,   164,   168,   172,   176,   180,   184,
     186,   188,   191,   194,   198,   202,   206,   210,   214,   218,
     221,   225,   229,   231,   233,   235,   240,   242
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      50,     0,    -1,    51,    58,    60,    -1,    37,    52,    38,
      -1,    -1,    52,    53,    -1,    -1,    73,    54,     7,    -1,
      54,    42,    55,    -1,    55,    -1,    72,    -1,    12,    43,
      56,    44,    -1,    56,    42,    57,    -1,    57,    -1,    63,
      -1,    -1,    58,    59,    -1,    -1,    73,    12,    43,    56,
      44,    45,    61,    66,    46,    -1,    31,    30,    43,    56,
      44,    45,    61,    66,    46,    -1,    -1,    37,    62,    38,
      -1,    -1,    62,    63,    -1,    -1,    73,    64,     7,    -1,
      64,    42,    65,    -1,    65,    -1,    12,    -1,    12,    47,
      71,    48,    -1,    28,    68,    67,    29,    -1,    33,    71,
       7,    -1,    69,    -1,    -1,    69,    70,    -1,    70,    -1,
      72,    10,    71,     7,    -1,     8,    43,    72,    44,     7,
      -1,     9,    43,    71,    44,     7,    -1,    15,    43,    71,
      44,    16,    68,    18,     7,    -1,    15,    43,    71,    44,
      16,    68,    17,    68,    18,     7,    -1,    19,    43,    71,
      44,    20,    68,    21,     7,    -1,    71,     3,    71,    -1,
      71,     4,    71,    -1,    71,     5,    71,    -1,    71,     6,
      71,    -1,    71,    14,    71,    -1,    71,    13,    71,    -1,
      43,    71,    44,    -1,    11,    -1,    72,    -1,     4,    71,
      -1,     3,    71,    -1,    71,    22,    71,    -1,    71,    23,
      71,    -1,    71,    24,    71,    -1,    71,    25,    71,    -1,
      71,    27,    71,    -1,    71,    26,    71,    -1,    34,    71,
      -1,    71,    35,    71,    -1,    71,    36,    71,    -1,    39,
      -1,    40,    -1,    12,    -1,    12,    47,    71,    48,    -1,
      31,    -1,    32,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    42,    42,    51,    52,    56,    59,    64,    76,    80,
      90,    93,   104,   109,   122,   123,   125,   126,   128,   144,
     172,   176,   182,   188,   195,   198,   220,   226,   233,   245,
     276,   289,   291,   292,   293,   301,   304,   324,   328,   332,
     336,   340,   347,   356,   361,   365,   369,   373,   377,   378,
     379,   380,   384,   388,   392,   396,   400,   404,   408,   412,
     416,   420,   424,   428,   434,   445,   459,   460
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
  "ENDDECL", "TRUE", "FALSE", "ASSIGNMENT", "','", "'('", "')'", "'{'",
  "'}'", "'['", "']'", "$accept", "PROGRAM", "GLOBAL_DEF_BLOCK",
  "GLOBAL_DEF_LISTS", "GLOBAL_DECL", "G_ID_LIST", "G_ID", "ARGS", "ARG",
  "FUNC_DEF_BLOCKS", "FUNC_DEF_BLOCK", "MAIN_BLOCK", "LOCAL_DEF_BLOCK",
  "LOCAL_DEF_LISTS", "LOCAL_DECL", "L_ID_LIST", "L_ID", "BODY",
  "RETURN_TYPE", "Slist", "Stmts", "Stmt", "expr", "IDS", "TYPE", 0
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
     295,   296,    44,    40,    41,   123,   125,    91,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    49,    50,    51,    51,    52,    52,    53,    54,    54,
      55,    55,    56,    56,    57,    57,    58,    58,    59,    60,
      60,    61,    61,    62,    62,    63,    64,    64,    65,    65,
      66,    67,    68,    68,    69,    69,    70,    70,    70,    70,
      70,    70,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    72,    72,    73,    73
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     3,     0,     2,     0,     3,     3,     1,
       1,     4,     3,     1,     1,     0,     2,     0,     9,     9,
       0,     3,     0,     2,     0,     3,     3,     1,     1,     4,
       4,     3,     1,     0,     2,     1,     4,     5,     5,     8,
      10,     8,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     2,     2,     3,     3,     3,     3,     3,     3,     2,
       3,     3,     1,     1,     1,     4,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     6,     0,    17,     0,     1,    20,    66,    67,     3,
       5,     0,    66,    16,     2,     0,    64,     0,     9,    10,
       0,     0,    15,     0,     7,     0,    15,    15,     0,    13,
      14,     0,     0,     0,    49,    64,     0,    62,    63,     0,
       0,    50,     8,     0,     0,    15,    11,    28,     0,    27,
      52,    51,    59,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    65,     0,
       0,    12,     0,    25,     0,    48,    42,    43,    44,    45,
      47,    46,    53,    54,    55,    56,    58,    57,    60,    61,
      22,    22,     0,    26,    24,     0,     0,    29,     0,    33,
       0,     0,    21,    23,     0,     0,     0,     0,     0,    32,
      35,     0,    19,    18,     0,     0,     0,     0,     0,     0,
      34,     0,     0,     0,     0,     0,     0,    30,     0,     0,
       0,     0,     0,    31,    36,    37,    38,    33,    33,     0,
       0,    33,     0,     0,     0,    39,    41,     0,    40
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     4,    10,    17,    18,    28,    29,     6,
      13,    14,    95,    98,    30,    48,    49,   100,   119,   108,
     109,   110,    40,    41,    31
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -121
static const yytype_int16 yypact[] =
{
       9,  -121,     6,  -121,   -16,  -121,   -12,  -121,  -121,  -121,
    -121,    42,    37,  -121,  -121,    69,   -34,     0,  -121,  -121,
      28,    46,    18,    40,  -121,    42,    18,    18,    11,  -121,
    -121,    85,    40,    40,  -121,    62,    40,  -121,  -121,    40,
      34,  -121,  -121,    24,    33,    18,  -121,    70,     3,  -121,
      -2,    -2,  -121,   115,    40,    40,    40,    40,    40,    40,
      40,    40,    40,    40,    40,    40,    40,    40,  -121,    71,
      77,  -121,    40,  -121,    85,  -121,    -2,    -2,    82,    82,
     111,   111,    59,    59,    59,    59,   295,   295,   255,   280,
      94,    94,    88,  -121,  -121,   104,   104,  -121,    68,   313,
      89,   101,  -121,  -121,    90,    91,   105,   106,   119,   313,
    -121,   145,  -121,  -121,   144,    40,    40,    40,    40,   128,
    -121,    40,   114,   140,   165,   190,   215,  -121,   240,   153,
     154,   156,   157,  -121,  -121,  -121,  -121,   313,   313,    87,
     152,   313,   167,   173,   163,  -121,  -121,   175,  -121
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -121,  -121,  -121,  -121,  -121,  -121,   158,    81,   141,  -121,
    -121,  -121,   107,  -121,    99,  -121,   125,   109,  -121,  -120,
    -121,    76,   -31,   -11,    72
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      19,    50,    51,    56,    57,    52,     5,    24,    53,    22,
      73,    58,    59,    23,    19,     7,     8,   139,   140,    12,
       8,   144,     9,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    54,    55,    56,
      57,    92,    25,    32,    33,    74,     1,    58,    59,     7,
       8,    34,    35,    45,    16,    46,    60,    61,    62,    63,
      64,    65,    54,    55,    56,    57,    45,    20,    69,    66,
      67,    26,    58,    59,    36,    45,    11,    70,    15,    37,
      38,    21,    68,    39,   123,   124,   125,   126,   111,    27,
     128,    54,    55,    56,    57,    58,    59,    47,   111,     7,
       8,    58,    59,   122,   141,   142,   102,    43,    44,    23,
      60,    61,    62,    63,    64,    65,    90,    72,    54,    55,
      56,    57,    91,    66,    67,    59,   111,   111,    58,    59,
     111,    94,    99,   114,   115,   112,    97,    60,    61,    62,
      63,    64,    65,    54,    55,    56,    57,   113,   116,   117,
      66,    67,   118,    58,    59,   121,    35,   127,   129,    75,
     135,   136,    60,    61,    62,    63,    64,    65,    54,    55,
      56,    57,   137,   143,   145,    66,    67,   138,    58,    59,
     146,   147,   148,    42,   130,   120,    71,    60,    61,    62,
      63,    64,    65,    54,    55,    56,    57,   103,    96,    93,
      66,    67,     0,    58,    59,   101,     0,     0,     0,   131,
       0,     0,    60,    61,    62,    63,    64,    65,    54,    55,
      56,    57,   133,     0,     0,    66,    67,     0,    58,    59,
       0,     0,     0,     0,   132,     0,     0,    60,    61,    62,
      63,    64,    65,    54,    55,    56,    57,   134,     0,     0,
      66,    67,     0,    58,    59,     0,     0,     0,    54,    55,
      56,    57,    60,    61,    62,    63,    64,    65,    58,    59,
       0,     0,     0,     0,     0,    66,    67,    60,    61,    62,
      63,    64,    65,    54,    55,    56,    57,     0,     0,     0,
       0,    67,     0,    58,    59,     0,     0,     0,    54,    55,
      56,    57,    60,    61,    62,    63,    64,    65,    58,    59,
       0,     0,     0,     0,     0,     0,     0,    60,    61,    62,
      63,   104,   105,     0,     0,    35,     0,     0,   106,     0,
       0,     0,   107
};

static const yytype_int16 yycheck[] =
{
      11,    32,    33,     5,     6,    36,     0,     7,    39,    43,
       7,    13,    14,    47,    25,    31,    32,   137,   138,    31,
      32,   141,    38,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,     3,     4,     5,
       6,    72,    42,     3,     4,    42,    37,    13,    14,    31,
      32,    11,    12,    42,    12,    44,    22,    23,    24,    25,
      26,    27,     3,     4,     5,     6,    42,    30,    44,    35,
      36,    43,    13,    14,    34,    42,     4,    44,     6,    39,
      40,    12,    48,    43,   115,   116,   117,   118,    99,    43,
     121,     3,     4,     5,     6,    13,    14,    12,   109,    31,
      32,    13,    14,   114,    17,    18,    38,    26,    27,    47,
      22,    23,    24,    25,    26,    27,    45,    47,     3,     4,
       5,     6,    45,    35,    36,    14,   137,   138,    13,    14,
     141,    37,    28,    43,    43,    46,    48,    22,    23,    24,
      25,    26,    27,     3,     4,     5,     6,    46,    43,    43,
      35,    36,    33,    13,    14,    10,    12,    29,    44,    44,
       7,     7,    22,    23,    24,    25,    26,    27,     3,     4,
       5,     6,    16,    21,     7,    35,    36,    20,    13,    14,
       7,    18,     7,    25,    44,   109,    45,    22,    23,    24,
      25,    26,    27,     3,     4,     5,     6,    98,    91,    74,
      35,    36,    -1,    13,    14,    96,    -1,    -1,    -1,    44,
      -1,    -1,    22,    23,    24,    25,    26,    27,     3,     4,
       5,     6,     7,    -1,    -1,    35,    36,    -1,    13,    14,
      -1,    -1,    -1,    -1,    44,    -1,    -1,    22,    23,    24,
      25,    26,    27,     3,     4,     5,     6,     7,    -1,    -1,
      35,    36,    -1,    13,    14,    -1,    -1,    -1,     3,     4,
       5,     6,    22,    23,    24,    25,    26,    27,    13,    14,
      -1,    -1,    -1,    -1,    -1,    35,    36,    22,    23,    24,
      25,    26,    27,     3,     4,     5,     6,    -1,    -1,    -1,
      -1,    36,    -1,    13,    14,    -1,    -1,    -1,     3,     4,
       5,     6,    22,    23,    24,    25,    26,    27,    13,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,     8,     9,    -1,    -1,    12,    -1,    -1,    15,    -1,
      -1,    -1,    19
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    37,    50,    51,    52,     0,    58,    31,    32,    38,
      53,    73,    31,    59,    60,    73,    12,    54,    55,    72,
      30,    12,    43,    47,     7,    42,    43,    43,    56,    57,
      63,    73,     3,     4,    11,    12,    34,    39,    40,    43,
      71,    72,    55,    56,    56,    42,    44,    12,    64,    65,
      71,    71,    71,    71,     3,     4,     5,     6,    13,    14,
      22,    23,    24,    25,    26,    27,    35,    36,    48,    44,
      44,    57,    47,     7,    42,    44,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      45,    45,    71,    65,    37,    61,    61,    48,    62,    28,
      66,    66,    38,    63,     8,     9,    15,    19,    68,    69,
      70,    72,    46,    46,    43,    43,    43,    43,    33,    67,
      70,    10,    72,    71,    71,    71,    71,    29,    71,    44,
      44,    44,    44,     7,     7,     7,     7,    16,    20,    68,
      68,    17,    18,    21,    68,     7,     7,    18,     7
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
#line 42 "interpreter1.y"
    {	
														if (no_of_error==0)
														{
															//type_check($3);
															/*evaluate($3);*/
															//codegen($3);
														}
													}
    break;

  case 3:
#line 51 "interpreter1.y"
    {(yyval)=(yyvsp[(2) - (3)]);}
    break;

  case 4:
#line 52 "interpreter1.y"
    {(yyval)=NULL;}
    break;

  case 5:
#line 56 "interpreter1.y"
    {		
													(yyval)=NULL;
												}
    break;

  case 6:
#line 59 "interpreter1.y"
    {	
													(yyval)=NULL;
												}
    break;

  case 7:
#line 64 "interpreter1.y"
    {	
												struct tnode *temp;
												temp=(yyvsp[(2) - (3)]);
												while (temp!=NULL)
												{	
													//cout<<"NAME="<<temp->NAME<<" TYPE="<<$1->type<<endl;
													Ginstall(temp->NAME,(yyvsp[(1) - (3)])->type,evaluate(temp->ptr2),temp->value,temp->Arg_List);
													temp=temp->Arg_List;
												}

											}
    break;

  case 8:
#line 76 "interpreter1.y"
    {	
												(yyval)=(yyvsp[(3) - (3)]);
												(yyval)->Arg_List=(yyvsp[(1) - (3)]);
											}
    break;

  case 9:
#line 80 "interpreter1.y"
    {	
												(yyval)=(yyvsp[(1) - (1)]);
												if ((yyval)==NULL)
												{
													(yyval) = new tnode;
												}
												(yyval)->Arg_List=NULL;
												
											}
    break;

  case 10:
#line 90 "interpreter1.y"
    {
												(yyval)=(yyvsp[(1) - (1)]);
											}
    break;

  case 11:
#line 93 "interpreter1.y"
    {
	 											// $$=$1;
												(yyval)=Make_Node(get_type((yyvsp[(1) - (4)])),Node_Type_ARRAY,'f',(yyvsp[(1) - (4)])->NAME,(yyvsp[(1) - (4)]),makeLeafNode(1),NULL,(yyvsp[(3) - (4)]));
												// $$->Lentry = new Lsymbol;	
											}
    break;

  case 12:
#line 104 "interpreter1.y"
    {
						//$$=$3;
						//$$->Arg_List=$1;
						(yyval)->Lentry = Make_Arg_Node_List((yyvsp[(1) - (3)])->Lentry,(yyvsp[(3) - (3)])->Lentry);
					}
    break;

  case 13:
#line 109 "interpreter1.y"
    {	
						//$$=$1;
						if ((yyval)==NULL)
						{
							(yyval) = new tnode;
						}
						//$$->Arg_List=$1;
						(yyval)->Lentry = Make_Arg_Node_List((yyvsp[(1) - (1)])->Lentry,NULL);
					}
    break;

  case 14:
#line 122 "interpreter1.y"
    {(yyval)->Lentry = (yyvsp[(1) - (1)])->Lentry;}
    break;

  case 15:
#line 123 "interpreter1.y"
    {(yyval)->Lentry = NULL;}
    break;

  case 16:
#line 125 "interpreter1.y"
    {(yyval)=(yyvsp[(1) - (2)]);}
    break;

  case 17:
#line 126 "interpreter1.y"
    {(yyval)=NULL;}
    break;

  case 18:
#line 129 "interpreter1.y"
    {	
												/**
													This makes the funtion node $$->Lentry points to the local symbol table 
													of the respective function.
												**/
												(yyval)=Make_Node((yyvsp[(1) - (9)])->type,Node_Type_FUNCTION_DEF,'f',(yyvsp[(2) - (9)])->NAME,(yyvsp[(8) - (9)]),NULL,NULL,NULL);
												(yyval)->Lentry = Make_Arg_Node_List((yyvsp[(4) - (9)])->Lentry,(yyvsp[(7) - (9)])->Lentry);
												// if ($7!=NULL)
												// {
												// 	$$->Lentry = $7->Lentry; 
												// }

											}
    break;

  case 19:
#line 146 "interpreter1.y"
    {	
												/**
													This makes the funtion node $$->Lentry points to the local symbol table 
													of the respective function.
													for main funtion there is no need to have the definiations in the global
													declaration.for that we need to install main function in the global symbol 
													table.
												**/
												if ((yyvsp[(4) - (9)])->Lentry!=NULL)
												{
													cout<<input_file_name<<":"<<(yyvsp[(4) - (9)])->Lentry->line_no<<":"<<(yyvsp[(4) - (9)])->Lentry->col_no<<":"<<"error:"<<"main funtion can not have any arguments"<<endl;
												}

												(yyval)=(yyvsp[(7) - (9)]);/*evaluate($$);*/
												// $2->NAME="main";
												strcpy((yyvsp[(2) - (9)])->NAME,"main");
												Ginstall((yyvsp[(2) - (9)])->NAME,(yyvsp[(1) - (9)])->type,1,'f',NULL);
												(yyval)=Make_Node(TYPE_INT,Node_Type_FUNCTION_DEF,'f',(yyvsp[(2) - (9)])->NAME,(yyvsp[(8) - (9)]),NULL,NULL,NULL);
												(yyval)->Lentry = Make_Arg_Node_List((yyvsp[(4) - (9)])->Lentry,(yyvsp[(7) - (9)])->Lentry);
												
												// if ($7!=NULL)
												// {
												// 	$$->Lentry = $7->Lentry; 
												// }

											}
    break;

  case 20:
#line 172 "interpreter1.y"
    {
												yyerror("‘main’ funtion is not defined in this scope.");
											}
    break;

  case 21:
#line 176 "interpreter1.y"
    {	
													//$$ = $2;
													(yyval)->Lentry = (yyvsp[(2) - (3)])->Lentry;


												}
    break;

  case 22:
#line 182 "interpreter1.y"
    {	
													(yyval) = NULL;
												}
    break;

  case 23:
#line 188 "interpreter1.y"
    {	
													//$1->Lentry->Next = $2->Lentry;
													//$$ = $1;
													(yyval)->Lentry = Make_Arg_Node_List((yyvsp[(2) - (2)])->Lentry,(yyvsp[(1) - (2)])->Lentry);

												}
    break;

  case 24:
#line 195 "interpreter1.y"
    {(yyval)->Lentry = NULL;}
    break;

  case 25:
#line 198 "interpreter1.y"
    {	
												struct Lsymbol *temp= new Lsymbol;
												temp = (yyvsp[(2) - (3)])->Lentry;
												while (temp!=NULL)
												{
													temp->TYPE=(yyvsp[(1) - (3)])->type;
													// cout<<"evaluate="<<evaluate(temp->ptr2)<<endl;
													//cout<<"Value="<<char(temp->value)<<endl;
													//cout<<"NAME="<<temp->NAME<<endl;
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

  case 26:
#line 220 "interpreter1.y"
    {	
												// $$->Lentry=$3->Lentry;
												// $$->Lentry->Next=$1->Lentry;
												(yyval)->Lentry = Make_Arg_Node_List((yyvsp[(1) - (3)])->Lentry,(yyvsp[(3) - (3)])->Lentry);

											}
    break;

  case 27:
#line 226 "interpreter1.y"
    {	
												// $$->Lentry = $1->Lentry;
												// $$->Lentry->Next = NULL;
												(yyval)->Lentry = Make_Arg_Node_List((yyvsp[(1) - (1)])->Lentry,NULL);
												
											}
    break;

  case 28:
#line 233 "interpreter1.y"
    {
											if (Glookup((yyvsp[(1) - (1)])->NAME)!=NULL)
											{	
												if (Glookup((yyvsp[(1) - (1)])->NAME)->size > 1)
												{
													yyerror(string("‘") + (yyvsp[(1) - (1)])->NAME + "’ was declared as array.");
												}	
											}
											(yyval)=Make_Node(TYPE_VOID,Node_Type_ARRAY,'a',(yyvsp[(1) - (1)])->NAME,(yyvsp[(1) - (1)]),makeLeafNode(1),NULL,NULL);
											(yyval)->Lentry = Make_Arg_Node((yyvsp[(1) - (1)])->NAME,TYPE_VOID,1);
											(yyval)->Lentry->Next = NULL;
										}
    break;

  case 29:
#line 245 "interpreter1.y"
    {
											yyerror("Array" + string(" ‘") + (yyvsp[(1) - (4)])->NAME + "’ should be declared as global.");
											(yyval)=Make_Node(TYPE_VOID,Node_Type_ARRAY,'A',(yyvsp[(1) - (4)])->NAME,(yyvsp[(1) - (4)]),(yyvsp[(3) - (4)]),NULL,NULL);
											(yyval)->Lentry = Make_Arg_Node((yyvsp[(1) - (4)])->NAME,TYPE_VOID,2);
											(yyval)->Lentry->Next = NULL;
										}
    break;

  case 30:
#line 276 "interpreter1.y"
    {
										//$$=$2;
										(yyval)=Make_Node(TYPE_VOID,Node_Type_DUMMY,'D',NULL,NULL,NULL,NULL,NULL);
										(yyval)->ptr1=(yyvsp[(2) - (4)]);
										(yyval)->ptr2=(yyvsp[(3) - (4)]);
										// evaluate($$);
										// 	<<"Memory"<<endl;
										// for (int i = 0; i < 20; i++)
										// {
										// 	cout<<i<<" "<<Memory[i]<<" "<<endl;
										// }
										// exit(0);
									}
    break;

  case 31:
#line 289 "interpreter1.y"
    {(yyval)=Make_Node((yyvsp[(2) - (3)])->type,Node_Type_RETURN,'R',NULL,(yyvsp[(2) - (3)]),NULL,NULL,NULL);}
    break;

  case 32:
#line 291 "interpreter1.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 33:
#line 292 "interpreter1.y"
    {(yyval)=NULL;}
    break;

  case 34:
#line 293 "interpreter1.y"
    {		

							(yyval)=Make_Node(TYPE_VOID,Node_Type_DUMMY,'D',NULL,NULL,NULL,NULL,NULL);
							(yyval)->ptr1=(yyvsp[(1) - (2)]);
							(yyval)->ptr2=(yyvsp[(2) - (2)]);
							

					}
    break;

  case 35:
#line 301 "interpreter1.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 36:
#line 304 "interpreter1.y"
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
									}
    break;

  case 37:
#line 324 "interpreter1.y"
    {
										
										(yyval)=Make_Node(TYPE_VOID,Node_Type_READ,'r',NULL,(yyvsp[(3) - (5)]),NULL,NULL,NULL);
									}
    break;

  case 38:
#line 328 "interpreter1.y"
    {
										
										(yyval)=Make_Node(TYPE_VOID,Node_Type_WRITE,'W',NULL,(yyvsp[(3) - (5)]),NULL,NULL,NULL);
									}
    break;

  case 39:
#line 332 "interpreter1.y"
    {
												
												(yyval)=Make_Node(TYPE_VOID,Node_Type_IF,'i',NULL,(yyvsp[(3) - (8)]),(yyvsp[(6) - (8)]),NULL,NULL);
											}
    break;

  case 40:
#line 336 "interpreter1.y"
    {	
														
														(yyval)=Make_Node(TYPE_VOID,Node_Type_IF,'I',NULL,(yyvsp[(3) - (10)]),(yyvsp[(6) - (10)]),(yyvsp[(8) - (10)]),NULL);
													}
    break;

  case 41:
#line 340 "interpreter1.y"
    {
													
													(yyval)=Make_Node(TYPE_VOID,Node_Type_WHILE,'w',NULL,(yyvsp[(3) - (8)]),(yyvsp[(6) - (8)]),NULL,NULL);
												}
    break;

  case 42:
#line 347 "interpreter1.y"
    {	
							// //if ($1->type==TYPE_VOID)
							// {
							// 	cout<<"Glookup(ptr1->NAME)="<<Glookup($3->NAME)->TYPE<<endl;
							// 	//$$=Make_Node(Glookup($1->NAME)->TYPE,Node_Type_ASSIGNMENT,'=',$1->NAME,$1,$3,NULL,NULL);
							// }
							//cout<<"ptr1->type="<<$1->type<<" ptr2->type="<<$3->type<<endl;
							(yyval)=Make_Node(TYPE_INT,Node_Type_PLUS,'+',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 43:
#line 356 "interpreter1.y"
    {
							
							(yyval)=Make_Node(TYPE_INT,Node_Type_MINUS,'-',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 44:
#line 361 "interpreter1.y"
    {
							
							(yyval)=Make_Node(TYPE_INT,Node_Type_DIV,'/',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 45:
#line 365 "interpreter1.y"
    {
							
							(yyval)=Make_Node(TYPE_INT,Node_Type_MUL,'*',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 46:
#line 369 "interpreter1.y"
    {	
							
							(yyval)=Make_Node(TYPE_INT,Node_Type_POWER,'^',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 47:
#line 373 "interpreter1.y"
    {
							
							(yyval)=Make_Node(TYPE_INT,Node_Type_MODULUS,'%',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 48:
#line 377 "interpreter1.y"
    {(yyval)=(yyvsp[(2) - (3)]);(yyval)->type=(yyvsp[(2) - (3)])->type;}
    break;

  case 49:
#line 378 "interpreter1.y"
    {(yyval)=(yyvsp[(1) - (1)]);(yyval)->type=(yyvsp[(1) - (1)])->type;}
    break;

  case 50:
#line 379 "interpreter1.y"
    {(yyval)=(yyvsp[(1) - (1)]); (yyval)->type=(yyvsp[(1) - (1)])->type;/*cout<<"IDS="<<evaluate($1->ptr2)<<endl;*/}
    break;

  case 51:
#line 380 "interpreter1.y"
    {
							
							(yyval)=Make_Node(TYPE_INT,Node_Type_MINUS,'-',NULL,makeLeafNode(0),(yyvsp[(2) - (2)]),NULL,NULL);
						}
    break;

  case 52:
#line 384 "interpreter1.y"
    {
							
							(yyval)=Make_Node(TYPE_INT,Node_Type_PLUS,'+',NULL,makeLeafNode(0),(yyvsp[(2) - (2)]),NULL,NULL);
						}
    break;

  case 53:
#line 388 "interpreter1.y"
    {
							
							(yyval)=Make_Node(TYPE_BOOLEAN,Node_Type_LT,'<',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 54:
#line 392 "interpreter1.y"
    {
							
							(yyval)=Make_Node(TYPE_BOOLEAN,Node_Type_LE,'L',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 55:
#line 396 "interpreter1.y"
    {
							
							(yyval)=Make_Node(TYPE_BOOLEAN,Node_Type_GT,'>',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 56:
#line 400 "interpreter1.y"
    {
							
							(yyval)=Make_Node(TYPE_BOOLEAN,Node_Type_GE,'G',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 57:
#line 404 "interpreter1.y"
    {
							
							(yyval)=Make_Node(TYPE_BOOLEAN,Node_Type_NE,'N',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 58:
#line 408 "interpreter1.y"
    {
							
							(yyval)=Make_Node(TYPE_BOOLEAN,Node_Type_EQ,'E',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 59:
#line 412 "interpreter1.y"
    {
							
							(yyval)=Make_Node(TYPE_BOOLEAN,Node_Type_NOT,'L',NULL,(yyvsp[(2) - (2)]),NULL,NULL,NULL);
						}
    break;

  case 60:
#line 416 "interpreter1.y"
    {
							
							(yyval)=Make_Node(TYPE_BOOLEAN,Node_Type_OR,'L',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 61:
#line 420 "interpreter1.y"
    {
							
							(yyval)=Make_Node(TYPE_BOOLEAN,Node_Type_AND,'L',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 62:
#line 424 "interpreter1.y"
    {
							(yyval)=Make_Node(TYPE_BOOLEAN,Node_Type_BOOLEAN_CONSTANT,1,NULL,(yyvsp[(1) - (1)]),NULL,NULL,NULL);

						}
    break;

  case 63:
#line 428 "interpreter1.y"
    {
							(yyval)=Make_Node(TYPE_BOOLEAN,Node_Type_BOOLEAN_CONSTANT,0,NULL,(yyvsp[(1) - (1)]),NULL,NULL,NULL);

						}
    break;

  case 64:
#line 434 "interpreter1.y"
    {	
							if (Glookup((yyvsp[(1) - (1)])->NAME)!=NULL)
							{	
								if (Glookup((yyvsp[(1) - (1)])->NAME)->size > 1)
								{
									yyerror(string("‘") + (yyvsp[(1) - (1)])->NAME + "’ was declared as array.");
								}	
							}
							(yyval)=Make_Node(get_type((yyvsp[(1) - (1)])),Node_Type_ARRAY,'a',(yyvsp[(1) - (1)])->NAME,(yyvsp[(1) - (1)]),makeLeafNode(1),NULL,NULL);
							
						}
    break;

  case 65:
#line 445 "interpreter1.y"
    {
							//$$=$1;
							if (Glookup((yyvsp[(1) - (4)])->NAME)!=NULL)
							{	
								if (Glookup((yyvsp[(1) - (4)])->NAME)->value=='a')
								{
									yyerror(string("‘") + (yyvsp[(1) - (4)])->NAME + "’ is not a array.");
								}	
							}
							(yyval)=Make_Node(get_type((yyvsp[(1) - (4)])),Node_Type_ARRAY,'A',(yyvsp[(1) - (4)])->NAME,(yyvsp[(1) - (4)]),(yyvsp[(3) - (4)]),NULL,NULL);
							
						}
    break;

  case 66:
#line 459 "interpreter1.y"
    {(yyval)=Make_Node(TYPE_INT,TYPE_INT,'T',NULL,NULL,NULL,NULL,NULL);}
    break;

  case 67:
#line 460 "interpreter1.y"
    {(yyval)=Make_Node(TYPE_BOOLEAN,TYPE_BOOLEAN,'T',NULL,NULL,NULL,NULL,NULL);}
    break;


/* Line 1267 of yacc.c.  */
#line 2172 "y.tab.cpp"
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


#line 463 "interpreter1.y"


int yyerror(string s)
{
	cout<<input_file_name<<":"<<yylineno<<":"<<column_no<<":"<<"error:"<<s<<endl;
	no_of_error++;
	return 0;
}

int main(int argc,char const *argv[])
{	
	
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
		fprintf(sim_code_file, "START\n");
		//fprintf(sim_code_file, "MOV BP,1535\n");
		//fprintf(sim_code_file, "MOV SP,1535\n");
		yyin=fp;
	}
	
	yyparse();
	fprintf(sim_code_file, "HALT\n");
	fclose(sim_code_file);
	
	if (no_of_error!=0)
	{
		remove(sim_code_filename);
	}
	return 0;
}	
