
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "Tonmoy.y"

	#include<stdio.h>
	#include <math.h>
	#include <string.h>
	#include <stdlib.h>
	
	extern FILE* yyout;
	
	int cnt=1,cntt=0,val,track=0;
	typedef struct entry {
    	char *str;
    	union {
        	int i;
        	float f;
    	} value;
    	int type;  // 0 for int, 1 for float
	} store;
	store st[1000],sym[1000];
	void ins(store *p, char *s, int n);
	int cnt2=1; 
	
	void yyerror(char *s) {
        fprintf(yyout, "Error: %s\n", s);
        exit(1);
    }
	int look_for_key(char *key);
	int yylex(void);
	


/* Line 189 of yacc.c  */
#line 104 "Tonmoy.tab.c"

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUM = 258,
     VAR = 259,
     IF = 260,
     ELIF = 261,
     ELSE = 262,
     MAIN = 263,
     INT = 264,
     FLOAT = 265,
     DOUBLE = 266,
     CHAR = 267,
     LP = 268,
     RP = 269,
     LB = 270,
     RB = 271,
     CM = 272,
     SM = 273,
     PLUS = 274,
     MINUS = 275,
     MULT = 276,
     DIV = 277,
     POW = 278,
     ASSIGN = 279,
     FOR = 280,
     COL = 281,
     WHILE = 282,
     BREAK = 283,
     DEFAULT = 284,
     CASE = 285,
     AND = 286,
     SWITCH = 287,
     inc = 288,
     OR = 289,
     XOR = 290,
     FACTORIAL = 291,
     ODDEVEN = 292,
     LEAPYEAR = 293,
     PALINDROME = 294,
     POWER = 295,
     PRIME = 296,
     MAX_FUNC = 297,
     MIN_FUNC = 298,
     LCM_FUNC = 299,
     GCD_FUNC = 300,
     SIN = 301,
     CLP = 302,
     CCP = 303,
     COS = 304,
     TAN = 305,
     NL = 306,
     SQRT = 307,
     ARRAY = 308,
     FLOAT_NUM = 309,
     GT = 310,
     LT = 311
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 31 "Tonmoy.y"

        int number;
        float floating;
        char *string;



/* Line 214 of yacc.c  */
#line 204 "Tonmoy.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 216 "Tonmoy.tab.c"

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
# if YYENABLE_NLS
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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   821

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  14
/* YYNRULES -- Number of rules.  */
#define YYNRULES  66
/* YYNRULES -- Number of states.  */
#define YYNSTATES  216

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   311

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    10,    12,    16,    18,    19,    22,    25,
      29,    31,    33,    35,    39,    41,    43,    51,    54,    62,
      74,    84,    94,   104,   110,   116,   122,   128,   136,   142,
     150,   158,   166,   174,   180,   186,   192,   198,   204,   212,
     214,   217,   218,   221,   227,   232,   234,   236,   240,   242,
     246,   250,   254,   258,   262,   266,   270,   274,   278,   282,
     286,   290,   292,   296,   300,   304,   308
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      58,     0,    -1,     8,    13,    14,    15,    60,    16,    -1,
      59,    -1,    15,    60,    16,    -1,    60,    -1,    -1,    60,
      64,    -1,    60,    61,    -1,    62,    63,    18,    -1,     9,
      -1,    10,    -1,    12,    -1,    63,    17,     4,    -1,     4,
      -1,    18,    -1,    32,    13,    70,    14,    15,    65,    16,
      -1,    69,    18,    -1,     5,    13,    69,    14,    15,    64,
      16,    -1,     5,    13,    69,    14,    15,    64,    16,     7,
      15,    64,    16,    -1,    25,    13,     3,    26,     3,    14,
      15,    69,    16,    -1,    27,    13,     3,    56,     3,    14,
      15,    69,    16,    -1,    27,    13,     3,    55,     3,    14,
      15,    69,    16,    -1,    36,    13,    69,    14,    18,    -1,
      37,    13,    69,    14,    18,    -1,    38,    13,    69,    14,
      18,    -1,    39,    13,     3,    14,    18,    -1,    40,    13,
      69,    17,    69,    14,    18,    -1,    41,    13,    69,    14,
      18,    -1,    42,    13,    69,    17,    69,    14,    18,    -1,
      43,    13,    69,    17,    69,    14,    18,    -1,    45,    13,
      69,    17,    69,    14,    18,    -1,    44,    13,    69,    17,
      69,    14,    18,    -1,    46,    47,    69,    48,    18,    -1,
      49,    47,    69,    48,    18,    -1,    50,    47,    69,    48,
      18,    -1,    51,    47,    69,    48,    18,    -1,    52,    47,
      69,    48,    18,    -1,    53,    62,     4,    13,     3,    14,
      18,    -1,    66,    -1,    66,    68,    -1,    -1,    66,    67,
      -1,    30,     3,    26,    69,    18,    -1,    29,    26,    69,
      18,    -1,     3,    -1,    54,    -1,     4,    24,    69,    -1,
       4,    -1,    69,    19,    69,    -1,    69,    31,    69,    -1,
      69,    34,    69,    -1,    69,    35,    69,    -1,    69,    20,
      69,    -1,    69,    21,    69,    -1,    69,    22,    69,    -1,
      69,    23,    69,    -1,    69,    56,    69,    -1,    69,    55,
      69,    -1,    13,    69,    14,    -1,    33,    69,    33,    -1,
       3,    -1,    70,    19,    70,    -1,    70,    20,    70,    -1,
      70,    21,    70,    -1,    70,    22,    70,    -1,    70,    23,
      70,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    59,    59,    60,    63,    66,    71,    73,    75,    78,
      80,    82,    84,    87,   100,   114,   115,   117,   121,   132,
     142,   151,   167,   182,   194,   205,   215,   233,   241,   268,
     291,   314,   339,   366,   368,   370,   372,   374,   376,   385,
     386,   389,   390,   393,   402,   412,   413,   414,   434,   447,
     449,   451,   453,   455,   457,   459,   469,   472,   474,   476,
     478,   483,   485,   487,   489,   491,   501
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM", "VAR", "IF", "ELIF", "ELSE",
  "MAIN", "INT", "FLOAT", "DOUBLE", "CHAR", "LP", "RP", "LB", "RB", "CM",
  "SM", "PLUS", "MINUS", "MULT", "DIV", "POW", "ASSIGN", "FOR", "COL",
  "WHILE", "BREAK", "DEFAULT", "CASE", "AND", "SWITCH", "inc", "OR", "XOR",
  "FACTORIAL", "ODDEVEN", "LEAPYEAR", "PALINDROME", "POWER", "PRIME",
  "MAX_FUNC", "MIN_FUNC", "LCM_FUNC", "GCD_FUNC", "SIN", "CLP", "CCP",
  "COS", "TAN", "NL", "SQRT", "ARRAY", "FLOAT_NUM", "GT", "LT", "$accept",
  "program", "error_program", "cstatement", "cdeclaration", "TYPE", "ID1",
  "statement", "BASE", "Bas", "Cs", "Dflt", "expression",
  "switch_expression", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    57,    58,    58,    59,    59,    60,    60,    60,    61,
      62,    62,    62,    63,    63,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    65,
      65,    66,    66,    67,    68,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    70,    70,    70,    70,    70,    70
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     1,     3,     1,     0,     2,     2,     3,
       1,     1,     1,     3,     1,     1,     7,     2,     7,    11,
       9,     9,     9,     5,     5,     5,     5,     7,     5,     7,
       7,     7,     7,     5,     5,     5,     5,     5,     7,     1,
       2,     0,     2,     5,     4,     1,     1,     3,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     3,     3,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,     0,     6,     0,     3,     5,     0,     0,     1,    45,
      48,     0,    10,    11,    12,     0,    15,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    46,     8,     0,
       7,     0,     0,     4,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    14,     0,    17,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       6,    47,     0,    59,     0,     0,    61,     0,    60,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     9,    49,    53,    54,
      55,    56,    50,    51,    52,    58,    57,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    13,     2,     0,     0,     0,     0,
      41,    62,    63,    64,    65,    66,    23,    24,    25,    26,
       0,    28,     0,     0,     0,     0,    33,    34,    35,    36,
      37,     0,     0,     0,     0,     0,     0,    39,     0,     0,
       0,     0,     0,     0,    18,     0,     0,     0,    16,     0,
       0,    42,    40,    27,    29,    30,    32,    31,    38,     0,
       0,     0,     0,     0,     0,     0,    20,    22,    21,     0,
       0,     0,    44,     0,    19,    43
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,    38,    39,    68,    40,   176,   177,
     191,   192,    41,    87
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -141
static const yytype_int16 yypact[] =
{
      -6,     2,  -141,    12,  -141,   216,     7,    91,  -141,  -141,
       3,    26,  -141,  -141,  -141,     0,  -141,    38,    60,    72,
       0,    74,    75,    78,    79,    80,    84,    85,    86,    89,
      92,    59,    61,    65,    66,    67,    -2,  -141,  -141,   111,
    -141,   622,   110,  -141,     0,     0,    -3,   123,   135,   136,
     689,     0,     0,     0,   144,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   155,  -141,     6,  -141,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -141,   765,    55,  -141,   122,   -21,  -141,   217,  -141,   309,
     327,   353,   146,   547,   371,   554,   573,   596,   603,   694,
     712,   717,   735,   758,   149,   159,  -141,    49,    49,    -9,
      -9,   143,   143,   143,   143,   256,   256,   164,   160,   175,
     176,   178,   168,   136,   136,   136,   136,   136,   166,   169,
     172,   174,     0,   180,     0,     0,     0,     0,   181,   193,
     194,   204,   205,   190,  -141,  -141,   268,   210,   213,   218,
    -141,    45,    45,   171,   171,   171,  -141,  -141,  -141,  -141,
     397,  -141,   415,   441,   459,   485,  -141,  -141,  -141,  -141,
    -141,   219,   214,   220,   227,   229,   230,    52,   232,   233,
     245,   246,   262,   264,   238,     0,     0,     0,  -141,   221,
     271,  -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,   269,
     130,   502,   528,     0,   257,   268,  -141,  -141,  -141,   645,
       0,   272,  -141,   651,  -141,  -141
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -141,  -141,  -141,    -1,  -141,   249,  -141,  -140,  -141,  -141,
    -141,  -141,   -15,    31
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      46,     7,     1,     9,    10,    50,   172,    12,    13,     2,
      14,    83,     8,    15,    74,     6,    70,    71,    72,    73,
      74,    42,    75,   105,   106,    76,    77,    44,    75,    81,
      82,    76,    77,    20,   120,   121,    89,    90,    91,    45,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,    47,    78,    79,    37,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   211,   125,   126,   127,   118,
      72,    73,    74,    48,    70,    71,    72,    73,    74,   117,
      75,   189,   190,    76,    77,    49,    75,    51,    52,    76,
      77,    53,    54,    55,     9,    10,    11,    56,    57,    58,
      12,    13,    59,    14,    15,    60,    61,    43,    62,    16,
      78,    79,    63,    64,    65,    67,    17,   160,    18,   162,
     163,   164,   165,    19,    20,    80,    84,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    85,    86,
      32,    33,    34,    35,    36,    37,   206,    92,   119,    70,
      71,    72,    73,    74,   151,   152,   153,   154,   155,   104,
     131,    75,   143,   144,    76,    77,    74,     9,    10,    11,
     200,   201,   202,    12,    13,   146,    14,    15,   147,   148,
     145,   149,    16,   150,   156,    78,    79,   157,   209,    17,
     158,    18,   159,   171,   127,   213,    19,    20,   161,   166,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,   167,   168,    32,    33,    34,    35,    36,    37,     9,
      10,    11,   169,   170,   173,    12,    13,   174,    14,    15,
     184,   122,   175,   183,    16,   185,   123,   124,   125,   126,
     127,    17,   186,    18,   187,   199,   188,   203,    19,    20,
     193,   194,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,   195,   196,    32,    33,    34,    35,    36,
      37,     9,    10,    11,   204,    70,    71,    72,    73,    74,
     197,    15,   198,   210,   205,    66,    16,    75,   214,     0,
      76,    77,     0,    17,     0,    18,     0,     0,     0,     0,
      19,    20,     0,     0,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,     0,     0,    32,    33,    34,
      35,    36,    37,   128,     0,     0,     0,     0,    70,    71,
      72,    73,    74,     0,     0,     0,     0,     0,     0,     0,
      75,   129,     0,    76,    77,     0,    70,    71,    72,    73,
      74,     0,     0,     0,     0,     0,     0,     0,    75,     0,
       0,    76,    77,     0,    78,    79,     0,   130,     0,     0,
       0,     0,    70,    71,    72,    73,    74,     0,     0,     0,
       0,     0,    78,    79,    75,   133,     0,    76,    77,     0,
      70,    71,    72,    73,    74,     0,     0,     0,     0,     0,
       0,     0,    75,     0,     0,    76,    77,     0,    78,    79,
       0,   178,     0,     0,     0,     0,    70,    71,    72,    73,
      74,     0,     0,     0,     0,     0,    78,    79,    75,   179,
       0,    76,    77,     0,    70,    71,    72,    73,    74,     0,
       0,     0,     0,     0,     0,     0,    75,     0,     0,    76,
      77,     0,    78,    79,     0,   180,     0,     0,     0,     0,
      70,    71,    72,    73,    74,     0,     0,     0,     0,     0,
      78,    79,    75,   181,     0,    76,    77,     0,    70,    71,
      72,    73,    74,     0,     0,     0,     0,     0,     0,     0,
      75,     0,     0,    76,    77,     0,    78,    79,     0,   182,
       0,     0,     0,     0,    70,    71,    72,    73,    74,     0,
       0,     0,     0,     0,    78,    79,    75,     0,   207,    76,
      77,    70,    71,    72,    73,    74,     0,     0,     0,     0,
       0,     0,     0,    75,     0,     0,    76,    77,     0,     0,
      78,    79,     0,     0,   208,     0,     0,    70,    71,    72,
      73,    74,     0,     0,     0,     0,     0,    78,    79,    75,
       0,     0,    76,    77,   132,     0,    70,    71,    72,    73,
      74,   134,     0,    70,    71,    72,    73,    74,    75,     0,
       0,    76,    77,    78,    79,    75,     0,     0,    76,    77,
     135,     0,    70,    71,    72,    73,    74,     0,     0,     0,
       0,     0,    78,    79,    75,     0,     0,    76,    77,    78,
      79,     0,     0,   136,     0,    70,    71,    72,    73,    74,
     137,     0,    70,    71,    72,    73,    74,    75,    78,    79,
      76,    77,     0,     0,    75,     0,     0,    76,    77,     0,
      69,    70,    71,    72,    73,    74,     0,     0,     0,     0,
       0,    78,    79,    75,     0,     0,    76,    77,    78,    79,
       0,     0,     0,   212,    70,    71,    72,    73,    74,   215,
      70,    71,    72,    73,    74,     0,    75,    78,    79,    76,
      77,     0,    75,     0,     0,    76,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      78,    79,     0,     0,     0,     0,    78,    79,    70,    71,
      72,    73,    74,    70,    71,    72,    73,    74,     0,     0,
      75,     0,    88,    76,    77,    75,     0,     0,    76,    77,
       0,    70,    71,    72,    73,    74,    70,    71,    72,    73,
      74,     0,   138,    75,    78,    79,    76,    77,    75,    78,
      79,    76,    77,     0,    70,    71,    72,    73,    74,     0,
     139,     0,     0,     0,     0,   140,    75,    78,    79,    76,
      77,     0,    78,    79,     0,     0,     0,    70,    71,    72,
      73,    74,     0,   141,    70,    71,    72,    73,    74,    75,
      78,    79,    76,    77,     0,     0,    75,     0,     0,    76,
      77,     0,     0,     0,     0,     0,   142,     0,     0,     0,
       0,     0,     0,    78,    79,     0,     0,     0,     0,     0,
      78,    79
};

static const yytype_int16 yycheck[] =
{
      15,     2,     8,     3,     4,    20,   146,     9,    10,    15,
      12,    14,     0,    13,    23,    13,    19,    20,    21,    22,
      23,    14,    31,    17,    18,    34,    35,    24,    31,    44,
      45,    34,    35,    33,    55,    56,    51,    52,    53,    13,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    13,    55,    56,    54,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,   205,    21,    22,    23,    14,
      21,    22,    23,    13,    19,    20,    21,    22,    23,    80,
      31,    29,    30,    34,    35,    13,    31,    13,    13,    34,
      35,    13,    13,    13,     3,     4,     5,    13,    13,    13,
       9,    10,    13,    12,    13,    13,    47,    16,    47,    18,
      55,    56,    47,    47,    47,     4,    25,   132,    27,   134,
     135,   136,   137,    32,    33,    15,     3,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,     3,     3,
      49,    50,    51,    52,    53,    54,    16,     3,    26,    19,
      20,    21,    22,    23,   123,   124,   125,   126,   127,     4,
      14,    31,    13,     4,    34,    35,    23,     3,     4,     5,
     185,   186,   187,     9,    10,    15,    12,    13,     3,     3,
      16,     3,    18,    15,    18,    55,    56,    18,   203,    25,
      18,    27,    18,     3,    23,   210,    32,    33,    18,    18,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    18,    18,    49,    50,    51,    52,    53,    54,     3,
       4,     5,    18,    18,    14,     9,    10,    14,    12,    13,
      16,    14,    14,    14,    18,    15,    19,    20,    21,    22,
      23,    25,    15,    27,    15,     7,    16,    26,    32,    33,
      18,    18,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    18,    18,    49,    50,    51,    52,    53,
      54,     3,     4,     5,     3,    19,    20,    21,    22,    23,
      18,    13,    18,    26,    15,    36,    18,    31,    16,    -1,
      34,    35,    -1,    25,    -1,    27,    -1,    -1,    -1,    -1,
      32,    33,    -1,    -1,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    -1,    -1,    49,    50,    51,
      52,    53,    54,    14,    -1,    -1,    -1,    -1,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    14,    -1,    34,    35,    -1,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    34,    35,    -1,    55,    56,    -1,    14,    -1,    -1,
      -1,    -1,    19,    20,    21,    22,    23,    -1,    -1,    -1,
      -1,    -1,    55,    56,    31,    14,    -1,    34,    35,    -1,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    34,    35,    -1,    55,    56,
      -1,    14,    -1,    -1,    -1,    -1,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    -1,    -1,    55,    56,    31,    14,
      -1,    34,    35,    -1,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    34,
      35,    -1,    55,    56,    -1,    14,    -1,    -1,    -1,    -1,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
      55,    56,    31,    14,    -1,    34,    35,    -1,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    34,    35,    -1,    55,    56,    -1,    14,
      -1,    -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    55,    56,    31,    -1,    16,    34,
      35,    19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    34,    35,    -1,    -1,
      55,    56,    -1,    -1,    16,    -1,    -1,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    -1,    -1,    55,    56,    31,
      -1,    -1,    34,    35,    17,    -1,    19,    20,    21,    22,
      23,    17,    -1,    19,    20,    21,    22,    23,    31,    -1,
      -1,    34,    35,    55,    56,    31,    -1,    -1,    34,    35,
      17,    -1,    19,    20,    21,    22,    23,    -1,    -1,    -1,
      -1,    -1,    55,    56,    31,    -1,    -1,    34,    35,    55,
      56,    -1,    -1,    17,    -1,    19,    20,    21,    22,    23,
      17,    -1,    19,    20,    21,    22,    23,    31,    55,    56,
      34,    35,    -1,    -1,    31,    -1,    -1,    34,    35,    -1,
      18,    19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,
      -1,    55,    56,    31,    -1,    -1,    34,    35,    55,    56,
      -1,    -1,    -1,    18,    19,    20,    21,    22,    23,    18,
      19,    20,    21,    22,    23,    -1,    31,    55,    56,    34,
      35,    -1,    31,    -1,    -1,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    -1,    -1,    -1,    -1,    55,    56,    19,    20,
      21,    22,    23,    19,    20,    21,    22,    23,    -1,    -1,
      31,    -1,    33,    34,    35,    31,    -1,    -1,    34,    35,
      -1,    19,    20,    21,    22,    23,    19,    20,    21,    22,
      23,    -1,    48,    31,    55,    56,    34,    35,    31,    55,
      56,    34,    35,    -1,    19,    20,    21,    22,    23,    -1,
      48,    -1,    -1,    -1,    -1,    48,    31,    55,    56,    34,
      35,    -1,    55,    56,    -1,    -1,    -1,    19,    20,    21,
      22,    23,    -1,    48,    19,    20,    21,    22,    23,    31,
      55,    56,    34,    35,    -1,    -1,    31,    -1,    -1,    34,
      35,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    -1,    -1,    -1,    -1,    -1,
      55,    56
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,    15,    58,    59,    60,    13,    60,     0,     3,
       4,     5,     9,    10,    12,    13,    18,    25,    27,    32,
      33,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    49,    50,    51,    52,    53,    54,    61,    62,
      64,    69,    14,    16,    24,    13,    69,    13,    13,    13,
      69,    13,    13,    13,    13,    13,    13,    13,    13,    13,
      13,    47,    47,    47,    47,    47,    62,     4,    63,    18,
      19,    20,    21,    22,    23,    31,    34,    35,    55,    56,
      15,    69,    69,    14,     3,     3,     3,    70,    33,    69,
      69,    69,     3,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,     4,    17,    18,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    60,    14,    26,
      55,    56,    14,    19,    20,    21,    22,    23,    14,    14,
      14,    14,    17,    14,    17,    17,    17,    17,    48,    48,
      48,    48,    48,    13,     4,    16,    15,     3,     3,     3,
      15,    70,    70,    70,    70,    70,    18,    18,    18,    18,
      69,    18,    69,    69,    69,    69,    18,    18,    18,    18,
      18,     3,    64,    14,    14,    14,    65,    66,    14,    14,
      14,    14,    14,    14,    16,    15,    15,    15,    16,    29,
      30,    67,    68,    18,    18,    18,    18,    18,    18,     7,
      69,    69,    69,    26,     3,    15,    16,    16,    16,    69,
      26,    64,    18,    69,    16,    18
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
# if YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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

/* Line 1455 of yacc.c  */
#line 59 "Tonmoy.y"
    { fprintf(yyout, "\nSuccessful compilation\n"); ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 63 "Tonmoy.y"
    { 
    yyerror("Program must start with 'mfun main()'");
;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 66 "Tonmoy.y"
    { 
    yyerror("Program must start with 'mfun main()'");
;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 78 "Tonmoy.y"
    { printf("\nvalid declaration\n"); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 80 "Tonmoy.y"
    { printf("\n Integer declaration \n"); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 82 "Tonmoy.y"
    { printf("\n Float declaration \n"); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 84 "Tonmoy.y"
    { printf("\n Charecter declaration \n"); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 87 "Tonmoy.y"
    {
						if(look_for_key((yyvsp[(3) - (3)].string)))
						{
							printf("\n%s is already declared\n", (yyvsp[(3) - (3)].string) );
						}
						else
						{
							ins(&st[cnt],(yyvsp[(3) - (3)].string), cnt);
							cnt++;
							
						}
			;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 100 "Tonmoy.y"
    {
				if(look_for_key((yyvsp[(1) - (1)].string)))
				{
					printf("%s is already declared\n", (yyvsp[(1) - (1)].string) );
				}
				else
				{
					ins(&st[cnt],(yyvsp[(1) - (1)].string), cnt);
					cnt++;
				}
			;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 115 "Tonmoy.y"
    {printf("\nSWITCH case.\n");val=(yyvsp[(3) - (7)].number);;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 117 "Tonmoy.y"
    { printf("\nvalue of expression: %d\n", ((yyvsp[(1) - (2)].number))); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 121 "Tonmoy.y"
    {
								if((yyvsp[(3) - (7)].number))
								{
									printf("\nWe are  in IF and the value is: %d\n",((yyvsp[(6) - (7)].string)));
								}
								else
								{
									printf("\ncondition value zero in IF block\n");
								}
							;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 132 "Tonmoy.y"
    {
								 	if((yyvsp[(3) - (11)].number))
									{
										printf("\nWe are in IF: %d\n",(yyvsp[(6) - (11)].string));
									}
									else
									{
										printf("\nWe are in ELSE and the value is : %d\n",(yyvsp[(10) - (11)].string));
									}
								   ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 142 "Tonmoy.y"
    {
	   printf("\nFor Loop :\n");
	   int i;
	   for(i=(yyvsp[(3) - (9)].number);i<(yyvsp[(5) - (9)].number);i++){
	   printf("\nStep : %d and value of expression : %d\n",i,(yyvsp[(8) - (9)].number));
	   }
	;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 151 "Tonmoy.y"
    {
								int i = (yyvsp[(5) - (9)].number),j=0;
								printf("While LOOP:\n");
								while((yyvsp[(3) - (9)].number) < i)
								{
									printf("step: %d value of expression :%d \n" ,j, (yyvsp[(8) - (9)].number));
									i--;
									j++;
								}
								printf("\n");
								
										

						;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 167 "Tonmoy.y"
    {
								int i = (yyvsp[(5) - (9)].number),j=0;
								printf("While LOOP:\n");
								while((yyvsp[(3) - (9)].number) > i)
								{
									printf("step: %d value of expression :%d \n" ,j, (yyvsp[(8) - (9)].number));
									i++;
									j++;
								}
								printf("\n");
								
										

						;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 182 "Tonmoy.y"
    {
		printf("\nFACTORIAL declaration\n");
		int i;
		int f=1;
		for(i=1;i<=(yyvsp[(3) - (5)].number);i++)
		{
			f=f*i;
		}
		printf("FACTORIAL of %d is : %d\n",(yyvsp[(3) - (5)].number),f);
		printf("\n\n");

		;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 194 "Tonmoy.y"
    {
		printf("Odd Even Number declaration \n");

		if((yyvsp[(3) - (5)].number) %2 ==0){
			printf("Number : %d is -> Even\n",(yyvsp[(3) - (5)].number));
		}
		else{
			printf("Number is :%d is -> Odd\n",(yyvsp[(3) - (5)].number));
		}
		printf("\n\n");
		;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 206 "Tonmoy.y"
    {
	  printf("Leap Year declaration \n");
      if(((yyvsp[(3) - (5)].number)%400==0)|| ((yyvsp[(3) - (5)].number)%100!=0 && (yyvsp[(3) - (5)].number)%4==0)){
         printf("%d is a Leap Year",(yyvsp[(3) - (5)].number));}
     else
         {printf("%d is not a Leap Year",(yyvsp[(3) - (5)].number));}
		 printf("\n\n");
      ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 215 "Tonmoy.y"
    {
	  printf("Palindrome Number declaration \n");
	  int temp, remainder, rev=0;
      temp = (yyvsp[(3) - (5)].number);

     while( (yyvsp[(3) - (5)].number)!=0 )
    {
     remainder = (yyvsp[(3) - (5)].number) % 10;
     rev = rev*10 + remainder;
      (yyvsp[(3) - (5)].number)/= 10;
    }
	
    if( rev == temp )
      printf("%d is a palindrome number \n", temp);
    else
      printf("%d isn't a palindrome number.\n", temp);
	  printf("\n\n");
	;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 233 "Tonmoy.y"
    {int power = 1, i;
     printf("Power declaration\n");
	for (i = 1; i <= (yyvsp[(5) - (7)].number); ++i) {
		power = power * (yyvsp[(3) - (7)].number);
	}
    printf("Power is %d",power);
	printf("\n\n");
	;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 241 "Tonmoy.y"
    {  
                                    printf("Prime Number Detection\n");    
                                    int i,j,k;
                                    int p = 0;
                                    for(i=2;i<=(yyvsp[(3) - (5)].number)-1;i++)
                                       {
                                          j = (yyvsp[(3) - (5)].number) % i;
                                          if (j == 0)
                                              {
                                                p=1;
                                                break;
                                              }
                                       }
                                    k=(yyvsp[(3) - (5)].number);
                                    if( k == 1){
                                                 printf("1 is neither prime nor composite.\n");
                                                } 
                                    else{
                                             if(p == 0){
                                                printf("%d is prime.\n",(yyvsp[(3) - (5)].number));
                                                }
                                             else{
                                                  printf("%d is not prime.\n",(yyvsp[(3) - (5)].number));
                                                 }
                                         } 
                                  printf("\n\n");
                              ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 268 "Tonmoy.y"
    {
    
    printf("MAXIMUM Number Detection\n"); 
    
    if((yyvsp[(3) - (7)].number) > (yyvsp[(5) - (7)].number))
    {
        printf("%d is maximum", (yyvsp[(3) - (7)].number));        
    }

    
    if((yyvsp[(5) - (7)].number) > (yyvsp[(3) - (7)].number))
    {
        printf("%d is maximum", (yyvsp[(5) - (7)].number));
    }

    
    if((yyvsp[(3) - (7)].number) == (yyvsp[(5) - (7)].number))
    {
        printf("Both are equal");
    }
    printf("\n\n");
    
    ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 291 "Tonmoy.y"
    {
    
    printf("MINIMUM Number Detection\n"); 
    
    if((yyvsp[(3) - (7)].number) > (yyvsp[(5) - (7)].number))
    {
        printf("%d is minimum", (yyvsp[(5) - (7)].number));        
    }

    
    if((yyvsp[(5) - (7)].number) > (yyvsp[(3) - (7)].number))
    {
        printf("%d is minimum", (yyvsp[(3) - (7)].number));
    }

    
    if((yyvsp[(3) - (7)].number) == (yyvsp[(5) - (7)].number))
    {
        printf("Both are equal");
    }
    printf("\n\n");
    
    ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 314 "Tonmoy.y"
    {
        printf("Entering GCD function\n");
        int num1 = (yyvsp[(3) - (7)].number);
        int num2 = (yyvsp[(5) - (7)].number);
        int gcd = 1;
        int temp;
        
        // Ensure num1 is the larger number
        if (num1 < num2) {
            temp = num1;
            num1 = num2;
            num2 = temp;
        }
        
        // Calculate GCD using Euclidean algorithm
        while (num2 != 0) {
            temp = num2;
            num2 = num1 % num2;
            num1 = temp;
        }
        gcd = num1;
        
        printf("G.C.D of %d and %d is = %d\n\n", (yyvsp[(3) - (7)].number), (yyvsp[(5) - (7)].number), gcd);
    ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 339 "Tonmoy.y"
    {
        int num1 = (yyvsp[(3) - (7)].number);
        int num2 = (yyvsp[(5) - (7)].number);
        int gcd = 1;
        int lcm;
        int temp;
        
        // Store original numbers for later use
        int orig1 = num1;
        int orig2 = num2;
        
        // Calculate GCD using Euclidean algorithm
        while (num2 != 0) {
            temp = num2;
            num2 = num1 % num2;
            num1 = temp;
        }
        gcd = num1;
        
        // Calculate LCM using the formula: LCM = (num1 * num2) / GCD
        lcm = (orig1 * orig2) / gcd;
        
        printf("\nLCM Detection");
        printf("\nLCM of %d and %d is = %d\n", (yyvsp[(3) - (7)].number), (yyvsp[(5) - (7)].number), lcm);
        printf("\n\n");
    ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 366 "Tonmoy.y"
    {printf("Value of sin(%d) is : %lf\n",(yyvsp[(3) - (5)].number),sin((yyvsp[(3) - (5)].number)*3.1416/180));;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 368 "Tonmoy.y"
    {printf("\nValue of cos(%d) is : %lf\n",(yyvsp[(3) - (5)].number),cos((yyvsp[(3) - (5)].number)*3.1416/180));;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 370 "Tonmoy.y"
    {printf("\nValue of tan(%d) is : %lf\n",(yyvsp[(3) - (5)].number),tan((yyvsp[(3) - (5)].number)*3.1416/180));;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 372 "Tonmoy.y"
    {printf("\nValue of Natural Log(%d) is : %lf\n",(yyvsp[(3) - (5)].number),(log((yyvsp[(3) - (5)].number))) );;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 374 "Tonmoy.y"
    {printf("\nSqureRoot of value %d : %lf \n",(yyvsp[(3) - (5)].number),(sqrt((yyvsp[(3) - (5)].number))));;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 376 "Tonmoy.y"
    {
		printf("ARRAY Declaration\n");
		
		printf("Size of the ARRAY = %d\n",(yyvsp[(5) - (7)].number));
	;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 393 "Tonmoy.y"
    {
						
						if(val==(yyvsp[(2) - (5)].number)){
							  track=1;
							  printf("\nCase No : %d  and Result :  %d\n",(yyvsp[(2) - (5)].number),(yyvsp[(4) - (5)].number));
						}
					;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 402 "Tonmoy.y"
    {
						if(track!=1){
							printf("\nResult in default Value is :  %d\n",(yyvsp[(3) - (4)].number));
						}
						track=0;
					;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 412 "Tonmoy.y"
    { (yyval.number) = (yyvsp[(1) - (1)].number); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 413 "Tonmoy.y"
    { (yyval.number) = (yyvsp[(1) - (1)].floating); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 414 "Tonmoy.y"
    { 
        if(look_for_key((yyvsp[(1) - (3)].string))) {
            sym[cnt2].str = (yyvsp[(1) - (3)].string);
            if (sym[cnt2].type == 1) { // If float variable
                sym[cnt2].value.f = (float)(yyvsp[(3) - (3)].number);  // Explicitly cast to float
            } else {
                sym[cnt2].value.i = (yyvsp[(3) - (3)].number);  // Keep as integer
            }
            cnt2++;
            (yyval.number) = (yyvsp[(3) - (3)].number);
            if (sym[cnt2-1].type == 1) {
                printf("\nValue %f assigned to variable %s\n", sym[cnt2-1].value.f, (yyvsp[(1) - (3)].string));
            } else {
                printf("\nValue %d assigned to variable %s\n", sym[cnt2-1].value.i, (yyvsp[(1) - (3)].string));
            }
        } else {
            printf("\nError: Variable %s not declared\n", (yyvsp[(1) - (3)].string));
            (yyval.number) = 0;
        }
    ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 434 "Tonmoy.y"
    {
        int i;
        for(i = 1; i < cnt2; i++) {
            if(strcmp(sym[i].str, (yyvsp[(1) - (1)].string)) == 0) {
                if (sym[i].type == 1) {
                    (yyval.number) = sym[i].value.f;
                } else {
                    (yyval.number) = sym[i].value.i;
                }
                break;
            }
        }
    ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 447 "Tonmoy.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) + (yyvsp[(3) - (3)].number); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 449 "Tonmoy.y"
    {printf("\nAND value = %d & %d = %d \n",(yyvsp[(1) - (3)].number),(yyvsp[(3) - (3)].number),(yyvsp[(1) - (3)].number)&(yyvsp[(3) - (3)].number) );  (yyval.number) = (yyvsp[(1) - (3)].number) & (yyvsp[(3) - (3)].number);;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 451 "Tonmoy.y"
    {printf("\nOR value = %d & %d = %d \n",(yyvsp[(1) - (3)].number),(yyvsp[(3) - (3)].number),(yyvsp[(1) - (3)].number)|(yyvsp[(3) - (3)].number) );  (yyval.number) = (yyvsp[(1) - (3)].number) | (yyvsp[(3) - (3)].number);;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 453 "Tonmoy.y"
    {printf("\nXOR value = %d & %d = %d \n",(yyvsp[(1) - (3)].number),(yyvsp[(3) - (3)].number),(yyvsp[(1) - (3)].number)^(yyvsp[(3) - (3)].number) );  (yyval.number) = (yyvsp[(1) - (3)].number) ^ (yyvsp[(3) - (3)].number);;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 455 "Tonmoy.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) - (yyvsp[(3) - (3)].number); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 457 "Tonmoy.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) * (yyvsp[(3) - (3)].number); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 459 "Tonmoy.y"
    { 	if((yyvsp[(3) - (3)].number)) 
				  		{
				     			(yyval.number) = (yyvsp[(1) - (3)].number) / (yyvsp[(3) - (3)].number);
				  		}
				  		else
				  		{
							(yyval.number) = 0;
							printf("\ndivision by zero\t");
				  		} 	
				    	;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 469 "Tonmoy.y"
    { (yyval.number) = pow((yyvsp[(1) - (3)].number),(yyvsp[(3) - (3)].number)); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 472 "Tonmoy.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) < (yyvsp[(3) - (3)].number); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 474 "Tonmoy.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) > (yyvsp[(3) - (3)].number); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 476 "Tonmoy.y"
    { (yyval.number) = (yyvsp[(2) - (3)].number);	;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 478 "Tonmoy.y"
    { (yyval.number)=(yyvsp[(2) - (3)].number)+1; printf("inc: %d\n",(yyval.number));;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 483 "Tonmoy.y"
    { (yyval.number) = (yyvsp[(1) - (1)].number); val = (yyval.number);	;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 485 "Tonmoy.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) + (yyvsp[(3) - (3)].number); val = (yyval.number); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 487 "Tonmoy.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) - (yyvsp[(3) - (3)].number); val = (yyval.number); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 489 "Tonmoy.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) * (yyvsp[(3) - (3)].number);  val = (yyval.number);;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 491 "Tonmoy.y"
    { 	if((yyvsp[(3) - (3)].number)) 
				  		{
				     			(yyval.number) = (yyvsp[(1) - (3)].number) / (yyvsp[(3) - (3)].number); val = (yyval.number);
				  		}
				  		else
				  		{
							(yyval.number) = 0;
							 val = (yyval.number);
				  		} 	
				    	;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 501 "Tonmoy.y"
    { (yyval.number) = pow((yyvsp[(1) - (3)].number),(yyvsp[(3) - (3)].number));  val = (yyval.number);;}
    break;



/* Line 1455 of yacc.c  */
#line 2397 "Tonmoy.tab.c"
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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



/* Line 1675 of yacc.c  */
#line 505 "Tonmoy.y"

//////////////////////////
void ins(store *p, char *s, int n)
{
  p->str = s;
  p->value.i = n;
  p->type = 0;
}

int look_for_key(char *key)
{
    int i = 1;
    char *name = st[i].str;
    while (name) {
        if (strcmp(name, key) == 0)
            return st[i].value.i;
        name = st[++i].str;
    }
    return 0;
}
/////////////////////////


///////////////////////////


int yywrap()
{
return 1;
}
