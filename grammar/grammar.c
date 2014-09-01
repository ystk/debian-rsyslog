/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.5"

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

/* Line 268 of yacc.c  */
#line 29 "grammar.y"

#include "config.h"
#include <stdio.h>
#include <libestr.h>
#include "rainerscript.h"
#include "parserif.h"
#define YYDEBUG 1
extern int yylineno;

/* keep compile rule clean of errors */
extern int yylex(void);
extern int yyerror(char*);


/* Line 268 of yacc.c  */
#line 86 "grammar.c"

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
     NAME = 258,
     FUNC = 259,
     BEGINOBJ = 260,
     ENDOBJ = 261,
     BEGIN_ACTION = 262,
     BEGIN_PROPERTY = 263,
     BEGIN_CONSTANT = 264,
     BEGIN_TPL = 265,
     BEGIN_RULESET = 266,
     STOP = 267,
     SET = 268,
     UNSET = 269,
     CONTINUE = 270,
     CALL = 271,
     LEGACY_ACTION = 272,
     LEGACY_RULESET = 273,
     PRIFILT = 274,
     PROPFILT = 275,
     BSD_TAG_SELECTOR = 276,
     BSD_HOST_SELECTOR = 277,
     IF = 278,
     THEN = 279,
     ELSE = 280,
     OR = 281,
     AND = 282,
     NOT = 283,
     VAR = 284,
     STRING = 285,
     NUMBER = 286,
     CMP_EQ = 287,
     CMP_NE = 288,
     CMP_LE = 289,
     CMP_GE = 290,
     CMP_LT = 291,
     CMP_GT = 292,
     CMP_CONTAINS = 293,
     CMP_CONTAINSI = 294,
     CMP_STARTSWITH = 295,
     CMP_STARTSWITHI = 296,
     UMINUS = 297
   };
#endif
/* Tokens.  */
#define NAME 258
#define FUNC 259
#define BEGINOBJ 260
#define ENDOBJ 261
#define BEGIN_ACTION 262
#define BEGIN_PROPERTY 263
#define BEGIN_CONSTANT 264
#define BEGIN_TPL 265
#define BEGIN_RULESET 266
#define STOP 267
#define SET 268
#define UNSET 269
#define CONTINUE 270
#define CALL 271
#define LEGACY_ACTION 272
#define LEGACY_RULESET 273
#define PRIFILT 274
#define PROPFILT 275
#define BSD_TAG_SELECTOR 276
#define BSD_HOST_SELECTOR 277
#define IF 278
#define THEN 279
#define ELSE 280
#define OR 281
#define AND 282
#define NOT 283
#define VAR 284
#define STRING 285
#define NUMBER 286
#define CMP_EQ 287
#define CMP_NE 288
#define CMP_LE 289
#define CMP_GE 290
#define CMP_LT 291
#define CMP_GT 292
#define CMP_CONTAINS 293
#define CMP_CONTAINSI 294
#define CMP_STARTSWITH 295
#define CMP_STARTSWITHI 296
#define UMINUS 297




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 43 "grammar.y"

	char *s;
	long long n;
	es_str_t *estr;
	enum cnfobjType objType;
	struct cnfobj *obj;
	struct cnfstmt *stmt;
	struct nvlst *nvlst;
	struct objlst *objlst;
	struct cnfexpr *expr;
	struct cnfarray *arr;
	struct cnffunc *func;
	struct cnffparamlst *fparams;



/* Line 293 of yacc.c  */
#line 223 "grammar.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 235 "grammar.c"

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
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
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   305

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  18
/* YYNRULES -- Number of rules.  */
#define YYNRULES  71
/* YYNRULES -- Number of states.  */
#define YYNSTATES  134

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   297

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    47,    44,     2,
      53,    54,    45,    42,    55,    43,     2,    46,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    52,
       2,    51,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    56,     2,    57,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    49,     2,    50,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    48
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     4,     7,    10,    13,    16,    19,    23,
      27,    34,    41,    42,    45,    48,    52,    56,    57,    60,
      64,    66,    68,    70,    73,    75,    80,    87,    93,    97,
     100,   103,   105,   109,   111,   115,   119,   121,   123,   126,
     128,   132,   136,   139,   143,   147,   151,   155,   159,   163,
     167,   171,   175,   179,   183,   187,   191,   195,   199,   203,
     207,   210,   214,   219,   221,   223,   225,   227,   229,   233,
     237,   239
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      59,     0,    -1,    -1,    59,    60,    -1,    59,    68,    -1,
      59,    18,    -1,    59,    21,    -1,    59,    22,    -1,     5,
      64,     6,    -1,    10,    64,     6,    -1,    10,    64,     6,
      49,    61,    50,    -1,    11,    64,     6,    49,    67,    50,
      -1,    -1,    61,    62,    -1,    61,    63,    -1,     8,    64,
       6,    -1,     9,    64,     6,    -1,    -1,    64,    65,    -1,
       3,    51,    66,    -1,    30,    -1,    74,    -1,    68,    -1,
      67,    68,    -1,    70,    -1,    23,    72,    24,    69,    -1,
      23,    72,    24,    69,    25,    69,    -1,    13,    29,    51,
      72,    52,    -1,    14,    29,    52,    -1,    19,    69,    -1,
      20,    69,    -1,    68,    -1,    49,    67,    50,    -1,    71,
      -1,    70,    44,    71,    -1,     7,    64,     6,    -1,    17,
      -1,    12,    -1,    16,     3,    -1,    15,    -1,    72,    27,
      72,    -1,    72,    26,    72,    -1,    28,    72,    -1,    72,
      32,    72,    -1,    72,    33,    72,    -1,    72,    34,    72,
      -1,    72,    35,    72,    -1,    72,    36,    72,    -1,    72,
      37,    72,    -1,    72,    38,    72,    -1,    72,    39,    72,
      -1,    72,    40,    72,    -1,    72,    41,    72,    -1,    72,
      44,    72,    -1,    72,    42,    72,    -1,    72,    43,    72,
      -1,    72,    45,    72,    -1,    72,    46,    72,    -1,    72,
      47,    72,    -1,    53,    72,    54,    -1,    43,    72,    -1,
       4,    53,    54,    -1,     4,    53,    73,    54,    -1,    31,
      -1,    30,    -1,    29,    -1,    74,    -1,    72,    -1,    72,
      55,    73,    -1,    56,    75,    57,    -1,    30,    -1,    75,
      55,    30,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   121,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   133,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   154,   158,   159,   160,
     161,   162,   163,   164,   165,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAME", "FUNC", "BEGINOBJ", "ENDOBJ",
  "BEGIN_ACTION", "BEGIN_PROPERTY", "BEGIN_CONSTANT", "BEGIN_TPL",
  "BEGIN_RULESET", "STOP", "SET", "UNSET", "CONTINUE", "CALL",
  "LEGACY_ACTION", "LEGACY_RULESET", "PRIFILT", "PROPFILT",
  "BSD_TAG_SELECTOR", "BSD_HOST_SELECTOR", "IF", "THEN", "ELSE", "OR",
  "AND", "NOT", "VAR", "STRING", "NUMBER", "CMP_EQ", "CMP_NE", "CMP_LE",
  "CMP_GE", "CMP_LT", "CMP_GT", "CMP_CONTAINS", "CMP_CONTAINSI",
  "CMP_STARTSWITH", "CMP_STARTSWITHI", "'+'", "'-'", "'&'", "'*'", "'/'",
  "'%'", "UMINUS", "'{'", "'}'", "'='", "';'", "'('", "')'", "','", "'['",
  "']'", "$accept", "conf", "obj", "propconst", "property", "constant",
  "nvlst", "nv", "value", "script", "stmt", "block", "actlst", "s_act",
  "expr", "fparams", "array", "arrayelt", 0
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
     295,   296,    43,    45,    38,    42,    47,    37,   297,   123,
     125,    61,    59,    40,    41,    44,    91,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    59,    59,    59,    59,    59,    60,    60,
      60,    60,    61,    61,    61,    62,    63,    64,    64,    65,
      66,    66,    67,    67,    68,    68,    68,    68,    68,    68,
      68,    69,    69,    70,    70,    71,    71,    71,    71,    71,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    73,    73,    74,
      75,    75
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     2,     2,     2,     3,     3,
       6,     6,     0,     2,     2,     3,     3,     0,     2,     3,
       1,     1,     1,     2,     1,     4,     6,     5,     3,     2,
       2,     1,     3,     1,     3,     3,     1,     1,     2,     1,
       3,     3,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     3,     4,     1,     1,     1,     1,     1,     3,     3,
       1,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,    17,    17,    17,    17,    37,     0,     0,
      39,     0,    36,     5,     0,     0,     6,     7,     0,     3,
       4,    24,    33,     0,     0,     0,     0,     0,     0,    38,
       0,    31,    29,    30,     0,     0,    65,    64,    63,     0,
       0,     0,     0,    66,     0,     0,     8,    18,    35,     9,
       0,     0,    28,     0,    22,     0,    42,    60,     0,    70,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      34,     0,    12,     0,     0,    32,    23,    61,    67,     0,
      59,     0,    69,    25,    41,    40,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    54,    55,    53,    56,
      57,    58,    20,    19,    21,     0,     0,    27,     0,    62,
      71,     0,    17,    17,    10,    13,    14,    11,    68,    26,
       0,     0,    15,    16
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,    19,   115,   125,   126,    23,    47,   113,    53,
      31,    32,    21,    22,    88,    89,    43,    60
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -50
static const yytype_int16 yypact[] =
{
     -50,   266,   -50,   -50,   -50,   -50,   -50,   -50,   -11,   -10,
     -50,    22,   -50,   -50,   129,   129,   -50,   -50,    51,   -50,
     -50,     3,   -50,     8,    10,    20,    21,     7,    -2,   -50,
     143,   -50,   -50,   -50,   -13,    51,   -50,   -50,   -50,    51,
      51,    11,   218,   -50,     5,    26,   -50,   -50,   -50,    29,
      35,    51,   -50,    76,   -50,     0,   -50,   -50,   171,   -50,
     -49,   129,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
     -50,   -23,   -50,   143,   194,   -50,   -50,   -50,   147,    31,
     -50,    56,   -50,    27,   258,   258,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    -1,    -1,    -1,   -50,
     -50,   -50,   -50,   -50,   -50,     1,   115,   -50,    51,   -50,
     -50,   129,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
      32,    36,   -50,   -50
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -50,   -50,   -50,   -50,   -50,   -50,    -4,   -50,   -50,    14,
       4,   -12,   -50,    54,    -3,   -18,    24,   -50
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      24,    25,    26,    33,    34,    20,    91,   112,    92,   122,
     123,    45,     4,    45,    46,    42,    48,     7,    27,    28,
      10,    11,    12,    45,    45,    29,    49,    50,    35,    36,
      37,    38,    56,    41,    54,    45,    57,    58,   132,    45,
      55,    59,   133,    39,    77,    78,    79,    44,    84,    93,
      52,   124,   121,    40,    87,    34,    41,    86,    51,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,    81,    82,    35,
      36,    37,    38,     4,    83,   119,   120,    54,     7,     8,
       9,    10,    11,    12,    39,    14,    15,   116,    80,    18,
     128,     0,     0,     0,    40,   114,     0,    41,     0,   129,
      74,    75,    76,    77,    78,    79,     0,     0,   130,   131,
      86,     0,     4,     0,     0,     0,    85,     7,     8,     9,
      10,    11,    12,     0,    14,    15,     4,     0,    18,     0,
       0,     7,     8,     9,    10,    11,    12,     0,    14,    15,
       4,     0,    18,     0,     0,     7,     8,     9,    10,    11,
      12,     0,    14,    15,     0,   127,    18,     0,     0,     0,
       0,     0,     0,    62,    63,     0,     0,     0,    30,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,     0,     0,    62,    63,     0,
       0,     0,   118,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,     0,
      62,    63,     0,     0,     0,    90,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    61,     0,    62,    63,   117,     0,     0,     0,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,     2,     0,     0,     0,
       0,     3,     0,     4,     0,     0,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-50))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int8 yycheck[] =
{
       4,     5,     6,    15,     4,     1,    55,    30,    57,     8,
       9,     3,     7,     3,     6,    18,     6,    12,    29,    29,
      15,    16,    17,     3,     3,     3,     6,     6,    28,    29,
      30,    31,    35,    56,    30,     3,    39,    40,     6,     3,
      53,    30,     6,    43,    45,    46,    47,    44,    51,    61,
      52,    50,    25,    53,    54,     4,    56,    53,    51,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    51,    49,    28,
      29,    30,    31,     7,    49,    54,    30,    83,    12,    13,
      14,    15,    16,    17,    43,    19,    20,    83,    44,    23,
     118,    -1,    -1,    -1,    53,    81,    -1,    56,    -1,   121,
      42,    43,    44,    45,    46,    47,    -1,    -1,   122,   123,
     116,    -1,     7,    -1,    -1,    -1,    50,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,     7,    -1,    23,    -1,
      -1,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
       7,    -1,    23,    -1,    -1,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    -1,    50,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    49,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    -1,    26,    27,    -1,
      -1,    -1,    55,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      26,    27,    -1,    -1,    -1,    54,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    24,    -1,    26,    27,    52,    -1,    -1,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,     0,    -1,    -1,    -1,
      -1,     5,    -1,     7,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    59,     0,     5,     7,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    60,
      68,    70,    71,    64,    64,    64,    64,    29,    29,     3,
      49,    68,    69,    69,     4,    28,    29,    30,    31,    43,
      53,    56,    72,    74,    44,     3,     6,    65,     6,     6,
       6,    51,    52,    67,    68,    53,    72,    72,    72,    30,
      75,    24,    26,    27,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      71,    51,    49,    49,    72,    50,    68,    54,    72,    73,
      54,    55,    57,    69,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    30,    66,    74,    61,    67,    52,    55,    54,
      30,    25,     8,     9,    50,    62,    63,    50,    73,    69,
      64,    64,     6,     6
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
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


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
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

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

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
  if (yypact_value_is_default (yyn))
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
        case 3:

/* Line 1806 of yacc.c  */
#line 122 "grammar.y"
    { cnfDoObj((yyvsp[(2) - (2)].obj)); }
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 123 "grammar.y"
    { cnfDoScript((yyvsp[(2) - (2)].stmt)); }
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 124 "grammar.y"
    { cnfDoCfsysline((yyvsp[(2) - (2)].s)); }
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 125 "grammar.y"
    { cnfDoBSDTag((yyvsp[(2) - (2)].s)); }
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 126 "grammar.y"
    { cnfDoBSDHost((yyvsp[(2) - (2)].s)); }
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 127 "grammar.y"
    { (yyval.obj) = cnfobjNew((yyvsp[(1) - (3)].objType), (yyvsp[(2) - (3)].nvlst)); }
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 128 "grammar.y"
    { (yyval.obj) = cnfobjNew(CNFOBJ_TPL, (yyvsp[(2) - (3)].nvlst)); }
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 130 "grammar.y"
    { (yyval.obj) = cnfobjNew(CNFOBJ_TPL, (yyvsp[(2) - (6)].nvlst));
					  (yyval.obj)->subobjs = (yyvsp[(5) - (6)].objlst);
					}
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 134 "grammar.y"
    { (yyval.obj) = cnfobjNew(CNFOBJ_RULESET, (yyvsp[(2) - (6)].nvlst));
					  (yyval.obj)->script = (yyvsp[(5) - (6)].stmt);
					}
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 137 "grammar.y"
    { (yyval.objlst) = NULL; }
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 138 "grammar.y"
    { (yyval.objlst) = objlstAdd((yyvsp[(1) - (2)].objlst), (yyvsp[(2) - (2)].obj)); }
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 139 "grammar.y"
    { (yyval.objlst) = objlstAdd((yyvsp[(1) - (2)].objlst), (yyvsp[(2) - (2)].obj)); }
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 140 "grammar.y"
    { (yyval.obj) = cnfobjNew(CNFOBJ_PROPERTY, (yyvsp[(2) - (3)].nvlst)); }
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 141 "grammar.y"
    { (yyval.obj) = cnfobjNew(CNFOBJ_CONSTANT, (yyvsp[(2) - (3)].nvlst)); }
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 142 "grammar.y"
    { (yyval.nvlst) = NULL; }
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 143 "grammar.y"
    { (yyvsp[(2) - (2)].nvlst)->next = (yyvsp[(1) - (2)].nvlst); (yyval.nvlst) = (yyvsp[(2) - (2)].nvlst); }
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 144 "grammar.y"
    { (yyval.nvlst) = nvlstSetName((yyvsp[(3) - (3)].nvlst), (yyvsp[(1) - (3)].estr)); }
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 145 "grammar.y"
    { (yyval.nvlst) = nvlstNewStr((yyvsp[(1) - (1)].estr)); }
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 146 "grammar.y"
    { (yyval.nvlst) = nvlstNewArray((yyvsp[(1) - (1)].arr)); }
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 147 "grammar.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); }
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 148 "grammar.y"
    { (yyval.stmt) = scriptAddStmt((yyvsp[(1) - (2)].stmt), (yyvsp[(2) - (2)].stmt)); }
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 149 "grammar.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 150 "grammar.y"
    { (yyval.stmt) = cnfstmtNew(S_IF);
					  (yyval.stmt)->d.s_if.expr = (yyvsp[(2) - (4)].expr);
					  (yyval.stmt)->d.s_if.t_then = (yyvsp[(4) - (4)].stmt);
					  (yyval.stmt)->d.s_if.t_else = NULL; }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 154 "grammar.y"
    { (yyval.stmt) = cnfstmtNew(S_IF);
					  (yyval.stmt)->d.s_if.expr = (yyvsp[(2) - (6)].expr);
					  (yyval.stmt)->d.s_if.t_then = (yyvsp[(4) - (6)].stmt);
					  (yyval.stmt)->d.s_if.t_else = (yyvsp[(6) - (6)].stmt); }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 158 "grammar.y"
    { (yyval.stmt) = cnfstmtNewSet((yyvsp[(2) - (5)].s), (yyvsp[(4) - (5)].expr)); }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 159 "grammar.y"
    { (yyval.stmt) = cnfstmtNewUnset((yyvsp[(2) - (3)].s)); }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 160 "grammar.y"
    { (yyval.stmt) = cnfstmtNewPRIFILT((yyvsp[(1) - (2)].s), (yyvsp[(2) - (2)].stmt)); }
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 161 "grammar.y"
    { (yyval.stmt) = cnfstmtNewPROPFILT((yyvsp[(1) - (2)].s), (yyvsp[(2) - (2)].stmt)); }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 162 "grammar.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 163 "grammar.y"
    { (yyval.stmt) = (yyvsp[(2) - (3)].stmt); }
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 164 "grammar.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 165 "grammar.y"
    { (yyval.stmt) = scriptAddStmt((yyvsp[(1) - (3)].stmt), (yyvsp[(3) - (3)].stmt)); }
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 167 "grammar.y"
    { (yyval.stmt) = cnfstmtNewAct((yyvsp[(2) - (3)].nvlst)); }
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 168 "grammar.y"
    { (yyval.stmt) = cnfstmtNewLegaAct((yyvsp[(1) - (1)].s)); }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 169 "grammar.y"
    { (yyval.stmt) = cnfstmtNew(S_STOP); }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 170 "grammar.y"
    { (yyval.stmt) = cnfstmtNewCall((yyvsp[(2) - (2)].estr)); }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 171 "grammar.y"
    { (yyval.stmt) = cnfstmtNewContinue(); }
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 172 "grammar.y"
    { (yyval.expr) = cnfexprNew(AND, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 173 "grammar.y"
    { (yyval.expr) = cnfexprNew(OR, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 174 "grammar.y"
    { (yyval.expr) = cnfexprNew(NOT, NULL, (yyvsp[(2) - (2)].expr)); }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 175 "grammar.y"
    { (yyval.expr) = cnfexprNew(CMP_EQ, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 176 "grammar.y"
    { (yyval.expr) = cnfexprNew(CMP_NE, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); }
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 177 "grammar.y"
    { (yyval.expr) = cnfexprNew(CMP_LE, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 178 "grammar.y"
    { (yyval.expr) = cnfexprNew(CMP_GE, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); }
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 179 "grammar.y"
    { (yyval.expr) = cnfexprNew(CMP_LT, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); }
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 180 "grammar.y"
    { (yyval.expr) = cnfexprNew(CMP_GT, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 181 "grammar.y"
    { (yyval.expr) = cnfexprNew(CMP_CONTAINS, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 182 "grammar.y"
    { (yyval.expr) = cnfexprNew(CMP_CONTAINSI, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 183 "grammar.y"
    { (yyval.expr) = cnfexprNew(CMP_STARTSWITH, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); }
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 184 "grammar.y"
    { (yyval.expr) = cnfexprNew(CMP_STARTSWITHI, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 185 "grammar.y"
    { (yyval.expr) = cnfexprNew('&', (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); }
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 186 "grammar.y"
    { (yyval.expr) = cnfexprNew('+', (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 187 "grammar.y"
    { (yyval.expr) = cnfexprNew('-', (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 188 "grammar.y"
    { (yyval.expr) = cnfexprNew('*', (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 189 "grammar.y"
    { (yyval.expr) = cnfexprNew('/', (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); }
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 190 "grammar.y"
    { (yyval.expr) = cnfexprNew('%', (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); }
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 191 "grammar.y"
    { (yyval.expr) = (yyvsp[(2) - (3)].expr); }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 192 "grammar.y"
    { (yyval.expr) = cnfexprNew('M', NULL, (yyvsp[(2) - (2)].expr)); }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 193 "grammar.y"
    { (yyval.expr) = (struct cnfexpr*) cnffuncNew((yyvsp[(1) - (3)].estr), NULL); }
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 194 "grammar.y"
    { (yyval.expr) = (struct cnfexpr*) cnffuncNew((yyvsp[(1) - (4)].estr), (yyvsp[(3) - (4)].fparams)); }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 195 "grammar.y"
    { (yyval.expr) = (struct cnfexpr*) cnfnumvalNew((yyvsp[(1) - (1)].n)); }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 196 "grammar.y"
    { (yyval.expr) = (struct cnfexpr*) cnfstringvalNew((yyvsp[(1) - (1)].estr)); }
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 197 "grammar.y"
    { (yyval.expr) = (struct cnfexpr*) cnfvarNew((yyvsp[(1) - (1)].s)); }
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 198 "grammar.y"
    { (yyval.expr) = (struct cnfexpr*) (yyvsp[(1) - (1)].arr); }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 199 "grammar.y"
    { (yyval.fparams) = cnffparamlstNew((yyvsp[(1) - (1)].expr), NULL); }
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 200 "grammar.y"
    { (yyval.fparams) = cnffparamlstNew((yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].fparams)); }
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 201 "grammar.y"
    { (yyval.arr) = (yyvsp[(2) - (3)].arr); }
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 202 "grammar.y"
    { (yyval.arr) = cnfarrayNew((yyvsp[(1) - (1)].estr)); }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 203 "grammar.y"
    { (yyval.arr) = cnfarrayAdd((yyvsp[(1) - (3)].arr), (yyvsp[(3) - (3)].estr)); }
    break;



/* Line 1806 of yacc.c  */
#line 2109 "grammar.c"
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
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



/* Line 2067 of yacc.c  */
#line 205 "grammar.y"

/*
int yyerror(char *s)
{
	printf("parse failure on or before line %d: %s\n", yylineno, s);
	return 0;
}
*/

