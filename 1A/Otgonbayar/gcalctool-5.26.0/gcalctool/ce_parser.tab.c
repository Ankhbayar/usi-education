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

/* Substitute the variable and function names.  */
#define yyparse ceparse
#define yylex   celex
#define yyerror ceerror
#define yylval  celval
#define yychar  cechar
#define yydebug cedebug
#define yynerrs cenerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     tABS = 258,
     tACOS = 259,
     tACOSH = 260,
     tAND = 261,
     tANS = 262,
     tASIN = 263,
     tASINH = 264,
     tATAN = 265,
     tATANH = 266,
     tCBRT = 267,
     tCHS = 268,
     tCLR = 269,
     tCOS = 270,
     tCOSH = 271,
     tEXP = 272,
     tFRAC = 273,
     tINT = 274,
     tLN = 275,
     tLOG10 = 276,
     tLOG2 = 277,
     tMOD = 278,
     tNOT = 279,
     tOR = 280,
     tPI = 281,
     tRAND = 282,
     tRCL = 283,
     tSIN = 284,
     tSINH = 285,
     tSQRT = 286,
     tSTO = 287,
     tTAN = 288,
     tTANH = 289,
     tU16 = 290,
     tU32 = 291,
     tXNOR = 292,
     tXOR = 293,
     tNUMBER = 294,
     tREG = 295,
     NEG = 296,
     MED = 297,
     LNEG = 298,
     POS = 299,
     HIGH = 300
   };
#endif
/* Tokens.  */
#define tABS 258
#define tACOS 259
#define tACOSH 260
#define tAND 261
#define tANS 262
#define tASIN 263
#define tASINH 264
#define tATAN 265
#define tATANH 266
#define tCBRT 267
#define tCHS 268
#define tCLR 269
#define tCOS 270
#define tCOSH 271
#define tEXP 272
#define tFRAC 273
#define tINT 274
#define tLN 275
#define tLOG10 276
#define tLOG2 277
#define tMOD 278
#define tNOT 279
#define tOR 280
#define tPI 281
#define tRAND 282
#define tRCL 283
#define tSIN 284
#define tSINH 285
#define tSQRT 286
#define tSTO 287
#define tTAN 288
#define tTANH 289
#define tU16 290
#define tU32 291
#define tXNOR 292
#define tXOR 293
#define tNUMBER 294
#define tREG 295
#define NEG 296
#define MED 297
#define LNEG 298
#define POS 299
#define HIGH 300




/* Copy the first part of user declarations.  */
#line 1 "./ce_parser.y"


/*  $Header: /cvs/gnome/gcalctool/gcalctool/ce_parser.y,v 1.16 2006/12/08 15:54:43 richb Exp $
 *
 *  Copyright (C) 2004-2008 Sami Pietila
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *           
 *  This program is distributed in the hope that it will be useful, but 
 *  WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU 
 *  General Public License for more details.
 *           
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 *  02111-1307, USA.
 */

#include <stdio.h>
#include <stdlib.h> 
#include <math.h>
#include <errno.h>
#include "calctool.h"
#include "register.h"
#include "display.h"
#include "parser.h"
#include "parser_mac.h"
#include "ce_parser.h"



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
typedef union YYSTYPE
#line 36 "./ce_parser.y"
{
  int int_t[MP_SIZE];
  int integer;
}
/* Line 187 of yacc.c.  */
#line 234 "ce_parser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 247 "ce_parser.tab.c"

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
#define YYFINAL  75
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   233

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  12
/* YYNRULES -- Number of rules.  */
#define YYNRULES  62
/* YYNRULES -- Number of states.  */
#define YYNSTATES  113

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   300

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    50,     2,     2,     2,    51,     2,     2,
      54,    55,    44,    42,     2,    43,     2,    45,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    53,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    49,     2,     2,     2,     2,     2,
       2,    56,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    57,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    46,    47,    48,
      52
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    14,    17,    24,
      30,    32,    34,    36,    38,    42,    46,    50,    54,    58,
      62,    66,    68,    70,    74,    78,    82,    85,    88,    91,
      94,    97,   101,   103,   105,   107,   111,   113,   116,   119,
     122,   125,   127,   130,   133,   136,   139,   142,   145,   148,
     151,   154,   157,   160,   163,   166,   169,   172,   175,   178,
     181,   186,   188
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      59,     0,    -1,    60,    -1,    62,    -1,     1,    -1,    61,
      -1,    60,    61,    -1,    62,    53,    -1,    62,    53,    32,
      54,    39,    55,    -1,    62,    32,    54,    39,    55,    -1,
      14,    -1,    63,    -1,    26,    -1,    64,    -1,    63,    42,
      63,    -1,    63,    43,    63,    -1,    63,    23,    63,    -1,
      63,     6,    63,    -1,    63,    25,    63,    -1,    63,    37,
      63,    -1,    63,    38,    63,    -1,    69,    -1,    68,    -1,
      64,    45,    64,    -1,    64,    44,    64,    -1,    56,    49,
      64,    -1,    64,    50,    -1,    64,    51,    -1,    57,    64,
      -1,    43,    64,    -1,    42,    64,    -1,    64,    49,    64,
      -1,    67,    -1,    66,    -1,    65,    -1,    54,    63,    55,
      -1,    40,    -1,    21,    64,    -1,    22,    64,    -1,    31,
      64,    -1,    20,    64,    -1,    27,    -1,     3,    64,    -1,
      18,    64,    -1,    19,    64,    -1,    13,    64,    -1,    29,
      64,    -1,    15,    64,    -1,    33,    64,    -1,     8,    64,
      -1,     4,    64,    -1,    10,    64,    -1,    30,    64,    -1,
      16,    64,    -1,    34,    64,    -1,     9,    64,    -1,     5,
      64,    -1,    11,    64,    -1,    36,    64,    -1,    35,    64,
      -1,    28,    54,    39,    55,    -1,    39,    -1,     7,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   100,   100,   101,   102,   111,   112,   116,   119,   123,
     127,   133,   134,   138,   140,   141,   143,   153,   159,   165,
     171,   181,   182,   183,   184,   185,   186,   187,   188,   194,
     195,   196,   198,   199,   201,   205,   209,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   236,   237,
     241,   248,   249
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "tABS", "tACOS", "tACOSH", "tAND",
  "tANS", "tASIN", "tASINH", "tATAN", "tATANH", "tCBRT", "tCHS", "tCLR",
  "tCOS", "tCOSH", "tEXP", "tFRAC", "tINT", "tLN", "tLOG10", "tLOG2",
  "tMOD", "tNOT", "tOR", "tPI", "tRAND", "tRCL", "tSIN", "tSINH", "tSQRT",
  "tSTO", "tTAN", "tTANH", "tU16", "tU32", "tXNOR", "tXOR", "tNUMBER",
  "tREG", "NEG", "'+'", "'-'", "'*'", "'/'", "MED", "LNEG", "POS", "'^'",
  "'!'", "'%'", "HIGH", "'='", "'('", "')'", "'e'", "'~'", "$accept",
  "statement", "seq", "udf", "value", "exp", "term", "parenthesis", "reg",
  "func", "rcl", "number", 0
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
     295,   296,    43,    45,    42,    47,   297,   298,   299,    94,
      33,    37,   300,    61,    40,    41,   101,   126
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    59,    59,    60,    60,    61,    61,    61,
      61,    62,    62,    63,    63,    63,    63,    63,    63,    63,
      63,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    65,    66,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      68,    69,    69
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     2,     2,     6,     5,
       1,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     3,     3,     3,     2,     2,     2,     2,
       2,     3,     1,     1,     1,     3,     1,     2,     2,     2,
       2,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       4,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     4,     0,     0,     0,    62,     0,     0,     0,     0,
       0,    10,     0,     0,     0,     0,     0,     0,     0,    12,
      41,     0,     0,     0,     0,     0,     0,     0,     0,    61,
      36,     0,     0,     0,     0,     0,     0,     2,     5,     3,
      11,    13,    34,    33,    32,    22,    21,    42,    50,    56,
      49,    55,    51,    57,    45,    47,    53,    43,    44,    40,
      37,    38,     0,    46,    52,    39,    48,    54,    59,    58,
      30,    29,     0,     0,    28,     1,     6,     0,     0,     7,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,    27,     0,    35,    25,     0,     0,    17,    16,    18,
      19,    20,    14,    15,    24,    23,    31,    60,     0,     0,
       9,     0,     8
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -52
static const yytype_int16 yypact[] =
{
      34,   -52,   144,   144,   144,   -52,   144,   144,   144,   144,
     144,   -52,   144,   144,   144,   144,   144,   144,   144,   -52,
     -52,   -51,   144,   144,   144,   144,   144,   144,   144,   -52,
     -52,   144,   144,   144,   -40,   144,    17,    89,   -52,   -13,
     179,   182,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -21,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
       8,     8,   170,   144,     8,   -52,   -52,   -13,   -27,    -4,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     -52,   -52,   -24,   -52,     8,    -7,   -20,   179,   186,   179,
     179,   179,   186,   186,     8,     8,     8,   -52,   -19,     7,
     -52,    11,   -52
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -52,   -52,   -52,    14,    35,    56,    -2,   -52,   -52,   -52,
     -52,   -52
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      47,    48,    49,    62,    50,    51,    52,    53,    54,    73,
      55,    56,    57,    58,    59,    60,    61,    75,    92,    78,
      63,    64,    65,    66,    67,    68,    69,    95,    96,    70,
      71,   107,   108,    74,   109,     1,   110,     2,     3,     4,
      79,     5,     6,     7,     8,     9,   111,    10,    11,    12,
      13,    76,    14,    15,    16,    17,    18,    89,    90,    91,
      19,    20,    21,    22,    23,    24,   112,    25,    26,    27,
      28,    94,    77,    29,    30,     0,    31,    32,     0,     0,
       0,     0,     0,     0,     0,   104,   105,   106,    33,    72,
      34,    35,     2,     3,     4,     0,     5,     6,     7,     8,
       9,     0,    10,    11,    12,    13,     0,    14,    15,    16,
      17,    18,     0,     0,     0,    19,    20,    21,    22,    23,
      24,     0,    25,    26,    27,    28,     0,     0,    29,    30,
       0,    31,    32,     0,     0,     0,    97,    98,    99,   100,
     101,   102,   103,    33,     0,    34,    35,     2,     3,     4,
       0,     5,     6,     7,     8,     9,     0,    10,     0,    12,
      13,     0,    14,    15,    16,    17,    18,     0,     0,     0,
       0,    20,    21,    22,    23,    24,    80,    25,    26,    27,
      28,     0,     0,    29,    30,    80,    31,    32,     0,     0,
       0,     0,    80,    81,     0,    82,     0,     0,    33,     0,
      34,    35,    81,     0,    82,     0,     0,    83,    84,    81,
       0,    82,    85,    86,     0,     0,    83,    84,     0,     0,
       0,    85,    86,    83,    84,    93,    87,    88,     0,     0,
       0,    89,    90,    91
};

static const yytype_int8 yycheck[] =
{
       2,     3,     4,    54,     6,     7,     8,     9,    10,    49,
      12,    13,    14,    15,    16,    17,    18,     0,    39,    32,
      22,    23,    24,    25,    26,    27,    28,    54,    32,    31,
      32,    55,    39,    35,    54,     1,    55,     3,     4,     5,
      53,     7,     8,     9,    10,    11,    39,    13,    14,    15,
      16,    37,    18,    19,    20,    21,    22,    49,    50,    51,
      26,    27,    28,    29,    30,    31,    55,    33,    34,    35,
      36,    73,    37,    39,    40,    -1,    42,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    88,    89,    54,    33,
      56,    57,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    26,    27,    28,    29,    30,
      31,    -1,    33,    34,    35,    36,    -1,    -1,    39,    40,
      -1,    42,    43,    -1,    -1,    -1,    80,    81,    82,    83,
      84,    85,    86,    54,    -1,    56,    57,     3,     4,     5,
      -1,     7,     8,     9,    10,    11,    -1,    13,    -1,    15,
      16,    -1,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    31,     6,    33,    34,    35,
      36,    -1,    -1,    39,    40,     6,    42,    43,    -1,    -1,
      -1,    -1,     6,    23,    -1,    25,    -1,    -1,    54,    -1,
      56,    57,    23,    -1,    25,    -1,    -1,    37,    38,    23,
      -1,    25,    42,    43,    -1,    -1,    37,    38,    -1,    -1,
      -1,    42,    43,    37,    38,    55,    44,    45,    -1,    -1,
      -1,    49,    50,    51
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     7,     8,     9,    10,    11,
      13,    14,    15,    16,    18,    19,    20,    21,    22,    26,
      27,    28,    29,    30,    31,    33,    34,    35,    36,    39,
      40,    42,    43,    54,    56,    57,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    54,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    63,    49,    64,     0,    61,    62,    32,    53,
       6,    23,    25,    37,    38,    42,    43,    44,    45,    49,
      50,    51,    39,    55,    64,    54,    32,    63,    63,    63,
      63,    63,    63,    63,    64,    64,    64,    55,    39,    54,
      55,    39,    55
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
        case 3:
#line 101 "./ce_parser.y"
    {ret((yyvsp[(1) - (1)].int_t));;}
    break;

  case 4:
#line 102 "./ce_parser.y"
    {
  yyclearin; 
  reset_ce_tokeniser();
  parser_state.error = -EINVAL; 
  YYABORT;
;}
    break;

  case 7:
#line 116 "./ce_parser.y"
    {
  display_set_number(&v->display, (yyvsp[(1) - (2)].int_t));
  ;}
    break;

  case 8:
#line 119 "./ce_parser.y"
    {
  int val = mp_cast_to_int((yyvsp[(5) - (6)].int_t));
  register_set(val, (yyvsp[(1) - (6)].int_t));
;}
    break;

  case 9:
#line 123 "./ce_parser.y"
    {
  int val = mp_cast_to_int((yyvsp[(4) - (5)].int_t));
  register_set(val, (yyvsp[(1) - (5)].int_t));
;}
    break;

  case 10:
#line 127 "./ce_parser.y"
    {
  display_clear(&v->display);
;}
    break;

  case 11:
#line 133 "./ce_parser.y"
    {cp((yyvsp[(1) - (1)].int_t), (yyval.int_t));;}
    break;

  case 12:
#line 134 "./ce_parser.y"
    {mp_get_pi((yyval.int_t));;}
    break;

  case 13:
#line 138 "./ce_parser.y"
    {cp((yyvsp[(1) - (1)].int_t), (yyval.int_t));;}
    break;

  case 14:
#line 140 "./ce_parser.y"
    {mp_add((yyvsp[(1) - (3)].int_t), (yyvsp[(3) - (3)].int_t), (yyval.int_t));;}
    break;

  case 15:
#line 141 "./ce_parser.y"
    {mp_subtract((yyvsp[(1) - (3)].int_t), (yyvsp[(3) - (3)].int_t), (yyval.int_t));;}
    break;

  case 16:
#line 143 "./ce_parser.y"
    {
    if (!mp_is_integer((yyvsp[(1) - (3)].int_t)) || !mp_is_integer((yyvsp[(3) - (3)].int_t))) {
	parser_state.error = -PARSER_ERR_MODULUSOP;
    } else {
      if (mp_modulus_divide((yyvsp[(1) - (3)].int_t), (yyvsp[(3) - (3)].int_t), (yyval.int_t))) {
        parser_state.error = -EINVAL;
      }			   
    }
;}
    break;

  case 17:
#line 153 "./ce_parser.y"
    {
    if (!mp_is_natural((yyvsp[(1) - (3)].int_t)) || !mp_is_natural((yyvsp[(3) - (3)].int_t))) {
	parser_state.error = -PARSER_ERR_BITWISEOP;
    }
    mp_and((yyvsp[(1) - (3)].int_t), (yyvsp[(3) - (3)].int_t), (yyval.int_t));
;}
    break;

  case 18:
#line 159 "./ce_parser.y"
    {
    if (!mp_is_natural((yyvsp[(1) - (3)].int_t)) || !mp_is_natural((yyvsp[(3) - (3)].int_t))) {
	parser_state.error = -PARSER_ERR_BITWISEOP;
    }
    mp_or((yyvsp[(1) - (3)].int_t), (yyvsp[(3) - (3)].int_t), (yyval.int_t));
;}
    break;

  case 19:
#line 165 "./ce_parser.y"
    {
    if (!mp_is_natural((yyvsp[(1) - (3)].int_t)) || !mp_is_natural((yyvsp[(3) - (3)].int_t))) {
	parser_state.error = -PARSER_ERR_BITWISEOP;
    }
    mp_xnor((yyvsp[(1) - (3)].int_t), (yyvsp[(3) - (3)].int_t), (yyval.int_t));
;}
    break;

  case 20:
#line 171 "./ce_parser.y"
    {
    if (!mp_is_natural((yyvsp[(1) - (3)].int_t)) || !mp_is_natural((yyvsp[(3) - (3)].int_t))) {
	parser_state.error = -PARSER_ERR_BITWISEOP;
    }
    mp_xor((yyvsp[(1) - (3)].int_t), (yyvsp[(3) - (3)].int_t), (yyval.int_t));
;}
    break;

  case 21:
#line 181 "./ce_parser.y"
    {cp((yyvsp[(1) - (1)].int_t), (yyval.int_t));;}
    break;

  case 22:
#line 182 "./ce_parser.y"
    {cp((yyvsp[(1) - (1)].int_t), (yyval.int_t));;}
    break;

  case 23:
#line 183 "./ce_parser.y"
    {mpdiv((yyvsp[(1) - (3)].int_t), (yyvsp[(3) - (3)].int_t), (yyval.int_t));;}
    break;

  case 24:
#line 184 "./ce_parser.y"
    {mpmul((yyvsp[(1) - (3)].int_t), (yyvsp[(3) - (3)].int_t), (yyval.int_t));;}
    break;

  case 25:
#line 185 "./ce_parser.y"
    {mp_epowy((yyvsp[(3) - (3)].int_t), (yyval.int_t));;}
    break;

  case 26:
#line 186 "./ce_parser.y"
    {mp_factorial((yyvsp[(1) - (2)].int_t) ,(yyval.int_t));;}
    break;

  case 27:
#line 187 "./ce_parser.y"
    {mp_percent((yyvsp[(1) - (2)].int_t), (yyval.int_t));;}
    break;

  case 28:
#line 188 "./ce_parser.y"
    {
    if (!mp_is_natural((yyvsp[(2) - (2)].int_t))) {
	parser_state.error = -PARSER_ERR_BITWISEOP;
    }
    mp_not((yyvsp[(2) - (2)].int_t), (yyval.int_t));
;}
    break;

  case 29:
#line 194 "./ce_parser.y"
    {mp_invert_sign((yyvsp[(2) - (2)].int_t), (yyval.int_t));;}
    break;

  case 30:
#line 195 "./ce_parser.y"
    {cp((yyvsp[(2) - (2)].int_t), (yyval.int_t));;}
    break;

  case 31:
#line 196 "./ce_parser.y"
    {mp_xpowy((yyvsp[(1) - (3)].int_t), (yyvsp[(3) - (3)].int_t), (yyval.int_t));;}
    break;

  case 32:
#line 198 "./ce_parser.y"
    {cp((yyvsp[(1) - (1)].int_t), (yyval.int_t));;}
    break;

  case 33:
#line 199 "./ce_parser.y"
    {cp((yyvsp[(1) - (1)].int_t), (yyval.int_t));;}
    break;

  case 34:
#line 201 "./ce_parser.y"
    {cp((yyvsp[(1) - (1)].int_t), (yyval.int_t));;}
    break;

  case 35:
#line 205 "./ce_parser.y"
    {cp((yyvsp[(2) - (3)].int_t), (yyval.int_t));;}
    break;

  case 36:
#line 209 "./ce_parser.y"
    {register_get((yyvsp[(1) - (1)].integer), (yyval.int_t));;}
    break;

  case 37:
#line 213 "./ce_parser.y"
    {mp_logarithm(10, (yyvsp[(2) - (2)].int_t), (yyval.int_t));;}
    break;

  case 38:
#line 214 "./ce_parser.y"
    {mp_logarithm(2, (yyvsp[(2) - (2)].int_t), (yyval.int_t));;}
    break;

  case 39:
#line 215 "./ce_parser.y"
    {mp_sqrt((yyvsp[(2) - (2)].int_t), (yyval.int_t));;}
    break;

  case 40:
#line 216 "./ce_parser.y"
    {mpln((yyvsp[(2) - (2)].int_t), (yyval.int_t));;}
    break;

  case 41:
#line 217 "./ce_parser.y"
    {mp_set_from_random((yyval.int_t));;}
    break;

  case 42:
#line 218 "./ce_parser.y"
    {mp_abs((yyvsp[(2) - (2)].int_t), (yyval.int_t));;}
    break;

  case 43:
#line 219 "./ce_parser.y"
    {mpcmf((yyvsp[(2) - (2)].int_t), (yyval.int_t));;}
    break;

  case 44:
#line 220 "./ce_parser.y"
    {mpcmim((yyvsp[(2) - (2)].int_t), (yyval.int_t));;}
    break;

  case 45:
#line 221 "./ce_parser.y"
    {mp_invert_sign((yyvsp[(2) - (2)].int_t), (yyval.int_t));;}
    break;

  case 46:
#line 223 "./ce_parser.y"
    {to_rad((yyvsp[(2) - (2)].int_t), (yyvsp[(2) - (2)].int_t)); mp_sin((yyvsp[(2) - (2)].int_t), (yyval.int_t));;}
    break;

  case 47:
#line 224 "./ce_parser.y"
    {to_rad((yyvsp[(2) - (2)].int_t), (yyvsp[(2) - (2)].int_t)); mp_cos((yyvsp[(2) - (2)].int_t), (yyval.int_t));;}
    break;

  case 48:
#line 225 "./ce_parser.y"
    {to_rad((yyvsp[(2) - (2)].int_t), (yyvsp[(2) - (2)].int_t)); mp_tan((yyvsp[(2) - (2)].int_t), (yyval.int_t));;}
    break;

  case 49:
#line 226 "./ce_parser.y"
    {mp_asin((yyvsp[(2) - (2)].int_t), (yyval.int_t)); do_trig_typeconv(v->ttype, (yyval.int_t), (yyval.int_t));;}
    break;

  case 50:
#line 227 "./ce_parser.y"
    {mp_acos((yyvsp[(2) - (2)].int_t), (yyval.int_t)); do_trig_typeconv(v->ttype, (yyval.int_t), (yyval.int_t));;}
    break;

  case 51:
#line 228 "./ce_parser.y"
    {mp_atan((yyvsp[(2) - (2)].int_t), (yyval.int_t)); do_trig_typeconv(v->ttype, (yyval.int_t), (yyval.int_t));;}
    break;

  case 52:
#line 229 "./ce_parser.y"
    {mp_sinh((yyvsp[(2) - (2)].int_t), (yyval.int_t));;}
    break;

  case 53:
#line 230 "./ce_parser.y"
    {mp_cosh((yyvsp[(2) - (2)].int_t), (yyval.int_t));;}
    break;

  case 54:
#line 231 "./ce_parser.y"
    {mp_tanh((yyvsp[(2) - (2)].int_t), (yyval.int_t));;}
    break;

  case 55:
#line 232 "./ce_parser.y"
    {mp_asinh((yyvsp[(2) - (2)].int_t), (yyval.int_t));;}
    break;

  case 56:
#line 233 "./ce_parser.y"
    {mp_acosh((yyvsp[(2) - (2)].int_t), (yyval.int_t));;}
    break;

  case 57:
#line 234 "./ce_parser.y"
    {mp_atanh((yyvsp[(2) - (2)].int_t), (yyval.int_t));;}
    break;

  case 58:
#line 236 "./ce_parser.y"
    {mp_mask_u32((yyvsp[(2) - (2)].int_t), (yyval.int_t));;}
    break;

  case 59:
#line 237 "./ce_parser.y"
    {mp_mask_u16((yyvsp[(2) - (2)].int_t), (yyval.int_t));;}
    break;

  case 60:
#line 241 "./ce_parser.y"
    {
    int val = mp_cast_to_int((yyvsp[(3) - (4)].int_t));
    register_get(val, (yyval.int_t));
  ;}
    break;

  case 61:
#line 248 "./ce_parser.y"
    {cp((yyvsp[(1) - (1)].int_t), (yyval.int_t));;}
    break;

  case 62:
#line 249 "./ce_parser.y"
    {
  cp(display_get_answer(&v->display), (yyval.int_t));
;}
    break;


/* Line 1267 of yacc.c.  */
#line 1909 "ce_parser.tab.c"
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


#line 254 "./ce_parser.y"


int ceerror(char *s)
{
  return 0;
}

#if 0

| '(' lexp ')' {cp($2, $$);}

| term term {mpmul($1, $2, $$);}

#endif

