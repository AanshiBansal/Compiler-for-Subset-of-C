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
     NO_ELSE = 258,
     ELSE = 259,
     NE_OP = 260,
     EQ_OP = 261,
     LE_OP = 262,
     GE_OP = 263,
     IDENTIFIER = 264,
     CONSTANT = 265,
     STRING_LITERAL = 266,
     SIZEOF = 267,
     PTR_OP = 268,
     INC_OP = 269,
     DEC_OP = 270,
     LEFT_OP = 271,
     RIGHT_OP = 272,
     AND_OP = 273,
     OR_OP = 274,
     MUL_ASSIGN = 275,
     DIV_ASSIGN = 276,
     MOD_ASSIGN = 277,
     ADD_ASSIGN = 278,
     SUB_ASSIGN = 279,
     LEFT_ASSIGN = 280,
     RIGHT_ASSIGN = 281,
     AND_ASSIGN = 282,
     XOR_ASSIGN = 283,
     OR_ASSIGN = 284,
     TYPEDEF = 285,
     EXTERN = 286,
     STATIC = 287,
     AUTO = 288,
     REGISTER = 289,
     CHAR = 290,
     SHORT = 291,
     INT = 292,
     LONG = 293,
     SIGNED = 294,
     UNSIGNED = 295,
     FLOAT = 296,
     DOUBLE = 297,
     CONST = 298,
     VOLATILE = 299,
     VOID = 300,
     STRUCT = 301,
     UNION = 302,
     ENUM = 303,
     ELLIPSIS = 304,
     CASE = 305,
     DEFAULT = 306,
     IF = 307,
     SWITCH = 308,
     WHILE = 309,
     DO = 310,
     FOR = 311,
     GOTO = 312,
     CONTINUE = 313,
     BREAK = 314,
     RETURN = 315
   };
#endif
/* Tokens.  */
#define NO_ELSE 258
#define ELSE 259
#define NE_OP 260
#define EQ_OP 261
#define LE_OP 262
#define GE_OP 263
#define IDENTIFIER 264
#define CONSTANT 265
#define STRING_LITERAL 266
#define SIZEOF 267
#define PTR_OP 268
#define INC_OP 269
#define DEC_OP 270
#define LEFT_OP 271
#define RIGHT_OP 272
#define AND_OP 273
#define OR_OP 274
#define MUL_ASSIGN 275
#define DIV_ASSIGN 276
#define MOD_ASSIGN 277
#define ADD_ASSIGN 278
#define SUB_ASSIGN 279
#define LEFT_ASSIGN 280
#define RIGHT_ASSIGN 281
#define AND_ASSIGN 282
#define XOR_ASSIGN 283
#define OR_ASSIGN 284
#define TYPEDEF 285
#define EXTERN 286
#define STATIC 287
#define AUTO 288
#define REGISTER 289
#define CHAR 290
#define SHORT 291
#define INT 292
#define LONG 293
#define SIGNED 294
#define UNSIGNED 295
#define FLOAT 296
#define DOUBLE 297
#define CONST 298
#define VOLATILE 299
#define VOID 300
#define STRUCT 301
#define UNION 302
#define ENUM 303
#define ELLIPSIS 304
#define CASE 305
#define DEFAULT 306
#define IF 307
#define SWITCH 308
#define WHILE 309
#define DO 310
#define FOR 311
#define GOTO 312
#define CONTINUE 313
#define BREAK 314
#define RETURN 315




/* Copy the first part of user declarations.  */
#line 1 "parser.y"

	int yylineno;



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
#line 231 "y.tab.c"

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
#define YYFINAL  43
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1225

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  85
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  211
/* YYNRULES -- Number of states.  */
#define YYNSTATES  349

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   315

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    78,     2,     2,     2,    16,    18,     2,
      71,    72,    14,    12,    76,    13,    75,    15,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    81,    82,
       5,     7,     6,    80,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    73,     2,    74,    79,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    83,    17,    84,    77,     2,     2,     2,
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
       8,     9,    10,    11,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    14,    18,    20,
      25,    29,    34,    38,    42,    45,    48,    50,    54,    56,
      59,    62,    65,    68,    73,    75,    77,    79,    81,    83,
      85,    87,    92,    94,    98,   102,   106,   108,   112,   116,
     118,   122,   126,   128,   132,   136,   140,   144,   146,   150,
     154,   156,   160,   162,   166,   168,   172,   174,   178,   180,
     184,   186,   192,   194,   198,   200,   202,   204,   206,   208,
     210,   212,   214,   216,   218,   220,   222,   226,   228,   231,
     235,   237,   240,   242,   245,   247,   250,   252,   256,   258,
     262,   264,   266,   268,   270,   272,   274,   276,   278,   280,
     282,   284,   286,   288,   290,   292,   294,   300,   305,   308,
     310,   312,   314,   317,   321,   324,   326,   329,   331,   333,
     337,   339,   342,   346,   351,   357,   360,   362,   366,   368,
     372,   374,   376,   379,   381,   383,   387,   392,   396,   401,
     406,   410,   412,   415,   418,   422,   424,   427,   429,   433,
     435,   439,   442,   445,   447,   449,   453,   455,   458,   460,
     462,   465,   469,   472,   476,   480,   485,   488,   492,   496,
     501,   503,   507,   512,   514,   518,   520,   522,   524,   526,
     528,   530,   534,   539,   543,   546,   550,   554,   559,   561,
     564,   566,   569,   571,   574,   580,   588,   594,   600,   608,
     615,   623,   627,   630,   633,   636,   640,   642,   644,   649,
     653,   657
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      86,     0,    -1,   147,    -1,    86,   147,    -1,    19,    -1,
      20,    -1,    21,    -1,    71,   106,    72,    -1,    87,    -1,
      88,    73,   106,    74,    -1,    88,    71,    72,    -1,    88,
      71,    89,    72,    -1,    88,    75,    19,    -1,    88,    23,
      19,    -1,    88,    24,    -1,    88,    25,    -1,   104,    -1,
      89,    76,   104,    -1,    88,    -1,    24,    90,    -1,    25,
      90,    -1,    91,    92,    -1,    22,    90,    -1,    22,    71,
     133,    72,    -1,    18,    -1,    14,    -1,    12,    -1,    13,
      -1,    77,    -1,    78,    -1,    90,    -1,    71,   133,    72,
      92,    -1,    92,    -1,    93,    14,    92,    -1,    93,    15,
      92,    -1,    93,    16,    92,    -1,    93,    -1,    94,    12,
      93,    -1,    94,    13,    93,    -1,    94,    -1,    95,    26,
      94,    -1,    95,    27,    94,    -1,    95,    -1,    96,     5,
      95,    -1,    96,     6,    95,    -1,    96,    10,    95,    -1,
      96,    11,    95,    -1,    96,    -1,    97,     9,    96,    -1,
      97,     8,    96,    -1,    97,    -1,    98,    18,    97,    -1,
      98,    -1,    99,    79,    98,    -1,    99,    -1,   100,    17,
      99,    -1,   100,    -1,   101,    28,   100,    -1,   101,    -1,
     102,    29,   101,    -1,   102,    -1,   102,    80,   106,    81,
     103,    -1,   103,    -1,    90,   105,   104,    -1,     7,    -1,
      30,    -1,    31,    -1,    32,    -1,    33,    -1,    34,    -1,
      35,    -1,    36,    -1,    37,    -1,    38,    -1,    39,    -1,
     104,    -1,   106,    76,   104,    -1,   103,    -1,   109,    82,
      -1,   109,   110,    82,    -1,   112,    -1,   112,   109,    -1,
     113,    -1,   113,   109,    -1,   124,    -1,   124,   109,    -1,
     111,    -1,   110,    76,   111,    -1,   125,    -1,   125,     7,
     136,    -1,    40,    -1,    41,    -1,    42,    -1,    43,    -1,
      44,    -1,    55,    -1,    45,    -1,    46,    -1,    47,    -1,
      48,    -1,    51,    -1,    52,    -1,    49,    -1,    50,    -1,
     114,    -1,   121,    -1,   115,    19,    83,   116,    84,    -1,
     115,    83,   116,    84,    -1,   115,    19,    -1,    56,    -1,
      57,    -1,   117,    -1,   116,   117,    -1,   118,   119,    82,
      -1,   113,   118,    -1,   113,    -1,   124,   118,    -1,   124,
      -1,   120,    -1,   119,    76,   120,    -1,   125,    -1,    81,
     107,    -1,   125,    81,   107,    -1,    58,    83,   122,    84,
      -1,    58,    19,    83,   122,    84,    -1,    58,    19,    -1,
     123,    -1,   122,    76,   123,    -1,    19,    -1,    19,     7,
     107,    -1,    53,    -1,    54,    -1,   127,   126,    -1,   126,
      -1,    19,    -1,    71,   125,    72,    -1,   126,    73,   107,
      74,    -1,   126,    73,    74,    -1,   126,    71,   129,    72,
      -1,   126,    71,   132,    72,    -1,   126,    71,    72,    -1,
      14,    -1,    14,   128,    -1,    14,   127,    -1,    14,   128,
     127,    -1,   124,    -1,   128,   124,    -1,   130,    -1,   130,
      76,    59,    -1,   131,    -1,   130,    76,   131,    -1,   109,
     125,    -1,   109,   134,    -1,   109,    -1,    19,    -1,   132,
      76,    19,    -1,   118,    -1,   118,   134,    -1,   127,    -1,
     135,    -1,   127,   135,    -1,    71,   134,    72,    -1,    73,
      74,    -1,    73,   107,    74,    -1,   135,    73,    74,    -1,
     135,    73,   107,    74,    -1,    71,    72,    -1,    71,   129,
      72,    -1,   135,    71,    72,    -1,   135,    71,   129,    72,
      -1,   104,    -1,    83,   137,    84,    -1,    83,   137,    76,
      84,    -1,   136,    -1,   137,    76,   136,    -1,   139,    -1,
     140,    -1,   143,    -1,   144,    -1,   145,    -1,   146,    -1,
      19,    81,   138,    -1,    60,   107,    81,   138,    -1,    61,
      81,   138,    -1,    83,    84,    -1,    83,   142,    84,    -1,
      83,   141,    84,    -1,    83,   141,   142,    84,    -1,   108,
      -1,   141,   108,    -1,   138,    -1,   142,   138,    -1,    82,
      -1,   106,    82,    -1,    62,    71,   106,    72,   138,    -1,
      62,    71,   106,    72,   138,     4,   138,    -1,    63,    71,
     106,    72,   138,    -1,    64,    71,   106,    72,   138,    -1,
      65,   138,    64,    71,   106,    72,    82,    -1,    66,    71,
     143,   143,    72,   138,    -1,    66,    71,   143,   143,   106,
      72,   138,    -1,    67,    19,    82,    -1,    68,    82,    -1,
      69,    82,    -1,    70,    82,    -1,    70,   106,    82,    -1,
     148,    -1,   108,    -1,   109,   125,   141,   140,    -1,   109,
     125,   140,    -1,   125,   141,   140,    -1,   125,   140,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    28,    28,    29,    33,    34,    35,    36,    40,    41,
      42,    43,    44,    45,    46,    47,    51,    52,    56,    57,
      58,    59,    60,    61,    65,    66,    67,    68,    69,    70,
      74,    75,    79,    80,    81,    82,    86,    87,    88,    92,
      93,    94,    98,    99,   100,   101,   102,   106,   107,   108,
     112,   113,   117,   118,   122,   123,   127,   128,   132,   133,
     137,   138,   142,   143,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   161,   162,   166,   170,   171,
     175,   176,   177,   178,   179,   180,   184,   185,   189,   190,
     194,   195,   196,   197,   198,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   216,   217,   218,   222,
     223,   227,   228,   232,   236,   237,   238,   239,   243,   244,
     248,   249,   250,   254,   255,   256,   260,   261,   265,   266,
     270,   271,   275,   276,   280,   281,   282,   283,   284,   285,
     286,   290,   291,   292,   293,   297,   298,   303,   304,   308,
     309,   313,   314,   315,   319,   320,   324,   325,   329,   330,
     331,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     347,   348,   349,   353,   354,   358,   359,   360,   361,   362,
     363,   367,   368,   369,   373,   374,   375,   376,   380,   381,
     385,   386,   390,   391,   395,   396,   397,   401,   402,   403,
     404,   408,   409,   410,   411,   412,   418,   419,   423,   424,
     425,   426
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NO_ELSE", "ELSE", "'<'", "'>'", "'='",
  "NE_OP", "EQ_OP", "LE_OP", "GE_OP", "'+'", "'-'", "'*'", "'/'", "'%'",
  "'|'", "'&'", "IDENTIFIER", "CONSTANT", "STRING_LITERAL", "SIZEOF",
  "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP", "AND_OP", "OR_OP",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
  "TYPEDEF", "EXTERN", "STATIC", "AUTO", "REGISTER", "CHAR", "SHORT",
  "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "CONST",
  "VOLATILE", "VOID", "STRUCT", "UNION", "ENUM", "ELLIPSIS", "CASE",
  "DEFAULT", "IF", "SWITCH", "WHILE", "DO", "FOR", "GOTO", "CONTINUE",
  "BREAK", "RETURN", "'('", "')'", "'['", "']'", "'.'", "','", "'~'",
  "'!'", "'^'", "'?'", "':'", "';'", "'{'", "'}'", "$accept", "begin",
  "primary_expression", "postfix_expression", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "statement", "labeled_statement",
  "compound_statement", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "external_declaration", "function_definition", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,    60,    62,    61,   260,   261,
     262,   263,    43,    45,    42,    47,    37,   124,    38,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,    40,    41,    91,    93,    46,    44,   126,    33,    94,
      63,    58,    59,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    85,    86,    86,    87,    87,    87,    87,    88,    88,
      88,    88,    88,    88,    88,    88,    89,    89,    90,    90,
      90,    90,    90,    90,    91,    91,    91,    91,    91,    91,
      92,    92,    93,    93,    93,    93,    94,    94,    94,    95,
      95,    95,    96,    96,    96,    96,    96,    97,    97,    97,
      98,    98,    99,    99,   100,   100,   101,   101,   102,   102,
     103,   103,   104,   104,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   106,   106,   107,   108,   108,
     109,   109,   109,   109,   109,   109,   110,   110,   111,   111,
     112,   112,   112,   112,   112,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   114,   114,   114,   115,
     115,   116,   116,   117,   118,   118,   118,   118,   119,   119,
     120,   120,   120,   121,   121,   121,   122,   122,   123,   123,
     124,   124,   125,   125,   126,   126,   126,   126,   126,   126,
     126,   127,   127,   127,   127,   128,   128,   129,   129,   130,
     130,   131,   131,   131,   132,   132,   133,   133,   134,   134,
     134,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     136,   136,   136,   137,   137,   138,   138,   138,   138,   138,
     138,   139,   139,   139,   140,   140,   140,   140,   141,   141,
     142,   142,   143,   143,   144,   144,   144,   145,   145,   145,
     145,   146,   146,   146,   146,   146,   147,   147,   148,   148,
     148,   148
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     1,     4,
       3,     4,     3,     3,     2,     2,     1,     3,     1,     2,
       2,     2,     2,     4,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     5,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     2,     3,
       1,     2,     1,     2,     1,     2,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     4,     2,     1,
       1,     1,     2,     3,     2,     1,     2,     1,     1,     3,
       1,     2,     3,     4,     5,     2,     1,     3,     1,     3,
       1,     1,     2,     1,     1,     3,     4,     3,     4,     4,
       3,     1,     2,     2,     3,     1,     2,     1,     3,     1,
       3,     2,     2,     1,     1,     3,     1,     2,     1,     1,
       2,     3,     2,     3,     3,     4,     2,     3,     3,     4,
       1,     3,     4,     1,     3,     1,     1,     1,     1,     1,
       1,     3,     4,     3,     2,     3,     3,     4,     1,     2,
       1,     2,     1,     2,     5,     7,     5,     5,     7,     6,
       7,     3,     2,     2,     2,     3,     1,     1,     4,     3,
       3,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   141,   134,    90,    91,    92,    93,    94,    96,    97,
      98,    99,   102,   103,   100,   101,   130,   131,    95,   109,
     110,     0,     0,     0,   207,     0,    80,    82,   104,     0,
     105,    84,     0,   133,     0,     2,   206,   145,   143,   142,
     125,     0,     0,     1,     3,    78,     0,    86,    88,    81,
      83,   108,     0,    85,     0,   188,     0,   211,     0,     0,
       0,   132,   146,   144,     0,   128,     0,   126,   135,     0,
      79,     0,   209,     0,     0,   115,     0,   111,     0,   117,
      26,    27,    25,    24,     4,     5,     6,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28,    29,   192,   184,     8,    18,    30,     0,
      32,    36,    39,    42,    47,    50,    52,    54,    56,    58,
      60,    62,    75,     0,   190,   175,   176,     0,     0,   177,
     178,   179,   180,    88,   189,   210,   154,   140,   153,     0,
     147,   149,     0,     4,   137,    30,    77,     0,     0,     0,
       0,   123,    87,     0,   170,    89,   208,     0,   114,   107,
     112,     0,     0,   118,   120,   116,     0,     0,    22,     0,
      19,    20,     0,     0,     0,     0,     0,     0,     0,     0,
     202,   203,   204,     0,     0,   156,     0,     0,    14,    15,
       0,     0,     0,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,     0,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   193,   186,     0,   185,
     191,     0,     0,   151,   158,   152,   159,   138,     0,   139,
       0,   136,   124,   129,   127,   173,     0,   106,   121,     0,
     113,     0,   181,     0,     0,   183,     0,     0,     0,     0,
       0,   201,   205,     7,     0,   158,   157,     0,    13,    10,
       0,    16,     0,    12,    63,    33,    34,    35,    37,    38,
      40,    41,    43,    44,    45,    46,    49,    48,    51,    53,
      55,    57,    59,     0,    76,   187,   166,     0,     0,   162,
       0,   160,     0,     0,   148,   150,   155,     0,   171,   119,
     122,    23,   182,     0,     0,     0,     0,     0,    31,    11,
       0,     9,     0,   167,   161,   163,   168,     0,   164,     0,
     172,   174,   194,   196,   197,     0,     0,     0,    17,    61,
     169,   165,     0,     0,   199,     0,   195,   198,   200
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    23,   106,   107,   270,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     204,   123,   147,    55,    56,    46,    47,    26,    27,    28,
      29,    76,    77,    78,   162,   163,    30,    66,    67,    31,
      32,    33,    34,    39,   297,   140,   141,   142,   186,   298,
     236,   155,   246,   124,   125,   126,    58,   128,   129,   130,
     131,   132,    35,    36
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -213
static const yytype_int16 yypact[] =
{
    1022,   121,  -213,  -213,  -213,  -213,  -213,  -213,  -213,  -213,
    -213,  -213,  -213,  -213,  -213,  -213,  -213,  -213,  -213,  -213,
    -213,   -12,    54,   608,  -213,    -5,  1167,  1167,  -213,    20,
    -213,  1167,  1095,    -1,     5,  -213,  -213,  -213,  -213,   121,
     -21,     9,    15,  -213,  -213,  -213,   -32,  -213,   263,  -213,
    -213,    16,   358,  -213,   310,  -213,    -5,  -213,  1095,  1062,
     742,    -1,  -213,  -213,     9,    95,   -47,  -213,  -213,    54,
    -213,   552,  -213,  1095,   358,   358,   533,  -213,    46,   358,
    -213,  -213,  -213,  -213,    47,  -213,  -213,   851,   879,   879,
     893,    55,    79,   108,   111,   536,   153,   170,   168,   173,
     619,   694,  -213,  -213,  -213,  -213,  -213,   183,   259,   893,
    -213,   231,   197,   215,   182,   244,   209,   180,   246,   241,
      29,  -213,  -213,   -19,  -213,  -213,  -213,   377,   444,  -213,
    -213,  -213,  -213,   264,  -213,  -213,  -213,  -213,    27,   205,
     210,  -213,    72,  -213,  -213,  -213,  -213,   214,     6,   893,
       9,  -213,  -213,   552,  -213,  -213,  -213,   885,  -213,  -213,
    -213,   893,    -7,  -213,   218,  -213,   536,   694,  -213,   893,
    -213,  -213,   220,   536,   893,   893,   893,   261,   656,   245,
    -213,  -213,  -213,    40,   104,     7,   254,   314,  -213,  -213,
     756,   893,   317,  -213,  -213,  -213,  -213,  -213,  -213,  -213,
    -213,  -213,  -213,  -213,   893,  -213,   893,   893,   893,   893,
     893,   893,   893,   893,   893,   893,   893,   893,   893,   893,
     893,   893,   893,   893,   893,   893,  -213,  -213,   469,  -213,
    -213,   932,   770,  -213,    42,  -213,    76,  -213,  1147,  -213,
     318,  -213,  -213,  -213,  -213,  -213,    50,  -213,  -213,    46,
    -213,   893,  -213,   266,   536,  -213,   109,   118,   123,   268,
     656,  -213,  -213,  -213,   977,   145,  -213,   893,  -213,  -213,
     126,  -213,   163,  -213,  -213,  -213,  -213,  -213,   231,   231,
     197,   197,   215,   215,   215,   215,   182,   182,   244,   209,
     180,   246,   241,    61,  -213,  -213,  -213,   269,   270,  -213,
     271,    76,  1114,   784,  -213,  -213,  -213,   201,  -213,  -213,
    -213,  -213,  -213,   536,   536,   536,   893,   818,  -213,  -213,
     893,  -213,   893,  -213,  -213,  -213,  -213,   272,  -213,   273,
    -213,  -213,   336,  -213,  -213,   128,   536,   164,  -213,  -213,
    -213,  -213,   536,   267,  -213,   536,  -213,  -213,  -213
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -213,  -213,  -213,  -213,  -213,   -55,  -213,   -96,    52,    69,
      60,    65,   124,   149,   127,   160,   161,  -213,   -54,   -20,
    -213,   -83,   -60,    56,     0,  -213,   316,  -213,   -27,  -213,
    -213,   309,   -72,   -63,  -213,   137,  -213,   372,   250,    44,
     -14,   -31,     1,  -213,   -58,  -213,   211,  -213,   283,  -118,
    -212,  -134,  -213,   -85,  -213,    73,    84,   324,  -163,  -213,
    -213,  -213,   429,  -213
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      25,   139,    38,    61,   160,   145,   146,    40,    42,     1,
     177,    48,   158,   205,     2,   260,   165,   183,   184,   245,
     235,     1,   301,    25,     2,    75,    49,    50,    65,   150,
     172,    53,   168,   170,   171,   145,   146,   151,   185,    51,
      63,     1,   133,   230,    69,    37,     2,    75,    75,    75,
      70,   154,    75,   301,   145,   133,    24,   225,   223,   138,
       1,     2,    64,   226,   164,     2,    22,   266,     1,   249,
      59,    41,    60,     2,    75,   250,    22,    45,   264,    24,
     232,   252,   150,    62,   184,   160,   184,    68,   255,   243,
     242,   256,   257,   258,   145,   146,    79,   317,   231,    74,
     232,   248,   149,    52,   185,    57,   145,   146,   272,   224,
     275,   276,   277,   231,   134,   232,   225,    22,    79,    79,
      79,    72,   262,    79,   233,    22,   307,   161,   166,   134,
      75,   135,    73,   154,   308,     1,   173,   225,   127,   234,
      75,   293,   322,   230,   239,    79,   156,   302,   240,   303,
     174,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   312,
     271,   318,   300,   331,    16,    17,   263,   145,   146,   175,
     225,   313,   176,   134,   274,   225,   265,   213,   214,   179,
     314,   310,   215,   216,   225,   315,   145,   146,   319,   225,
     343,    79,   320,    61,   225,   294,   187,   188,   189,   209,
     210,    79,   145,    80,    81,    82,   264,    42,   232,    83,
     143,    85,    86,    87,   178,    88,    89,   219,   332,   333,
     334,   138,   234,   335,   337,   164,   345,   321,   138,   225,
     225,   211,   212,   329,   327,   206,   207,   208,   145,   146,
     180,   344,   217,   218,   190,   181,   191,   346,   192,   220,
     348,   278,   279,   221,   138,   265,   193,   145,   339,   222,
      71,    71,   101,   282,   283,   284,   285,   237,   102,   103,
     280,   281,   286,   287,   153,   330,   238,   154,   241,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   251,
     338,   254,   138,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    80,    81,    82,   259,   267,   261,    83,    84,
      85,    86,    87,   268,    88,    89,   273,   306,   311,   316,
     342,   323,   324,   288,   340,   325,    54,   341,   290,   347,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,   289,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   291,   157,   292,   152,   309,   102,   103,    80,
      81,    82,   104,    54,   105,    83,    84,    85,    86,    87,
     244,    88,    89,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,   148,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   305,
     253,   228,    44,     0,   102,   103,    80,    81,    82,   104,
      54,   227,    83,    84,    85,    86,    87,     0,    88,    89,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    80,    81,    82,     0,     0,     0,    83,    84,    85,
      86,    87,     0,    88,    89,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,     0,     0,     0,     0,
       0,   102,   103,     0,     0,     0,   104,    54,   229,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,     0,     0,     0,     0,     0,   102,   103,    80,    81,
      82,   104,    54,   295,    83,    84,    85,    86,    87,     0,
      88,    89,     0,     0,    80,    81,    82,     0,     0,     0,
      83,   143,    85,    86,    87,     0,    88,    89,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,     0,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,    43,     0,
       0,     0,     0,   102,   103,     0,     0,   159,   104,    54,
       0,     0,     1,   101,     0,     0,     0,     2,     0,   102,
     103,    80,    81,    82,     0,   153,     0,    83,   143,    85,
      86,    87,     0,    88,    89,     0,     0,     0,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,    80,    81,
      82,     0,     0,     0,    83,   143,    85,    86,    87,    22,
      88,    89,     0,     0,     0,     0,     0,     0,     0,     0,
     101,     0,     0,     0,     0,     0,   102,   103,     0,     0,
       0,   182,     0,     0,     0,     0,    80,    81,    82,     0,
       0,     0,    83,   143,    85,    86,    87,     0,    88,    89,
       0,     0,     0,     0,     0,     0,     0,   101,     0,     0,
       0,     0,     0,   102,   103,     0,     0,     0,   104,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,    80,    81,    82,     0,     0,     0,
      83,   143,    85,    86,    87,   101,    88,    89,    80,    81,
      82,   102,   103,     0,    83,   143,    85,    86,    87,     0,
      88,    89,    80,    81,    82,     0,     0,     0,    83,   143,
      85,    86,    87,     0,    88,    89,    80,    81,    82,     0,
       0,     0,    83,   143,    85,    86,    87,     0,    88,    89,
       0,     0,     0,   101,     0,     0,   144,     0,     0,   102,
     103,     0,     0,     0,     0,     0,     0,   101,   269,     0,
      80,    81,    82,   102,   103,     0,    83,   143,    85,    86,
      87,   101,    88,    89,   299,     0,     0,   102,   103,     0,
       0,     0,     0,     0,     0,   101,     0,     0,   328,     0,
       0,   102,   103,    80,    81,    82,     0,     0,     0,    83,
     143,    85,    86,    87,     0,    88,    89,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   101,
     336,    80,    81,    82,     0,   102,   103,    83,   143,    85,
      86,    87,     0,    88,    89,    80,    81,    82,     0,     0,
       0,    83,   143,    85,    86,    87,     0,    88,    89,     0,
       0,     0,   167,     0,     0,     0,     0,     0,   102,   103,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     1,     0,     0,     0,
     169,     2,     0,     0,     0,     0,   102,   103,     0,     0,
       0,     0,     0,     0,   101,     0,     0,     0,     0,   247,
     102,   103,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     1,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   231,   296,   232,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     1,     0,     0,     0,
       0,     2,     0,     0,     0,     0,     0,     0,   264,   296,
     232,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,   136,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    22,     0,     0,     0,     0,     0,     0,
       0,     0,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   137,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,     0,    54,     0,
       0,     0,     0,     0,     0,     0,   326,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,   304,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
       0,    59,     1,    34,    76,    60,    60,    19,    22,    14,
      95,    25,    75,   109,    19,   178,    79,   100,   101,   153,
     138,    14,   234,    23,    19,    52,    26,    27,    19,    76,
      90,    31,    87,    88,    89,    90,    90,    84,   101,    19,
      39,    14,    56,   128,    76,     1,    19,    74,    75,    76,
      82,    71,    79,   265,   109,    69,     0,    76,    29,    59,
      14,    19,    83,    82,    78,    19,    71,   185,    14,    76,
      71,    83,    73,    19,   101,    82,    71,    82,    71,    23,
      73,   166,    76,    39,   167,   157,   169,    72,   173,   149,
      84,   174,   175,   176,   149,   149,    52,   260,    71,    83,
      73,   161,     7,    83,   167,    32,   161,   161,   191,    80,
     206,   207,   208,    71,    58,    73,    76,    71,    74,    75,
      76,    48,    82,    79,   138,    71,    76,    81,    81,    73,
     157,    58,    48,   153,    84,    14,    81,    76,    54,   138,
     167,   224,    81,   228,    72,   101,    73,    71,    76,    73,
      71,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   254,
     190,   267,   232,   307,    53,    54,    72,   232,   232,    71,
      76,    72,    71,   127,   204,    76,   185,     5,     6,    19,
      72,   251,    10,    11,    76,    72,   251,   251,    72,    76,
      72,   157,    76,   234,    76,   225,    23,    24,    25,    12,
      13,   167,   267,    12,    13,    14,    71,   231,    73,    18,
      19,    20,    21,    22,    71,    24,    25,    18,   313,   314,
     315,   231,   231,   316,   317,   249,    72,    74,   238,    76,
      76,    26,    27,   303,   302,    14,    15,    16,   303,   303,
      82,   336,     8,     9,    71,    82,    73,   342,    75,    79,
     345,   209,   210,    17,   264,   264,     7,   322,   322,    28,
       7,     7,    71,   213,   214,   215,   216,    72,    77,    78,
     211,   212,   217,   218,    83,    84,    76,   307,    74,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    81,
     320,    81,   302,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    12,    13,    14,    64,    72,    82,    18,    19,
      20,    21,    22,    19,    24,    25,    19,    19,    72,    71,
       4,    72,    72,   219,    72,    74,    83,    74,   221,    82,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,   220,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,   222,    74,   223,    69,   249,    77,    78,    12,
      13,    14,    82,    83,    84,    18,    19,    20,    21,    22,
     150,    24,    25,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    64,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,   238,
     167,   127,    23,    -1,    77,    78,    12,    13,    14,    82,
      83,    84,    18,    19,    20,    21,    22,    -1,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    12,    13,    14,    -1,    -1,    -1,    18,    19,    20,
      21,    22,    -1,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    -1,    -1,    -1,    -1,
      -1,    77,    78,    -1,    -1,    -1,    82,    83,    84,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    -1,    -1,    -1,    -1,    -1,    77,    78,    12,    13,
      14,    82,    83,    84,    18,    19,    20,    21,    22,    -1,
      24,    25,    -1,    -1,    12,    13,    14,    -1,    -1,    -1,
      18,    19,    20,    21,    22,    -1,    24,    25,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    -1,    -1,    -1,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,     0,    -1,
      -1,    -1,    -1,    77,    78,    -1,    -1,    84,    82,    83,
      -1,    -1,    14,    71,    -1,    -1,    -1,    19,    -1,    77,
      78,    12,    13,    14,    -1,    83,    -1,    18,    19,    20,
      21,    22,    -1,    24,    25,    -1,    -1,    -1,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    -1,    12,    13,
      14,    -1,    -1,    -1,    18,    19,    20,    21,    22,    71,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    -1,    -1,    -1,    -1,    77,    78,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    -1,    12,    13,    14,    -1,
      -1,    -1,    18,    19,    20,    21,    22,    -1,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,
      -1,    -1,    -1,    77,    78,    -1,    -1,    -1,    82,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    -1,    12,    13,    14,    -1,    -1,    -1,
      18,    19,    20,    21,    22,    71,    24,    25,    12,    13,
      14,    77,    78,    -1,    18,    19,    20,    21,    22,    -1,
      24,    25,    12,    13,    14,    -1,    -1,    -1,    18,    19,
      20,    21,    22,    -1,    24,    25,    12,    13,    14,    -1,
      -1,    -1,    18,    19,    20,    21,    22,    -1,    24,    25,
      -1,    -1,    -1,    71,    -1,    -1,    74,    -1,    -1,    77,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    71,    72,    -1,
      12,    13,    14,    77,    78,    -1,    18,    19,    20,    21,
      22,    71,    24,    25,    74,    -1,    -1,    77,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    74,    -1,
      -1,    77,    78,    12,    13,    14,    -1,    -1,    -1,    18,
      19,    20,    21,    22,    -1,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      72,    12,    13,    14,    -1,    77,    78,    18,    19,    20,
      21,    22,    -1,    24,    25,    12,    13,    14,    -1,    -1,
      -1,    18,    19,    20,    21,    22,    -1,    24,    25,    -1,
      -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,    77,    78,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    -1,    -1,    14,    -1,    -1,    -1,
      71,    19,    -1,    -1,    -1,    -1,    77,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    84,
      77,    78,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    72,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    14,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    71,    72,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    14,    19,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    71,    86,   108,   109,   112,   113,   114,   115,
     121,   124,   125,   126,   127,   147,   148,   124,   127,   128,
      19,    83,   125,     0,   147,    82,   110,   111,   125,   109,
     109,    19,    83,   109,    83,   108,   109,   140,   141,    71,
      73,   126,   124,   127,    83,    19,   122,   123,    72,    76,
      82,     7,   140,   141,    83,   113,   116,   117,   118,   124,
      12,    13,    14,    18,    19,    20,    21,    22,    24,    25,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    77,    78,    82,    84,    87,    88,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   106,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   125,   108,   140,    19,    72,   109,   129,
     130,   131,   132,    19,    74,    90,   103,   107,   122,     7,
      76,    84,   111,    83,   104,   136,   140,   116,   118,    84,
     117,    81,   119,   120,   125,   118,    81,    71,    90,    71,
      90,    90,   107,    81,    71,    71,    71,   138,    71,    19,
      82,    82,    82,   106,   106,   118,   133,    23,    24,    25,
      71,    73,    75,     7,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,   105,    92,    14,    15,    16,    12,
      13,    26,    27,     5,     6,    10,    11,     8,     9,    18,
      79,    17,    28,    29,    80,    76,    82,    84,   142,    84,
     138,    71,    73,   125,   127,   134,   135,    72,    76,    72,
      76,    74,    84,   107,   123,   136,   137,    84,   107,    76,
      82,    81,   138,   133,    81,   138,   106,   106,   106,    64,
     143,    82,    82,    72,    71,   127,   134,    72,    19,    72,
      89,   104,   106,    19,   104,    92,    92,    92,    93,    93,
      94,    94,    95,    95,    95,    95,    96,    96,    97,    98,
      99,   100,   101,   106,   104,    84,    72,   129,   134,    74,
     107,   135,    71,    73,    59,   131,    19,    76,    84,   120,
     107,    72,   138,    72,    72,    72,    71,   143,    92,    72,
      76,    74,    81,    72,    72,    74,    72,   129,    74,   107,
      84,   136,   138,   138,   138,   106,    72,   106,   104,   103,
      72,    74,     4,    72,   138,    72,   138,    82,   138
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
      
/* Line 1267 of yacc.c.  */
#line 1962 "y.tab.c"
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


#line 429 "parser.y"

#include <stdio.h>
#include "lex.yy.c"

int main(int argc, char *argv[])
{
	yyin = fopen(argv[1], "r");
	if(!yyparse())
		printf("\nParsing complete\n");
	else
		printf("\nParsing failed\n");

	fclose(yyin);
	displayConstTable();
	displaySymbolTable();

	return 0;
}

extern char *yytext;
yyerror(char *s)
{
	//printf("\n %d \n %s\n", "^", column, s);
	printf("\nLine %d : %s\n", yylineno, s);
}
