/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "interpreter1.y" /* yacc.c:339  */

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

#line 88 "y.tab.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.hpp".  */
#ifndef YY_YY_Y_TAB_HPP_INCLUDED
# define YY_YY_Y_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 225 "y.tab.cpp" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

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
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  176

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    44,    44,    73,   137,   139,   170,   174,   179,   186,
     221,   226,   236,   239,   252,   257,   267,   274,   306,   312,
     314,   363,   396,   420,   425,   462,   472,   481,   490,   503,
     526,   532,   539,   551,   563,   594,   608,   627,   628,   629,
     637,   640,   678,   682,   686,   690,   694,   699,   719,   728,
     733,   737,   741,   745,   749,   750,   751,   752,   756,   760,
     764,   768,   772,   776,   780,   784,   788,   792,   796,   800,
     804,   841,   877,   910,   974,   986,   998,  1037,  1038,  1039
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
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
  "Stmts", "Stmt", "expr", "ID_LIST", "IDS", "TYPE", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
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

#define YYPACT_NINF -67

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-67)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
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

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
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

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -67,   -67,   -67,   -67,   241,    40,   -67,   221,   -46,   184,
     -67,   -67,   -67,   -67,   -67,   104,   -67,   -67,    91,   149,
     231,   -67,   -66,   -67,   208,   -21,   174,   -14,   -13
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     7,    12,    13,    20,    21,    41,    42,
      15,    24,    25,    26,    27,   153,   160,   164,    72,    73,
      37,   101,    61,    62,    63,   109,   110,    53,    14
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
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

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
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


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
        case 2:
#line 44 "interpreter1.y" /* yacc.c:1646  */
    {		
														(yyval)=Make_Node(Tlookup(VOID_NAME),Node_Type_DUMMY,'D',NULL,NULL,NULL,NULL,NULL);
														(yyval)->ptr1=(yyvsp[0]);
														(yyval)->ptr2=(yyvsp[-1]);

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
															fprintf(sim_code_file, "call main\n");
															fprintf(sim_code_file, "HALT\n");
															codegen((yyval));
														}
													}
#line 1486 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 73 "interpreter1.y" /* yacc.c:1646  */
    {


																	if ((yyvsp[-1]) == NULL)
																	{
																		yyerror("User defined data types required atleast one member.");
																		exit(0);
																	}
																	// cout<<"NAME = "<<$4->NAME<<endl;
																	struct tnode *temp = new tnode;
																	struct Fieldlist *temp_2,*temp_3;
																	int size = 0;
																	temp = (yyvsp[-1]);

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
																	Tinstall((yyvsp[-3])->NAME,temp_3);

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
#line 1555 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 137 "interpreter1.y" /* yacc.c:1646  */
    {}
#line 1561 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 139 "interpreter1.y" /* yacc.c:1646  */
    {
													//$$=$2;cout<<"NAME = "<<$2->type->NAME<<endl;
													struct tnode *temp = new tnode;
													temp=(yyvsp[-1]);
													while (temp != NULL)
													{	
														// cout<<"NAME =    "<<temp->NAME<<" type = "<<temp->type->NAME<<char(temp->value)<<endl;
														

														if (temp->value == 'f')
														{
															Ginstall(temp->NAME,(yyvsp[-2])->type,evaluate(temp->ptr2),temp->value,temp);
															Glookup(temp->NAME)->TYPE = temp->type;

														}
														else if ((temp->type != NULL)&&(strcmp(temp->type->NAME,INTEGER_NAME) != 0) && (strcmp(temp->type->NAME,BOOLEAN_NAME) != 0) && (strcmp(temp->type->NAME,VOID_NAME) != 0))
														{
															Ginstall(temp->NAME,(yyvsp[-2])->type,evaluate(temp->ptr2),temp->value,temp);
															Glookup(temp->NAME)->TYPE = temp->type;
														}
														else
														{
															Ginstall(temp->NAME,(yyvsp[-2])->type,evaluate(temp->ptr2),temp->value,NULL);
															Glookup(temp->NAME)->TYPE = temp->type;

														}
														temp=temp->Arg_List;

													}
													delete temp;
												}
#line 1597 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 170 "interpreter1.y" /* yacc.c:1646  */
    {(yyval)=NULL;}
#line 1603 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 174 "interpreter1.y" /* yacc.c:1646  */
    {	
													// $$ = $1;
													// $$->Arg_List = $2;
													(yyval) = Make_Arg_Node_List_for_global((yyvsp[-1]),(yyvsp[0]),'G');
												}
#line 1613 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 179 "interpreter1.y" /* yacc.c:1646  */
    { (yyval) = Make_Arg_Node_List_for_global((yyvsp[0]),NULL,'G');}
#line 1619 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 186 "interpreter1.y" /* yacc.c:1646  */
    {	
												struct tnode *temp = new tnode;
												temp=(yyvsp[-1]);
												while (temp!=NULL)
												{	
													temp->type = (yyvsp[-2])->type;
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

												(yyval) = (yyvsp[-1]);
											}
#line 1658 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 221 "interpreter1.y" /* yacc.c:1646  */
    {	
												(yyval)=(yyvsp[0]);
												(yyval)->Arg_List=(yyvsp[-2]);

											}
#line 1668 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 226 "interpreter1.y" /* yacc.c:1646  */
    {	
												(yyval)=(yyvsp[0]);
												if ((yyval)==NULL)
												{
													(yyval) = new tnode;
												}
												(yyval)->Arg_List=NULL;
												
											}
#line 1682 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 236 "interpreter1.y" /* yacc.c:1646  */
    {
												(yyval)=(yyvsp[0]);
											}
#line 1690 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 239 "interpreter1.y" /* yacc.c:1646  */
    {
	 											// $$=$1;
												(yyval)=Make_Node(get_type((yyvsp[-3])),Node_Type_ARRAY,'f',(yyvsp[-3])->NAME,(yyvsp[-3]),makeLeafNode(1),NULL,(yyvsp[-1]));
												// $$->Lentry = new Lsymbol;	
												(yyval)->Lentry = (yyvsp[-1])->Lentry;
												//cout<<"NAME="<<$3->Lentry->NAME<<endl;
											}
#line 1702 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 252 "interpreter1.y" /* yacc.c:1646  */
    {
						//$$=$3;
						//$$->Arg_List=$1;
						(yyval)->Lentry = Make_Arg_Node_List((yyvsp[-2])->Lentry,(yyvsp[0])->Lentry,'A');
					}
#line 1712 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 257 "interpreter1.y" /* yacc.c:1646  */
    {	
						//$$=$1;
						if ((yyval)==NULL)
						{
							(yyval) = new tnode;
						}
						//$$->Arg_List=$1;
						(yyval)->Lentry = Make_Arg_Node_List((yyvsp[0])->Lentry,NULL,'A');

					}
#line 1727 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 267 "interpreter1.y" /* yacc.c:1646  */
    {	(yyval) = new tnode;	
						(yyval)->Lentry = NULL;
					}
#line 1735 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 274 "interpreter1.y" /* yacc.c:1646  */
    {

						struct Lsymbol *temp= new Lsymbol;
						temp = (yyvsp[0])->Lentry;
						while (temp!=NULL)
						{
							temp->TYPE=(yyvsp[-1])->type;

							temp=temp->Next;
						}
						delete temp;

						(yyval)=(yyvsp[0]);
						(yyval)->Lentry = (yyvsp[0])->Lentry;

					}
#line 1756 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 306 "interpreter1.y" /* yacc.c:1646  */
    {
																			//$$=$1;
																			(yyval)=Make_Node(Tlookup(VOID_NAME),Node_Type_DUMMY,'D',NULL,NULL,NULL,NULL,NULL);
																			(yyval)->ptr1=(yyvsp[-1]);
																			(yyval)->ptr2=(yyvsp[0]);
																		}
#line 1767 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 312 "interpreter1.y" /* yacc.c:1646  */
    {(yyval)=NULL;}
#line 1773 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 314 "interpreter1.y" /* yacc.c:1646  */
    {	
												/**
													This makes the funtion node $$->Lentry points to the local symbol table 
													of the respective function.
												**/
												// $$->Arg_List->Arg_List->Lentry = $1->Arg_List->Lentry;

												if (Glookup((yyvsp[-2])->NAME) !=  NULL)
												{
													Glookup((yyvsp[-2])->NAME)->BODY = (yyvsp[-1]); //For storing the fuction body
												}
												(yyval)=Make_Node((yyvsp[-2])->type,Node_Type_FUNCTION_DEF,'f',(yyvsp[-2])->NAME,(yyvsp[-1]),NULL,NULL,(yyvsp[-2])->Arg_List);
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
#line 1825 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 364 "interpreter1.y" /* yacc.c:1646  */
    {	

	
												if ((yyval) == NULL)
												{
													(yyval) = new tnode;
												}

												(yyval)->type = (yyvsp[-6])->type;
												(yyval)->NAME = (yyvsp[-5])->NAME;
												(yyval)->Arg_List = (yyvsp[-3]);

												(yyvsp[0])->Lentry = Mark_Variables_local((yyvsp[0])->Lentry);

												(yyval)->Lentry = Make_Arg_Node_List((yyvsp[0])->Lentry,(yyvsp[-3])->Lentry,'V');
												
												if (Glookup((yyvsp[-5])->NAME) == NULL)
												{
													yyerror(std::string ("Function named ‘") + (yyvsp[-5])->NAME + "’ is  not declared in this scope.");
													exit(0);
												}
												else
												{

													Glookup((yyvsp[-5])->NAME)->Local = (yyval)->Lentry;
												}
												// Glookup($2->NAME)->Arg_List->Lentry = $$->Lentry;									
												last_function_used_type_check.push(((yyvsp[-5])->NAME));

												
											}
#line 1861 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 397 "interpreter1.y" /* yacc.c:1646  */
    {	
												/**
													This makes the funtion node $$->Lentry points to the local symbol table 
													of the respective function.
													for main funtion there is no need to have the definiations in the global
													declaration.for that we need to install main function in the global symbol 
													table.
												**/
												cout<<"IN main body"<<endl;
												Glookup((yyvsp[-2])->NAME)->BODY = (yyvsp[-1]); //For storing the fuction body
												(yyval)=Make_Node(Tlookup(INTEGER_NAME),Node_Type_FUNCTION_DEF,'f',(yyvsp[-2])->NAME,(yyvsp[-1]),NULL,NULL,(yyvsp[-2])->Arg_List);
												// $$->Lentry = Make_Arg_Node_List($7->Lentry,$4->Lentry);
												// Glookup($2->NAME)->Arg_List->Lentry = $$->Lentry;
												// last_function_used_type_check.push(($2->NAME));

												// if ($7!=NULL)
												// {
												// 	$$->Lentry = $7->Lentry; 
												// }
												// last_function_used_type_check.pop();


											}
#line 1889 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 420 "interpreter1.y" /* yacc.c:1646  */
    {
												yyerror("‘main’ funtion is not defined in this scope.");
											}
#line 1897 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 427 "interpreter1.y" /* yacc.c:1646  */
    {	
												if ((yyvsp[-3])->Lentry!=NULL)
												{
													cout<<input_file_name<<":"<<(yyvsp[-3])->Lentry->line_no<<":"<<(yyvsp[-3])->Lentry->col_no<<":"<<"error:"<<"main funtion can not have any arguments"<<endl;
													no_of_error++;
												}

												//$$=$7;/*evaluate($$);*/
												// $2->NAME="main";
												
												if ((yyvsp[-5])->NAME ==  NULL)
												{
													(yyvsp[-5])->NAME = (char *)malloc(20*sizeof(char));
												}
												strcpy((yyvsp[-5])->NAME,"main");
												Ginstall((yyvsp[-5])->NAME,Tlookup(INTEGER_NAME),1,'f',(yyvsp[-3]));
												if ((yyval) == NULL)
												{
													(yyval) = new tnode;
												}
												(yyval)->type = (yyvsp[-6])->type;

												(yyval)->NAME = (yyvsp[-5])->NAME;
												(yyval)->Arg_List = (yyvsp[-3]);

												(yyvsp[0])->Lentry = Mark_Variables_local((yyvsp[0])->Lentry);

												(yyval)->Lentry = Make_Arg_Node_List((yyvsp[0])->Lentry,(yyvsp[-3])->Lentry,'V');
												Glookup((yyvsp[-5])->NAME)->Local = (yyval)->Lentry;
												// Glookup($2->NAME)->Arg_List->Lentry = $$->Lentry;
											//	Glookup($2->NAME)->Arg_List->Arg_List = new tnode;
												// Glookup($2->NAME)->Arg_List->Arg_List = $4;									
												last_function_used_type_check.push(((yyvsp[-5])->NAME));
												cout<<"After main Local"<<endl;
											}
#line 1937 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 462 "interpreter1.y" /* yacc.c:1646  */
    {	
													// $$ = $2;
													// if ($$ == NULL)
													// {
														(yyval) = new tnode;
													// }
													(yyval)->Lentry = (yyvsp[-1])->Lentry;
													// Glookup(last_function_used_type_check.top())->Arg_List->Lentry->Next = $$->Lentry;

												}
#line 1952 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 472 "interpreter1.y" /* yacc.c:1646  */
    {	
													// $$ = NULL;
													(yyval) = new tnode;

													(yyval)->Lentry = NULL;
												}
#line 1963 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 481 "interpreter1.y" /* yacc.c:1646  */
    {	
													//$1->Lentry->Next = $2->Lentry;
													//$$ = $1;
													(yyval) = new tnode;

													(yyval)->Lentry = Make_Arg_Node_List((yyvsp[0])->Lentry,(yyvsp[-1])->Lentry,'V');
													// Glookup(last_function_used_type_check.top())->Arg_List->Lentry->Next = $$->Lentry;
												}
#line 1976 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 490 "interpreter1.y" /* yacc.c:1646  */
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
#line 1992 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 503 "interpreter1.y" /* yacc.c:1646  */
    {	
												struct Lsymbol *temp= new Lsymbol;
												temp = (yyvsp[-1])->Lentry;
												while (temp!=NULL)
												{
													temp->TYPE=(yyvsp[-2])->type;
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

												(yyval)=(yyvsp[-1]);
											}
#line 2019 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 526 "interpreter1.y" /* yacc.c:1646  */
    {	
												// $$->Lentry=$3->Lentry;
												// $$->Lentry->Next=$1->Lentry;
												(yyval)->Lentry = Make_Arg_Node_List((yyvsp[-2])->Lentry,(yyvsp[0])->Lentry,'V');

											}
#line 2030 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 532 "interpreter1.y" /* yacc.c:1646  */
    {	
												// $$->Lentry = $1->Lentry;
												// $$->Lentry->Next = NULL;
												(yyval)->Lentry = Make_Arg_Node_List((yyvsp[0])->Lentry,NULL,'V');
												
											}
#line 2041 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 539 "interpreter1.y" /* yacc.c:1646  */
    {
											if (Glookup((yyvsp[0])->NAME)!=NULL)
											{	
												if (Glookup((yyvsp[0])->NAME)->size > 1)
												{
													yyerror(string("‘") + (yyvsp[0])->NAME + "’ was declared as array.");
												}	
											}
											(yyval)=Make_Node(Tlookup(VOID_NAME),Node_Type_ARRAY,'a',(yyvsp[0])->NAME,(yyvsp[0]),makeLeafNode(1),NULL,NULL);
											(yyval)->Lentry = Make_Arg_Node((yyvsp[0])->NAME,Tlookup(VOID_NAME),1,PASS_BY_VALUE);
											(yyval)->Lentry->Next = NULL;
										}
#line 2058 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 551 "interpreter1.y" /* yacc.c:1646  */
    {
											if (Glookup((yyvsp[-1])->NAME)!=NULL)
											{	
												if (Glookup((yyvsp[-1])->NAME)->size > 1)
												{
													yyerror(string("‘") + (yyvsp[-1])->NAME + "’ was declared as array.");
												}	
											}
											(yyval)=Make_Node(Tlookup(VOID_NAME),Node_Type_ARRAY,'a',(yyvsp[0])->NAME,(yyvsp[0]),makeLeafNode(1),NULL,NULL);
											(yyval)->Lentry = Make_Arg_Node((yyvsp[0])->NAME,Tlookup(VOID_NAME),1,PASS_BY_REFERENCE);
											(yyval)->Lentry->Next = NULL;
										}
#line 2075 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 563 "interpreter1.y" /* yacc.c:1646  */
    {
											yyerror("Array" + string(" ‘") + (yyvsp[-3])->NAME + "’ should be declared as global.");
											(yyval)=Make_Node(Tlookup(VOID_NAME),Node_Type_ARRAY,'A',(yyvsp[-3])->NAME,(yyvsp[-3]),(yyvsp[-1]),NULL,NULL);
											(yyval)->Lentry = Make_Arg_Node((yyvsp[-3])->NAME,Tlookup(VOID_NAME),2,PASS_BY_VALUE);
											(yyval)->Lentry->Next = NULL;
										}
#line 2086 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 594 "interpreter1.y" /* yacc.c:1646  */
    {
										//$$=$2;
										(yyval)=Make_Node(Tlookup(VOID_NAME),Node_Type_DUMMY,'D',NULL,NULL,NULL,NULL,NULL);
										(yyval)->ptr1=(yyvsp[-2]);
										(yyval)->ptr2=(yyvsp[-1]);
										// evaluate($$);
										cout<<"In body"<<endl;
										// 	<<"Memory"<<endl;
										// for (int i = 0; i < 20; i++)
										// {
										// 	cout<<i<<" "<<Memory[i]<<" "<<endl;
										// }
										// exit(0);
									}
#line 2105 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 608 "interpreter1.y" /* yacc.c:1646  */
    {	
										cout<<"IN return"<<endl;
										//cout<<"Node_Type="<<$2->Node_Type<<endl;
										if ((yyvsp[-1])->Node_Type == Node_Type_ARRAY)
										{
											if (lookup_variable(last_function_used_type_check.top(),(yyvsp[-1])->NAME) != NULL)
											{
												(yyvsp[-1])->type = lookup_variable(last_function_used_type_check.top(),(yyvsp[-1])->NAME)->TYPE;
											}
											else if(Glookup((yyvsp[-1])->NAME) != NULL)
											{
												(yyvsp[-1])->type = Glookup((yyvsp[-1])->NAME)->TYPE;
											}
											// $2->type = get_type($2);
											// cout<<$2->type<<endl;
										}
										(yyval)=Make_Node((yyvsp[-1])->type,Node_Type_RETURN,'R',NULL,(yyvsp[-1]),NULL,NULL,NULL);
									}
#line 2128 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 627 "interpreter1.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]); cout<<"IN Slist"<<endl;}
#line 2134 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 628 "interpreter1.y" /* yacc.c:1646  */
    {(yyval)=NULL;}
#line 2140 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 629 "interpreter1.y" /* yacc.c:1646  */
    {		

							(yyval)=Make_Node(Tlookup(VOID_NAME),Node_Type_DUMMY,'D',NULL,NULL,NULL,NULL,NULL);
							(yyval)->ptr1=(yyvsp[-1]);
							(yyval)->ptr2=(yyvsp[0]);
							

					}
#line 2153 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 637 "interpreter1.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2159 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 640 "interpreter1.y" /* yacc.c:1646  */
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
											(yyval)=Make_Node((yyvsp[-3])->type,Node_Type_ASSIGNMENT,'=',(yyvsp[-3])->NAME,(yyvsp[-3]),(yyvsp[-1]),NULL,NULL);
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
#line 2196 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 678 "interpreter1.y" /* yacc.c:1646  */
    {
										cout<<"IN read"<<endl;
										(yyval)=Make_Node(Tlookup(VOID_NAME),Node_Type_READ,'r',NULL,(yyvsp[-2]),NULL,NULL,NULL);
									}
#line 2205 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 682 "interpreter1.y" /* yacc.c:1646  */
    {	
										cout<<"In write"<<endl;
										(yyval)=Make_Node(Tlookup(VOID_NAME),Node_Type_WRITE,'W',NULL,(yyvsp[-2]),NULL,NULL,NULL);
									}
#line 2214 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 686 "interpreter1.y" /* yacc.c:1646  */
    {
												
												(yyval)=Make_Node(Tlookup(VOID_NAME),Node_Type_IF,'i',NULL,(yyvsp[-5]),(yyvsp[-2]),NULL,NULL);
											}
#line 2223 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 690 "interpreter1.y" /* yacc.c:1646  */
    {	
														
														(yyval)=Make_Node(Tlookup(VOID_NAME),Node_Type_IF,'I',NULL,(yyvsp[-7]),(yyvsp[-4]),(yyvsp[-2]),NULL);
													}
#line 2232 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 694 "interpreter1.y" /* yacc.c:1646  */
    {
													
													(yyval)=Make_Node(Tlookup(VOID_NAME),Node_Type_WHILE,'w',NULL,(yyvsp[-5]),(yyvsp[-2]),NULL,NULL);
	
												}
#line 2242 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 699 "interpreter1.y" /* yacc.c:1646  */
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

										(yyval)=Make_Node(get_type((yyvsp[-4])),Node_Type_FUNCTION_CALL,'c',(yyvsp[-4])->NAME,(yyvsp[-2]),NULL,NULL,(yyvsp[-2]));

									}
#line 2264 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 719 "interpreter1.y" /* yacc.c:1646  */
    {	
							// //if ($1->type==TYPE_VOID)
							// {
							// 	cout<<"Glookup(ptr1->NAME)="<<Glookup($3->NAME)->TYPE<<endl;
							// 	//$$=Make_Node(Glookup($1->NAME)->TYPE,Node_Type_ASSIGNMENT,'=',$1->NAME,$1,$3,NULL,NULL);
							// }
							//cout<<"ptr1->type="<<$1->type<<" ptr2->type="<<$3->type<<endl;
							(yyval)=Make_Node(Tlookup(INTEGER_NAME),Node_Type_PLUS,'+',NULL,(yyvsp[-2]),(yyvsp[0]),NULL,NULL);
						}
#line 2278 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 728 "interpreter1.y" /* yacc.c:1646  */
    {
							
							(yyval)=Make_Node(Tlookup(INTEGER_NAME),Node_Type_MINUS,'-',NULL,(yyvsp[-2]),(yyvsp[0]),NULL,NULL);
						}
#line 2287 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 733 "interpreter1.y" /* yacc.c:1646  */
    {
							
							(yyval)=Make_Node(Tlookup(INTEGER_NAME),Node_Type_DIV,'/',NULL,(yyvsp[-2]),(yyvsp[0]),NULL,NULL);
						}
#line 2296 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 737 "interpreter1.y" /* yacc.c:1646  */
    {
							
							(yyval)=Make_Node(Tlookup(INTEGER_NAME),Node_Type_MUL,'*',NULL,(yyvsp[-2]),(yyvsp[0]),NULL,NULL);
						}
#line 2305 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 741 "interpreter1.y" /* yacc.c:1646  */
    {	
							
							(yyval)=Make_Node(Tlookup(INTEGER_NAME),Node_Type_POWER,'^',NULL,(yyvsp[-2]),(yyvsp[0]),NULL,NULL);
						}
#line 2314 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 745 "interpreter1.y" /* yacc.c:1646  */
    {
							
							(yyval)=Make_Node(Tlookup(INTEGER_NAME),Node_Type_MODULUS,'%',NULL,(yyvsp[-2]),(yyvsp[0]),NULL,NULL);
						}
#line 2323 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 749 "interpreter1.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);(yyval)->type=(yyvsp[-1])->type;}
#line 2329 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 750 "interpreter1.y" /* yacc.c:1646  */
    {cout<<"IN NUM"<<endl;(yyval)=(yyvsp[0]);(yyval)->type=(yyvsp[0])->type;}
#line 2335 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 751 "interpreter1.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]); (yyval)->type=(yyvsp[0])->type; /*cout<<"IDS="<<evaluate($1->ptr2)<<endl;*/}
#line 2341 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 752 "interpreter1.y" /* yacc.c:1646  */
    {
							
							(yyval)=Make_Node(Tlookup(INTEGER_NAME),Node_Type_MINUS,'-',NULL,makeLeafNode(0),(yyvsp[0]),NULL,NULL);
						}
#line 2350 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 756 "interpreter1.y" /* yacc.c:1646  */
    {
							
							(yyval)=Make_Node(Tlookup(INTEGER_NAME),Node_Type_PLUS,'+',NULL,makeLeafNode(0),(yyvsp[0]),NULL,NULL);
						}
#line 2359 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 760 "interpreter1.y" /* yacc.c:1646  */
    {
							
							(yyval)=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_LT,'<',NULL,(yyvsp[-2]),(yyvsp[0]),NULL,NULL);
						}
#line 2368 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 764 "interpreter1.y" /* yacc.c:1646  */
    {
							
							(yyval)=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_LE,'L',NULL,(yyvsp[-2]),(yyvsp[0]),NULL,NULL);
						}
#line 2377 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 768 "interpreter1.y" /* yacc.c:1646  */
    {
							
							(yyval)=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_GT,'>',NULL,(yyvsp[-2]),(yyvsp[0]),NULL,NULL);
						}
#line 2386 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 772 "interpreter1.y" /* yacc.c:1646  */
    {
							
							(yyval)=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_GE,'G',NULL,(yyvsp[-2]),(yyvsp[0]),NULL,NULL);
						}
#line 2395 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 776 "interpreter1.y" /* yacc.c:1646  */
    {
							
							(yyval)=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_NE,'N',NULL,(yyvsp[-2]),(yyvsp[0]),NULL,NULL);
						}
#line 2404 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 780 "interpreter1.y" /* yacc.c:1646  */
    {
							
							(yyval)=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_EQ,'E',NULL,(yyvsp[-2]),(yyvsp[0]),NULL,NULL);
						}
#line 2413 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 784 "interpreter1.y" /* yacc.c:1646  */
    {
							
							(yyval)=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_NOT,'L',NULL,(yyvsp[0]),NULL,NULL,NULL);
						}
#line 2422 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 788 "interpreter1.y" /* yacc.c:1646  */
    {
							
							(yyval)=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_OR,'L',NULL,(yyvsp[-2]),(yyvsp[0]),NULL,NULL);
						}
#line 2431 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 792 "interpreter1.y" /* yacc.c:1646  */
    {
							
							(yyval)=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_AND,'L',NULL,(yyvsp[-2]),(yyvsp[0]),NULL,NULL);
						}
#line 2440 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 796 "interpreter1.y" /* yacc.c:1646  */
    {
							(yyval)=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_BOOLEAN_CONSTANT,1,NULL,(yyvsp[0]),NULL,NULL,NULL);

						}
#line 2449 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 800 "interpreter1.y" /* yacc.c:1646  */
    {
							(yyval)=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_BOOLEAN_CONSTANT,0,NULL,(yyvsp[0]),NULL,NULL,NULL);

						}
#line 2458 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 804 "interpreter1.y" /* yacc.c:1646  */
    {	
							// cout<<"Arg_List = "<<$3->Arg_List<<endl;
							(yyval)=Make_Node(get_type((yyvsp[-3])),Node_Type_FUNCTION_CALL,'c',(yyvsp[-3])->NAME,(yyvsp[-1]),NULL,NULL,(yyvsp[-1]));
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
#line 2498 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 841 "interpreter1.y" /* yacc.c:1646  */
    {
								(yyval)=new tnode;
									
								if ((yyvsp[0])->Node_Type == Node_Type_ARRAY)
								{	
									if (lookup_variable(last_function_used_type_check.top(),(yyvsp[0])->NAME) != NULL)
									{
										// $3->Lentry->TYPE = lookup_variable(last_function_used_type_check.top(),$3->NAME)->TYPE;
										(yyvsp[0])->type = lookup_variable(last_function_used_type_check.top(),(yyvsp[0])->NAME)->TYPE;
										// $3->type = lookup_variable(last_function_used_type_check.top(),$3->NAME)->TYPE;
										// cout<<lookup_variable(last_function_used_type_check.top(),$1->NAME)->TYPE<<endl;
									}
									else if (Glookup((yyvsp[0])->NAME)->size > 1)
									{
										// yyerror("Array" + string(" ‘") + $3->NAME + "’ can not be passed to the function.");
									}
								}
								// $$->Lentry = Make_Arg_Node_List($3->Lentry,$1->Lentry,'c');
								// cout<<"Node_Type2 = "<<$3->type<<endl;
								(yyval) = (yyvsp[-2]);
								// $1->Arg_List = $3;
								struct tnode *temp = new tnode;
								temp = (yyvsp[-2]);
								// cout<<$3->NAME<<endl;
								while (temp->Arg_List != NULL)
								{
									// cout<<"temp = "<<temp->Node_Type<<endl;
									temp = temp->Arg_List;
								}
								// temp->Arg_List = new tnode;
								temp->Arg_List = (yyvsp[0]);
								// $3->Arg_List = $1;
								// $$->Arg_List = $3;
								// $3->Arg_List = NULL;
								// cout<<$3->NAME<<endl;
							}
#line 2539 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 877 "interpreter1.y" /* yacc.c:1646  */
    {

								(yyval)=new tnode;
								if ((yyvsp[0])->Node_Type == Node_Type_ARRAY)
								{
									if (lookup_variable(last_function_used_type_check.top(),(yyvsp[0])->NAME) != NULL)
									{
									// cout<<"In FUNC_ARG"<<endl;
									// cout<<"Node_Type = "<<char($1->value)<<endl;
										// $1->Lentry->TYPE = lookup_variable(last_function_used_type_check.top(),$1->NAME)->TYPE;
										(yyvsp[0])->type = lookup_variable(last_function_used_type_check.top(),(yyvsp[0])->NAME)->TYPE;
									// $1->type = lookup_variable(last_function_used_type_check.top(),$1->NAME)->TYPE;
									// cout<<lookup_variable(last_function_used_type_check.top(),$1->NAME)->TYPE<<endl;
									}
									else if(Glookup((yyvsp[0])->NAME) != NULL)
									{	
										if ((yyvsp[0])->Node_Type == Node_Type_ARRAY && Glookup((yyvsp[0])->NAME)->size > 1)
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
								(yyval) = (yyvsp[0]);

							}
#line 2577 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 910 "interpreter1.y" /* yacc.c:1646  */
    {	
								// $$->Lentry = NULL;
								(yyval)->Arg_List = NULL;
							}
#line 2586 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 974 "interpreter1.y" /* yacc.c:1646  */
    {	
							if (Glookup((yyvsp[0])->NAME) != NULL)
							{	
								if (Glookup((yyvsp[0])->NAME)->size > 1)
								{
									yyerror(string("‘") + (yyvsp[0])->NAME + "’ was declared as array.");
								}	
							}
							(yyval)=Make_Node(get_type((yyvsp[0])),Node_Type_ARRAY,'a',(yyvsp[0])->NAME,(yyvsp[0]),makeLeafNode(1),NULL,NULL);
							(yyval)->Lentry = Make_Arg_Node((yyvsp[0])->NAME,get_type((yyvsp[0])),1,LOCAL_VARIABLE);
							(yyval)->Lentry->Next = NULL;
						}
#line 2603 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 986 "interpreter1.y" /* yacc.c:1646  */
    {
							if (Glookup((yyvsp[-3])->NAME)!=NULL)
							{	
								if (Glookup((yyvsp[-3])->NAME)->value=='a')
								{
									yyerror(string("‘") + (yyvsp[-3])->NAME + "’ is not a array.");
								}	
							}
							(yyval)=Make_Node(get_type((yyvsp[-3])),Node_Type_ARRAY,'A',(yyvsp[-3])->NAME,(yyvsp[-3]),(yyvsp[-1]),NULL,NULL);
							(yyval)->Lentry = Make_Arg_Node((yyvsp[-3])->NAME,get_type((yyvsp[-3])),1,LOCAL_VARIABLE);
							(yyval)->Lentry->Next = NULL;
						}
#line 2620 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 998 "interpreter1.y" /* yacc.c:1646  */
    {
							// cout<<Glookup($1->NAME)->TYPE->NAME<<endl;
							if (lookup_variable(last_function_used_type_check.top(),(yyvsp[-2])->NAME) == NULL)
							{
								if (Glookup((yyvsp[-2])->NAME) == NULL)
								{	
									yyerror(string("User defined variable ‘") + (yyvsp[-2])->NAME + "’ is  not defined in this scope.");
									exit(0);
									// cout<<"NAME = "<<$1->NAME<<endl;
								}
							}
							else if (Glookup((yyvsp[-2])->NAME) != NULL)
							{
								if (Glookup((yyvsp[-2])->NAME)->TYPE == NULL)
								{
									yyerror(string("Unknown type of User defined variable ‘") + (yyvsp[-2])->NAME + "’.");
								}
								// cout<<"IN Tlookup"<<endl;
								// cout<<"NAME = "<<$1->NAME<<endl;
								// cout<<Glookup($1->NAME)->TYPE->NAME<<endl;
								// cout<<Glookup($1->NAME)->TYPE->Fields<<endl;
								// cout<<"Fields = "<<Tlookup($1->type->NAME)<<endl;
								// cout<<Glookup($1->NAME)->TYPE<<endl;
								// cout<<Flookup($3->NAME,Glookup($1->NAME)->TYPE->Fields)<<endl;
								if (Glookup((yyvsp[-2])->NAME)->TYPE != NULL)
								{
									if (Flookup((yyvsp[0])->NAME,Glookup((yyvsp[-2])->NAME)->TYPE->Fields) == NULL )
									{
										yyerror("‘" + string((yyvsp[0])->NAME) + "’ is not a member of user defined variable ‘"+ (yyvsp[-2])->NAME + "’.");
									}
								}
								
							}
							(yyval)=Make_Node(get_type((yyvsp[-2])),Node_Type_ARRAY,'u',(yyvsp[0])->NAME,(yyvsp[-2]),(yyvsp[0]),NULL,NULL);
							(yyval)->Lentry = Make_Arg_Node((yyvsp[-2])->NAME,get_type((yyvsp[-2])),1,LOCAL_VARIABLE);
							(yyval)->Lentry->Next = NULL;
						}
#line 2662 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 1037 "interpreter1.y" /* yacc.c:1646  */
    {(yyval)=Make_Node(Tlookup(INTEGER_NAME),TYPE_INT,'T',NULL,NULL,NULL,NULL,NULL); }
#line 2668 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 1038 "interpreter1.y" /* yacc.c:1646  */
    {(yyval)=Make_Node(Tlookup(BOOLEAN_NAME),TYPE_BOOLEAN,'T',NULL,NULL,NULL,NULL,NULL);}
#line 2674 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 1039 "interpreter1.y" /* yacc.c:1646  */
    {	
					// cout<<"NAME = "<<Tlookup($1->NAME)<<endl;
					if (Tlookup((yyvsp[0])->NAME) == NULL)
					{
						yyerror(string("Unknown type of User defined variable ‘") + (yyvsp[0])->NAME + "’.");
					}
					(yyval)=Make_Node(Tlookup((yyvsp[0])->NAME),TYPE_USER,'T',NULL,NULL,NULL,NULL,NULL);
				}
#line 2687 "y.tab.cpp" /* yacc.c:1646  */
    break;


#line 2691 "y.tab.cpp" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
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
  return yyresult;
}
#line 1049 "interpreter1.y" /* yacc.c:1906  */


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
