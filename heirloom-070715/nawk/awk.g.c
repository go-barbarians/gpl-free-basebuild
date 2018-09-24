/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 29 "awk.g.y" /* yacc.c:339  */

#include "awk.h"
#include <unistd.h>
#include <inttypes.h>
#include <pfmt.h>
int yywrap(void) { return(1); }
#ifndef	DEBUG
#	define	PUTS(x)
#endif
Node	*beginloc = 0, *endloc = 0;
int	infunc	= 0;	/* = 1 if in arglist or body of func */
unsigned char	*curfname = 0;
Node	*arglist = 0;	/* list of args for current function */
static void setfname(Cell *);
static int constnode(Node *);
static unsigned char *strnode(Node *);
static Node *notnull(Node *);
extern	const char illstat[];

extern int	yylex(void);

#line 88 "y.tab.c" /* yacc.c:339  */

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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    FIRSTTOKEN = 258,
    PROGRAM = 259,
    PASTAT = 260,
    PASTAT2 = 261,
    XBEGIN = 262,
    XEND = 263,
    NL = 264,
    ARRAY = 265,
    MATCH = 266,
    NOTMATCH = 267,
    MATCHOP = 268,
    FINAL = 269,
    DOT = 270,
    ALL = 271,
    CCL = 272,
    NCCL = 273,
    CHAR = 274,
    MCHAR = 275,
    OR = 276,
    STAR = 277,
    QUEST = 278,
    PLUS = 279,
    AND = 280,
    BOR = 281,
    APPEND = 282,
    EQ = 283,
    GE = 284,
    GT = 285,
    LE = 286,
    LT = 287,
    NE = 288,
    IN = 289,
    ARG = 290,
    BLTIN = 291,
    BREAK = 292,
    CONTINUE = 293,
    DELETE = 294,
    DO = 295,
    EXIT = 296,
    FOR = 297,
    FUNC = 298,
    SUB = 299,
    GSUB = 300,
    IF = 301,
    INDEX = 302,
    LSUBSTR = 303,
    MATCHFCN = 304,
    NEXT = 305,
    ADD = 306,
    MINUS = 307,
    MULT = 308,
    DIVIDE = 309,
    MOD = 310,
    ASSIGN = 311,
    ASGNOP = 312,
    ADDEQ = 313,
    SUBEQ = 314,
    MULTEQ = 315,
    DIVEQ = 316,
    MODEQ = 317,
    POWEQ = 318,
    PRINT = 319,
    PRINTF = 320,
    SPRINTF = 321,
    ELSE = 322,
    INTEST = 323,
    CONDEXPR = 324,
    POSTINCR = 325,
    PREINCR = 326,
    POSTDECR = 327,
    PREDECR = 328,
    VAR = 329,
    IVAR = 330,
    VARNF = 331,
    CALL = 332,
    NUMBER = 333,
    STRING = 334,
    FIELD = 335,
    REGEXPR = 336,
    GETLINE = 337,
    RETURN = 338,
    SPLIT = 339,
    SUBSTR = 340,
    WHILE = 341,
    CAT = 342,
    NOT = 343,
    UMINUS = 344,
    POWER = 345,
    DECR = 346,
    INCR = 347,
    INDIRECT = 348,
    LASTTOKEN = 349
  };
#endif
/* Tokens.  */
#define FIRSTTOKEN 258
#define PROGRAM 259
#define PASTAT 260
#define PASTAT2 261
#define XBEGIN 262
#define XEND 263
#define NL 264
#define ARRAY 265
#define MATCH 266
#define NOTMATCH 267
#define MATCHOP 268
#define FINAL 269
#define DOT 270
#define ALL 271
#define CCL 272
#define NCCL 273
#define CHAR 274
#define MCHAR 275
#define OR 276
#define STAR 277
#define QUEST 278
#define PLUS 279
#define AND 280
#define BOR 281
#define APPEND 282
#define EQ 283
#define GE 284
#define GT 285
#define LE 286
#define LT 287
#define NE 288
#define IN 289
#define ARG 290
#define BLTIN 291
#define BREAK 292
#define CONTINUE 293
#define DELETE 294
#define DO 295
#define EXIT 296
#define FOR 297
#define FUNC 298
#define SUB 299
#define GSUB 300
#define IF 301
#define INDEX 302
#define LSUBSTR 303
#define MATCHFCN 304
#define NEXT 305
#define ADD 306
#define MINUS 307
#define MULT 308
#define DIVIDE 309
#define MOD 310
#define ASSIGN 311
#define ASGNOP 312
#define ADDEQ 313
#define SUBEQ 314
#define MULTEQ 315
#define DIVEQ 316
#define MODEQ 317
#define POWEQ 318
#define PRINT 319
#define PRINTF 320
#define SPRINTF 321
#define ELSE 322
#define INTEST 323
#define CONDEXPR 324
#define POSTINCR 325
#define PREINCR 326
#define POSTDECR 327
#define PREDECR 328
#define VAR 329
#define IVAR 330
#define VARNF 331
#define CALL 332
#define NUMBER 333
#define STRING 334
#define FIELD 335
#define REGEXPR 336
#define GETLINE 337
#define RETURN 338
#define SPLIT 339
#define SUBSTR 340
#define WHILE 341
#define CAT 342
#define NOT 343
#define UMINUS 344
#define POWER 345
#define DECR 346
#define INCR 347
#define INDIRECT 348
#define LASTTOKEN 349

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 51 "awk.g.y" /* yacc.c:355  */

	Node	*p;
	Cell	*cp;
	intptr_t	i;
	unsigned char	*s;

#line 323 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 340 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4728

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  111
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  178
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  357

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   349

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   103,     2,     2,
      12,    16,   102,   100,    10,   101,     2,    15,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    93,    14,
       2,     2,     2,    92,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    18,     2,    19,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    11,    13,    17,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    94,    95,    96,
      97,    98,    99,   104,   105,   106,   107,   108,   109,   110
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   107,   107,   109,   113,   113,   117,   117,   121,   121,
     125,   125,   129,   129,   133,   135,   137,   142,   143,   147,
     151,   151,   155,   155,   159,   160,   164,   165,   170,   171,
     175,   176,   180,   184,   185,   186,   187,   188,   189,   191,
     193,   193,   198,   199,   203,   204,   208,   209,   211,   213,
     215,   216,   221,   222,   223,   224,   225,   229,   230,   232,
     234,   236,   238,   239,   240,   241,   242,   243,   244,   245,
     250,   251,   252,   253,   254,   255,   256,   260,   261,   265,
     266,   270,   271,   272,   276,   276,   280,   280,   280,   280,
     284,   284,   288,   290,   294,   294,   298,   298,   302,   303,
     304,   305,   306,   307,   308,   309,   313,   313,   317,   318,
     319,   321,   322,   323,   324,   325,   326,   327,   330,   331,
     332,   333,   334,   338,   339,   343,   343,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     371,   374,   375,   377,   382,   383,   385,   387,   389,   390,
     391,   393,   398,   400,   405,   407,   409,   413,   414,   415,
     416,   417,   421,   422,   423,   427,   428,   429,   434
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FIRSTTOKEN", "PROGRAM", "PASTAT",
  "PASTAT2", "XBEGIN", "XEND", "NL", "','", "'{'", "'('", "'|'", "';'",
  "'/'", "')'", "'}'", "'['", "']'", "ARRAY", "MATCH", "NOTMATCH",
  "MATCHOP", "FINAL", "DOT", "ALL", "CCL", "NCCL", "CHAR", "MCHAR", "OR",
  "STAR", "QUEST", "PLUS", "AND", "BOR", "APPEND", "EQ", "GE", "GT", "LE",
  "LT", "NE", "IN", "ARG", "BLTIN", "BREAK", "CONTINUE", "DELETE", "DO",
  "EXIT", "FOR", "FUNC", "SUB", "GSUB", "IF", "INDEX", "LSUBSTR",
  "MATCHFCN", "NEXT", "ADD", "MINUS", "MULT", "DIVIDE", "MOD", "ASSIGN",
  "ASGNOP", "ADDEQ", "SUBEQ", "MULTEQ", "DIVEQ", "MODEQ", "POWEQ", "PRINT",
  "PRINTF", "SPRINTF", "ELSE", "INTEST", "CONDEXPR", "POSTINCR", "PREINCR",
  "POSTDECR", "PREDECR", "VAR", "IVAR", "VARNF", "CALL", "NUMBER",
  "STRING", "FIELD", "REGEXPR", "'?'", "':'", "GETLINE", "RETURN", "SPLIT",
  "SUBSTR", "WHILE", "CAT", "'+'", "'-'", "'*'", "'%'", "NOT", "UMINUS",
  "POWER", "DECR", "INCR", "INDIRECT", "LASTTOKEN", "$accept", "program",
  "and", "bor", "comma", "do", "else", "for", "funcname", "if", "lbrace",
  "nl", "opt_nl", "opt_pst", "opt_simple_stmt", "pas", "pa_pat", "pa_stat",
  "$@1", "pa_stats", "patlist", "ppattern", "pattern", "plist", "pplist",
  "prarg", "print", "pst", "rbrace", "re", "reg_expr", "$@2", "rparen",
  "simple_stmt", "st", "stmt", "stmtlist", "subop", "term", "var",
  "varlist", "varname", "while", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
      44,   123,    40,   124,    59,    47,    41,   125,    91,    93,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,    63,    58,   337,   338,   339,   340,   341,   342,
      43,    45,    42,    37,   343,   344,   345,   346,   347,   348,
     349
};
# endif

#define YYPACT_NINF -262

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-262)))

#define YYTABLE_NINF -136

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-136)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     692,  -262,  -262,  -262,    26,  1661,  -262,   180,  -262,    17,
      17,  -262,  4323,  -262,  -262,    34,    42,  -262,  -262,    50,
      54,    89,  -262,  -262,  -262,    98,  -262,  -262,  -262,     0,
     115,   163,  4619,  4619,  4323,   238,   238,  4619,   758,    69,
    -262,   189,  3562,  -262,  -262,   167,     2,   -47,    20,  -262,
    -262,   758,   758,  2261,    67,   -37,  4084,  -262,  -262,   175,
    4323,  4323,  4323,  4141,  4619,   118,  4323,  4323,  4323,  4619,
      32,    48,    32,   101,  -262,    99,  -262,  -262,  -262,  -262,
    -262,   132,   190,   190,   -13,  -262,  1819,   179,   188,   190,
    -262,  -262,  1819,   194,   826,  -262,  1490,   758,  3562,  4380,
     190,  -262,   892,  1490,  4323,   758,  1661,   117,  4323,  -262,
    -262,  4323,  4323,  4323,  4323,  4323,  4323,   -13,  4323,  1876,
    1933,     2,  4323,  4619,  4619,  4619,  4619,  4619,  4619,  4323,
    -262,  -262,  4323,   958,  1024,  -262,  -262,  1990,   169,  1990,
     200,  -262,    72,  3562,   133,  2654,  2654,    96,  -262,   126,
       2,  4619,  2654,  2654,  2744,    32,  -262,   207,  -262,   132,
     207,  -262,  -262,   201,  1762,  -262,  1547,  4323,  -262,  1762,
    -262,  4323,  -262,   120,   144,  1090,  4323,  4437,  3959,   224,
      38,  -262,     2,   -15,  -262,  -262,  -262,  -262,    17,  1156,
    -262,   238,  3810,  -262,  3810,  3810,  3810,  3810,  3810,  3810,
    -262,  2834,  -262,  3731,  -262,  3652,  2654,   224,    32,    28,
      28,    32,    32,    32,  3562,    49,  -262,  -262,  -262,  3562,
     -13,  3562,  -262,  -262,  1990,  -262,   127,  1990,  1990,  -262,
    -262,     2,    27,  1990,  -262,  -262,  4323,  -262,   230,  -262,
       5,  2924,  -262,  2924,   226,  -262,  1224,  -262,   237,   129,
    -262,  4494,   -13,  4494,  2047,  2104,     2,  2161,  4619,  4619,
    4619,  4494,   758,  -262,  -262,  4323,  1990,  1990,  -262,  -262,
    3562,  -262,     3,   242,  3014,   239,  3104,   240,   148,  2361,
      57,  4198,   -13,   242,   242,  4323,  -262,  -262,  -262,   209,
    4323,  4562,  -262,  -262,  3880,  4266,  4027,  3959,     2,     2,
       2,  3959,  1290,  3562,  2461,  2561,  -262,  -262,    17,  -262,
    -262,  -262,  -262,  -262,  1990,  -262,  1990,  -262,  1604,  3202,
     241,  3292,   -13,   170,  4494,  -262,  -262,   287,  -262,   287,
     758,  3382,   244,  3472,   241,  1604,  1358,   190,  -262,   209,
    3959,   245,   248,  1424,  -262,  -262,  -262,  1358,   241,  -262,
    -262,  -262,  -262,  -262,  -262,  1358,  -262
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     3,    86,    87,     0,    30,     2,    27,     1,     0,
       0,    20,     0,    94,   176,   138,     0,   125,   126,     0,
       0,     0,   175,   170,   177,     0,   154,   159,   169,   148,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    33,
      42,    26,    32,    75,    92,     0,    76,   166,   167,    88,
      89,     0,     0,     0,     0,     0,     0,    17,    18,     0,
       0,     0,     0,     0,     0,   147,     0,     0,     0,     0,
     134,   166,   133,    61,    75,    76,   141,   142,   171,   105,
      21,    24,     0,     0,     0,    10,     0,     0,     0,     0,
      84,    85,     0,     0,     0,   113,     0,     0,   104,    81,
       0,   123,     0,     0,     0,     0,    31,     0,     0,     4,
       6,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    74,     0,     0,     0,     0,     0,     0,     0,     0,
     143,   144,     0,     0,     0,     8,   151,     0,     0,     0,
       0,   136,     0,    44,   172,     0,     0,     0,   139,     0,
     146,     0,     0,     0,     0,   135,    22,    25,   122,    24,
     106,   108,   109,   103,     0,   112,     0,     0,   117,     0,
     119,     0,    11,     0,   115,     0,     0,     0,    79,    82,
     101,    55,    56,   166,   120,    37,   124,   121,    35,     0,
      43,    73,    69,    68,    62,    63,    64,    65,    66,    67,
      70,     0,     5,    60,     7,    59,     0,    92,   130,   127,
     128,   129,   131,   132,    57,     0,    38,    39,     9,    77,
       0,    78,    95,   137,     0,   173,     0,     0,     0,   158,
     140,   145,     0,     0,    23,   107,     0,   111,     0,    29,
     167,     0,   118,     0,     0,    12,     0,    90,   116,     0,
      93,     0,     0,     0,     0,     0,    54,     0,     0,     0,
       0,     0,     0,    34,    72,     0,     0,     0,   168,    71,
      45,    96,     0,    40,     0,    92,     0,    92,     0,     0,
       0,     0,     0,    19,   178,     0,    13,   114,    91,    83,
       0,    51,    50,    52,     0,    49,    48,    80,    98,    99,
     100,    46,     0,    58,     0,     0,   174,    97,     0,   149,
     150,   153,   152,   157,     0,   165,     0,   102,     0,     0,
       0,     0,     0,     0,     0,    36,   161,     0,   160,     0,
       0,     0,    92,     0,     0,     0,     0,     0,    53,     0,
      47,     0,     0,     0,   155,   156,   164,     0,     0,    16,
     110,   163,   162,    41,    15,     0,    14
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -262,  -262,  -144,  -113,   352,  -262,  -262,  -262,  -262,  -262,
       9,   -70,    95,   217,  -261,  -262,   165,   164,  -262,  -262,
     -41,  -224,   247,  -171,  -262,  -262,  -262,  -262,  -262,   -18,
    -107,  -262,  -202,  -164,   -36,   146,   -42,  -262,   393,   -29,
    -262,   -59,  -262
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,   119,   120,   224,    94,   246,    95,    59,    96,
      97,   160,   158,     5,   238,     6,    39,    40,   308,    41,
     142,   178,    98,    54,   179,   180,    99,     7,   248,    43,
      44,    55,   273,   100,   161,   101,   102,    45,    46,    47,
     226,    48,   103
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      65,   193,   239,    71,    71,   249,    76,    77,    71,   133,
     134,   157,   218,    71,    38,   207,    74,   123,    51,    52,
     129,   147,   149,   132,    71,   163,     8,   291,    11,   294,
     295,   296,    14,   297,   254,    71,   218,   301,   132,   283,
      71,   284,    64,   123,    71,    14,    56,   162,   105,   282,
     165,   258,   261,   168,   140,   175,   170,   334,   200,   135,
     130,   131,    60,   189,   184,   255,    61,   135,   268,    71,
     183,    22,    14,    24,   348,   259,   317,   135,   260,   104,
      11,   181,   135,   138,    22,    23,    24,   306,   223,   157,
      28,   215,   130,   131,    71,    71,    71,    71,    71,    71,
     340,    62,   124,   125,   126,   127,   135,   240,   128,    37,
      63,    22,   229,    24,    71,    38,    71,    71,   336,   323,
     275,   277,    71,    71,    71,    71,    57,    66,   237,    58,
     126,   127,   347,   242,   128,    71,   135,   135,   128,   135,
      71,   156,   230,   271,   292,   289,   355,   254,    71,    71,
     254,   254,   254,   254,   239,   130,   131,   254,   135,   250,
     151,   269,   264,    71,   313,    71,    71,    71,    71,    71,
      71,   239,    71,   278,    71,    67,    71,    71,   255,   122,
     135,   255,   255,   255,   255,    71,   339,   144,   255,    49,
      71,   166,    71,   293,    50,   280,   254,   262,     2,   156,
     167,  -135,  -135,     3,   159,   128,   171,   332,    35,    36,
      37,   191,    71,   220,    71,   222,   234,   225,   244,   236,
     302,   245,   183,   320,   183,   183,   183,   255,   183,    71,
      71,    71,   183,   181,   135,   181,   181,   181,   285,   181,
     173,    71,   174,   181,   281,    71,   288,    71,   186,   187,
      71,   307,    42,   322,   235,   310,   312,   271,   106,    53,
     345,   351,    71,   338,   352,    71,    71,    71,    71,   188,
     190,     0,    71,     0,    71,    71,    71,     0,     0,   186,
     186,    73,     0,    14,     0,     0,     0,     0,   343,     0,
      71,     0,    71,     0,     0,   183,   218,     0,   341,     0,
     342,   350,    71,   143,    71,     0,   181,   145,   146,   143,
     143,    71,     0,   152,   153,   154,     0,   330,     0,     0,
       0,   186,    22,    23,    24,     0,     0,     0,    28,     0,
       0,     0,    14,   164,     0,   186,     0,     0,     0,   169,
       0,     0,     0,     0,     0,     0,     0,    37,     0,     0,
       0,    42,     0,    42,     0,   192,     0,     0,   194,   195,
     196,   197,   198,   199,     0,   201,   203,   205,     0,   206,
       0,    22,    23,    24,     0,     0,   214,    28,     0,   143,
       0,     0,     0,     0,   219,     0,   221,     0,     0,     0,
       0,     0,   287,     0,     0,     0,    37,     0,     0,     0,
       0,     0,     0,     0,     0,   137,   139,     0,     0,     0,
       0,     0,     0,     0,   241,     0,     0,     0,   243,     0,
       0,     0,     0,    53,     0,    70,    72,    75,     0,     0,
      78,     0,     0,     0,     0,   121,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   121,     0,   186,     0,
       0,     0,     0,     0,     0,     0,     0,   150,     0,     0,
       0,     0,   155,     0,     0,     0,   121,     0,     0,     0,
       0,   270,     0,     0,   274,   276,     0,     0,     0,     0,
     279,     0,   349,   143,     0,     0,     0,     0,     0,   186,
       0,   121,   182,   354,     0,     0,     0,   227,   228,     0,
       0,   356,     0,     0,   232,   233,     0,     0,     0,     0,
       0,     0,   303,   304,   305,     0,   208,   209,   210,   211,
     212,   213,     0,     0,     0,     0,     0,     0,   319,     0,
       0,   257,   321,     0,     0,     0,   121,    53,   121,   121,
       0,     0,     0,     0,   231,   121,   121,   121,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   121,   266,   267,
       0,   331,   121,   333,     0,     0,     0,     0,     0,     0,
     155,   256,     0,     0,     0,     0,     0,     0,   272,     0,
       0,     0,     0,     0,     0,   121,     0,   121,   121,   121,
     121,   121,   121,     0,   121,     0,   121,     0,   121,   121,
       0,   139,     0,     0,     0,     0,     0,   121,     0,     0,
       0,     0,   121,     0,   121,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     314,   316,     0,     0,   121,     0,   121,     0,     0,     0,
       0,     0,     0,     0,   182,     0,   182,   182,   182,     0,
     182,   298,   299,   300,   182,     0,   327,   329,     0,     0,
       0,     0,     0,   121,     0,     0,     0,   121,     0,   121,
       0,     0,   121,     0,     0,   139,     0,     0,     0,     0,
       0,     0,     0,     0,   256,     0,     0,   256,   256,   256,
     256,     0,   -26,     1,   256,     0,   121,   121,   121,   -26,
     -26,     2,     0,   -26,   -26,     0,     3,   -26,     0,     0,
       0,     0,   121,     0,   121,     0,     0,   182,     0,     0,
       0,     0,     0,     0,   121,     0,   121,     0,     0,     0,
       0,     0,     0,   256,     0,     0,     0,   -26,   -26,     0,
       0,     0,     0,     0,     0,   -26,   -26,   -26,     0,   -26,
       0,   -26,     0,     0,     0,     0,     0,     0,     0,    79,
       0,     0,     0,     0,     0,     0,     0,    80,   -26,    11,
      12,     0,    81,    13,     0,     0,   -26,   -26,   -26,   -26,
     -26,   -26,   -26,     0,     0,     0,   -26,     0,   -26,   -26,
       0,     0,   -26,   -26,     0,     0,   -26,     0,     0,   -26,
     -26,   -26,     0,    14,    15,    82,    83,    84,    85,    86,
      87,     0,    17,    18,    88,    19,     0,    20,    89,     0,
       0,     0,     0,     0,     0,     0,     0,    79,     0,     0,
       0,     0,    90,    91,    21,   172,     0,    11,    12,     0,
      81,    13,    22,    23,    24,    25,    26,    27,    28,     0,
       0,     0,    29,    92,    30,    31,    93,     0,    32,    33,
       0,     0,    34,     0,     0,    35,    36,    37,     0,     0,
       0,    14,    15,    82,    83,    84,    85,    86,    87,     0,
      17,    18,    88,    19,     0,    20,    89,     0,     0,     0,
       0,     0,     0,    79,     0,     0,     0,     0,     0,     0,
      90,    91,    21,    11,    12,     0,    81,    13,     0,   185,
      22,    23,    24,    25,    26,    27,    28,     0,     0,     0,
      29,    92,    30,    31,    93,     0,    32,    33,     0,     0,
      34,     0,     0,    35,    36,    37,     0,    14,    15,    82,
      83,    84,    85,    86,    87,     0,    17,    18,    88,    19,
       0,    20,    89,     0,     0,     0,     0,     0,     0,    79,
       0,     0,     0,     0,     0,     0,    90,    91,    21,    11,
      12,     0,    81,    13,     0,   216,    22,    23,    24,    25,
      26,    27,    28,     0,     0,     0,    29,    92,    30,    31,
      93,     0,    32,    33,     0,     0,    34,     0,     0,    35,
      36,    37,     0,    14,    15,    82,    83,    84,    85,    86,
      87,     0,    17,    18,    88,    19,     0,    20,    89,     0,
       0,     0,     0,     0,     0,    79,     0,     0,     0,     0,
       0,     0,    90,    91,    21,    11,    12,     0,    81,    13,
       0,   217,    22,    23,    24,    25,    26,    27,    28,     0,
       0,     0,    29,    92,    30,    31,    93,     0,    32,    33,
       0,     0,    34,     0,     0,    35,    36,    37,     0,    14,
      15,    82,    83,    84,    85,    86,    87,     0,    17,    18,
      88,    19,     0,    20,    89,     0,     0,     0,     0,     0,
       0,    79,     0,     0,     0,     0,     0,     0,    90,    91,
      21,    11,    12,     0,    81,    13,     0,   247,    22,    23,
      24,    25,    26,    27,    28,     0,     0,     0,    29,    92,
      30,    31,    93,     0,    32,    33,     0,     0,    34,     0,
       0,    35,    36,    37,     0,    14,    15,    82,    83,    84,
      85,    86,    87,     0,    17,    18,    88,    19,     0,    20,
      89,     0,     0,     0,     0,     0,     0,    79,     0,     0,
       0,     0,     0,     0,    90,    91,    21,    11,    12,     0,
      81,    13,     0,   263,    22,    23,    24,    25,    26,    27,
      28,     0,     0,     0,    29,    92,    30,    31,    93,     0,
      32,    33,     0,     0,    34,     0,     0,    35,    36,    37,
       0,    14,    15,    82,    83,    84,    85,    86,    87,     0,
      17,    18,    88,    19,     0,    20,    89,     0,     0,     0,
       0,     0,     0,     0,     0,    79,     0,     0,     0,     0,
      90,    91,    21,   286,     0,    11,    12,     0,    81,    13,
      22,    23,    24,    25,    26,    27,    28,     0,     0,     0,
      29,    92,    30,    31,    93,     0,    32,    33,     0,     0,
      34,     0,     0,    35,    36,    37,     0,     0,     0,    14,
      15,    82,    83,    84,    85,    86,    87,     0,    17,    18,
      88,    19,     0,    20,    89,     0,     0,     0,     0,     0,
       0,    79,     0,     0,     0,     0,     0,     0,    90,    91,
      21,    11,    12,     0,    81,    13,     0,   325,    22,    23,
      24,    25,    26,    27,    28,     0,     0,     0,    29,    92,
      30,    31,    93,     0,    32,    33,     0,     0,    34,     0,
       0,    35,    36,    37,     0,    14,    15,    82,    83,    84,
      85,    86,    87,     0,    17,    18,    88,    19,     0,    20,
      89,     0,     0,     0,     0,     0,     0,     0,     0,    79,
       0,     0,     0,     0,    90,    91,    21,   307,     0,    11,
      12,     0,    81,    13,    22,    23,    24,    25,    26,    27,
      28,     0,     0,     0,    29,    92,    30,    31,    93,     0,
      32,    33,     0,     0,    34,     0,     0,    35,    36,    37,
       0,     0,     0,    14,    15,    82,    83,    84,    85,    86,
      87,     0,    17,    18,    88,    19,     0,    20,    89,     0,
       0,     0,     0,     0,     0,    79,     0,     0,     0,     0,
       0,     0,    90,    91,    21,    11,    12,     0,    81,    13,
       0,   353,    22,    23,    24,    25,    26,    27,    28,     0,
       0,     0,    29,    92,    30,    31,    93,     0,    32,    33,
       0,     0,    34,     0,     0,    35,    36,    37,     0,    14,
      15,    82,    83,    84,    85,    86,    87,     0,    17,    18,
      88,    19,     0,    20,    89,     0,     0,     0,     0,     0,
       0,    79,     0,     0,     0,     0,     0,     0,    90,    91,
      21,    11,    12,     0,    81,    13,     0,     0,    22,    23,
      24,    25,    26,    27,    28,     0,     0,     0,    29,    92,
      30,    31,    93,     0,    32,    33,     0,     0,    34,     0,
       0,    35,    36,    37,     0,    14,    15,    82,    83,    84,
      85,    86,    87,     0,    17,    18,    88,    19,    79,    20,
      89,     0,     0,     0,     0,     0,     0,     0,     0,    12,
       0,   -28,    13,     0,    90,    91,    21,     0,     0,     0,
       0,     0,     0,     0,    22,    23,    24,    25,    26,    27,
      28,     0,     0,     0,    29,    92,    30,    31,    93,     0,
      32,    33,    14,    15,    34,     0,    84,    35,    36,    37,
       0,    17,    18,     0,    19,    79,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,     0,     0,    13,
     -28,    90,    91,    21,     0,     0,     0,     0,     0,     0,
       0,    22,    23,    24,    25,    26,    27,    28,     0,     0,
       0,    29,     0,    30,    31,     0,     0,    32,    33,    14,
      15,    34,     0,    84,    35,    36,    37,     0,    17,    18,
       0,    19,     0,    20,     0,     0,     0,     0,     9,    10,
       0,     0,    11,    12,     0,     0,    13,     0,    90,    91,
      21,     0,     0,     0,     0,     0,     0,     0,    22,    23,
      24,    25,    26,    27,    28,     0,     0,     0,    29,     0,
      30,    31,     0,     0,    32,    33,    14,    15,    34,     0,
       0,    35,    36,    37,    16,    17,    18,     0,    19,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,    22,    23,    24,    25,    26,
      27,    28,     0,     0,     0,    29,     0,    30,    31,     0,
       0,    32,    33,     0,     0,    34,     0,     0,    35,    36,
      37,   156,     0,     0,    68,   107,   159,     0,     0,     0,
       0,     0,     0,     0,     0,   108,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   109,   110,     0,
     111,   112,   113,   114,   115,   116,   117,    14,    15,     0,
       0,     0,     0,     0,     0,     0,    17,    18,     0,    19,
       0,    20,     0,     0,     0,     0,     0,     0,   156,     0,
       0,    12,     0,   159,    13,     0,     0,     0,    21,     0,
       0,     0,     0,     0,     0,     0,    22,    23,    24,    25,
      26,    27,    28,     0,   118,     0,    29,     0,    30,    31,
       0,     0,    32,    33,    14,    15,    69,     0,     0,    35,
      36,    37,     0,    17,    18,     0,    19,     0,    20,     0,
       0,     0,     0,     0,     0,   202,     0,     0,    12,     0,
       0,    13,     0,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,    22,    23,    24,    25,    26,    27,    28,
       0,     0,     0,    29,     0,    30,    31,     0,     0,    32,
      33,    14,    15,    34,     0,     0,    35,    36,    37,     0,
      17,    18,     0,    19,     0,    20,     0,     0,     0,     0,
       0,     0,   204,     0,     0,    12,     0,     0,    13,     0,
       0,     0,    21,     0,     0,     0,     0,     0,     0,     0,
      22,    23,    24,    25,    26,    27,    28,     0,     0,     0,
      29,     0,    30,    31,     0,     0,    32,    33,    14,    15,
      34,     0,     0,    35,    36,    37,     0,    17,    18,     0,
      19,     0,    20,     0,     0,     0,     0,     0,     0,   218,
       0,     0,    12,     0,     0,    13,     0,     0,     0,    21,
       0,     0,     0,     0,     0,     0,     0,    22,    23,    24,
      25,    26,    27,    28,     0,     0,     0,    29,     0,    30,
      31,     0,     0,    32,    33,    14,    15,    34,     0,     0,
      35,    36,    37,     0,    17,    18,     0,    19,     0,    20,
       0,     0,     0,     0,     0,     0,   202,     0,     0,   290,
       0,     0,    13,     0,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,    22,    23,    24,    25,    26,    27,
      28,     0,     0,     0,    29,     0,    30,    31,     0,     0,
      32,    33,    14,    15,    34,     0,     0,    35,    36,    37,
       0,    17,    18,     0,    19,     0,    20,     0,     0,     0,
       0,     0,     0,   204,     0,     0,   290,     0,     0,    13,
       0,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,    22,    23,    24,    25,    26,    27,    28,     0,     0,
       0,    29,     0,    30,    31,     0,     0,    32,    33,    14,
      15,   177,     0,     0,    35,    36,    37,     0,    17,    18,
       0,    19,     0,    20,     0,     0,     0,     0,     0,     0,
     218,     0,     0,   290,     0,     0,    13,     0,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,    22,    23,
      24,    25,    26,    27,    28,     0,     0,     0,    29,     0,
      30,    31,     0,     0,    32,    33,    14,    15,   177,     0,
       0,    35,    36,    37,     0,    17,    18,     0,    19,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,    22,    23,    24,    25,    26,
      27,    28,     0,     0,     0,    29,     0,    30,    31,     0,
       0,    32,    33,     0,     0,   177,     0,     0,    35,    36,
      37,   135,     0,    68,   107,     0,     0,   136,     0,     0,
       0,     0,     0,     0,   108,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   109,   110,     0,   111,
     112,   113,   114,   115,   116,   117,    14,    15,     0,     0,
       0,     0,     0,     0,     0,    17,    18,     0,    19,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,    22,    23,    24,    25,    26,
      27,    28,     0,   118,     0,    29,     0,    30,    31,     0,
       0,    32,    33,     0,     0,    69,     0,     0,    35,    36,
      37,   135,     0,    68,   107,     0,     0,   315,     0,     0,
       0,     0,     0,     0,   108,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   109,   110,     0,   111,
     112,   113,   114,   115,   116,   117,    14,    15,     0,     0,
       0,     0,     0,     0,     0,    17,    18,     0,    19,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,    22,    23,    24,    25,    26,
      27,    28,     0,   118,     0,    29,     0,    30,    31,     0,
       0,    32,    33,     0,     0,    69,     0,     0,    35,    36,
      37,   135,     0,    68,   107,     0,     0,   326,     0,     0,
       0,     0,     0,     0,   108,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   109,   110,     0,   111,
     112,   113,   114,   115,   116,   117,    14,    15,     0,     0,
       0,     0,     0,     0,     0,    17,    18,     0,    19,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,    22,    23,    24,    25,    26,
      27,    28,     0,   118,     0,    29,     0,    30,    31,     0,
       0,    32,    33,     0,     0,    69,     0,     0,    35,    36,
      37,   135,     0,    68,   107,     0,     0,   328,     0,     0,
       0,     0,     0,     0,   108,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   109,   110,     0,   111,
     112,   113,   114,   115,   116,   117,    14,    15,     0,     0,
       0,     0,     0,     0,     0,    17,    18,     0,    19,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,    22,    23,    24,    25,    26,
      27,    28,     0,   118,     0,    29,     0,    30,    31,     0,
       0,    32,    33,     0,   135,    69,    68,   107,    35,    36,
      37,     0,     0,     0,     0,     0,     0,   108,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   109,
     110,     0,   111,   112,   113,   114,   115,   116,   117,    14,
      15,     0,     0,     0,     0,     0,     0,     0,    17,    18,
       0,    19,     0,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,    22,    23,
      24,    25,    26,    27,    28,     0,   118,     0,    29,     0,
      30,    31,     0,     0,    32,    33,    68,   107,    69,     0,
     136,    35,    36,    37,     0,     0,     0,   108,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   109,
     110,     0,   111,   112,   113,   114,   115,   116,   117,    14,
      15,     0,     0,     0,     0,     0,     0,     0,    17,    18,
       0,    19,     0,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,    22,    23,
      24,    25,    26,    27,    28,     0,   118,     0,    29,     0,
      30,    31,     0,     0,    32,    33,    68,   107,    69,     0,
       0,    35,    36,    37,     0,     0,     0,   108,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   109,
     110,     0,   111,   112,   113,   114,   115,   116,   117,    14,
      15,     0,     0,     0,     0,     0,     0,     0,    17,    18,
       0,    19,     0,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,    22,    23,
      24,    25,    26,    27,    28,     0,   118,   265,    29,     0,
      30,    31,     0,     0,    32,    33,    68,   107,    69,     0,
     271,    35,    36,    37,     0,     0,     0,   108,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   109,
     110,     0,   111,   112,   113,   114,   115,   116,   117,    14,
      15,     0,     0,     0,     0,     0,     0,     0,    17,    18,
       0,    19,     0,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,    22,    23,
      24,    25,    26,    27,    28,     0,   118,     0,    29,     0,
      30,    31,     0,     0,    32,    33,    68,   107,    69,     0,
     309,    35,    36,    37,     0,     0,     0,   108,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   109,
     110,     0,   111,   112,   113,   114,   115,   116,   117,    14,
      15,     0,     0,     0,     0,     0,     0,     0,    17,    18,
       0,    19,     0,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,    22,    23,
      24,    25,    26,    27,    28,     0,   118,     0,    29,     0,
      30,    31,     0,     0,    32,    33,    68,   107,    69,     0,
     311,    35,    36,    37,     0,     0,     0,   108,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   109,
     110,     0,   111,   112,   113,   114,   115,   116,   117,    14,
      15,     0,     0,     0,     0,     0,     0,     0,    17,    18,
       0,    19,     0,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,    22,    23,
      24,    25,    26,    27,    28,     0,   118,     0,    29,     0,
      30,    31,     0,     0,    32,    33,     0,     0,    69,     0,
       0,    35,    36,    37,    68,   107,   335,     0,     0,     0,
       0,     0,     0,     0,     0,   108,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   109,   110,     0,
     111,   112,   113,   114,   115,   116,   117,    14,    15,     0,
       0,     0,     0,     0,     0,     0,    17,    18,     0,    19,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    21,     0,
       0,     0,     0,     0,     0,     0,    22,    23,    24,    25,
      26,    27,    28,     0,   118,     0,    29,     0,    30,    31,
       0,     0,    32,    33,    68,   107,    69,     0,   337,    35,
      36,    37,     0,     0,     0,   108,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   109,   110,     0,
     111,   112,   113,   114,   115,   116,   117,    14,    15,     0,
       0,     0,     0,     0,     0,     0,    17,    18,     0,    19,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    21,     0,
       0,     0,     0,     0,     0,     0,    22,    23,    24,    25,
      26,    27,    28,     0,   118,     0,    29,     0,    30,    31,
       0,     0,    32,    33,    68,   107,    69,     0,   344,    35,
      36,    37,     0,     0,     0,   108,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   109,   110,     0,
     111,   112,   113,   114,   115,   116,   117,    14,    15,     0,
       0,     0,     0,     0,     0,     0,    17,    18,     0,    19,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    21,     0,
       0,     0,     0,     0,     0,     0,    22,    23,    24,    25,
      26,    27,    28,     0,   118,     0,    29,     0,    30,    31,
       0,     0,    32,    33,    68,   107,    69,     0,   346,    35,
      36,    37,     0,     0,     0,   108,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   109,   110,     0,
     111,   112,   113,   114,   115,   116,   117,    14,    15,     0,
       0,     0,     0,     0,     0,     0,    17,    18,     0,    19,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    21,     0,
       0,     0,     0,     0,     0,     0,    22,    23,    24,    25,
      26,    27,    28,     0,   118,     0,    29,     0,    30,    31,
       0,     0,    32,    33,    68,   107,    69,     0,     0,    35,
      36,    37,     0,     0,     0,   108,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   109,   110,     0,
     111,   112,   113,   114,   115,   116,   117,    14,    15,     0,
       0,     0,     0,     0,     0,     0,    17,    18,     0,    19,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    21,     0,
       0,     0,     0,     0,     0,     0,    22,    23,    24,    25,
      26,    27,    28,     0,   118,     0,    29,     0,    30,    31,
       0,     0,    32,    33,    68,   107,    69,     0,     0,    35,
      36,    37,     0,     0,     0,   108,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   109,     0,     0,
     111,   112,   113,   114,   115,   116,   117,    14,    15,     0,
       0,     0,     0,     0,     0,     0,    17,    18,     0,    19,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    21,     0,
       0,     0,     0,     0,     0,     0,    22,    23,    24,    25,
      26,    27,    28,    68,   107,     0,    29,     0,    30,    31,
       0,     0,    32,    33,   108,     0,    69,     0,     0,    35,
      36,    37,     0,     0,     0,     0,     0,     0,     0,   111,
     112,   113,   114,   115,   116,   117,    14,    15,     0,     0,
       0,     0,     0,     0,     0,    17,    18,     0,    19,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,    22,    23,    24,    25,    26,
      27,    28,    68,  -136,     0,    29,     0,    30,    31,     0,
       0,    32,    33,  -136,     0,    69,     0,     0,    35,    36,
      37,     0,     0,     0,     0,     0,     0,     0,  -136,  -136,
    -136,  -136,  -136,  -136,  -136,    14,    15,     0,     0,     0,
       0,     0,     0,     0,    17,    18,     0,    19,     0,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    21,     0,     0,     0,
       0,     0,    68,     0,    22,    23,    24,    25,    26,    27,
      28,     0,     0,   251,     0,     0,    30,    31,     0,     0,
      32,    33,     0,     0,    69,   109,   110,    35,    36,    37,
       0,     0,     0,     0,   252,    14,    15,     0,     0,     0,
       0,     0,     0,     0,    17,    18,     0,    19,     0,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,    22,    23,    24,    25,    26,    27,
      28,    68,   253,   324,    29,     0,    30,    31,     0,     0,
      32,    33,   251,     0,    69,     0,     0,    35,    36,    37,
       0,     0,     0,     0,   109,   110,     0,     0,     0,     0,
       0,     0,     0,   252,    14,    15,     0,     0,     0,     0,
       0,     0,     0,    17,    18,     0,    19,     0,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    21,     0,     0,     0,    68,
       0,     0,     0,    22,    23,    24,    25,    26,    27,    28,
     251,   253,     0,    29,     0,    30,    31,     0,     0,    32,
      33,     0,   109,    69,     0,     0,    35,    36,    37,     0,
       0,   252,    14,    15,     0,     0,     0,     0,     0,     0,
       0,    17,    18,     0,    19,     0,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,     0,     0,    13,
     141,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,    22,    23,    24,    25,    26,    27,    28,     0,     0,
       0,    29,     0,    30,    31,     0,     0,    32,    33,    14,
      15,    69,     0,     0,    35,    36,    37,     0,    17,    18,
       0,    19,     0,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    12,     0,     0,    13,   148,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,    22,    23,
      24,    25,    26,    27,    28,     0,     0,     0,    29,     0,
      30,    31,     0,     0,    32,    33,    14,    15,    34,     0,
       0,    35,    36,    37,     0,    17,    18,     0,    19,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,     0,   318,    13,     0,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,    22,    23,    24,    25,    26,
      27,    28,     0,     0,     0,    29,     0,    30,    31,     0,
       0,    32,    33,    14,    15,    34,     0,     0,    35,    36,
      37,     0,    17,    18,     0,    19,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    21,     0,     0,     0,    68,     0,
       0,     0,    22,    23,    24,    25,    26,    27,    28,   251,
       0,     0,    29,     0,    30,    31,     0,     0,    32,    33,
       0,     0,    34,     0,     0,    35,    36,    37,     0,     0,
     252,    14,    15,     0,     0,     0,     0,     0,     0,     0,
      17,    18,     0,    19,     0,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    12,     0,     0,    13,     0,
       0,     0,    21,     0,     0,     0,     0,     0,     0,     0,
      22,    23,    24,    25,    26,    27,    28,     0,     0,     0,
      29,     0,    30,    31,     0,     0,    32,    33,    14,    15,
      69,     0,     0,    35,    36,    37,     0,    17,    18,     0,
      19,     0,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   176,     0,     0,    13,     0,     0,     0,    21,
       0,     0,     0,     0,     0,     0,     0,    22,    23,    24,
      25,    26,    27,    28,     0,     0,     0,    29,     0,    30,
      31,     0,     0,    32,    33,    14,    15,    34,     0,     0,
      35,    36,    37,     0,    17,    18,     0,    19,     0,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    68,
       0,     0,    13,     0,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,    22,    23,    24,    25,    26,    27,
      28,     0,     0,     0,    29,     0,    30,    31,     0,     0,
      32,    33,    14,    15,   177,     0,     0,    35,    36,    37,
       0,    17,    18,     0,    19,     0,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   290,     0,     0,    13,
       0,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,    22,    23,    24,    25,    26,    27,    28,     0,     0,
       0,    29,     0,    30,    31,     0,     0,    32,    33,    14,
      15,   177,     0,     0,    35,    36,    37,     0,    17,    18,
       0,    19,     0,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      21,     0,     0,     0,    68,     0,     0,     0,    22,    23,
      24,    25,    26,    27,    28,  -136,     0,     0,    29,     0,
      30,    31,     0,     0,    32,    33,     0,     0,   177,     0,
       0,    35,    36,    37,     0,     0,  -136,    14,    15,     0,
       0,     0,     0,     0,     0,     0,    17,    18,     0,    19,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    68,     0,     0,     0,     0,     0,     0,    21,     0,
       0,     0,     0,     0,     0,     0,    22,    23,    24,    25,
      26,    27,    28,     0,     0,     0,     0,     0,    30,    31,
       0,     0,    32,    33,    14,    15,    69,     0,     0,    35,
      36,    37,     0,    17,    18,     0,    19,     0,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,    22,    23,    24,    25,    26,    27,    28,
       0,     0,     0,    29,     0,    30,    31,     0,     0,    32,
      33,     0,     0,    69,     0,     0,    35,    36,    37
};

static const yytype_int16 yycheck[] =
{
      29,   108,   166,    32,    33,   176,    35,    36,    37,    51,
      52,    81,     9,    42,     5,   122,    34,    15,     9,    10,
      67,    62,    63,    18,    53,    84,     0,   251,    11,   253,
     254,   255,    45,   257,   178,    64,     9,   261,    18,   241,
      69,   243,    42,    15,    73,    45,    12,    83,    39,    44,
      86,    13,    67,    89,    91,    97,    92,   318,   117,    10,
     107,   108,    12,   105,   100,   178,    12,    10,    19,    98,
      99,    84,    45,    86,   335,    37,    19,    10,    40,    10,
      11,    99,    10,    16,    84,    85,    86,    84,    16,   159,
      90,   132,   107,   108,   123,   124,   125,   126,   127,   128,
     324,    12,   100,   101,   102,   103,    10,   166,   106,   109,
      12,    84,    16,    86,   143,   106,   145,   146,   320,   290,
     227,   228,   151,   152,   153,   154,    84,    12,   164,    87,
     102,   103,   334,   169,   106,   164,    10,    10,   106,    10,
     169,     9,    16,    16,   251,    16,   348,   291,   177,   178,
     294,   295,   296,   297,   318,   107,   108,   301,    10,   177,
      42,   220,   191,   192,    16,   194,   195,   196,   197,   198,
     199,   335,   201,   232,   203,    12,   205,   206,   291,    12,
      10,   294,   295,   296,   297,   214,    16,    12,   301,     9,
     219,    12,   221,   252,    14,   236,   340,   188,     9,     9,
      12,   102,   103,    14,    14,   106,    12,   314,   107,   108,
     109,    94,   241,    44,   243,    15,     9,    84,    98,    18,
     262,    77,   251,   282,   253,   254,   255,   340,   257,   258,
     259,   260,   261,   251,    10,   253,   254,   255,    12,   257,
      94,   270,    96,   261,    14,   274,     9,   276,   102,   103,
     279,     9,     5,    44,   159,    16,    16,    16,    41,    12,
      16,    16,   291,   322,    16,   294,   295,   296,   297,   104,
     106,    -1,   301,    -1,   303,   304,   305,    -1,    -1,   133,
     134,    34,    -1,    45,    -1,    -1,    -1,    -1,   330,    -1,
     319,    -1,   321,    -1,    -1,   324,     9,    -1,   327,    -1,
     329,   337,   331,    56,   333,    -1,   324,    60,    61,    62,
      63,   340,    -1,    66,    67,    68,    -1,   308,    -1,    -1,
      -1,   175,    84,    85,    86,    -1,    -1,    -1,    90,    -1,
      -1,    -1,    45,    86,    -1,   189,    -1,    -1,    -1,    92,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,    -1,
      -1,   104,    -1,   106,    -1,   108,    -1,    -1,   111,   112,
     113,   114,   115,   116,    -1,   118,   119,   120,    -1,   122,
      -1,    84,    85,    86,    -1,    -1,   129,    90,    -1,   132,
      -1,    -1,    -1,    -1,   137,    -1,   139,    -1,    -1,    -1,
      -1,    -1,   246,    -1,    -1,    -1,   109,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   167,    -1,    -1,    -1,   171,    -1,
      -1,    -1,    -1,   176,    -1,    32,    33,    34,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,   302,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    -1,    69,    -1,    -1,    -1,    73,    -1,    -1,    -1,
      -1,   224,    -1,    -1,   227,   228,    -1,    -1,    -1,    -1,
     233,    -1,   336,   236,    -1,    -1,    -1,    -1,    -1,   343,
      -1,    98,    99,   347,    -1,    -1,    -1,   145,   146,    -1,
      -1,   355,    -1,    -1,   152,   153,    -1,    -1,    -1,    -1,
      -1,    -1,   265,   266,   267,    -1,   123,   124,   125,   126,
     127,   128,    -1,    -1,    -1,    -1,    -1,    -1,   281,    -1,
      -1,   179,   285,    -1,    -1,    -1,   143,   290,   145,   146,
      -1,    -1,    -1,    -1,   151,   152,   153,   154,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   164,   206,   207,
      -1,   314,   169,   316,    -1,    -1,    -1,    -1,    -1,    -1,
     177,   178,    -1,    -1,    -1,    -1,    -1,    -1,   226,    -1,
      -1,    -1,    -1,    -1,    -1,   192,    -1,   194,   195,   196,
     197,   198,   199,    -1,   201,    -1,   203,    -1,   205,   206,
      -1,   249,    -1,    -1,    -1,    -1,    -1,   214,    -1,    -1,
      -1,    -1,   219,    -1,   221,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     278,   279,    -1,    -1,   241,    -1,   243,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   251,    -1,   253,   254,   255,    -1,
     257,   258,   259,   260,   261,    -1,   304,   305,    -1,    -1,
      -1,    -1,    -1,   270,    -1,    -1,    -1,   274,    -1,   276,
      -1,    -1,   279,    -1,    -1,   323,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   291,    -1,    -1,   294,   295,   296,
     297,    -1,     0,     1,   301,    -1,   303,   304,   305,     7,
       8,     9,    -1,    11,    12,    -1,    14,    15,    -1,    -1,
      -1,    -1,   319,    -1,   321,    -1,    -1,   324,    -1,    -1,
      -1,    -1,    -1,    -1,   331,    -1,   333,    -1,    -1,    -1,
      -1,    -1,    -1,   340,    -1,    -1,    -1,    45,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    54,    55,    -1,    57,
      -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    76,    11,
      12,    -1,    14,    15,    -1,    -1,    84,    85,    86,    87,
      88,    89,    90,    -1,    -1,    -1,    94,    -1,    96,    97,
      -1,    -1,   100,   101,    -1,    -1,   104,    -1,    -1,   107,
     108,   109,    -1,    45,    46,    47,    48,    49,    50,    51,
      52,    -1,    54,    55,    56,    57,    -1,    59,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,
      -1,    -1,    74,    75,    76,     9,    -1,    11,    12,    -1,
      14,    15,    84,    85,    86,    87,    88,    89,    90,    -1,
      -1,    -1,    94,    95,    96,    97,    98,    -1,   100,   101,
      -1,    -1,   104,    -1,    -1,   107,   108,   109,    -1,    -1,
      -1,    45,    46,    47,    48,    49,    50,    51,    52,    -1,
      54,    55,    56,    57,    -1,    59,    60,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    75,    76,    11,    12,    -1,    14,    15,    -1,    17,
      84,    85,    86,    87,    88,    89,    90,    -1,    -1,    -1,
      94,    95,    96,    97,    98,    -1,   100,   101,    -1,    -1,
     104,    -1,    -1,   107,   108,   109,    -1,    45,    46,    47,
      48,    49,    50,    51,    52,    -1,    54,    55,    56,    57,
      -1,    59,    60,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    75,    76,    11,
      12,    -1,    14,    15,    -1,    17,    84,    85,    86,    87,
      88,    89,    90,    -1,    -1,    -1,    94,    95,    96,    97,
      98,    -1,   100,   101,    -1,    -1,   104,    -1,    -1,   107,
     108,   109,    -1,    45,    46,    47,    48,    49,    50,    51,
      52,    -1,    54,    55,    56,    57,    -1,    59,    60,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    75,    76,    11,    12,    -1,    14,    15,
      -1,    17,    84,    85,    86,    87,    88,    89,    90,    -1,
      -1,    -1,    94,    95,    96,    97,    98,    -1,   100,   101,
      -1,    -1,   104,    -1,    -1,   107,   108,   109,    -1,    45,
      46,    47,    48,    49,    50,    51,    52,    -1,    54,    55,
      56,    57,    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    75,
      76,    11,    12,    -1,    14,    15,    -1,    17,    84,    85,
      86,    87,    88,    89,    90,    -1,    -1,    -1,    94,    95,
      96,    97,    98,    -1,   100,   101,    -1,    -1,   104,    -1,
      -1,   107,   108,   109,    -1,    45,    46,    47,    48,    49,
      50,    51,    52,    -1,    54,    55,    56,    57,    -1,    59,
      60,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    75,    76,    11,    12,    -1,
      14,    15,    -1,    17,    84,    85,    86,    87,    88,    89,
      90,    -1,    -1,    -1,    94,    95,    96,    97,    98,    -1,
     100,   101,    -1,    -1,   104,    -1,    -1,   107,   108,   109,
      -1,    45,    46,    47,    48,    49,    50,    51,    52,    -1,
      54,    55,    56,    57,    -1,    59,    60,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,
      74,    75,    76,     9,    -1,    11,    12,    -1,    14,    15,
      84,    85,    86,    87,    88,    89,    90,    -1,    -1,    -1,
      94,    95,    96,    97,    98,    -1,   100,   101,    -1,    -1,
     104,    -1,    -1,   107,   108,   109,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    50,    51,    52,    -1,    54,    55,
      56,    57,    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    75,
      76,    11,    12,    -1,    14,    15,    -1,    17,    84,    85,
      86,    87,    88,    89,    90,    -1,    -1,    -1,    94,    95,
      96,    97,    98,    -1,   100,   101,    -1,    -1,   104,    -1,
      -1,   107,   108,   109,    -1,    45,    46,    47,    48,    49,
      50,    51,    52,    -1,    54,    55,    56,    57,    -1,    59,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,    -1,    -1,    -1,    74,    75,    76,     9,    -1,    11,
      12,    -1,    14,    15,    84,    85,    86,    87,    88,    89,
      90,    -1,    -1,    -1,    94,    95,    96,    97,    98,    -1,
     100,   101,    -1,    -1,   104,    -1,    -1,   107,   108,   109,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    50,    51,
      52,    -1,    54,    55,    56,    57,    -1,    59,    60,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    75,    76,    11,    12,    -1,    14,    15,
      -1,    17,    84,    85,    86,    87,    88,    89,    90,    -1,
      -1,    -1,    94,    95,    96,    97,    98,    -1,   100,   101,
      -1,    -1,   104,    -1,    -1,   107,   108,   109,    -1,    45,
      46,    47,    48,    49,    50,    51,    52,    -1,    54,    55,
      56,    57,    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    75,
      76,    11,    12,    -1,    14,    15,    -1,    -1,    84,    85,
      86,    87,    88,    89,    90,    -1,    -1,    -1,    94,    95,
      96,    97,    98,    -1,   100,   101,    -1,    -1,   104,    -1,
      -1,   107,   108,   109,    -1,    45,    46,    47,    48,    49,
      50,    51,    52,    -1,    54,    55,    56,    57,     1,    59,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,
      -1,    14,    15,    -1,    74,    75,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    85,    86,    87,    88,    89,
      90,    -1,    -1,    -1,    94,    95,    96,    97,    98,    -1,
     100,   101,    45,    46,   104,    -1,    49,   107,   108,   109,
      -1,    54,    55,    -1,    57,     1,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,    15,
      16,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    85,    86,    87,    88,    89,    90,    -1,    -1,
      -1,    94,    -1,    96,    97,    -1,    -1,   100,   101,    45,
      46,   104,    -1,    49,   107,   108,   109,    -1,    54,    55,
      -1,    57,    -1,    59,    -1,    -1,    -1,    -1,     7,     8,
      -1,    -1,    11,    12,    -1,    -1,    15,    -1,    74,    75,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,
      86,    87,    88,    89,    90,    -1,    -1,    -1,    94,    -1,
      96,    97,    -1,    -1,   100,   101,    45,    46,   104,    -1,
      -1,   107,   108,   109,    53,    54,    55,    -1,    57,    -1,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,    88,
      89,    90,    -1,    -1,    -1,    94,    -1,    96,    97,    -1,
      -1,   100,   101,    -1,    -1,   104,    -1,    -1,   107,   108,
     109,     9,    -1,    -1,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    -1,    57,
      -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,
      -1,    12,    -1,    14,    15,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,
      88,    89,    90,    -1,    92,    -1,    94,    -1,    96,    97,
      -1,    -1,   100,   101,    45,    46,   104,    -1,    -1,   107,
     108,   109,    -1,    54,    55,    -1,    57,    -1,    59,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    -1,    -1,    12,    -1,
      -1,    15,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    85,    86,    87,    88,    89,    90,
      -1,    -1,    -1,    94,    -1,    96,    97,    -1,    -1,   100,
     101,    45,    46,   104,    -1,    -1,   107,   108,   109,    -1,
      54,    55,    -1,    57,    -1,    59,    -1,    -1,    -1,    -1,
      -1,    -1,     9,    -1,    -1,    12,    -1,    -1,    15,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    85,    86,    87,    88,    89,    90,    -1,    -1,    -1,
      94,    -1,    96,    97,    -1,    -1,   100,   101,    45,    46,
     104,    -1,    -1,   107,   108,   109,    -1,    54,    55,    -1,
      57,    -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      -1,    -1,    12,    -1,    -1,    15,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,
      87,    88,    89,    90,    -1,    -1,    -1,    94,    -1,    96,
      97,    -1,    -1,   100,   101,    45,    46,   104,    -1,    -1,
     107,   108,   109,    -1,    54,    55,    -1,    57,    -1,    59,
      -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    -1,    12,
      -1,    -1,    15,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    85,    86,    87,    88,    89,
      90,    -1,    -1,    -1,    94,    -1,    96,    97,    -1,    -1,
     100,   101,    45,    46,   104,    -1,    -1,   107,   108,   109,
      -1,    54,    55,    -1,    57,    -1,    59,    -1,    -1,    -1,
      -1,    -1,    -1,     9,    -1,    -1,    12,    -1,    -1,    15,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    85,    86,    87,    88,    89,    90,    -1,    -1,
      -1,    94,    -1,    96,    97,    -1,    -1,   100,   101,    45,
      46,   104,    -1,    -1,   107,   108,   109,    -1,    54,    55,
      -1,    57,    -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,
       9,    -1,    -1,    12,    -1,    -1,    15,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,
      86,    87,    88,    89,    90,    -1,    -1,    -1,    94,    -1,
      96,    97,    -1,    -1,   100,   101,    45,    46,   104,    -1,
      -1,   107,   108,   109,    -1,    54,    55,    -1,    57,    -1,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,    88,
      89,    90,    -1,    -1,    -1,    94,    -1,    96,    97,    -1,
      -1,   100,   101,    -1,    -1,   104,    -1,    -1,   107,   108,
     109,    10,    -1,    12,    13,    -1,    -1,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    55,    -1,    57,    -1,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,    88,
      89,    90,    -1,    92,    -1,    94,    -1,    96,    97,    -1,
      -1,   100,   101,    -1,    -1,   104,    -1,    -1,   107,   108,
     109,    10,    -1,    12,    13,    -1,    -1,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    55,    -1,    57,    -1,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,    88,
      89,    90,    -1,    92,    -1,    94,    -1,    96,    97,    -1,
      -1,   100,   101,    -1,    -1,   104,    -1,    -1,   107,   108,
     109,    10,    -1,    12,    13,    -1,    -1,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    55,    -1,    57,    -1,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,    88,
      89,    90,    -1,    92,    -1,    94,    -1,    96,    97,    -1,
      -1,   100,   101,    -1,    -1,   104,    -1,    -1,   107,   108,
     109,    10,    -1,    12,    13,    -1,    -1,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    55,    -1,    57,    -1,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,    88,
      89,    90,    -1,    92,    -1,    94,    -1,    96,    97,    -1,
      -1,   100,   101,    -1,    10,   104,    12,    13,   107,   108,
     109,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      36,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,
      -1,    57,    -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,
      86,    87,    88,    89,    90,    -1,    92,    -1,    94,    -1,
      96,    97,    -1,    -1,   100,   101,    12,    13,   104,    -1,
      16,   107,   108,   109,    -1,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      36,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,
      -1,    57,    -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,
      86,    87,    88,    89,    90,    -1,    92,    -1,    94,    -1,
      96,    97,    -1,    -1,   100,   101,    12,    13,   104,    -1,
      -1,   107,   108,   109,    -1,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      36,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,
      -1,    57,    -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,
      86,    87,    88,    89,    90,    -1,    92,    93,    94,    -1,
      96,    97,    -1,    -1,   100,   101,    12,    13,   104,    -1,
      16,   107,   108,   109,    -1,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      36,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,
      -1,    57,    -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,
      86,    87,    88,    89,    90,    -1,    92,    -1,    94,    -1,
      96,    97,    -1,    -1,   100,   101,    12,    13,   104,    -1,
      16,   107,   108,   109,    -1,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      36,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,
      -1,    57,    -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,
      86,    87,    88,    89,    90,    -1,    92,    -1,    94,    -1,
      96,    97,    -1,    -1,   100,   101,    12,    13,   104,    -1,
      16,   107,   108,   109,    -1,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      36,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,
      -1,    57,    -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,
      86,    87,    88,    89,    90,    -1,    92,    -1,    94,    -1,
      96,    97,    -1,    -1,   100,   101,    -1,    -1,   104,    -1,
      -1,   107,   108,   109,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    -1,    57,
      -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,
      88,    89,    90,    -1,    92,    -1,    94,    -1,    96,    97,
      -1,    -1,   100,   101,    12,    13,   104,    -1,    16,   107,
     108,   109,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    -1,    57,
      -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,
      88,    89,    90,    -1,    92,    -1,    94,    -1,    96,    97,
      -1,    -1,   100,   101,    12,    13,   104,    -1,    16,   107,
     108,   109,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    -1,    57,
      -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,
      88,    89,    90,    -1,    92,    -1,    94,    -1,    96,    97,
      -1,    -1,   100,   101,    12,    13,   104,    -1,    16,   107,
     108,   109,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    -1,    57,
      -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,
      88,    89,    90,    -1,    92,    -1,    94,    -1,    96,    97,
      -1,    -1,   100,   101,    12,    13,   104,    -1,    -1,   107,
     108,   109,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    -1,    57,
      -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,
      88,    89,    90,    -1,    92,    -1,    94,    -1,    96,    97,
      -1,    -1,   100,   101,    12,    13,   104,    -1,    -1,   107,
     108,   109,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    -1,    57,
      -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,
      88,    89,    90,    12,    13,    -1,    94,    -1,    96,    97,
      -1,    -1,   100,   101,    23,    -1,   104,    -1,    -1,   107,
     108,   109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    55,    -1,    57,    -1,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,    88,
      89,    90,    12,    13,    -1,    94,    -1,    96,    97,    -1,
      -1,   100,   101,    23,    -1,   104,    -1,    -1,   107,   108,
     109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    55,    -1,    57,    -1,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    12,    -1,    84,    85,    86,    87,    88,    89,
      90,    -1,    -1,    23,    -1,    -1,    96,    97,    -1,    -1,
     100,   101,    -1,    -1,   104,    35,    36,   107,   108,   109,
      -1,    -1,    -1,    -1,    44,    45,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    55,    -1,    57,    -1,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    85,    86,    87,    88,    89,
      90,    12,    92,    93,    94,    -1,    96,    97,    -1,    -1,
     100,   101,    23,    -1,   104,    -1,    -1,   107,   108,   109,
      -1,    -1,    -1,    -1,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    45,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    55,    -1,    57,    -1,    59,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    84,    85,    86,    87,    88,    89,    90,
      23,    92,    -1,    94,    -1,    96,    97,    -1,    -1,   100,
     101,    -1,    35,   104,    -1,    -1,   107,   108,   109,    -1,
      -1,    44,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    55,    -1,    57,    -1,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,    15,
      16,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    85,    86,    87,    88,    89,    90,    -1,    -1,
      -1,    94,    -1,    96,    97,    -1,    -1,   100,   101,    45,
      46,   104,    -1,    -1,   107,   108,   109,    -1,    54,    55,
      -1,    57,    -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    12,    -1,    -1,    15,    16,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,
      86,    87,    88,    89,    90,    -1,    -1,    -1,    94,    -1,
      96,    97,    -1,    -1,   100,   101,    45,    46,   104,    -1,
      -1,   107,   108,   109,    -1,    54,    55,    -1,    57,    -1,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      12,    -1,    14,    15,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,    88,
      89,    90,    -1,    -1,    -1,    94,    -1,    96,    97,    -1,
      -1,   100,   101,    45,    46,   104,    -1,    -1,   107,   108,
     109,    -1,    54,    55,    -1,    57,    -1,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    84,    85,    86,    87,    88,    89,    90,    23,
      -1,    -1,    94,    -1,    96,    97,    -1,    -1,   100,   101,
      -1,    -1,   104,    -1,    -1,   107,   108,   109,    -1,    -1,
      44,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    55,    -1,    57,    -1,    59,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,    15,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    85,    86,    87,    88,    89,    90,    -1,    -1,    -1,
      94,    -1,    96,    97,    -1,    -1,   100,   101,    45,    46,
     104,    -1,    -1,   107,   108,   109,    -1,    54,    55,    -1,
      57,    -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    15,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,
      87,    88,    89,    90,    -1,    -1,    -1,    94,    -1,    96,
      97,    -1,    -1,   100,   101,    45,    46,   104,    -1,    -1,
     107,   108,   109,    -1,    54,    55,    -1,    57,    -1,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    15,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    85,    86,    87,    88,    89,
      90,    -1,    -1,    -1,    94,    -1,    96,    97,    -1,    -1,
     100,   101,    45,    46,   104,    -1,    -1,   107,   108,   109,
      -1,    54,    55,    -1,    57,    -1,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,    15,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    85,    86,    87,    88,    89,    90,    -1,    -1,
      -1,    94,    -1,    96,    97,    -1,    -1,   100,   101,    45,
      46,   104,    -1,    -1,   107,   108,   109,    -1,    54,    55,
      -1,    57,    -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    12,    -1,    -1,    -1,    84,    85,
      86,    87,    88,    89,    90,    23,    -1,    -1,    94,    -1,
      96,    97,    -1,    -1,   100,   101,    -1,    -1,   104,    -1,
      -1,   107,   108,   109,    -1,    -1,    44,    45,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    -1,    57,
      -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,
      88,    89,    90,    -1,    -1,    -1,    -1,    -1,    96,    97,
      -1,    -1,   100,   101,    45,    46,   104,    -1,    -1,   107,
     108,   109,    -1,    54,    55,    -1,    57,    -1,    59,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    85,    86,    87,    88,    89,    90,
      -1,    -1,    -1,    94,    -1,    96,    97,    -1,    -1,   100,
     101,    -1,    -1,   104,    -1,    -1,   107,   108,   109
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     9,    14,   112,   124,   126,   138,     0,     7,
       8,    11,    12,    15,    45,    46,    53,    54,    55,    57,
      59,    76,    84,    85,    86,    87,    88,    89,    90,    94,
      96,    97,   100,   101,   104,   107,   108,   109,   121,   127,
     128,   130,   133,   140,   141,   148,   149,   150,   152,     9,
      14,   121,   121,   133,   134,   142,    12,    84,    87,   119,
      12,    12,    12,    12,    42,   150,    12,    12,    12,   104,
     149,   150,   149,   133,   140,   149,   150,   150,   149,     1,
       9,    14,    47,    48,    49,    50,    51,    52,    56,    60,
      74,    75,    95,    98,   116,   118,   120,   121,   133,   137,
     144,   146,   147,   153,    10,   121,   124,    13,    23,    35,
      36,    38,    39,    40,    41,    42,    43,    44,    92,   113,
     114,   149,    12,    15,   100,   101,   102,   103,   106,    67,
     107,   108,    18,   147,   147,    10,    16,   115,    16,   115,
      91,    16,   131,   133,    12,   133,   133,   131,    16,   131,
     149,    42,   133,   133,   133,   149,     9,   122,   123,    14,
     122,   145,   145,   152,   133,   145,    12,    12,   145,   133,
     145,    12,     9,   146,   146,   147,    12,   104,   132,   135,
     136,   140,   149,   150,   145,    17,   146,   146,   127,   147,
     128,    94,   133,   141,   133,   133,   133,   133,   133,   133,
     152,   133,     9,   133,     9,   133,   133,   141,   149,   149,
     149,   149,   149,   149,   133,   131,    17,    17,     9,   133,
      44,   133,    15,    16,   115,    84,   151,   115,   115,    16,
      16,   149,   115,   115,     9,   123,    18,   145,   125,   144,
     152,   133,   145,   133,    98,    77,   117,    17,   139,   134,
     140,    23,    44,    92,   113,   114,   149,   115,    13,    37,
      40,    67,   121,    17,   150,    93,   115,   115,    19,   152,
     133,    16,   115,   143,   133,   141,   133,   141,   152,   133,
     131,    14,    44,   143,   143,    12,     9,   146,     9,    16,
      12,   132,   141,   152,   132,   132,   132,   132,   149,   149,
     149,   132,   147,   133,   133,   133,    84,     9,   129,    16,
      16,    16,    16,    16,   115,    16,   115,    19,    14,   133,
     152,   133,    44,   134,    93,    17,    16,   115,    16,   115,
     121,   133,   141,   133,   125,    14,   143,    16,   152,    16,
     132,   150,   150,   147,    16,    16,    16,   143,   125,   146,
     145,    16,    16,    17,   146,   143,   146
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   111,   112,   112,   113,   113,   114,   114,   115,   115,
     116,   116,   117,   117,   118,   118,   118,   119,   119,   120,
     121,   121,   122,   122,   123,   123,   124,   124,   125,   125,
     126,   126,   127,   128,   128,   128,   128,   128,   128,   128,
     129,   128,   130,   130,   131,   131,   132,   132,   132,   132,
     132,   132,   132,   132,   132,   132,   132,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   134,   134,   135,
     135,   136,   136,   136,   137,   137,   138,   138,   138,   138,
     139,   139,   140,   140,   142,   141,   143,   143,   144,   144,
     144,   144,   144,   144,   144,   144,   145,   145,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   147,   147,   148,   148,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   150,   150,   150,
     150,   150,   151,   151,   151,   152,   152,   152,   153
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     9,     8,     7,     1,     1,     4,
       1,     2,     1,     2,     0,     1,     0,     1,     0,     1,
       1,     3,     1,     1,     4,     3,     6,     3,     4,     4,
       0,     9,     1,     3,     1,     3,     3,     5,     3,     3,
       3,     3,     3,     5,     2,     1,     1,     3,     5,     3,
       3,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     5,     4,     3,     2,     1,     1,     3,     3,     1,
       3,     0,     1,     3,     1,     1,     1,     1,     2,     2,
       1,     2,     1,     2,     0,     4,     1,     2,     4,     4,
       4,     2,     5,     2,     1,     1,     1,     2,     2,     2,
       7,     3,     2,     1,     4,     2,     3,     2,     3,     2,
       2,     2,     2,     1,     2,     1,     1,     3,     3,     3,
       3,     3,     3,     2,     2,     2,     3,     4,     1,     3,
       4,     2,     2,     2,     2,     4,     3,     2,     1,     6,
       6,     3,     6,     6,     1,     8,     8,     6,     4,     1,
       6,     6,     8,     8,     8,     6,     1,     1,     4,     1,
       1,     2,     0,     1,     3,     1,     1,     1,     4
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
#line 107 "awk.g.y" /* yacc.c:1646  */
    { if (errorflag==0)
			winner = (Node *)stat3(PROGRAM, beginloc, (yyvsp[0].p), endloc); }
#line 2552 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 109 "awk.g.y" /* yacc.c:1646  */
    { yyclearin; bracecheck(); vyyerror(":95:Bailing out"); }
#line 2558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 125 "awk.g.y" /* yacc.c:1646  */
    { }
#line 2564 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 129 "awk.g.y" /* yacc.c:1646  */
    { }
#line 2570 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 134 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = stat4(FOR, (yyvsp[-6].p), notnull((yyvsp[-4].p)), (yyvsp[-2].p), (yyvsp[0].p)); }
#line 2576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 136 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = stat4(FOR, (yyvsp[-5].p), NIL, (yyvsp[-2].p), (yyvsp[0].p)); }
#line 2582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 138 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = stat3(IN, (yyvsp[-4].p), makearr((yyvsp[-2].p)), (yyvsp[0].p)); }
#line 2588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 142 "awk.g.y" /* yacc.c:1646  */
    { setfname((yyvsp[0].cp)); }
#line 2594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 143 "awk.g.y" /* yacc.c:1646  */
    { setfname((yyvsp[0].cp)); }
#line 2600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 147 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = notnull((yyvsp[-1].p)); }
#line 2606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 159 "awk.g.y" /* yacc.c:1646  */
    { (yyval.i) = 0; }
#line 2612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 164 "awk.g.y" /* yacc.c:1646  */
    { (yyval.i) = 0; }
#line 2618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 170 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = 0; }
#line 2624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 175 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = 0; }
#line 2630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 176 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = (yyvsp[-1].p); }
#line 2636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 180 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = notnull((yyvsp[0].p)); }
#line 2642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 184 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = stat2(PASTAT, (yyvsp[0].p), stat2(PRINT, rectonode(), NIL)); }
#line 2648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 185 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = stat2(PASTAT, (yyvsp[-3].p), (yyvsp[-1].p)); }
#line 2654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 186 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = pa2stat((yyvsp[-2].p), (yyvsp[0].p), stat2(PRINT, rectonode(), NIL)); }
#line 2660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 187 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = pa2stat((yyvsp[-5].p), (yyvsp[-3].p), (yyvsp[-1].p)); }
#line 2666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 188 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = stat2(PASTAT, NIL, (yyvsp[-1].p)); }
#line 2672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 190 "awk.g.y" /* yacc.c:1646  */
    { beginloc = linkum(beginloc, (yyvsp[-1].p)); (yyval.p) = 0; }
#line 2678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 192 "awk.g.y" /* yacc.c:1646  */
    { endloc = linkum(endloc, (yyvsp[-1].p)); (yyval.p) = 0; }
#line 2684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 193 "awk.g.y" /* yacc.c:1646  */
    {infunc++;}
#line 2690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 194 "awk.g.y" /* yacc.c:1646  */
    { infunc--; curfname=0; defn((Cell *)(yyvsp[-7].p), (yyvsp[-5].p), (yyvsp[-1].p)); (yyval.p) = 0; }
#line 2696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 199 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = linkum((yyvsp[-2].p), (yyvsp[0].p)); }
#line 2702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 204 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = linkum((yyvsp[-2].p), (yyvsp[0].p)); }
#line 2708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 208 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op2((yyvsp[-1].i), (yyvsp[-2].p), (yyvsp[0].p)); }
#line 2714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 210 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op3(CONDEXPR, notnull((yyvsp[-4].p)), (yyvsp[-2].p), (yyvsp[0].p)); }
#line 2720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 212 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op2(BOR, notnull((yyvsp[-2].p)), notnull((yyvsp[0].p))); }
#line 2726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 214 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op2(AND, notnull((yyvsp[-2].p)), notnull((yyvsp[0].p))); }
#line 2732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 215 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op3((yyvsp[-1].i), NIL, (yyvsp[-2].p), (Node*)makedfa((yyvsp[0].s), 0)); }
#line 2738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 217 "awk.g.y" /* yacc.c:1646  */
    { if (constnode((yyvsp[0].p)))
			(yyval.p) = op3((yyvsp[-1].i), NIL, (yyvsp[-2].p), (Node*)makedfa(strnode((yyvsp[0].p)), 0));
		  else
			(yyval.p) = op3((yyvsp[-1].i), (Node *)1, (yyvsp[-2].p), (yyvsp[0].p)); }
#line 2747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 221 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op2(INTEST, (yyvsp[-2].p), makearr((yyvsp[0].p))); }
#line 2753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 222 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op2(INTEST, (yyvsp[-3].p), makearr((yyvsp[0].p))); }
#line 2759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 223 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op2(CAT, (yyvsp[-1].p), (yyvsp[0].p)); }
#line 2765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 229 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op2((yyvsp[-1].i), (yyvsp[-2].p), (yyvsp[0].p)); }
#line 2771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 231 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op3(CONDEXPR, notnull((yyvsp[-4].p)), (yyvsp[-2].p), (yyvsp[0].p)); }
#line 2777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 233 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op2(BOR, notnull((yyvsp[-2].p)), notnull((yyvsp[0].p))); }
#line 2783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 235 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op2(AND, notnull((yyvsp[-2].p)), notnull((yyvsp[0].p))); }
#line 2789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 237 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op1(NOT, op2(NE,(yyvsp[0].p),valtonode(lookup("$zero&null",symtab),CCON))); }
#line 2795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 238 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op2((yyvsp[-1].i), (yyvsp[-2].p), (yyvsp[0].p)); }
#line 2801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 239 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op2((yyvsp[-1].i), (yyvsp[-2].p), (yyvsp[0].p)); }
#line 2807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 240 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op2((yyvsp[-1].i), (yyvsp[-2].p), (yyvsp[0].p)); }
#line 2813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 241 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op2((yyvsp[-1].i), (yyvsp[-2].p), (yyvsp[0].p)); }
#line 2819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 242 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op2((yyvsp[-1].i), (yyvsp[-2].p), (yyvsp[0].p)); }
#line 2825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 243 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op2((yyvsp[-1].i), (yyvsp[-2].p), (yyvsp[0].p)); }
#line 2831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 244 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op3((yyvsp[-1].i), NIL, (yyvsp[-2].p), (Node*)makedfa((yyvsp[0].s), 0)); }
#line 2837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 246 "awk.g.y" /* yacc.c:1646  */
    { if (constnode((yyvsp[0].p)))
			(yyval.p) = op3((yyvsp[-1].i), NIL, (yyvsp[-2].p), (Node*)makedfa(strnode((yyvsp[0].p)), 0));
		  else
			(yyval.p) = op3((yyvsp[-1].i), (Node *)1, (yyvsp[-2].p), (yyvsp[0].p)); }
#line 2846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 250 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op2(INTEST, (yyvsp[-2].p), makearr((yyvsp[0].p))); }
#line 2852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 251 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op2(INTEST, (yyvsp[-3].p), makearr((yyvsp[0].p))); }
#line 2858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 252 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op3(GETLINE, (yyvsp[0].p), (Node*)(yyvsp[-2].i), (yyvsp[-3].p)); }
#line 2864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 253 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op3(GETLINE, (Node*)0, (Node*)(yyvsp[-1].i), (yyvsp[-2].p)); }
#line 2870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 254 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op2(CAT, (yyvsp[-1].p), (yyvsp[0].p)); }
#line 2876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 260 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = linkum((yyvsp[-2].p), (yyvsp[0].p)); }
#line 2882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 261 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = linkum((yyvsp[-2].p), (yyvsp[0].p)); }
#line 2888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 266 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = linkum((yyvsp[-2].p), (yyvsp[0].p)); }
#line 2894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 270 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = rectonode(); }
#line 2900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 272 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = (yyvsp[-1].p); }
#line 2906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 284 "awk.g.y" /* yacc.c:1646  */
    { }
#line 2912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 289 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op3(MATCH, NIL, rectonode(), (Node*)makedfa((yyvsp[0].s),0)); }
#line 2918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 290 "awk.g.y" /* yacc.c:1646  */
    {(yyval.p) = op1(NOT, notnull((yyvsp[0].p))); }
#line 2924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 294 "awk.g.y" /* yacc.c:1646  */
    {startreg();}
#line 2930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 294 "awk.g.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[-1].s); }
#line 2936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 302 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = stat3((yyvsp[-3].i), (yyvsp[-2].p), (Node *) (yyvsp[-1].i), (yyvsp[0].p)); }
#line 2942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 303 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = stat3((yyvsp[-3].i), (yyvsp[-2].p), (Node *) (yyvsp[-1].i), (yyvsp[0].p)); }
#line 2948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 304 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = stat3((yyvsp[-3].i), (yyvsp[-2].p), (Node *) (yyvsp[-1].i), (yyvsp[0].p)); }
#line 2954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 305 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = stat3((yyvsp[-1].i), (yyvsp[0].p), NIL, NIL); }
#line 2960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 306 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = stat2(DELETE, makearr((yyvsp[-3].p)), (yyvsp[-1].p)); }
#line 2966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 307 "awk.g.y" /* yacc.c:1646  */
    { yyclearin; vyyerror(":96:You can only delete array[element]"); (yyval.p) = stat1(DELETE, (yyvsp[0].p)); }
#line 2972 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 308 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = exptostat((yyvsp[0].p)); }
#line 2978 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 309 "awk.g.y" /* yacc.c:1646  */
    { yyclearin; vyyerror(illstat); }
#line 2984 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 313 "awk.g.y" /* yacc.c:1646  */
    { }
#line 2990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 313 "awk.g.y" /* yacc.c:1646  */
    { }
#line 2996 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 317 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = stat1(BREAK, NIL); }
#line 3002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 318 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = stat1(CONTINUE, NIL); }
#line 3008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 320 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = stat2(DO, (yyvsp[-5].p), notnull((yyvsp[-2].p))); }
#line 3014 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 321 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = stat1(EXIT, (yyvsp[-1].p)); }
#line 3020 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 322 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = stat1(EXIT, NIL); }
#line 3026 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 324 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = stat3(IF, (yyvsp[-3].p), (yyvsp[-2].p), (yyvsp[0].p)); }
#line 3032 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 325 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = stat3(IF, (yyvsp[-1].p), (yyvsp[0].p), NIL); }
#line 3038 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 326 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = (yyvsp[-1].p); }
#line 3044 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 327 "awk.g.y" /* yacc.c:1646  */
    { if (infunc)
				vyyerror(":97:Next is illegal inside a function");
			  (yyval.p) = stat1(NEXT, NIL); }
#line 3052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 330 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = stat1(RETURN, (yyvsp[-1].p)); }
#line 3058 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 331 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = stat1(RETURN, NIL); }
#line 3064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 333 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = stat2(WHILE, (yyvsp[-1].p), (yyvsp[0].p)); }
#line 3070 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 334 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = 0; }
#line 3076 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 339 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = linkum((yyvsp[-1].p), (yyvsp[0].p)); }
#line 3082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 347 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op2(ADD, (yyvsp[-2].p), (yyvsp[0].p)); }
#line 3088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 348 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op2(MINUS, (yyvsp[-2].p), (yyvsp[0].p)); }
#line 3094 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 349 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op2(MULT, (yyvsp[-2].p), (yyvsp[0].p)); }
#line 3100 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 350 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op2(DIVIDE, (yyvsp[-2].p), (yyvsp[0].p)); }
#line 3106 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 351 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op2(MOD, (yyvsp[-2].p), (yyvsp[0].p)); }
#line 3112 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 352 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op2(POWER, (yyvsp[-2].p), (yyvsp[0].p)); }
#line 3118 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 353 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op1(UMINUS, (yyvsp[0].p)); }
#line 3124 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 354 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = (yyvsp[0].p); }
#line 3130 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 355 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op1(NOT, notnull((yyvsp[0].p))); }
#line 3136 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 356 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op2(BLTIN, (Node *) (yyvsp[-2].i), rectonode()); }
#line 3142 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 357 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op2(BLTIN, (Node *) (yyvsp[-3].i), (yyvsp[-1].p)); }
#line 3148 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 358 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op2(BLTIN, (Node *) (yyvsp[0].i), rectonode()); }
#line 3154 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 359 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op2(CALL, valtonode((yyvsp[-2].cp),CVAR), NIL); }
#line 3160 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 360 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op2(CALL, valtonode((yyvsp[-3].cp),CVAR), (yyvsp[-1].p)); }
#line 3166 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 361 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op1(PREDECR, (yyvsp[0].p)); }
#line 3172 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 362 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op1(PREINCR, (yyvsp[0].p)); }
#line 3178 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 363 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op1(POSTDECR, (yyvsp[-1].p)); }
#line 3184 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 364 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op1(POSTINCR, (yyvsp[-1].p)); }
#line 3190 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 365 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op3(GETLINE, (yyvsp[-2].p), (Node *)(yyvsp[-1].i), (yyvsp[0].p)); }
#line 3196 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 366 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op3(GETLINE, NIL, (Node *)(yyvsp[-1].i), (yyvsp[0].p)); }
#line 3202 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 367 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op3(GETLINE, (yyvsp[0].p), NIL, NIL); }
#line 3208 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 368 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op3(GETLINE, NIL, NIL, NIL); }
#line 3214 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 370 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op2(INDEX, (yyvsp[-3].p), (yyvsp[-1].p)); }
#line 3220 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 372 "awk.g.y" /* yacc.c:1646  */
    { vyyerror(":98:Index() doesn't permit regular expressions");
		  (yyval.p) = op2(INDEX, (yyvsp[-3].p), (Node*)(yyvsp[-1].s)); }
#line 3227 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 374 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = (yyvsp[-1].p); }
#line 3233 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 376 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op3(MATCHFCN, NIL, (yyvsp[-3].p), (Node*)makedfa((yyvsp[-1].s), 1)); }
#line 3239 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 378 "awk.g.y" /* yacc.c:1646  */
    { if (constnode((yyvsp[-1].p)))
			(yyval.p) = op3(MATCHFCN, NIL, (yyvsp[-3].p), (Node*)makedfa(strnode((yyvsp[-1].p)), 1));
		  else
			(yyval.p) = op3(MATCHFCN, (Node *)1, (yyvsp[-3].p), (yyvsp[-1].p)); }
#line 3248 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 382 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = valtonode((yyvsp[0].cp), CCON); }
#line 3254 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 384 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op4(SPLIT, (yyvsp[-5].p), makearr((yyvsp[-3].p)), (yyvsp[-1].p), (Node*)STRING); }
#line 3260 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 386 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op4(SPLIT, (yyvsp[-5].p), makearr((yyvsp[-3].p)), (Node*)makedfa((yyvsp[-1].s), 1), (Node *)REGEXPR); }
#line 3266 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 388 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op4(SPLIT, (yyvsp[-3].p), makearr((yyvsp[-1].p)), NIL, (Node*)STRING); }
#line 3272 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 389 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op1((yyvsp[-3].i), (yyvsp[-1].p)); }
#line 3278 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 390 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = valtonode((yyvsp[0].cp), CCON); }
#line 3284 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 392 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op4((yyvsp[-5].i), NIL, (Node*)makedfa((yyvsp[-3].s), 1), (yyvsp[-1].p), rectonode()); }
#line 3290 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 394 "awk.g.y" /* yacc.c:1646  */
    { if (constnode((yyvsp[-3].p)))
			(yyval.p) = op4((yyvsp[-5].i), NIL, (Node*)makedfa(strnode((yyvsp[-3].p)), 1), (yyvsp[-1].p), rectonode());
		  else
			(yyval.p) = op4((yyvsp[-5].i), (Node *)1, (yyvsp[-3].p), (yyvsp[-1].p), rectonode()); }
#line 3299 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 399 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op4((yyvsp[-7].i), NIL, (Node*)makedfa((yyvsp[-5].s), 1), (yyvsp[-3].p), (yyvsp[-1].p)); }
#line 3305 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 401 "awk.g.y" /* yacc.c:1646  */
    { if (constnode((yyvsp[-5].p)))
			(yyval.p) = op4((yyvsp[-7].i), NIL, (Node*)makedfa(strnode((yyvsp[-5].p)), 1), (yyvsp[-3].p), (yyvsp[-1].p));
		  else
			(yyval.p) = op4((yyvsp[-7].i), (Node *)1, (yyvsp[-5].p), (yyvsp[-3].p), (yyvsp[-1].p)); }
#line 3314 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 406 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op3(SUBSTR, (yyvsp[-5].p), (yyvsp[-3].p), (yyvsp[-1].p)); }
#line 3320 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 408 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op3(SUBSTR, (yyvsp[-3].p), (yyvsp[-1].p), NIL); }
#line 3326 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 414 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op2(ARRAY, makearr((yyvsp[-3].p)), (yyvsp[-1].p)); }
#line 3332 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 415 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = valtonode((yyvsp[0].cp), CFLD); }
#line 3338 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 416 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op1(INDIRECT, valtonode((yyvsp[0].cp), CVAR)); }
#line 3344 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 417 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op1(INDIRECT, (yyvsp[0].p)); }
#line 3350 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 421 "awk.g.y" /* yacc.c:1646  */
    { arglist = (yyval.p) = 0; }
#line 3356 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 422 "awk.g.y" /* yacc.c:1646  */
    { arglist = (yyval.p) = valtonode((yyvsp[0].cp),CVAR); }
#line 3362 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 423 "awk.g.y" /* yacc.c:1646  */
    { arglist = (yyval.p) = linkum((yyvsp[-2].p),valtonode((yyvsp[0].cp),CVAR)); }
#line 3368 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 427 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = valtonode((yyvsp[0].cp), CVAR); }
#line 3374 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 428 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op1(ARG, (Node *) (yyvsp[0].i)); }
#line 3380 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 429 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = op1(VARNF, (Node *) (yyvsp[0].cp)); }
#line 3386 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 434 "awk.g.y" /* yacc.c:1646  */
    { (yyval.p) = notnull((yyvsp[-1].p)); }
#line 3392 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3396 "y.tab.c" /* yacc.c:1646  */
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
#line 437 "awk.g.y" /* yacc.c:1906  */


static void
setfname(Cell *p)
{
	if (isarr(p))
		vyyerror(":99:%s is an array, not a function", p->nval);
	else if (isfunc(p))
		vyyerror(":100:You cannot define function %s more than once", p->nval);
	curfname = p->nval;
}

static int
constnode(Node *p)
{
	return p->ntype == NVALUE && ((Cell *) (p->narg[0]))->csub == CCON;
}

static unsigned char *strnode(Node *p)
{
	return ((Cell *)(p->narg[0]))->sval;
}

static Node *notnull(Node *n)
{
	switch (n->nobj) {
	case LE: case LT: case EQ: case NE: case GT: case GE:
	case BOR: case AND: case NOT:
		return n;
	default:
		return op2(NE, n, nullnode);
	}
}
