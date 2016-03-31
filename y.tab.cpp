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
#define YYLAST   309

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  61
/* YYNRULES -- Number of states.  */
#define YYNSTATES  139

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
      26,    28,    31,    32,    41,    50,    54,    55,    58,    59,
      63,    67,    69,    71,    76,    81,    85,    87,    88,    91,
      93,    98,   104,   110,   119,   130,   139,   143,   147,   151,
     155,   159,   163,   167,   169,   171,   174,   177,   181,   185,
     189,   193,   197,   201,   204,   208,   212,   214,   216,   218,
     223,   225
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      50,     0,    -1,    51,    56,    58,    -1,    37,    52,    38,
      -1,    -1,    52,    53,    -1,    -1,    71,    54,     7,    -1,
      54,    42,    55,    -1,    55,    -1,    70,    -1,    56,    57,
      -1,    -1,    71,    12,    43,    44,    45,    59,    64,    46,
      -1,    31,    30,    43,    44,    45,    59,    64,    46,    -1,
      37,    60,    38,    -1,    -1,    60,    61,    -1,    -1,    71,
      62,     7,    -1,    62,    42,    63,    -1,    63,    -1,    12,
      -1,    12,    47,    69,    48,    -1,    28,    66,    65,    29,
      -1,    33,    69,     7,    -1,    67,    -1,    -1,    67,    68,
      -1,    68,    -1,    70,    10,    69,     7,    -1,     8,    43,
      70,    44,     7,    -1,     9,    43,    69,    44,     7,    -1,
      15,    43,    69,    44,    16,    66,    18,     7,    -1,    15,
      43,    69,    44,    16,    66,    17,    66,    18,     7,    -1,
      19,    43,    69,    44,    20,    66,    21,     7,    -1,    69,
       3,    69,    -1,    69,     4,    69,    -1,    69,     5,    69,
      -1,    69,     6,    69,    -1,    69,    14,    69,    -1,    69,
      13,    69,    -1,    43,    69,    44,    -1,    11,    -1,    70,
      -1,     4,    69,    -1,     3,    69,    -1,    69,    22,    69,
      -1,    69,    23,    69,    -1,    69,    24,    69,    -1,    69,
      25,    69,    -1,    69,    27,    69,    -1,    69,    26,    69,
      -1,    34,    69,    -1,    69,    35,    69,    -1,    69,    36,
      69,    -1,    39,    -1,    40,    -1,    12,    -1,    12,    47,
      69,    48,    -1,    31,    -1,    32,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    42,    42,    51,    52,    56,    59,    64,    75,    79,
      85,   108,   109,   111,   117,   127,   128,   132,   135,   138,
     159,   163,   169,   179,   208,   221,   223,   224,   225,   233,
     236,   256,   260,   264,   268,   272,   279,   288,   293,   297,
     301,   305,   309,   310,   311,   312,   316,   320,   324,   328,
     332,   336,   340,   344,   348,   352,   356,   360,   366,   377,
     391,   392
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
  "GLOBAL_DEF_LISTS", "GLOBAL_DECL", "G_ID_LIST", "G_ID",
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
      55,    56,    56,    57,    58,    59,    59,    60,    60,    61,
      62,    62,    63,    63,    64,    65,    66,    66,    67,    67,
      68,    68,    68,    68,    68,    68,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    70,    70,
      71,    71
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     3,     0,     2,     0,     3,     3,     1,
       1,     2,     0,     8,     8,     3,     0,     2,     0,     3,
       3,     1,     1,     4,     4,     3,     1,     0,     2,     1,
       4,     5,     5,     8,    10,     8,     3,     3,     3,     3,
       3,     3,     3,     1,     1,     2,     2,     3,     3,     3,
       3,     3,     3,     2,     3,     3,     1,     1,     1,     4,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     6,     0,    12,     0,     1,     0,    60,    61,     3,
       5,     0,    60,    11,     2,     0,    58,     0,     9,    10,
       0,     0,     0,     7,     0,     0,     0,     0,     0,    43,
       0,    56,    57,     0,     0,    44,     8,     0,     0,    46,
      45,    53,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    59,    16,    16,
      42,    36,    37,    38,    39,    41,    40,    47,    48,    49,
      50,    52,    51,    54,    55,    18,     0,     0,     0,    27,
       0,     0,    15,    17,     0,     0,     0,     0,     0,     0,
      26,    29,     0,    14,    13,    22,     0,    21,     0,     0,
       0,     0,     0,     0,    28,     0,     0,    19,     0,     0,
       0,     0,     0,     0,    24,     0,     0,    20,     0,     0,
       0,     0,    25,    30,    23,    31,    32,    27,    27,     0,
       0,    27,     0,     0,     0,    33,    35,     0,    34
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     4,    10,    17,    18,     6,    13,    14,
      76,    78,    83,    96,    97,    80,   103,    89,    90,    91,
      34,    35,    11
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -81
static const yytype_int16 yypact[] =
{
     -33,   -81,     9,   -81,    63,   -81,   -15,   -81,   -81,   -81,
     -81,     0,     2,   -81,   -81,    55,    17,     3,   -81,   -81,
      39,    40,   170,   -81,     0,    41,    42,   170,   170,   -81,
     170,   -81,   -81,   170,    30,   -81,   -81,    43,    48,     1,
       1,   -81,    86,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   -81,    61,    61,
     -81,     1,     1,    24,    24,    88,    88,   180,   180,   180,
     180,   272,   272,   232,   257,   -81,    90,    90,    65,   290,
      73,    83,   -81,   -81,   123,    95,    96,    97,   100,   111,
     290,   -81,   148,   -81,   -81,   112,     4,   -81,     0,   170,
     170,   170,   170,   131,   -81,   170,   170,   -81,   123,   117,
     101,   128,   143,   192,   -81,   217,    36,   -81,   155,   164,
     159,   156,   -81,   -81,   -81,   -81,   -81,   290,   290,    52,
     167,   290,   173,   182,   172,   -81,   -81,   184,   -81
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -81,   -81,   -81,   -81,   -81,   -81,   153,   -81,   -81,   -81,
     133,   -81,   -81,   -81,    92,   124,   -81,   -80,   -81,   113,
     -25,   -11,    -5
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      19,    15,    39,    40,     1,    41,    45,    46,    42,     5,
      23,   107,    16,    19,    47,    48,    12,     8,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    20,    43,    44,    45,    46,    47,    48,    43,
      44,    45,    46,    47,    48,    24,   108,   129,   130,    47,
      48,   134,    49,    50,    51,    52,    53,    54,    49,    50,
      51,    52,    53,    54,    22,    55,    56,    21,    92,   131,
     132,    55,    56,    84,   110,   111,   112,   113,    57,    92,
     115,   116,    25,    26,   124,    37,    38,   109,    58,    43,
      44,    45,    46,    59,     7,     8,     7,     8,    75,    47,
      48,     9,    48,    82,    43,    44,    45,    46,    49,    50,
      51,    52,    53,    54,    47,    48,    92,    92,    79,    93,
      92,    55,    56,    49,    50,    51,    52,    53,    54,    94,
      60,    43,    44,    45,    46,    95,    55,    56,    98,    99,
     100,    47,    48,   101,   102,   119,    43,    44,    45,    46,
      49,    50,    51,    52,    53,    54,    47,    48,   105,   106,
     114,   118,   125,    55,    56,    49,    50,    51,    52,    53,
      54,   126,   120,    27,    28,   127,   128,    36,    55,    56,
     135,    29,    16,    43,    44,    45,    46,   121,   133,   136,
     137,   138,    77,    47,    48,    43,    44,    45,    46,   122,
     117,    81,     0,   104,    30,    47,    48,     0,     0,    31,
      32,     0,     0,    33,    49,    50,    51,    52,    53,    54,
      43,    44,    45,    46,   123,     0,     0,    55,    56,     0,
      47,    48,     0,     0,     0,    43,    44,    45,    46,    49,
      50,    51,    52,    53,    54,    47,    48,     0,     0,     0,
       0,     0,    55,    56,    49,    50,    51,    52,    53,    54,
      43,    44,    45,    46,     0,     0,     0,     0,    56,     0,
      47,    48,     0,     0,     0,    43,    44,    45,    46,    49,
      50,    51,    52,    53,    54,    47,    48,     0,     0,     0,
       0,     0,     0,     0,    49,    50,    51,    52,    85,    86,
       0,     0,    16,     0,     0,    87,     0,     0,     0,    88
};

static const yytype_int16 yycheck[] =
{
      11,     6,    27,    28,    37,    30,     5,     6,    33,     0,
       7,     7,    12,    24,    13,    14,    31,    32,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    30,     3,     4,     5,     6,    13,    14,     3,
       4,     5,     6,    13,    14,    42,    42,   127,   128,    13,
      14,   131,    22,    23,    24,    25,    26,    27,    22,    23,
      24,    25,    26,    27,    47,    35,    36,    12,    79,    17,
      18,    35,    36,    78,    99,   100,   101,   102,    48,    90,
     105,   106,    43,    43,    48,    44,    44,    98,    45,     3,
       4,     5,     6,    45,    31,    32,    31,    32,    37,    13,
      14,    38,    14,    38,     3,     4,     5,     6,    22,    23,
      24,    25,    26,    27,    13,    14,   127,   128,    28,    46,
     131,    35,    36,    22,    23,    24,    25,    26,    27,    46,
      44,     3,     4,     5,     6,    12,    35,    36,    43,    43,
      43,    13,    14,    43,    33,    44,     3,     4,     5,     6,
      22,    23,    24,    25,    26,    27,    13,    14,    10,    47,
      29,    44,     7,    35,    36,    22,    23,    24,    25,    26,
      27,     7,    44,     3,     4,    16,    20,    24,    35,    36,
       7,    11,    12,     3,     4,     5,     6,    44,    21,     7,
      18,     7,    59,    13,    14,     3,     4,     5,     6,     7,
     108,    77,    -1,    90,    34,    13,    14,    -1,    -1,    39,
      40,    -1,    -1,    43,    22,    23,    24,    25,    26,    27,
       3,     4,     5,     6,     7,    -1,    -1,    35,    36,    -1,
      13,    14,    -1,    -1,    -1,     3,     4,     5,     6,    22,
      23,    24,    25,    26,    27,    13,    14,    -1,    -1,    -1,
      -1,    -1,    35,    36,    22,    23,    24,    25,    26,    27,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    36,    -1,
      13,    14,    -1,    -1,    -1,     3,     4,     5,     6,    22,
      23,    24,    25,    26,    27,    13,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,     8,     9,
      -1,    -1,    12,    -1,    -1,    15,    -1,    -1,    -1,    19
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    37,    50,    51,    52,     0,    56,    31,    32,    38,
      53,    71,    31,    57,    58,    71,    12,    54,    55,    70,
      30,    12,    47,     7,    42,    43,    43,     3,     4,    11,
      34,    39,    40,    43,    69,    70,    55,    44,    44,    69,
      69,    69,    69,     3,     4,     5,     6,    13,    14,    22,
      23,    24,    25,    26,    27,    35,    36,    48,    45,    45,
      44,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    37,    59,    59,    60,    28,
      64,    64,    38,    61,    71,     8,     9,    15,    19,    66,
      67,    68,    70,    46,    46,    12,    62,    63,    43,    43,
      43,    43,    33,    65,    68,    10,    47,     7,    42,    70,
      69,    69,    69,    69,    29,    69,    69,    63,    44,    44,
      44,    44,     7,     7,    48,     7,     7,    16,    20,    66,
      66,    17,    18,    21,    66,     7,     7,    18,     7
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
															type_check((yyvsp[(3) - (3)]));
															/*evaluate($3);*/
															codegen((yyvsp[(3) - (3)]));
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
													Ginstall(temp->NAME,(yyvsp[(1) - (3)])->type,evaluate(temp->ptr2),temp->value,NULL);
													temp=temp->Arg_List;
												}

											}
    break;

  case 8:
#line 75 "interpreter1.y"
    {	
												(yyval)=(yyvsp[(3) - (3)]);
												(yyval)->Arg_List=(yyvsp[(1) - (3)]);
											}
    break;

  case 9:
#line 79 "interpreter1.y"
    {	
												(yyval)=(yyvsp[(1) - (1)]);
												(yyval)->Arg_List=NULL;
												
											}
    break;

  case 10:
#line 85 "interpreter1.y"
    {
												(yyval)=(yyvsp[(1) - (1)]);
											}
    break;

  case 11:
#line 108 "interpreter1.y"
    {(yyval)=NULL;}
    break;

  case 12:
#line 109 "interpreter1.y"
    {(yyval)=NULL;}
    break;

  case 13:
#line 112 "interpreter1.y"
    {
												(yyval)=Make_Node((yyvsp[(1) - (8)])->type,Node_Type_FUNCTION,'f',(yyvsp[(2) - (8)])->NAME,(yyvsp[(7) - (8)]),NULL,NULL,NULL);
											}
    break;

  case 14:
#line 119 "interpreter1.y"
    {
													(yyval)=(yyvsp[(7) - (8)]);/*evaluate($$);*/
													// $2->NAME="main";
													//cout<<"NAME="<<$2->NAME<<endl;
													//cout<<"RETURN_TYPE="<<($7->ptr2->type)<<endl;
													//$$=Make_Node(TYPE_INT,Node_Type_FUNCTION,'f',$2->NAME,$7,NULL,NULL,NULL);
												}
    break;

  case 15:
#line 127 "interpreter1.y"
    {(yyval)=(yyvsp[(2) - (3)]);}
    break;

  case 16:
#line 128 "interpreter1.y"
    {(yyval)=NULL;}
    break;

  case 17:
#line 132 "interpreter1.y"
    {		
													(yyval)=NULL;
												}
    break;

  case 18:
#line 135 "interpreter1.y"
    {(yyval)=NULL;}
    break;

  case 19:
#line 138 "interpreter1.y"
    {	
												struct tnode *temp= new tnode;
												temp=(yyvsp[(2) - (3)]);
												while (temp!=NULL)
												{
													// cout<<"evaluate="<<evaluate(temp->ptr2)<<endl;
													//cout<<"Value="<<char(temp->value)<<endl;
													//cout<<"NAME="<<temp->NAME<<endl;
													//Ginstall(temp->NAME,$1->type,evaluate(temp->ptr2),temp->value,NULL);
													//if (temp->value!='A')
													{
														Linstall(temp->NAME,(yyvsp[(1) - (3)])->type);
													}
													
													temp=temp->Arg_List;
												}

												delete temp;

											}
    break;

  case 20:
#line 159 "interpreter1.y"
    {	
												(yyval)=(yyvsp[(3) - (3)]);
												(yyval)->Arg_List=(yyvsp[(1) - (3)]);
											}
    break;

  case 21:
#line 163 "interpreter1.y"
    {	
												(yyval)=(yyvsp[(1) - (1)]);
												(yyval)->Arg_List=NULL;
												
											}
    break;

  case 22:
#line 169 "interpreter1.y"
    {
											if (Glookup((yyvsp[(1) - (1)])->NAME)!=NULL)
											{	
												if (Glookup((yyvsp[(1) - (1)])->NAME)->size > 1)
												{
													yyerror(string("‘") + (yyvsp[(1) - (1)])->NAME + "’ was declared as array.");
												}	
											}
											(yyval)=Make_Node(TYPE_VOID,Node_Type_ARRAY,'a',(yyvsp[(1) - (1)])->NAME,(yyvsp[(1) - (1)]),makeLeafNode(1),NULL,NULL);
										}
    break;

  case 23:
#line 179 "interpreter1.y"
    {
											yyerror("Array" + string(" ‘") + (yyvsp[(1) - (4)])->NAME + "’ should be declared as global.");
											(yyval)=Make_Node(TYPE_VOID,Node_Type_ARRAY,'A',(yyvsp[(1) - (4)])->NAME,(yyvsp[(1) - (4)]),(yyvsp[(3) - (4)]),NULL,NULL);
										}
    break;

  case 24:
#line 208 "interpreter1.y"
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

  case 25:
#line 221 "interpreter1.y"
    {(yyval)=Make_Node((yyvsp[(2) - (3)])->type,Node_Type_RETURN,'R',NULL,(yyvsp[(2) - (3)]),NULL,NULL,NULL);}
    break;

  case 26:
#line 223 "interpreter1.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 27:
#line 224 "interpreter1.y"
    {(yyval)=NULL;}
    break;

  case 28:
#line 225 "interpreter1.y"
    {		

							(yyval)=Make_Node(TYPE_VOID,Node_Type_DUMMY,'D',NULL,NULL,NULL,NULL,NULL);
							(yyval)->ptr1=(yyvsp[(1) - (2)]);
							(yyval)->ptr2=(yyvsp[(2) - (2)]);
							

					}
    break;

  case 29:
#line 233 "interpreter1.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 30:
#line 236 "interpreter1.y"
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

  case 31:
#line 256 "interpreter1.y"
    {
										
										(yyval)=Make_Node(TYPE_VOID,Node_Type_READ,'r',NULL,(yyvsp[(3) - (5)]),NULL,NULL,NULL);
									}
    break;

  case 32:
#line 260 "interpreter1.y"
    {
										
										(yyval)=Make_Node(TYPE_VOID,Node_Type_WRITE,'W',NULL,(yyvsp[(3) - (5)]),NULL,NULL,NULL);
									}
    break;

  case 33:
#line 264 "interpreter1.y"
    {
												
												(yyval)=Make_Node(TYPE_VOID,Node_Type_IF,'i',NULL,(yyvsp[(3) - (8)]),(yyvsp[(6) - (8)]),NULL,NULL);
											}
    break;

  case 34:
#line 268 "interpreter1.y"
    {	
														
														(yyval)=Make_Node(TYPE_VOID,Node_Type_IF,'I',NULL,(yyvsp[(3) - (10)]),(yyvsp[(6) - (10)]),(yyvsp[(8) - (10)]),NULL);
													}
    break;

  case 35:
#line 272 "interpreter1.y"
    {
													
													(yyval)=Make_Node(TYPE_VOID,Node_Type_WHILE,'w',NULL,(yyvsp[(3) - (8)]),(yyvsp[(6) - (8)]),NULL,NULL);
												}
    break;

  case 36:
#line 279 "interpreter1.y"
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

  case 37:
#line 288 "interpreter1.y"
    {
							
							(yyval)=Make_Node(TYPE_INT,Node_Type_MINUS,'-',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 38:
#line 293 "interpreter1.y"
    {
							
							(yyval)=Make_Node(TYPE_INT,Node_Type_DIV,'/',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 39:
#line 297 "interpreter1.y"
    {
							
							(yyval)=Make_Node(TYPE_INT,Node_Type_MUL,'*',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 40:
#line 301 "interpreter1.y"
    {	
							
							(yyval)=Make_Node(TYPE_INT,Node_Type_POWER,'^',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 41:
#line 305 "interpreter1.y"
    {
							
							(yyval)=Make_Node(TYPE_INT,Node_Type_MODULUS,'%',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 42:
#line 309 "interpreter1.y"
    {(yyval)=(yyvsp[(2) - (3)]);(yyval)->type=(yyvsp[(2) - (3)])->type;}
    break;

  case 43:
#line 310 "interpreter1.y"
    {(yyval)=(yyvsp[(1) - (1)]);(yyval)->type=(yyvsp[(1) - (1)])->type;}
    break;

  case 44:
#line 311 "interpreter1.y"
    {(yyval)=(yyvsp[(1) - (1)]); (yyval)->type=(yyvsp[(1) - (1)])->type;/*cout<<"IDS="<<evaluate($1->ptr2)<<endl;*/}
    break;

  case 45:
#line 312 "interpreter1.y"
    {
							
							(yyval)=Make_Node(TYPE_INT,Node_Type_MINUS,'-',NULL,makeLeafNode(0),(yyvsp[(2) - (2)]),NULL,NULL);
						}
    break;

  case 46:
#line 316 "interpreter1.y"
    {
							
							(yyval)=Make_Node(TYPE_INT,Node_Type_PLUS,'+',NULL,makeLeafNode(0),(yyvsp[(2) - (2)]),NULL,NULL);
						}
    break;

  case 47:
#line 320 "interpreter1.y"
    {
							
							(yyval)=Make_Node(TYPE_BOOLEAN,Node_Type_LT,'<',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 48:
#line 324 "interpreter1.y"
    {
							
							(yyval)=Make_Node(TYPE_BOOLEAN,Node_Type_LE,'L',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 49:
#line 328 "interpreter1.y"
    {
							
							(yyval)=Make_Node(TYPE_BOOLEAN,Node_Type_GT,'>',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 50:
#line 332 "interpreter1.y"
    {
							
							(yyval)=Make_Node(TYPE_BOOLEAN,Node_Type_GE,'G',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 51:
#line 336 "interpreter1.y"
    {
							
							(yyval)=Make_Node(TYPE_BOOLEAN,Node_Type_NE,'N',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 52:
#line 340 "interpreter1.y"
    {
							
							(yyval)=Make_Node(TYPE_BOOLEAN,Node_Type_EQ,'E',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 53:
#line 344 "interpreter1.y"
    {
							
							(yyval)=Make_Node(TYPE_BOOLEAN,Node_Type_NOT,'L',NULL,(yyvsp[(2) - (2)]),NULL,NULL,NULL);
						}
    break;

  case 54:
#line 348 "interpreter1.y"
    {
							
							(yyval)=Make_Node(TYPE_BOOLEAN,Node_Type_OR,'L',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 55:
#line 352 "interpreter1.y"
    {
							
							(yyval)=Make_Node(TYPE_BOOLEAN,Node_Type_AND,'L',NULL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL,NULL);
						}
    break;

  case 56:
#line 356 "interpreter1.y"
    {
							(yyval)=Make_Node(TYPE_BOOLEAN,Node_Type_BOOLEAN_CONSTANT,1,NULL,(yyvsp[(1) - (1)]),NULL,NULL,NULL);

						}
    break;

  case 57:
#line 360 "interpreter1.y"
    {
							(yyval)=Make_Node(TYPE_BOOLEAN,Node_Type_BOOLEAN_CONSTANT,0,NULL,(yyvsp[(1) - (1)]),NULL,NULL,NULL);

						}
    break;

  case 58:
#line 366 "interpreter1.y"
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

  case 59:
#line 377 "interpreter1.y"
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

  case 60:
#line 391 "interpreter1.y"
    {(yyval)=Make_Node(TYPE_INT,TYPE_INT,'T',NULL,NULL,NULL,NULL,NULL);}
    break;

  case 61:
#line 392 "interpreter1.y"
    {(yyval)=Make_Node(TYPE_BOOLEAN,TYPE_BOOLEAN,'T',NULL,NULL,NULL,NULL,NULL);}
    break;


/* Line 1267 of yacc.c.  */
#line 2061 "y.tab.cpp"
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


#line 395 "interpreter1.y"


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
