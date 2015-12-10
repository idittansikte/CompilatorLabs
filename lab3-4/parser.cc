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
#line 1 "parser.y" /* yacc.c:339  */

#include <stdlib.h>
#include <iostream>
#include "string.hh"
#include <math.h>
#include "ast.hh"
#include "symtab.hh"

extern char                    *yytext;
extern int                      yylineno, errorCount, warningCount;
extern FunctionInformation     *currentFunction; 

extern int yylex(void);
extern void yyerror(char *);
extern char CheckCompatibleTypes(Expression **, Expression **);
extern char CheckAssignmentTypes(LeftValue **, Expression **);
extern char CheckFunctionParameters(FunctionInformation *,
                                    VariableInformation *,
                                    ExpressionList      *);
char CheckReturnType(Expression **, TypeInformation *);
extern ostream& error(void);
extern ostream& warning(void);

#define YYDEBUG 1

#line 92 "parser.cc" /* yacc.c:339  */

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
   by #include "parser.hh".  */
#ifndef YY_YY_PARSER_HH_INCLUDED
# define YY_YY_PARSER_HH_INCLUDED
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
    FUNCTION = 258,
    ID = 259,
    DECLARE = 260,
    ARRAY = 261,
    INTEGER = 262,
    OF = 263,
    REAL = 264,
    XBEGIN = 265,
    XEND = 266,
    IF = 267,
    THEN = 268,
    ELSE = 269,
    WHILE = 270,
    DO = 271,
    ASSIGN = 272,
    RETURN = 273,
    GE = 274,
    LE = 275,
    EQ = 276,
    NE = 277,
    TRUE = 278,
    FALSE = 279,
    PROGRAM = 280,
    ELSEIF = 281,
    AND = 282,
    OR = 283,
    NOT = 284
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 38 "parser.y" /* yacc.c:355  */

    ASTNode                 *ast;
    Expression              *expression;
    ExpressionList          *expressionList;
    Statement               *statement;
    StatementList           *statementList;
    Condition               *condition;
    ArrayReference          *aref;
    FunctionCall            *call;
    LeftValue               *lvalue;
    ElseIfList              *elseIfList;
    
    VariableInformation     *variable;
    TypeInformation         *type;
    FunctionInformation     *function;

  ::string                  *id;
    int                      integer;
    double                   real;
    void                    *null;

#line 184 "parser.cc" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_HH_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 199 "parser.cc" /* yacc.c:358  */

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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   237

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  85
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  161

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   284

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      40,    41,    29,    28,    44,    27,     2,    30,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    39,    38,
      33,    31,    34,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    42,     2,    43,    32,     2,     2,     2,     2,     2,
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
      25,    26,    35,    36,    37
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   120,   120,   138,   139,   140,   143,   144,   147,   159,
     172,   173,   191,   202,   208,   213,   229,   244,   245,   246,
     249,   250,   253,   281,   307,   334,   340,   348,   353,   354,
     355,   356,   357,   358,   362,   372,   380,   386,   390,   397,
     422,   432,   463,   473,   480,   487,   524,   552,   559,   566,
     582,   589,   596,   603,   621,   631,   641,   650,   662,   671,
     680,   689,   698,   703,   708,   713,   717,   721,   726,   735,
     740,   746,   753,   770,   776,   782,   788,   794,   800,   806,
     810,   814,   818,   822,   826,   831
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FUNCTION", "ID", "DECLARE", "ARRAY",
  "INTEGER", "OF", "REAL", "XBEGIN", "XEND", "IF", "THEN", "ELSE", "WHILE",
  "DO", "ASSIGN", "RETURN", "GE", "LE", "EQ", "NE", "TRUE", "FALSE",
  "PROGRAM", "ELSEIF", "'-'", "'+'", "'*'", "'/'", "'='", "'^'", "'<'",
  "'>'", "AND", "OR", "NOT", "';'", "':'", "'('", "')'", "'['", "']'",
  "','", "$accept", "program", "variables", "declarations", "declaration",
  "functions", "function", "functype", "funcnamedecl", "parameters",
  "paramlist", "parameter", "type", "block", "statements", "statement",
  "ifstmt", "elseifpart", "elsepart", "assignstmt", "callstmt",
  "returnstmt", "whilestmt", "lvalue", "variable", "funcname", "aref",
  "call", "id", "integer", "real", "expression", "term", "factor", "num",
  "expressions", "expressionz", "condition", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,    45,    43,    42,
      47,    61,    94,    60,    62,   282,   283,   284,    59,    58,
      40,    41,    91,    93,    44
};
# endif

#define YYPACT_NINF -103

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-103)))

#define YYTABLE_NINF -86

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     118,    17,    17,     6,  -103,   -25,  -103,    80,  -103,   -15,
     139,  -103,   161,  -103,  -103,    93,    -3,    56,  -103,  -103,
      26,    38,   105,    84,  -103,  -103,  -103,   217,    85,    94,
    -103,  -103,   124,  -103,    99,  -103,   132,   154,     5,  -103,
     106,   112,   119,   122,   127,   149,   131,   134,  -103,  -103,
     135,   142,    50,  -103,   137,    93,    93,  -103,  -103,  -103,
    -103,     5,   111,   175,  -103,   140,  -103,  -103,   203,     1,
    -103,   153,    -2,   -13,     5,    14,  -103,  -103,  -103,  -103,
    -103,     5,    66,    73,  -103,    56,  -103,    93,   118,  -103,
    -103,  -103,    90,   186,    18,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,   176,   111,   111,
     176,    51,    14,   144,     9,   147,    14,   151,   152,  -103,
    -103,  -103,  -103,  -103,    63,    14,    14,    14,    14,     1,
       1,    14,    14,  -103,  -103,  -103,  -103,    90,    90,   178,
    -103,  -103,  -103,  -103,     5,   161,  -103,    32,  -103,    14,
     157,  -103,   176,   132,  -103,  -103,   185,     3,  -103,   176,
    -103
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,    11,     0,    51,     0,     7,     0,
       0,     1,     0,     9,     6,     0,    16,     0,    27,    10,
      19,     0,     0,     0,    23,    13,    15,     0,     0,     0,
       2,    52,     0,     8,     0,    25,    68,    68,    68,    26,
       0,     0,     0,     0,     0,     0,    43,     0,    44,    40,
      45,     0,     0,    21,     0,     0,     0,    33,    53,    79,
      80,    68,    68,    68,    64,     0,    63,    62,     0,    56,
      59,    61,     0,     0,    68,    41,    28,    29,    30,    31,
      32,    68,     0,     0,    18,     0,    17,     0,     0,    14,
      24,    67,    83,     0,     0,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,     0,    68,    68,
       0,     0,    39,     0,     0,     0,    72,     0,    69,    20,
      22,    11,    66,    84,     0,    74,    75,    73,    76,    55,
      54,    77,    78,    57,    58,    60,    36,    81,    82,     0,
      48,    47,    50,    49,    68,     0,    65,     0,    42,    71,
       0,    38,     0,    68,    34,    12,     0,     0,    37,     0,
      35
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -103,  -103,   113,   198,   101,    82,  -103,  -103,  -103,  -103,
    -103,   141,   -36,  -102,  -103,  -103,  -103,  -103,  -103,  -103,
    -103,  -103,  -103,   177,  -103,   182,  -103,  -103,     0,   194,
    -103,   -34,    53,    25,  -103,  -103,   138,   -37
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     7,     8,    12,    19,    88,    20,    29,
      52,    53,    23,    21,    27,    39,    40,   147,   154,    41,
      42,    43,    44,    64,    46,    65,    48,    49,    50,    66,
      67,    68,    69,    70,    71,   117,   118,    72
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      73,     9,     9,   110,    75,   136,    11,     9,   139,     6,
       9,   107,    31,    13,    58,    24,   159,    26,     5,    89,
      90,     6,   108,   109,    15,    92,    94,    91,    54,    93,
     104,   105,    61,   108,   109,    25,   100,   101,   108,   109,
     111,   100,   101,   150,   151,    74,   152,   112,   114,   116,
     156,   120,   141,   108,   109,    24,    24,   160,   153,   123,
       6,   116,   125,   126,   127,   128,    28,   113,   131,   132,
       6,   137,   138,    31,   115,    58,    30,     6,   100,   101,
      31,     5,    58,    -4,     6,    54,    51,    24,    85,     6,
      -4,    86,   122,    61,   -68,   -68,   -68,     6,   -68,    22,
      61,   -68,   -68,   -68,   146,   -68,    74,   144,    14,   -68,
     149,    14,    31,    74,   -68,     6,   157,   -68,    31,     1,
      58,    -5,    33,     2,   -85,   108,   109,   -85,    -5,   133,
     134,   135,    56,    55,    59,    60,     6,    57,    61,    31,
       5,    58,    -3,     6,    76,   -85,   -85,   -85,    62,    -3,
      77,    63,   -85,   129,   130,    59,    60,    78,     6,    61,
      79,    31,    16,    58,    17,    80,    81,   -85,   -85,    62,
     -85,    18,    63,    82,    83,   -46,    87,    59,    60,     6,
      95,    61,    31,    84,    58,   106,    18,   140,   142,   -85,
     -85,    62,   143,   148,    63,   155,   144,   158,    59,    60,
      10,   121,    61,   145,    45,    96,    97,    98,    99,    47,
     -85,   -85,    62,   100,   101,    63,    32,     0,    34,   102,
     103,     6,    96,    97,    98,    99,   119,   122,    35,    36,
     100,   101,    37,   124,     0,    38,   102,   103
};

static const yytype_int16 yycheck[] =
{
      37,     1,     2,    16,    38,   107,     0,     7,   110,     4,
      10,    13,     7,    38,     9,    15,    13,    17,     1,    55,
      56,     4,    35,    36,    39,    62,    63,    61,    28,    63,
      29,    30,    27,    35,    36,    38,    27,    28,    35,    36,
      74,    27,    28,   145,    12,    40,    14,    81,    82,    83,
     152,    87,    43,    35,    36,    55,    56,   159,    26,    41,
       4,    95,    96,    97,    98,    99,    40,     1,   102,   103,
       4,   108,   109,     7,     1,     9,    38,     4,    27,    28,
       7,     1,     9,     3,     4,    85,     1,    87,    38,     4,
      10,    41,    41,    27,    28,    29,    30,     4,    32,     6,
      27,    28,    29,    30,    41,    32,    40,    44,     7,    43,
     144,    10,     7,    40,    41,     4,   153,    44,     7,     1,
       9,     3,    38,     5,    13,    35,    36,    16,    10,   104,
     105,   106,     8,    39,    23,    24,     4,    38,    27,     7,
       1,     9,     3,     4,    38,    13,    35,    36,    37,    10,
      38,    40,    41,   100,   101,    23,    24,    38,     4,    27,
      38,     7,     1,     9,     3,    38,    17,    35,    36,    37,
      16,    10,    40,    42,    40,    40,    39,    23,    24,     4,
      40,    27,     7,    41,     9,    32,    10,    43,    41,    35,
      36,    37,    41,    15,    40,    38,    44,    12,    23,    24,
       2,    88,    27,   121,    27,    19,    20,    21,    22,    27,
      35,    36,    37,    27,    28,    40,    22,    -1,     1,    33,
      34,     4,    19,    20,    21,    22,    85,    41,    11,    12,
      27,    28,    15,    95,    -1,    18,    33,    34
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     5,    46,    47,     1,     4,    48,    49,    73,
      48,     0,    50,    38,    49,    39,     1,     3,    10,    51,
      53,    58,     6,    57,    73,    38,    73,    59,    40,    54,
      38,     7,    74,    38,     1,    11,    12,    15,    18,    60,
      61,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,     1,    55,    56,    73,    39,     8,    38,     9,    23,
      24,    27,    37,    40,    68,    70,    74,    75,    76,    77,
      78,    79,    82,    82,    40,    76,    38,    38,    38,    38,
      38,    17,    42,    40,    41,    38,    41,    39,    52,    57,
      57,    76,    82,    76,    82,    40,    19,    20,    21,    22,
      27,    28,    33,    34,    29,    30,    32,    13,    35,    36,
      16,    76,    76,     1,    76,     1,    76,    80,    81,    56,
      57,    47,    41,    41,    81,    76,    76,    76,    76,    77,
      77,    76,    76,    78,    78,    78,    58,    82,    82,    58,
      43,    43,    41,    41,    44,    50,    41,    62,    15,    76,
      58,    12,    14,    26,    63,    38,    58,    82,    12,    13,
      58
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    45,    46,    47,    47,    47,    48,    48,    49,    49,
      50,    50,    51,    51,    52,    53,    53,    54,    54,    54,
      55,    55,    56,    57,    57,    58,    59,    59,    60,    60,
      60,    60,    60,    60,    61,    62,    62,    63,    63,    64,
      65,    66,    67,    68,    68,    69,    70,    71,    71,    72,
      72,    73,    74,    75,    76,    76,    76,    77,    77,    77,
      78,    78,    79,    79,    79,    79,    79,    79,    79,    80,
      80,    81,    81,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     2,     2,     0,     2,     1,     4,     2,
       2,     0,     8,     2,     1,     2,     1,     3,     3,     0,
       3,     1,     3,     1,     4,     3,     2,     0,     2,     2,
       2,     2,     2,     2,     6,     5,     0,     3,     1,     3,
       1,     2,     5,     1,     1,     1,     1,     4,     4,     4,
       4,     1,     1,     1,     3,     3,     1,     3,     3,     1,
       3,     1,     1,     1,     1,     4,     3,     2,     0,     1,
       0,     3,     1,     3,     3,     3,     3,     3,     3,     1,
       1,     3,     3,     2,     3,     0
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
#line 121 "parser.y" /* yacc.c:1646  */
    {
                if (errorCount == 0)
                {
                    currentFunction->SetBody((yyvsp[-1].statementList));
                    currentFunction->GenerateCode();
                    cout << currentFunction;
                }
            }
#line 1412 "parser.cc" /* yacc.c:1646  */
    break;

  case 8:
#line 148 "parser.y" /* yacc.c:1646  */
    {
                if (currentFunction->OkToAddSymbol(*((yyvsp[-3].id))))
                {
                    if ((yyvsp[-1].type) != NULL)
                        currentFunction->AddVariable(*((yyvsp[-3].id)), (yyvsp[-1].type));
                }
                else
                {
                    error() << *((yyvsp[-3].id)) << " is already declared\n" << flush;
                }
            }
#line 1428 "parser.cc" /* yacc.c:1646  */
    break;

  case 9:
#line 160 "parser.y" /* yacc.c:1646  */
    {
                yyerrok;
            }
#line 1436 "parser.cc" /* yacc.c:1646  */
    break;

  case 12:
#line 192 "parser.y" /* yacc.c:1646  */
    {
	       //cout << " => Function here.." << endl;
	       //currentFunction->SetReturnType($4);
	       //cout << "Return type: " << $4 << endl;
	       //cout << "Block: " << $7->statement << endl;
	       currentFunction->SetBody((yyvsp[-1].statementList));
	       currentFunction->GenerateCode();
	       cout << currentFunction;
	       currentFunction=currentFunction->GetParent();
	     }
#line 1451 "parser.cc" /* yacc.c:1646  */
    break;

  case 13:
#line 203 "parser.y" /* yacc.c:1646  */
    {
	       yyerrok;
	     }
#line 1459 "parser.cc" /* yacc.c:1646  */
    break;

  case 14:
#line 209 "parser.y" /* yacc.c:1646  */
    {
	       currentFunction->SetReturnType((yyvsp[0].type));
	     }
#line 1467 "parser.cc" /* yacc.c:1646  */
    break;

  case 15:
#line 214 "parser.y" /* yacc.c:1646  */
    {
	       const ::string id = *((yyvsp[0].id));
	       cout << " => Doing function: " << id << endl;
	       FunctionInformation *nf = new FunctionInformation(id);
	       nf->SetParent(currentFunction);
	       if (currentFunction->OkToAddSymbol(id))
		 {
		   currentFunction->AddFunction(id, nf);
		 }
               else
		 {
		   error() << *((yyvsp[0].id)) << " is already declared\n" << flush;
		 }
	       currentFunction=nf;
	     }
#line 1487 "parser.cc" /* yacc.c:1646  */
    break;

  case 16:
#line 230 "parser.y" /* yacc.c:1646  */
    {
	       yyerrok;
	     }
#line 1495 "parser.cc" /* yacc.c:1646  */
    break;

  case 22:
#line 254 "parser.y" /* yacc.c:1646  */
    {
                if (currentFunction->OkToAddSymbol(*((yyvsp[-2].id))))
                {
                    currentFunction->AddParameter(*((yyvsp[-2].id)), (yyvsp[0].type));
                }
                else
                {
                    error() << *((yyvsp[-2].id)) << " already defined\n" << flush;
                    currentFunction->AddParameter(*((yyvsp[-2].id)), (yyvsp[0].type));
                }
            }
#line 1511 "parser.cc" /* yacc.c:1646  */
    break;

  case 23:
#line 282 "parser.y" /* yacc.c:1646  */
    {
                SymbolInformation       *info;
                TypeInformation         *typeInfo;

                info = currentFunction->LookupIdentifier(*((yyvsp[0].id)));
                if (info == NULL)
                {
                    error() << "undefined type " << *((yyvsp[0].id)) << "\n" << flush;
                    (yyval.type) = NULL;
                }
                else
                {
                    typeInfo = info->SymbolAsType();
                
                    if (typeInfo == NULL)
                    {
                        error() << *((yyvsp[0].id)) << " is not a type" << "\n" <<flush;
                        (yyval.type) = NULL;
                    }
                    else
                    {
                        (yyval.type) = typeInfo;
                    }
                }
            }
#line 1541 "parser.cc" /* yacc.c:1646  */
    break;

  case 24:
#line 308 "parser.y" /* yacc.c:1646  */
    {
                if ((yyvsp[0].type) == NULL)
                {
                    error() << "can't create arrays of invalid tpyes\n"
                            << flush;
                    (yyval.type) = NULL;
                }
                else if ((yyvsp[0].type)->elementType != NULL)
                {
                    error() << "can't do arrays of arrays\n" << flush;
                    (yyval.type) = NULL;
                }
                else
                {
                    (yyval.type) = currentFunction->AddArrayType((yyvsp[0].type), (yyvsp[-2].integer));
                }
            }
#line 1563 "parser.cc" /* yacc.c:1646  */
    break;

  case 25:
#line 335 "parser.y" /* yacc.c:1646  */
    {
                (yyval.statementList) = (yyvsp[-1].statementList);
            }
#line 1571 "parser.cc" /* yacc.c:1646  */
    break;

  case 26:
#line 341 "parser.y" /* yacc.c:1646  */
    {
                if ((yyvsp[0].statement) == NULL)
                    (yyval.statementList) = NULL;
                else
  		  (yyval.statementList) = new StatementList((yyvsp[-1].statementList), (yyvsp[0].statement));
            }
#line 1582 "parser.cc" /* yacc.c:1646  */
    break;

  case 27:
#line 348 "parser.y" /* yacc.c:1646  */
    {
                (yyval.statementList) = NULL;
            }
#line 1590 "parser.cc" /* yacc.c:1646  */
    break;

  case 33:
#line 358 "parser.y" /* yacc.c:1646  */
    { yyerrok; (yyval.statement) = NULL; }
#line 1596 "parser.cc" /* yacc.c:1646  */
    break;

  case 34:
#line 363 "parser.y" /* yacc.c:1646  */
    {
                if ((yyvsp[-4].condition) == NULL || (yyvsp[-2].statementList) == NULL)
                    (yyval.statement) = NULL;
                else
                    (yyval.statement) = new IfStatement((yyvsp[-4].condition), (yyvsp[-2].statementList), (yyvsp[-1].elseIfList), (yyvsp[0].statementList));
            }
#line 1607 "parser.cc" /* yacc.c:1646  */
    break;

  case 35:
#line 373 "parser.y" /* yacc.c:1646  */
    {
                if ((yyvsp[-2].condition) == NULL || (yyvsp[0].statementList) == NULL)
                    (yyval.elseIfList) = NULL;
                else
                    (yyval.elseIfList) = new ElseIfList((yyvsp[-4].elseIfList), (yyvsp[-2].condition), (yyvsp[0].statementList));
            }
#line 1618 "parser.cc" /* yacc.c:1646  */
    break;

  case 36:
#line 380 "parser.y" /* yacc.c:1646  */
    {
                (yyval.elseIfList) = NULL;
            }
#line 1626 "parser.cc" /* yacc.c:1646  */
    break;

  case 37:
#line 387 "parser.y" /* yacc.c:1646  */
    {
                (yyval.statementList) = (yyvsp[-1].statementList);
            }
#line 1634 "parser.cc" /* yacc.c:1646  */
    break;

  case 38:
#line 391 "parser.y" /* yacc.c:1646  */
    {
                (yyval.statementList) = NULL;
            }
#line 1642 "parser.cc" /* yacc.c:1646  */
    break;

  case 39:
#line 398 "parser.y" /* yacc.c:1646  */
    {
                LeftValue       *left;
                Expression      *right;

                left = (yyvsp[-2].lvalue);
                right = (yyvsp[0].expression);
                if (left == NULL || right == NULL)
                {
                    (yyval.statement) = NULL;
                }
                else if (!CheckAssignmentTypes(&left, &right))
                {
                    error() << "Incompatible types in assignment.\n"
                            << flush;
                    (yyval.statement) = NULL;
                }
                else
                {
                    (yyval.statement) = new Assignment(left, right);
                }
            }
#line 1668 "parser.cc" /* yacc.c:1646  */
    break;

  case 40:
#line 423 "parser.y" /* yacc.c:1646  */
    {
                if ((yyvsp[0].call) == NULL)
                    (yyval.statement) = NULL;
                else
                    (yyval.statement) = new CallStatement((yyvsp[0].call));
            }
#line 1679 "parser.cc" /* yacc.c:1646  */
    break;

  case 41:
#line 433 "parser.y" /* yacc.c:1646  */
    {
                if ((yyvsp[0].expression) == NULL)
                    (yyval.statement) = NULL;
                else
                {
                    Expression      *expr;

                    expr = (yyvsp[0].expression);
                    if (!CheckReturnType(&expr,
                                         currentFunction->GetReturnType()))
                    {
                        error() << "incompatible return type in "
                                << currentFunction->id << '\n';
                        error() << "  attempt to return "
                                << ShortSymbols << expr->valueType << '\n';
                        error() << " in function declared to return "
                                << ShortSymbols 
                                << currentFunction->GetReturnType()
                                << LongSymbols << '\n';
                        (yyval.statement) = NULL;
                    }
                    else
                    {
                        (yyval.statement) = new ReturnStatement(expr);
                    }
                }
            }
#line 1711 "parser.cc" /* yacc.c:1646  */
    break;

  case 42:
#line 464 "parser.y" /* yacc.c:1646  */
    {
                if ((yyvsp[-3].condition) == NULL || (yyvsp[-1].statementList) == NULL)
                    (yyval.statement) = NULL;
                else
                    (yyval.statement) = new WhileStatement((yyvsp[-3].condition), (yyvsp[-1].statementList));
            }
#line 1722 "parser.cc" /* yacc.c:1646  */
    break;

  case 43:
#line 474 "parser.y" /* yacc.c:1646  */
    {
                if ((yyvsp[0].variable) == NULL)
                    (yyval.lvalue) = NULL;
                else
                    (yyval.lvalue) = new Identifier((yyvsp[0].variable));
            }
#line 1733 "parser.cc" /* yacc.c:1646  */
    break;

  case 44:
#line 481 "parser.y" /* yacc.c:1646  */
    {
                (yyval.lvalue) = (yyvsp[0].aref);
            }
#line 1741 "parser.cc" /* yacc.c:1646  */
    break;

  case 45:
#line 488 "parser.y" /* yacc.c:1646  */
    {
                SymbolInformation       *info;
                VariableInformation     *varInfo;

                info = currentFunction->LookupIdentifier(*((yyvsp[0].id)));
                if (info == NULL)
                {
                    error()
                        << "undeclared variable: "
                        << *((yyvsp[0].id))
                        << "\n"
                        << flush;
                          
                    (yyval.variable) = NULL;
                }
                else
                {
                    varInfo = info->SymbolAsVariable();
                    
                    if (varInfo == NULL)
                    {
                        error()
                            << "identifier "
                            << *((yyvsp[0].id))
                            << " is not a variable\n"
                            << flush;
                        (yyval.variable) = NULL;
                    }
                    else
                    {
                        (yyval.variable) = varInfo;
                    }
                }
            }
#line 1780 "parser.cc" /* yacc.c:1646  */
    break;

  case 46:
#line 525 "parser.y" /* yacc.c:1646  */
    {
                SymbolInformation       *info;
                FunctionInformation     *funcInfo;

                info = currentFunction->LookupIdentifier(*((yyvsp[0].id)));
                if (info == NULL)
                {
                    error() << *((yyvsp[0].id)) << " is not defined\n" << flush;
                    (yyval.function) = NULL;
                }
                else
                {
                    funcInfo = info->SymbolAsFunction();

                    if (funcInfo == NULL)
                    {
                        error() << *((yyvsp[0].id)) << " is not a function\n" << flush;
                        (yyval.function) = NULL;
                    }
                    else
                    {
                        (yyval.function) = funcInfo;
                    }
                }
            }
#line 1810 "parser.cc" /* yacc.c:1646  */
    break;

  case 47:
#line 553 "parser.y" /* yacc.c:1646  */
    {
                if ((yyvsp[-3].variable) == NULL || (yyvsp[-1].expression) == NULL)
                    (yyval.aref) = NULL;
                else
                    (yyval.aref) = new ArrayReference((yyvsp[-3].variable), (yyvsp[-1].expression));
            }
#line 1821 "parser.cc" /* yacc.c:1646  */
    break;

  case 48:
#line 560 "parser.y" /* yacc.c:1646  */
    {
                (yyval.aref) = NULL;
            }
#line 1829 "parser.cc" /* yacc.c:1646  */
    break;

  case 49:
#line 567 "parser.y" /* yacc.c:1646  */
    {
                if ((yyvsp[-3].function) == NULL)
                    (yyval.call) = NULL;
                else
                {
                    if (CheckFunctionParameters((yyvsp[-3].function), (yyvsp[-3].function)->GetLastParam(), (yyvsp[-1].expressionList)))
                    {
                        (yyval.call) = new FunctionCall((yyvsp[-3].function), (yyvsp[-1].expressionList));
                    }
                    else
                    {
                        (yyval.call) = NULL;
                    }
                }
            }
#line 1849 "parser.cc" /* yacc.c:1646  */
    break;

  case 50:
#line 583 "parser.y" /* yacc.c:1646  */
    {
                (yyval.call) = NULL;
            }
#line 1857 "parser.cc" /* yacc.c:1646  */
    break;

  case 51:
#line 590 "parser.y" /* yacc.c:1646  */
    {
	        (yyval.id) = new ::string(yytext);
            }
#line 1865 "parser.cc" /* yacc.c:1646  */
    break;

  case 52:
#line 597 "parser.y" /* yacc.c:1646  */
    {
                (yyval.integer) = atoi(yytext);
            }
#line 1873 "parser.cc" /* yacc.c:1646  */
    break;

  case 53:
#line 604 "parser.y" /* yacc.c:1646  */
    {
                (yyval.real) = atof(yytext);
            }
#line 1881 "parser.cc" /* yacc.c:1646  */
    break;

  case 54:
#line 622 "parser.y" /* yacc.c:1646  */
    {
	     if(! CheckCompatibleTypes(&((yyvsp[-2].expression)), &((yyvsp[0].expression))))
	        error() << "Types in expression is not compatible\n" << flush;
		  
	     if( (yyvsp[-2].expression) == NULL || (yyvsp[0].expression) == NULL)
	       (yyval.expression) = NULL;
	     else
	       (yyval.expression) = new Plus((yyvsp[-2].expression), (yyvsp[0].expression));
	   }
#line 1895 "parser.cc" /* yacc.c:1646  */
    break;

  case 55:
#line 632 "parser.y" /* yacc.c:1646  */
    {
	     if(! CheckCompatibleTypes(&((yyvsp[-2].expression)), &((yyvsp[0].expression))))
	        error() << "Types in expression is not compatible\n" << flush;

	     if( (yyvsp[-2].expression) == NULL || (yyvsp[0].expression) == NULL)
	       (yyval.expression) = NULL;
	     else
	       (yyval.expression) = new Minus((yyvsp[-2].expression), (yyvsp[0].expression));
	   }
#line 1909 "parser.cc" /* yacc.c:1646  */
    break;

  case 56:
#line 642 "parser.y" /* yacc.c:1646  */
    {
	     if((yyvsp[0].expression) == NULL)
	       (yyval.expression) = NULL;
	     else
	       (yyval.expression) = (yyvsp[0].expression);
	   }
#line 1920 "parser.cc" /* yacc.c:1646  */
    break;

  case 57:
#line 651 "parser.y" /* yacc.c:1646  */
    {
	     if(! CheckCompatibleTypes(&((yyvsp[-2].expression)), &((yyvsp[0].expression))))
	       error() << "Types in expression is not compatible\n" << flush;
	     if ((yyvsp[-2].expression) == NULL || (yyvsp[0].expression) == NULL)
	       (yyval.expression) = NULL;
	     else{
	       Times * t = new Times((yyvsp[-2].expression), (yyvsp[0].expression));
	       //cout << t << endl;
	       (yyval.expression) = t;
	     }
	   }
#line 1936 "parser.cc" /* yacc.c:1646  */
    break;

  case 58:
#line 663 "parser.y" /* yacc.c:1646  */
    {
	     if(! CheckCompatibleTypes(&((yyvsp[-2].expression)), &((yyvsp[0].expression))))
	       error() << "Types in expression is not compatible\n" << flush;
	     if ((yyvsp[-2].expression) == NULL || (yyvsp[0].expression) == NULL)
	       (yyval.expression) = NULL;
	     else
	       (yyval.expression) = new Divide((yyvsp[-2].expression), (yyvsp[0].expression));
           }
#line 1949 "parser.cc" /* yacc.c:1646  */
    break;

  case 59:
#line 672 "parser.y" /* yacc.c:1646  */
    {
	     if((yyvsp[0].expression) == NULL)
	       (yyval.expression) = NULL;
	     else
	       (yyval.expression) = (yyvsp[0].expression);
	   }
#line 1960 "parser.cc" /* yacc.c:1646  */
    break;

  case 60:
#line 681 "parser.y" /* yacc.c:1646  */
    {
	     if(! CheckCompatibleTypes(&((yyvsp[-2].expression)), &((yyvsp[0].expression))))
	       error() << "Types in expression is not compatible\n" << flush;
	     if ((yyvsp[-2].expression) == NULL || (yyvsp[0].expression) == NULL )
	       (yyval.expression) = NULL;
	     else
	       (yyval.expression) = new Power((yyvsp[-2].expression), (yyvsp[0].expression));
	   }
#line 1973 "parser.cc" /* yacc.c:1646  */
    break;

  case 61:
#line 690 "parser.y" /* yacc.c:1646  */
    { 
	     if ((yyvsp[0].expression) == NULL)
	       (yyval.expression) = NULL;
	     else
	       (yyval.expression) = (yyvsp[0].expression); 
	   }
#line 1984 "parser.cc" /* yacc.c:1646  */
    break;

  case 62:
#line 699 "parser.y" /* yacc.c:1646  */
    { 
	     //cout << "Expression real" << endl;
	     (yyval.expression) = new RealConstant((yyvsp[0].real)); 
	   }
#line 1993 "parser.cc" /* yacc.c:1646  */
    break;

  case 63:
#line 704 "parser.y" /* yacc.c:1646  */
    { 
	     //cout << "Expression integer" << endl;
	     (yyval.expression) = new IntegerConstant((yyvsp[0].integer)); 
	   }
#line 2002 "parser.cc" /* yacc.c:1646  */
    break;

  case 64:
#line 709 "parser.y" /* yacc.c:1646  */
    { 
	     //cout << "Expression lvalue" << endl;
	     (yyval.expression) = (yyvsp[0].lvalue); 
	   }
#line 2011 "parser.cc" /* yacc.c:1646  */
    break;

  case 65:
#line 714 "parser.y" /* yacc.c:1646  */
    {
	     (yyval.expression) = new FunctionCall((yyvsp[-3].function), (yyvsp[-1].expressionList)); 
	   }
#line 2019 "parser.cc" /* yacc.c:1646  */
    break;

  case 66:
#line 718 "parser.y" /* yacc.c:1646  */
    {
	     (yyval.expression) = (yyvsp[-1].expression); 
	   }
#line 2027 "parser.cc" /* yacc.c:1646  */
    break;

  case 67:
#line 722 "parser.y" /* yacc.c:1646  */
    {
	     (yyval.expression) = new UnaryMinus((yyvsp[0].expression)); 
	   }
#line 2035 "parser.cc" /* yacc.c:1646  */
    break;

  case 68:
#line 726 "parser.y" /* yacc.c:1646  */
    { 
	     //cout << "Expression NULL" << endl;
	     (yyval.expression) = NULL; 
	   }
#line 2044 "parser.cc" /* yacc.c:1646  */
    break;

  case 69:
#line 736 "parser.y" /* yacc.c:1646  */
    {
                (yyval.expressionList) = (yyvsp[0].expressionList);
            }
#line 2052 "parser.cc" /* yacc.c:1646  */
    break;

  case 70:
#line 740 "parser.y" /* yacc.c:1646  */
    {
                (yyval.expressionList) = NULL;
            }
#line 2060 "parser.cc" /* yacc.c:1646  */
    break;

  case 71:
#line 747 "parser.y" /* yacc.c:1646  */
    {
                if ((yyvsp[0].expression) == NULL)
                    (yyval.expressionList) = NULL;
                else
                    (yyval.expressionList) = new ExpressionList((yyvsp[-2].expressionList), (yyvsp[0].expression));
            }
#line 2071 "parser.cc" /* yacc.c:1646  */
    break;

  case 72:
#line 754 "parser.y" /* yacc.c:1646  */
    {
                if ((yyvsp[0].expression) == NULL)
                    (yyval.expressionList) = NULL;
                else
                    (yyval.expressionList) = new ExpressionList(NULL, (yyvsp[0].expression));
            }
#line 2082 "parser.cc" /* yacc.c:1646  */
    break;

  case 73:
#line 771 "parser.y" /* yacc.c:1646  */
    {
	  if(! CheckCompatibleTypes(&((yyvsp[-2].expression)), &((yyvsp[0].expression))))
	    error() << "Types in condition is not compatible\n" << flush;
	  (yyval.condition) = new Equal((yyvsp[-2].expression), (yyvsp[0].expression));
	}
#line 2092 "parser.cc" /* yacc.c:1646  */
    break;

  case 74:
#line 777 "parser.y" /* yacc.c:1646  */
    {
	  if(! CheckCompatibleTypes(&((yyvsp[-2].expression)), &((yyvsp[0].expression))))
	    error() << "Types in condition is not compatible\n" << flush;
	  (yyval.condition) = new GreaterThanOrEqual((yyvsp[-2].expression), (yyvsp[0].expression));
	}
#line 2102 "parser.cc" /* yacc.c:1646  */
    break;

  case 75:
#line 783 "parser.y" /* yacc.c:1646  */
    {
	  if(! CheckCompatibleTypes(&((yyvsp[-2].expression)), &((yyvsp[0].expression))))
	    error() << "Types in condition is not compatible\n" << flush;
	  (yyval.condition) = new LessThanOrEqual((yyvsp[-2].expression), (yyvsp[0].expression));
	}
#line 2112 "parser.cc" /* yacc.c:1646  */
    break;

  case 76:
#line 789 "parser.y" /* yacc.c:1646  */
    {
	  if(! CheckCompatibleTypes(&((yyvsp[-2].expression)), &((yyvsp[0].expression))))
	    error() << "Types in condition is not compatible\n" << flush;
	  (yyval.condition) = new NotEqual((yyvsp[-2].expression), (yyvsp[0].expression));
	}
#line 2122 "parser.cc" /* yacc.c:1646  */
    break;

  case 77:
#line 795 "parser.y" /* yacc.c:1646  */
    {
	  if(! CheckCompatibleTypes(&((yyvsp[-2].expression)), &((yyvsp[0].expression))))
	    error() << "Types in condition is not compatible\n" << flush;
	  (yyval.condition) = new LessThan((yyvsp[-2].expression), (yyvsp[0].expression));
	}
#line 2132 "parser.cc" /* yacc.c:1646  */
    break;

  case 78:
#line 801 "parser.y" /* yacc.c:1646  */
    {
	  if(! CheckCompatibleTypes(&((yyvsp[-2].expression)), &((yyvsp[0].expression))))
	    error() << "Types in condition is not compatible\n" << flush;
	  (yyval.condition) = new GreaterThan((yyvsp[-2].expression), (yyvsp[0].expression));
	}
#line 2142 "parser.cc" /* yacc.c:1646  */
    break;

  case 79:
#line 807 "parser.y" /* yacc.c:1646  */
    {
	  (yyval.condition) = new BooleanConstant(1);
	}
#line 2150 "parser.cc" /* yacc.c:1646  */
    break;

  case 80:
#line 811 "parser.y" /* yacc.c:1646  */
    {
	  (yyval.condition) = new BooleanConstant(0);
	}
#line 2158 "parser.cc" /* yacc.c:1646  */
    break;

  case 81:
#line 815 "parser.y" /* yacc.c:1646  */
    {
	  (yyval.condition) = new And((yyvsp[-2].condition), (yyvsp[0].condition));
	}
#line 2166 "parser.cc" /* yacc.c:1646  */
    break;

  case 82:
#line 819 "parser.y" /* yacc.c:1646  */
    {
	  (yyval.condition) = new Or((yyvsp[-2].condition), (yyvsp[0].condition));
	}
#line 2174 "parser.cc" /* yacc.c:1646  */
    break;

  case 83:
#line 823 "parser.y" /* yacc.c:1646  */
    {
	  (yyval.condition) = new Not((yyvsp[0].condition));
	}
#line 2182 "parser.cc" /* yacc.c:1646  */
    break;

  case 84:
#line 827 "parser.y" /* yacc.c:1646  */
    {
	  (yyval.condition) = (yyvsp[-1].condition);
	}
#line 2190 "parser.cc" /* yacc.c:1646  */
    break;

  case 85:
#line 831 "parser.y" /* yacc.c:1646  */
    {
	  error() << "Unknown condition\n" << flush;
	  (yyval.condition) = NULL;
	}
#line 2199 "parser.cc" /* yacc.c:1646  */
    break;


#line 2203 "parser.cc" /* yacc.c:1646  */
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
#line 840 "parser.y" /* yacc.c:1906  */


int errorCount = 0;
int warningCount = 0;
            

/* --- Your code here ---
 *
 * Insert utility functions that you think you need here.
 */

/* It is reasonable to believe that you will need a function
 * that checks that two expressions are of compatible types,
 * and if possible makes a type conversion.
 * For your convenience a skeleton for such a function is 
 * provided below. It will be very similar to CheckAssignmentTypes.
 */

/*
 * CheckCompatibleTypes checks that the expressions indirectly pointed
 * to by left and right are compatible. If type conversion is
 * necessary, the pointers left and right point to will be modified to 
 * point to the node representing type conversion. That's why you have
 * to pass a pointer to pointer to Expression in these arguments.
 */

char CheckCompatibleTypes(Expression **left, Expression **right)
{
  if (*left == NULL || *right == NULL)
    return 1;
  if ((*left)->valueType == (*right)->valueType)
    {
      return 1;
    }
  if ((*left)->valueType == kRealType && (*right)->valueType == kRealType)
    {
      return 1;
    }
  if ((*left)->valueType == kIntegerType && (*right)->valueType == kIntegerType)
    {
      return 1;
    }
  if ((*left)->valueType == kIntegerType && (*right)->valueType == kRealType)
    {
      *left = new IntegerToReal(*left);
      return 1;
    }
  if ((*left)->valueType == kRealType && (*right)->valueType == kIntegerType)
    {
      *right = new IntegerToReal(*right);
      return 1;
    }
  return 0;
}

/* --- End your code --- */


/*
 * CheckAssignmentTypes is similar to CheckCompatibleTypes, but in
 * this case left is never modified since it represents an lvalue.
 */

char CheckAssignmentTypes(LeftValue **left, Expression **right)
{
    if (*left == NULL || *right == NULL)
        return 1;

    if ((*left)->valueType == (*right)->valueType)
    {
        return 1;
    }
    if ((*left)->valueType == kRealType && (*right)->valueType == kRealType)
    {
        return 1;
    }
    if ((*left)->valueType == kIntegerType &&
        (*right)->valueType == kIntegerType)
    {
        return 1;
    }
    if ((*left)->valueType == kIntegerType && (*right)->valueType == kRealType)
    {
        *right = new TruncateReal(*right);
        return 1;
    }
    if ((*left)->valueType == kRealType && (*right)->valueType == kIntegerType)
    {
        *right = new IntegerToReal(*right);
        return 1;
    }

    return 0;
}


/*
 * CheckFunctionParameters is used to check parameters passed to a
 * function. func is the function we're passing parameters to, formals 
 * is a pointer to the last formal parameter we're checking against
 * and params is a pointer to the ExpressionList we're checking. If
 * type conversion is necessary, the Expressions pointed to by the
 * ExpressionList will be modified accordingly.
 *
 * This function prints it's own error messages.
 */

char CheckFunctionParameters(FunctionInformation *func,
                             VariableInformation *formals,
                             ExpressionList      *params)
{
    if (formals == NULL && params == NULL)
    {
        return 1;
    }
    else if (formals == NULL && params != NULL)
    {
        error() << "too many arguments in call to " << func->id << '\n'
                << flush;
        return 0;
    }
    else if (formals != NULL && params == NULL)
    {
        error() << "too few arguments in call to " << func->id << '\n'
                << flush;
        return 0;
    }
    else
    {
        if (CheckFunctionParameters(func, formals->prev,
                                    params->precedingExpressions))
        {
            if (formals->type == params->expression->valueType)
            {
                return 1;
            }
            else if (formals->type == kIntegerType &&
                     params->expression->valueType == kRealType)
            {
                params->expression = new TruncateReal(params->expression);
                return 1;
            }
            else if (formals->type == kRealType &&
                     params->expression->valueType == kIntegerType)
            {
                params->expression = new IntegerToReal(params->expression);
                return 1;
            }
            else
            {
                error() << "incompatible types in call to "
                        << func->id
                        << '\n'
                        << flush;
                error() << "  parameter "
                        << formals->id
                        << " was declared "
                        << ShortSymbols
                        << formals->type
                        << '\n'
                        << flush;
                error() << "  argument was of type "
                        << params->expression->valueType
                        << '\n'
                        << LongSymbols << flush;
                return 0;                
            }
        }
    }
}


char CheckReturnType(Expression **expr, TypeInformation *info)
{

  //cout << "=> CheckReturnType" << endl << "Expr type: " << (*expr)->valueType << endl << "Returntype: " << info->id << endl;
  if (info == NULL || *expr == NULL){
    return 1;
  }

    if ((*expr)->valueType == info){
      return 1;
    }

    if ((*expr)->valueType == kIntegerType && info == kRealType)
    {
        *expr = new IntegerToReal(*expr);
        return 1;
    }

    if ((*expr)->valueType == kRealType && info == kIntegerType)
    {
        *expr = new TruncateReal(*expr);
        return 1;
    }

    return 0;
}


void yyerror(char *message)
{
    error() << message << '\n' << flush;
}

ostream& error(void)
{
    errorCount += 1;
    return cerr << yylineno << " Error: ";
}

ostream& warning(void)
{
    warningCount += 1;
    return cerr << yylineno << " Warning: ";
}
