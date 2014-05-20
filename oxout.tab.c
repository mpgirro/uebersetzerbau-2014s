
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
#line 2 "oxout.y"


/* Line 189 of yacc.c  */
#line 5 "oxout.y"

	
/* === librarys === */
	
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h> /* for 64 bit int */
#include "symtab.h"
#include "syntree.h"

/* === constants === */

#define LEXICAL_ERROR 	1
#define SYNTAX_ERROR 	2
#define SEMANTIC_ERROR	3 	/* use of non visible name, etc. */
	

/* === function signatures === */

void lexerror(int);
void yyerror(const char *msg);
void semanticerror(void);

char *next_reg(void);
void reset_regcursor(void);

void burm_label(NODEPTR_TYPE);
void burm_reduce(NODEPTR_TYPE bnode, int goalnt);

extern int yylex();
extern int yyparse();

/* === global variables === */

FILE *output;

extern FILE* yyin;

int regcursor = -1;
char *registers[] = { "rdi", "rsi", "rdx", "rcx", "r8", "r9"};



/* Line 189 of yacc.c  */
#line 122 "oxout.tab.c"

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
     STRUCT = 258,
     END = 259,
     FUNC = 260,
     RETURN = 261,
     WITH = 262,
     DO = 263,
     LET = 264,
     IN = 265,
     COND = 266,
     THEN = 267,
     NOT = 268,
     OR = 269,
     NOTEQUAL = 270,
     NUMBER = 271,
     IDENTIFIER = 272
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 49 "oxout.y"

	char *sval;
	int64_t nval;



/* Line 214 of yacc.c  */
#line 182 "oxout.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */

/* Line 264 of yacc.c  */
#line 104 "oxout.y"



struct yyyT1 { char *name; }; 
typedef struct yyyT1 *yyyP1; 


struct yyyT2 { int64_t val; }; 
typedef struct yyyT2 *yyyP2; 


struct yyyT3 { symtab_t *structtab; symtab_t *fieldtab; }; 
typedef struct yyyT3 *yyyP3; 


struct yyyT4 { symtab_t *structtab; symtab_t *fieldtab; }; 
typedef struct yyyT4 *yyyP4; 


struct yyyT5 { symtab_t *structtab; symtab_t *fieldtab; symtab_t *dummy1; }; 
typedef struct yyyT5 *yyyP5; 


struct yyyT6 { symtab_t *structtab; symtab_t *fieldtab; }; 
typedef struct yyyT6 *yyyP6; 


struct yyyT7 { symtab_t *tab; }; 
typedef struct yyyT7 *yyyP7; 


struct yyyT8 { symtab_t *fieldtab; char *structname; }; 
typedef struct yyyT8 *yyyP8; 


struct yyyT9 { symtab_t *structtab; symtab_t *fieldtab; symtab_t *vartab; tnode_t *node; }; 
typedef struct yyyT9 *yyyP9; 


struct yyyT10 { symtab_t *structtab; symtab_t *fieldtab; symtab_t *vartab; tnode_t *node; }; 
typedef struct yyyT10 *yyyP10; 


struct yyyT11 { symtab_t *structtab; symtab_t *fieldtab; symtab_t *vartab; }; 
typedef struct yyyT11 *yyyP11; 


struct yyyT12 { symtab_t *fieldtab; symtab_t *vartab; symtab_t *visscope; }; 
typedef struct yyyT12 *yyyP12; 


struct yyyT13 { symtab_t *fieldtab; symtab_t *vartab; }; 
typedef struct yyyT13 *yyyP13; 


struct yyyT14 { symtab_t *fieldtab; symtab_t *vartab; symtab_t *visscope; tnode_t *node; }; 
typedef struct yyyT14 *yyyP14; 


struct yyyT15 { symtab_t *fieldtab; symtab_t *vartab; symtab_t *visscope; tnode_t *node; }; 
typedef struct yyyT15 *yyyP15; 


struct yyyT16 { symtab_t *fieldtab; symtab_t *vartab; symtab_t *visscope; tnode_t *node; }; 
typedef struct yyyT16 *yyyP16; 


struct yyyT17 { symtab_t *fieldtab; symtab_t *vartab; symtab_t *visscope; tnode_t *node; }; 
typedef struct yyyT17 *yyyP17; 


struct yyyT18 { symtab_t *fieldtab; symtab_t *vartab; symtab_t *visscope; tnode_t *node; }; 
typedef struct yyyT18 *yyyP18; 


struct yyyT19 { symtab_t *fieldtab; symtab_t *vartab; symtab_t *visscope; }; 
typedef struct yyyT19 *yyyP19; 


struct yyyT20 { symtab_t *fieldtab; symtab_t *vartab; symtab_t *visscope; }; 
typedef struct yyyT20 *yyyP20; 


struct yyyT21 { symtab_t *fieldtab; symtab_t *vartab; symtab_t *visscope; tnode_t *node; }; 
typedef struct yyyT21 *yyyP21; 
                                                      /*custom*/  
typedef unsigned char yyyWAT; 
typedef unsigned char yyyRCT; 
typedef unsigned short yyyPNT; 
typedef unsigned char yyyWST; 

#include <limits.h>
#define yyyR UCHAR_MAX  

 /* funny type; as wide as the widest of yyyWAT,yyyWST,yyyRCT  */ 
typedef unsigned short yyyFT;

                                                      /*stock*/  




struct yyyGenNode {void *parent;  
                   struct yyyGenNode **cL; /* child list */ 
                   yyyRCT *refCountList; 
                   yyyPNT prodNum;                      
                   yyyWST whichSym; /* which child of parent? */ 
                  }; 

typedef struct yyyGenNode yyyGNT; 



struct yyyTB {int isEmpty; 
              int typeNum; 
              int nAttrbs; 
              char *snBufPtr; 
              yyyWAT *startP,*stopP; 
             };  




extern struct yyyTB yyyTermBuffer; 
extern yyyWAT yyyLRCIL[]; 
extern void yyyGenLeaf(); 



/* Line 264 of yacc.c  */
#line 234 "oxout.y"

#include <stdio.h>

int yyyYok = 1;
int yyyInitDone = 0;
char *yyySTsn;
yyyGNT *yyySTN;
int yyyGNSz = sizeof(yyyGNT);
int yyyProdNum,yyyRHSlength,yyyNattrbs,yyyTypeNum; 

extern yyyFT yyyRCIL[];

void yyyExecuteRRsection();
void yyyYoxInit();
void yyyYoxReset();
void yyyDecorate();
void yyyGenIntNode();
void yyyAdjustINRC();
void yyyPrune();
void yyyUnsolvedInstSearchTrav();
void yyyUnsolvedInstSearchTravAux();
void yyyerror();
void yyyShift();



#define yyyRSU(NUM1,NUM2,NUM3,NUM4) \
   yyyProdNum=NUM1;yyyRHSlength=NUM2;yyyNattrbs=NUM3;yyyTypeNum=NUM4;\
   if ((yychar <= 0) && (!yyyTermBuffer.isEmpty)) yyyShift(); 


/* Line 264 of yacc.c  */
#line 357 "oxout.tab.c"

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   95

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  29
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  54
/* YYNRULES -- Number of states.  */
#define YYNSTATES  100

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   272

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      20,    21,    26,    25,    28,    24,    23,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    19,    18,
       2,    22,    27,     2,     2,     2,     2,     2,     2,     2,
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
      15,    16,    17
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    10,    14,    16,    18,
      24,    25,    28,    29,    32,    40,    41,    45,    48,    52,
      58,    66,    70,    72,    73,    80,    81,    87,    91,    93,
      96,    99,   102,   105,   109,   113,   117,   121,   125,   129,
     131,   133,   135,   137,   141,   145,   147,   148,   152,   153,
     155,   159,   161,   165,   167
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      30,     0,    -1,    -1,    31,    32,    -1,    33,    -1,    -1,
      33,    34,    18,    -1,    38,    -1,    35,    -1,     3,    17,
      19,    36,     4,    -1,    -1,    36,    17,    -1,    -1,    37,
      17,    -1,     5,    17,    20,    37,    21,    39,     4,    -1,
      -1,    40,    18,    39,    -1,     6,    48,    -1,    11,    41,
       4,    -1,     9,    42,    10,    39,     4,    -1,     7,    48,
      19,    17,     8,    39,     4,    -1,    43,    22,    48,    -1,
      51,    -1,    -1,    41,    48,    12,    39,     4,    18,    -1,
      -1,    42,    17,    22,    48,    18,    -1,    51,    23,    17,
      -1,    17,    -1,    24,    51,    -1,    13,    51,    -1,    24,
      44,    -1,    13,    44,    -1,    51,    25,    51,    -1,    45,
      25,    51,    -1,    51,    26,    51,    -1,    46,    26,    51,
      -1,    51,    14,    51,    -1,    47,    14,    51,    -1,    44,
      -1,    45,    -1,    46,    -1,    47,    -1,    51,    27,    51,
      -1,    51,    15,    51,    -1,    51,    -1,    -1,    49,    48,
      28,    -1,    -1,    48,    -1,    20,    48,    21,    -1,    16,
      -1,    51,    23,    17,    -1,    17,    -1,    17,    20,    49,
      50,    21,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   269,   269,   269,   280,   287,   295,   302,   307,   314,
     324,   327,   336,   342,   349,   358,   363,   371,   378,   384,
     390,   396,   402,   412,   415,   423,   428,   435,   441,   448,
     454,   460,   466,   474,   480,   488,   494,   502,   508,   516,
     522,   528,   534,   540,   546,   552,   562,   565,   574,   577,
     584,   590,   597,   604,   610
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "STRUCT", "END", "FUNC", "RETURN",
  "WITH", "DO", "LET", "IN", "COND", "THEN", "NOT", "OR", "NOTEQUAL",
  "NUMBER", "IDENTIFIER", "';'", "':'", "'('", "')'", "'='", "'.'", "'-'",
  "'+'", "'*'", "'>'", "','", "$accept", "yyyAugNonterm", "$@1", "Start",
  "Program", "Def", "Structdef", "FieldDef", "ParamDef", "Funcdef",
  "Stats", "Stat", "Condlist", "LetDef", "Lexpr", "Notexpr", "Addexpr",
  "Mulexpr", "Orexpr", "Expr", "ExprList", "FinalArg", "Term", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,    59,    58,
      40,    41,    61,    46,    45,    43,    42,    62,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    29,    31,    30,    32,    33,    33,    34,    34,    35,
      36,    36,    37,    37,    38,    39,    39,    40,    40,    40,
      40,    40,    40,    41,    41,    42,    42,    43,    43,    44,
      44,    44,    44,    45,    45,    46,    46,    47,    47,    48,
      48,    48,    48,    48,    48,    48,    49,    49,    50,    50,
      51,    51,    51,    51,    51
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     0,     3,     1,     1,     5,
       0,     2,     0,     2,     7,     0,     3,     2,     3,     5,
       7,     3,     1,     0,     6,     0,     5,     3,     1,     2,
       2,     2,     2,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     3,     3,     1,     0,     3,     0,     1,
       3,     1,     3,     1,     5
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     5,     1,     3,     4,     0,     0,     0,     8,
       7,     0,     0,     6,    10,    12,     0,     0,     9,    11,
      13,    15,     0,     0,    25,    23,    51,    53,     0,     0,
       0,     0,    22,     0,    53,     0,    39,    40,    41,    42,
      17,    45,     0,     0,     0,    46,     0,    14,    15,     0,
       0,    32,    30,    31,    29,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    15,     0,    18,     0,    48,
      50,    16,    21,    52,    34,    36,    38,    37,    44,    52,
      33,    35,    43,     0,     0,     0,    15,    49,     0,    15,
      19,     0,     0,    47,    54,     0,    26,     0,    20,    24
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,     4,     5,     8,     9,    16,    17,    10,
      29,    30,    44,    43,    31,    36,    37,    38,    39,    40,
      69,    88,    41
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -44
static const yytype_int8 yypact[] =
{
     -44,     1,   -44,   -44,   -44,    13,   -11,    -4,     5,   -44,
     -44,     0,     6,   -44,   -44,   -44,    -2,   -10,   -44,   -44,
     -44,    42,    61,    61,   -44,   -44,   -44,     9,    61,    28,
      15,    17,    29,    61,    34,    61,   -44,    30,    31,    56,
     -44,    46,    37,    -7,     4,   -44,    54,   -44,    42,    61,
      59,   -44,    57,   -44,    57,    47,    47,    47,    47,    47,
      62,    47,    47,    47,    65,    42,    64,   -44,    71,    61,
     -44,   -44,   -44,    66,    57,    57,    57,    57,    57,   -44,
      57,    57,    57,    76,    83,    61,    42,    63,    68,    42,
     -44,    72,    88,   -44,   -44,    89,   -44,    77,   -44,   -44
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -43,   -44,   -44,   -44,   -44,    12,   -44,   -44,   -44,   -19,
     -44,   -44,   -21
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -29
static const yytype_int8 yytable[] =
{
      32,     3,    18,    65,    42,    71,    11,    20,    67,    46,
      66,    21,    52,    12,    54,    19,     6,    33,     7,    14,
      26,    34,    84,    13,    28,    68,    15,    32,    35,    45,
      72,   -28,    47,    48,    74,    75,    76,    77,    78,    49,
      80,    81,    82,    92,    32,    51,    95,    53,    22,    23,
      87,    24,    50,    25,    45,    55,    64,    56,    26,    27,
      58,    59,    28,    26,    34,    32,    91,    28,    32,    60,
      57,    61,    62,    63,    33,    70,    73,    26,    34,    79,
      60,    28,    83,    86,    89,    35,    85,    90,   -27,    94,
      96,    93,    97,    98,     0,    99
};

static const yytype_int8 yycheck[] =
{
      21,     0,     4,    10,    23,    48,    17,    17,     4,    28,
      17,    21,    33,    17,    35,    17,     3,    13,     5,    19,
      16,    17,    65,    18,    20,    44,    20,    48,    24,    20,
      49,    22,     4,    18,    55,    56,    57,    58,    59,    22,
      61,    62,    63,    86,    65,    33,    89,    35,     6,     7,
      69,     9,    23,    11,    20,    25,    19,    26,    16,    17,
      14,    15,    20,    16,    17,    86,    85,    20,    89,    23,
      14,    25,    26,    27,    13,    21,    17,    16,    17,    17,
      23,    20,    17,    12,     8,    24,    22,     4,    22,    21,
      18,    28,     4,     4,    -1,    18
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    30,    31,     0,    32,    33,     3,     5,    34,    35,
      38,    17,    17,    18,    19,    20,    36,    37,     4,    17,
      17,    21,     6,     7,     9,    11,    16,    17,    20,    39,
      40,    43,    51,    13,    17,    24,    44,    45,    46,    47,
      48,    51,    48,    42,    41,    20,    48,     4,    18,    22,
      23,    44,    51,    44,    51,    25,    26,    14,    14,    15,
      23,    25,    26,    27,    19,    10,    17,     4,    48,    49,
      21,    39,    48,    17,    51,    51,    51,    51,    51,    17,
      51,    51,    51,    17,    39,    22,    12,    48,    50,     8,
       4,    48,    39,    28,    21,    39,    18,     4,     4,    18
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
#line 269 "oxout.y"
    {if (!yyyInitDone) 
		    {yyyYoxInit(); 
		     yyyInitDone = 1;
		    }
		 yyyYoxReset();
		;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 276 "oxout.y"
    {
		 yyyDecorate(); yyyExecuteRRsection();
		;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 281 "oxout.y"
    {if(yyyYok){
yyyRSU(1,1,0,0);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+0,yyyRCIL+0);/*yyyPrune(1);*/};}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 287 "oxout.y"
    {if(yyyYok){
yyyRSU(2,0,2,3);
yyyGenIntNode();
/* init empty struct symbol table */ (((yyyP3)yyySTsn)->structtab) = symtab_init();
			
			/* init empty field symbol table */
			 (((yyyP3)yyySTsn)->fieldtab) = symtab_init();
		yyyAdjustINRC(yyyRCIL+0,yyyRCIL+6);};}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 296 "oxout.y"
    {if(yyyYok){
yyyRSU(3,3,2,3);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+6,yyyRCIL+18);/*yyyPrune(3);*/};}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 303 "oxout.y"
    {if(yyyYok){
yyyRSU(4,1,2,4);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+18,yyyRCIL+24);};}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 308 "oxout.y"
    {if(yyyYok){
yyyRSU(5,1,2,4);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+24,yyyRCIL+30);};}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 315 "oxout.y"
    {if(yyyYok){
yyyRSU(6,5,3,5);
yyyGenIntNode();
 (((yyyP8)(((char *)((yyySTN->cL)[3]))+yyyGNSz))->structname) = (((yyyP1)(((char *)((yyySTN->cL)[1]))+yyyGNSz))->name);
		yyyAdjustINRC(yyyRCIL+30,yyyRCIL+39);};}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 324 "oxout.y"
    {if(yyyYok){
yyyRSU(7,0,2,8);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+39,yyyRCIL+39);};}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 328 "oxout.y"
    {if(yyyYok){
yyyRSU(8,2,2,8);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+39,yyyRCIL+45);};}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 336 "oxout.y"
    {if(yyyYok){
yyyRSU(9,0,1,7);
yyyGenIntNode();
 (((yyyP7)yyySTsn)->tab) = symtab_init();
		yyyAdjustINRC(yyyRCIL+45,yyyRCIL+48);};}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 343 "oxout.y"
    {if(yyyYok){
yyyRSU(10,2,1,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+48,yyyRCIL+51);/*yyyPrune(10);*/};}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 350 "oxout.y"
    {if(yyyYok){
yyyRSU(11,7,2,6);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+51,yyyRCIL+60);};}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 358 "oxout.y"
    {if(yyyYok){
yyyRSU(12,0,4,9);
yyyGenIntNode();
 (((yyyP9)yyySTsn)->node) = NULL;
			yyyAdjustINRC(yyyRCIL+60,yyyRCIL+63);};}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 364 "oxout.y"
    {if(yyyYok){
yyyRSU(13,3,4,9);
yyyGenIntNode();
 (((yyyP9)yyySTsn)->node) = NULL;
			yyyAdjustINRC(yyyRCIL+63,yyyRCIL+84);};}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 372 "oxout.y"
    {if(yyyYok){
yyyRSU(14,2,4,10);
yyyGenIntNode();
 (((yyyP10)yyySTsn)->node) = NULL;
			
			yyyAdjustINRC(yyyRCIL+84,yyyRCIL+96);};}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 379 "oxout.y"
    {if(yyyYok){
yyyRSU(15,3,4,10);
yyyGenIntNode();
 (((yyyP10)yyySTsn)->node) = NULL;
		yyyAdjustINRC(yyyRCIL+96,yyyRCIL+108);};}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 385 "oxout.y"
    {if(yyyYok){
yyyRSU(16,5,4,10);
yyyGenIntNode();
 (((yyyP10)yyySTsn)->node) = NULL;
		yyyAdjustINRC(yyyRCIL+108,yyyRCIL+126);};}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 391 "oxout.y"
    {if(yyyYok){
yyyRSU(17,7,4,10);
yyyGenIntNode();
 (((yyyP10)yyySTsn)->node) = NULL;
		yyyAdjustINRC(yyyRCIL+126,yyyRCIL+147);};}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 397 "oxout.y"
    {if(yyyYok){
yyyRSU(18,3,4,10);
yyyGenIntNode();
 (((yyyP10)yyySTsn)->node) = NULL;
		yyyAdjustINRC(yyyRCIL+147,yyyRCIL+165);};}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 403 "oxout.y"
    {if(yyyYok){
yyyRSU(19,1,4,10);
yyyGenIntNode();
 (((yyyP10)yyySTsn)->node) = NULL;
		yyyAdjustINRC(yyyRCIL+165,yyyRCIL+177);};}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 412 "oxout.y"
    {if(yyyYok){
yyyRSU(20,0,3,11);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+177,yyyRCIL+177);};}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 416 "oxout.y"
    {if(yyyYok){
yyyRSU(21,6,3,11);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+177,yyyRCIL+204);};}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 423 "oxout.y"
    {if(yyyYok){
yyyRSU(22,0,3,12);
yyyGenIntNode();
 (((yyyP12)yyySTsn)->vartab) = symtab_init();
		yyyAdjustINRC(yyyRCIL+204,yyyRCIL+207);};}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 429 "oxout.y"
    {if(yyyYok){
yyyRSU(23,5,3,12);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+207,yyyRCIL+225);};}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 436 "oxout.y"
    {if(yyyYok){
yyyRSU(24,3,2,13);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+225,yyyRCIL+234);};}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 442 "oxout.y"
    {if(yyyYok){
yyyRSU(25,1,2,13);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+234,yyyRCIL+234);/*yyyPrune(25);*/};}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 449 "oxout.y"
    {if(yyyYok){
yyyRSU(26,2,4,14);
yyyGenIntNode();
 (((yyyP14)yyySTsn)->node) = NULL;	
			yyyAdjustINRC(yyyRCIL+234,yyyRCIL+246);};}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 455 "oxout.y"
    {if(yyyYok){
yyyRSU(27,2,4,14);
yyyGenIntNode();
 (((yyyP14)yyySTsn)->node) = NULL;	
			yyyAdjustINRC(yyyRCIL+246,yyyRCIL+258);};}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 461 "oxout.y"
    {if(yyyYok){
yyyRSU(28,2,4,14);
yyyGenIntNode();
 (((yyyP14)yyySTsn)->node) = NULL;	
			yyyAdjustINRC(yyyRCIL+258,yyyRCIL+270);};}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 467 "oxout.y"
    {if(yyyYok){
yyyRSU(29,2,4,14);
yyyGenIntNode();
 (((yyyP14)yyySTsn)->node) = NULL;	
			yyyAdjustINRC(yyyRCIL+270,yyyRCIL+282);};}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 475 "oxout.y"
    {if(yyyYok){
yyyRSU(30,3,4,15);
yyyGenIntNode();
 (((yyyP15)yyySTsn)->node) = NULL;	
			yyyAdjustINRC(yyyRCIL+282,yyyRCIL+303);};}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 481 "oxout.y"
    {if(yyyYok){
yyyRSU(31,3,4,15);
yyyGenIntNode();
 (((yyyP15)yyySTsn)->node) = NULL;	
			yyyAdjustINRC(yyyRCIL+303,yyyRCIL+324);};}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 489 "oxout.y"
    {if(yyyYok){
yyyRSU(32,3,4,16);
yyyGenIntNode();
 (((yyyP16)yyySTsn)->node) = NULL;	
			yyyAdjustINRC(yyyRCIL+324,yyyRCIL+345);};}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 495 "oxout.y"
    {if(yyyYok){
yyyRSU(33,3,4,16);
yyyGenIntNode();
 (((yyyP16)yyySTsn)->node) = NULL;	
			yyyAdjustINRC(yyyRCIL+345,yyyRCIL+366);};}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 503 "oxout.y"
    {if(yyyYok){
yyyRSU(34,3,4,17);
yyyGenIntNode();
 (((yyyP17)yyySTsn)->node) = NULL;	
			yyyAdjustINRC(yyyRCIL+366,yyyRCIL+387);};}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 509 "oxout.y"
    {if(yyyYok){
yyyRSU(35,3,4,17);
yyyGenIntNode();
 (((yyyP17)yyySTsn)->node) = NULL;	
			yyyAdjustINRC(yyyRCIL+387,yyyRCIL+408);};}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 517 "oxout.y"
    {if(yyyYok){
yyyRSU(36,1,4,18);
yyyGenIntNode();
 (((yyyP18)yyySTsn)->node) = NULL;
			yyyAdjustINRC(yyyRCIL+408,yyyRCIL+420);};}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 523 "oxout.y"
    {if(yyyYok){
yyyRSU(37,1,4,18);
yyyGenIntNode();
 (((yyyP18)yyySTsn)->node) = NULL;
			yyyAdjustINRC(yyyRCIL+420,yyyRCIL+432);};}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 529 "oxout.y"
    {if(yyyYok){
yyyRSU(38,1,4,18);
yyyGenIntNode();
 (((yyyP18)yyySTsn)->node) = NULL;
			yyyAdjustINRC(yyyRCIL+432,yyyRCIL+444);};}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 535 "oxout.y"
    {if(yyyYok){
yyyRSU(39,1,4,18);
yyyGenIntNode();
 (((yyyP18)yyySTsn)->node) = NULL;
			yyyAdjustINRC(yyyRCIL+444,yyyRCIL+456);};}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 541 "oxout.y"
    {if(yyyYok){
yyyRSU(40,3,4,18);
yyyGenIntNode();
 (((yyyP18)yyySTsn)->node) = NULL;
			yyyAdjustINRC(yyyRCIL+456,yyyRCIL+477);};}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 547 "oxout.y"
    {if(yyyYok){
yyyRSU(41,3,4,18);
yyyGenIntNode();
 (((yyyP18)yyySTsn)->node) = NULL;
			yyyAdjustINRC(yyyRCIL+477,yyyRCIL+498);};}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 553 "oxout.y"
    {if(yyyYok){
yyyRSU(42,1,4,18);
yyyGenIntNode();
 (((yyyP18)yyySTsn)->node) = NULL;
			yyyAdjustINRC(yyyRCIL+498,yyyRCIL+510);};}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 562 "oxout.y"
    {if(yyyYok){
yyyRSU(43,0,3,19);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+510,yyyRCIL+510);};}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 566 "oxout.y"
    {if(yyyYok){
yyyRSU(44,3,3,19);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+510,yyyRCIL+528);};}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 574 "oxout.y"
    {if(yyyYok){
yyyRSU(45,0,3,20);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+528,yyyRCIL+528);};}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 578 "oxout.y"
    {if(yyyYok){
yyyRSU(46,1,3,20);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+528,yyyRCIL+537);};}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 585 "oxout.y"
    {if(yyyYok){
yyyRSU(47,3,4,21);
yyyGenIntNode();
 (((yyyP21)yyySTsn)->node) = NULL;
			yyyAdjustINRC(yyyRCIL+537,yyyRCIL+549);};}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 592 "oxout.y"
    {if(yyyYok){
yyyRSU(48,1,4,21);
yyyGenIntNode();
 (((yyyP21)yyySTsn)->node) = NULL;
			yyyAdjustINRC(yyyRCIL+549,yyyRCIL+552);/*yyyPrune(48);*/};}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 598 "oxout.y"
    {if(yyyYok){
yyyRSU(49,3,4,21);
yyyGenIntNode();
 (((yyyP21)yyySTsn)->node) = NULL;
			/*@codegen @Term.node@ = new_num(@NUMBER.val@);*/
		yyyAdjustINRC(yyyRCIL+552,yyyRCIL+564);};}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 605 "oxout.y"
    {if(yyyYok){
yyyRSU(50,1,4,21);
yyyGenIntNode();
 (((yyyP21)yyySTsn)->node) = NULL;
			yyyAdjustINRC(yyyRCIL+564,yyyRCIL+567);/*yyyPrune(50);*/};}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 611 "oxout.y"
    {if(yyyYok){
yyyRSU(51,5,4,21);
yyyGenIntNode();
 (((yyyP21)yyySTsn)->node) = NULL;
		yyyAdjustINRC(yyyRCIL+567,yyyRCIL+588);};}
    break;



/* Line 1455 of yacc.c  */
#line 2199 "oxout.tab.c"
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
#line 619 "oxout.y"


int main(int argc, char **argv)
{
	/* decide whether to to read from file or from input stream */
	if( argc > 1)
	{
		yyin = fopen(argv[1],"r");
	} 
	else 
	{
		yyin = stdin;
	}
	
	output = stdout;

	yyparse();

	/* if we reached this, everything went well */
	exit(EXIT_SUCCESS);
}

/* we overwrite this yacc/bison function to return the correct exit code */
void yyerror(const char *msg)
{
	(void) fprintf(stderr, "%s\n", msg);
	exit(SYNTAX_ERROR);
}

void lexerror(int line)
{
	(void) fprintf(stderr, "lexical error encountered in line %i\n", line);
	exit(LEXICAL_ERROR);
}

void semanticerror(void)
{
	(void) fprintf(stderr, "semantic error\n");
	exit(SEMANTIC_ERROR);
}

char *next_reg(void)
{
	regcursor += 1;
	if( regcursor < 0 || regcursor > 5 )
	{
		return NULL;
	}
	return registers[regcursor];
}

void reset_regcursor(void)
{
	regcursor = -1;
}




                                                      /*custom*/  
long yyyMaxNbytesNodeStg = 2000000; 
long yyyMaxNrefCounts =    500000; 
long yyyMaxNchildren =     60000; 
long yyyMaxStackSize =     2000; 
long yyySSALspaceSize =    20000; 
long yyyRSmaxSize =        1000; 
long yyyTravStackMaxSize = 2000; 


struct yyyTB yyyTermBuffer; 

char *yyyNodeAndStackSpace; 

char *yyyNodeSpace;
char *yyyNextNodeSpace; 
char *yyyAfterNodeSpace; 


 
struct yyyGenNode **yyyChildListSpace;  
struct yyyGenNode **yyyNextCLspace; 
struct yyyGenNode **yyyAfterChildListSpace; 



yyyRCT *yyyRefCountListSpace;
yyyRCT *yyyNextRCLspace;  
yyyRCT *yyyAfterRefCountListSpace;   



struct yyySolvedSAlistCell {yyyWAT attrbNum; 
                            long next; 
                           }; 
#define yyyLambdaSSAL 0 
long yyySSALCfreeList = yyyLambdaSSAL; 
long yyyNewSSALC = 1; 
 
struct yyySolvedSAlistCell *yyySSALspace; 


 
struct yyyStackItem {struct yyyGenNode *node; 
                     long solvedSAlist; 
                     struct yyyGenNode *oldestNode; 
                    };  

long yyyNbytesStackStg; 
struct yyyStackItem *yyyStack; 
struct yyyStackItem *yyyAfterStack; 
struct yyyStackItem *yyyStackTop; 



struct yyyRSitem {yyyGNT *node; 
                  yyyWST whichSym; 
                  yyyWAT wa;  
                 };  

struct yyyRSitem *yyyRS;  
struct yyyRSitem *yyyRSTop;  
struct yyyRSitem *yyyAfterRS;  
 





yyyFT yyyRCIL[] = {
yyyR,0,0, yyyR,1,0, yyyR,0,1, yyyR,1,1, 1,0,1, 1,1,1, 
0,0,1, 0,1,1, 0,0,1, 0,1,1, yyyR,2,1, 3,0,1, 
3,1,0, 0,0,2, 0,1,1, yyyR,0,0, yyyR,0,1, 5,0,1, 
5,1,1, 5,2,1, yyyR,3,0, yyyR,3,0, 0,0,1, 0,1,1, 
0,2,1, 2,0,1, 2,1,1, 2,2,1, yyyR,3,0, 1,0,1, 
1,1,1, 1,2,1, yyyR,3,0, 1,0,1, 1,1,1, 1,2,1, 
yyyR,3,0, 1,0,1, 1,2,1, 3,0,1, 3,1,1, 3,2,2, 
yyyR,3,0, 1,0,1, 1,1,1, 1,2,1, 5,0,1, 5,1,1, 
5,2,2, yyyR,3,0, 0,0,1, 0,1,1, 2,0,1, 2,1,1, 
2,2,1, yyyR,3,0, 0,0,1, 0,1,1, 0,2,1, 0,0,1, 
0,1,1, 0,2,1, 1,0,1, 1,1,1, 1,2,1, 3,0,1, 
3,1,1, 3,2,1, yyyR,1,0, yyyR,1,1, 0,0,1, 0,2,1, 
3,0,1, 3,1,1, 3,2,1, 0,0,1, 0,1,1, 0,2,1, 
yyyR,3,0, 1,0,1, 1,1,1, 1,2,1, yyyR,3,0, 1,0,1, 
1,1,1, 1,2,1, yyyR,3,0, 1,0,1, 1,1,1, 1,2,1, 
yyyR,3,0, 1,0,1, 1,1,1, 1,2,1, yyyR,3,0, 0,0,1, 
0,1,1, 0,2,1, 2,0,1, 2,1,1, 2,2,1, yyyR,3,0, 
0,0,1, 0,1,1, 0,2,1, 2,0,1, 2,1,1, 2,2,1, 
yyyR,3,0, 0,0,1, 0,1,1, 0,2,1, 2,0,1, 2,1,1, 
2,2,1, yyyR,3,0, 0,0,1, 0,1,1, 0,2,1, 2,0,1, 
2,1,1, 2,2,1, yyyR,3,0, 0,0,1, 0,1,1, 0,2,1, 
2,0,1, 2,1,1, 2,2,1, yyyR,3,0, 0,0,1, 0,1,1, 
0,2,1, 2,0,1, 2,1,1, 2,2,1, yyyR,3,0, 0,0,1, 
0,1,1, 0,2,1, yyyR,3,0, 0,0,1, 0,1,1, 0,2,1, 
yyyR,3,0, 0,0,1, 0,1,1, 0,2,1, yyyR,3,0, 0,0,1, 
0,1,1, 0,2,1, yyyR,3,0, 0,0,1, 0,1,1, 0,2,1, 
2,0,1, 2,1,1, 2,2,1, yyyR,3,0, 0,0,1, 0,1,1, 
0,2,1, 2,0,1, 2,1,1, 2,2,1, yyyR,3,0, 0,0,1, 
0,1,1, 0,2,1, 0,0,1, 0,1,1, 0,2,1, 1,0,1, 
1,1,1, 1,2,1, 0,0,1, 0,1,1, 0,2,1, yyyR,3,0, 
1,0,1, 1,1,1, 1,2,1, yyyR,3,0, yyyR,3,0, 0,0,1, 
0,1,1, 0,2,1, yyyR,3,0, yyyR,3,0, 2,0,1, 2,1,1, 
2,2,1, 3,0,1, 3,1,1, 3,2,1, 
};

short yyyIIIEL[] = {0,
0,2,3,7,9,11,17,18,21,22,
25,33,34,38,41,45,51,59,63,65,
66,73,74,80,84,86,89,92,95,98,
102,106,110,114,118,122,124,126,128,130,
134,138,140,141,145,146,148,152,154,158,
160,
};

long yyyIIEL[] = {
0,0,2,4,6,8,10,10,12,14,16,19,
22,22,23,23,25,25,27,29,31,32,33,34,
35,36,38,38,39,39,40,40,44,44,48,52,
56,56,60,64,64,68,72,72,75,75,79,79,
82,82,86,86,90,90,94,94,95,95,99,99,
103,105,105,109,113,117,120,123,126,130,130,134,
134,134,137,140,143,144,144,148,148,150,154,154,
155,157,158,162,162,166,170,170,174,178,178,182,
186,186,190,194,198,198,202,206,210,210,214,218,
222,222,226,230,234,234,238,242,246,246,250,254,
258,258,262,266,270,274,278,282,286,290,294,298,
302,302,306,310,314,314,318,322,326,329,332,335,
339,339,342,345,349,353,353,357,357,361,362,366,
370,370,371,375,376,380,381,381,384,387,
};

long yyyIEL[] = {
0,0,0,0,0,0,0,4,
8,8,8,10,12,12,12,14,
16,16,16,16,18,20,20,24,
24,24,24,24,26,30,30,30,
32,32,32,34,36,38,40,40,
42,42,42,42,42,42,42,42,
42,44,46,48,48,50,52,54,
54,54,54,54,54,54,56,60,
60,60,60,60,60,62,64,66,
66,66,66,66,68,72,76,76,
76,78,78,78,78,78,78,80,
86,92,92,92,92,92,92,94,
94,94,94,94,94,98,104,104,
104,104,104,104,104,104,104,104,
110,110,110,110,110,110,110,110,
110,114,120,128,128,128,128,128,
128,128,128,128,128,128,128,128,
128,128,132,134,138,138,140,140,
142,142,142,142,142,144,148,148,
148,148,148,148,148,148,148,150,
152,154,154,154,154,154,154,156,
158,160,160,160,160,160,160,162,
164,166,166,166,166,166,166,168,
170,172,172,172,172,172,172,176,
180,184,184,184,184,184,184,184,
184,184,184,188,192,196,196,196,
196,196,196,196,196,196,196,200,
204,208,208,208,208,208,208,208,
208,208,208,212,216,220,220,220,
220,220,220,220,220,220,220,224,
228,232,232,232,232,232,232,232,
232,232,232,236,240,244,244,244,
244,244,244,244,244,244,244,246,
248,250,250,250,250,250,250,252,
254,256,256,256,256,256,256,258,
260,262,262,262,262,262,262,264,
266,268,268,268,268,268,268,272,
276,280,280,280,280,280,280,280,
280,280,280,284,288,292,292,292,
292,292,292,292,292,292,292,294,
296,298,298,298,298,298,298,298,
298,298,302,306,308,308,308,308,
308,308,310,310,310,310,310,312,
314,316,316,316,316,316,318,320,
322,322,322,322,322,322,322,322,
322,322,322,324,326,328,328,328,
328,328,328,328,328,328,328,328,
328,332,336,340,340,340,340,340,
340,340,340,340,
};

yyyFT yyyEntL[] = {
0,0,2,0,0,1,2,1,1,0,1,1,1,0,1,1,
0,2,4,0,0,2,4,1,1,0,1,1,1,0,1,0,
0,0,0,0,6,0,6,1,6,2,1,0,1,1,1,2,
3,0,3,1,3,2,2,0,2,2,2,1,2,0,2,1,
2,2,4,0,4,1,2,0,4,2,2,2,4,2,6,0,
6,2,2,0,6,1,6,2,2,2,2,1,6,2,3,0,
1,0,3,2,3,1,1,1,1,0,1,2,1,1,4,0,
1,0,2,0,4,1,1,1,2,2,2,1,4,2,1,2,
1,0,4,0,4,1,1,2,4,2,0,1,0,1,1,0,
1,2,1,1,2,0,2,1,2,2,2,0,2,1,2,2,
2,0,2,1,2,2,2,0,2,1,2,2,3,0,1,0,
3,1,1,1,3,2,1,2,1,0,3,0,1,1,3,1,
1,2,3,2,3,0,1,0,3,1,1,1,3,2,1,2,
1,0,3,0,1,1,3,1,1,2,3,2,3,0,1,0,
3,1,1,1,3,2,1,2,1,0,3,0,1,1,3,1,
1,2,3,2,1,0,1,1,1,2,1,0,1,1,1,2,
1,0,1,1,1,2,1,0,1,1,1,2,3,0,1,0,
3,1,1,1,3,2,1,2,3,0,1,0,3,1,1,1,
3,2,1,2,1,0,1,1,1,2,2,0,1,0,2,1,
1,1,2,2,1,2,1,0,1,1,1,2,2,0,2,1,
2,2,1,0,1,1,1,2,4,0,3,0,4,1,3,1,
4,2,3,2,
};

#define yyyPermitUserAlloc  0 


void yyyfatal(msg)
  char *msg; 
{fprintf(stderr,msg);exit(-1);} 



#define yyyNSof   'n' 
#define yyyRCof   'r' 
#define yyyCLof   'c' 
#define yyySof    's' 
#define yyySSALof 'S' 
#define yyyRSof   'q' 
#define yyyTSof   't' 



void yyyHandleOverflow(which) 
  char which; 
  {char *msg1,*msg2; 
   long  oldSize,newSize; 
   switch(which) 
     {
      case yyyNSof   : 
           msg1 = "node storage overflow: ";
           oldSize = yyyMaxNbytesNodeStg; 
           break; 
      case yyyRCof   : 
           msg1 = "dependee count overflow: ";
           oldSize = yyyMaxNrefCounts; 
           break; 
      case yyyCLof   : 
           msg1 = "child list overflow: ";
           oldSize = yyyMaxNchildren; 
           break; 
      case yyySof    : 
           msg1 = "parse-tree stack overflow: ";
           oldSize = yyyMaxStackSize; 
           break; 
      case yyySSALof : 
           msg1 = "SSAL overflow: ";
           oldSize = yyySSALspaceSize; 
           break; 
      case yyyRSof   : 
           msg1 = "ready set overflow: ";
           oldSize = yyyRSmaxSize; 
           break; 
      case yyyTSof   : 
           msg1 = "traversal stack overflow: ";
           oldSize = yyyTravStackMaxSize; 
           break; 
      default        :;  
     }
   newSize = (3*oldSize)/2; 
   if (newSize < 100) newSize = 100; 
   fprintf(stderr,msg1); 
   fprintf(stderr,"size was %d.\n",oldSize); 
   if (yyyPermitUserAlloc) 
      msg2 = "     Try -Y%c%d option.\n"; 
      else 
      msg2 = "     Have to modify evaluator:  -Y%c%d.\n"; 
   fprintf(stderr,msg2,which,newSize); 
   exit(-1); 
  }



void yyySignalEnts(node,startP,stopP) 
  register yyyGNT *node; 
  register yyyFT *startP,*stopP;  
  {register yyyGNT *dumNode; 

   while (startP < stopP)  
     {
      if (!(*startP)) dumNode = node;  
         else dumNode = (node->cL)[(*startP)-1];   
      if (!(--((dumNode->refCountList)[*(startP+1)]
              ) 
           )
         ) 
         { 
          if (++yyyRSTop == yyyAfterRS) 
             {yyyHandleOverflow(yyyRSof); 
              break; 
             }
          yyyRSTop->node = dumNode; 
          yyyRSTop->whichSym = *startP;  
          yyyRSTop->wa = *(startP+1);  
         }  
      startP += 2;  
     }  
  } 




#define yyyCeiling(num,inc) (((inc) * ((num)/(inc))) + (((num)%(inc))?(inc):0)) 



int yyyAlignSize = 8;
int yyyNdSz[22];

int yyyNdPrSz[22];

typedef int yyyCopyType;

int yyyNdCopySz[22];
long yyyBiggestNodeSize = 0;

void yyyNodeSizeCalc()
  {int i;
   yyyGNSz = yyyCeiling(yyyGNSz,yyyAlignSize); 
   yyyNdSz[0] = 0;
   yyyNdSz[1] = sizeof(struct yyyT1);
   yyyNdSz[2] = sizeof(struct yyyT2);
   yyyNdSz[3] = sizeof(struct yyyT3);
   yyyNdSz[4] = sizeof(struct yyyT4);
   yyyNdSz[5] = sizeof(struct yyyT5);
   yyyNdSz[6] = sizeof(struct yyyT6);
   yyyNdSz[7] = sizeof(struct yyyT7);
   yyyNdSz[8] = sizeof(struct yyyT8);
   yyyNdSz[9] = sizeof(struct yyyT9);
   yyyNdSz[10] = sizeof(struct yyyT10);
   yyyNdSz[11] = sizeof(struct yyyT11);
   yyyNdSz[12] = sizeof(struct yyyT12);
   yyyNdSz[13] = sizeof(struct yyyT13);
   yyyNdSz[14] = sizeof(struct yyyT14);
   yyyNdSz[15] = sizeof(struct yyyT15);
   yyyNdSz[16] = sizeof(struct yyyT16);
   yyyNdSz[17] = sizeof(struct yyyT17);
   yyyNdSz[18] = sizeof(struct yyyT18);
   yyyNdSz[19] = sizeof(struct yyyT19);
   yyyNdSz[20] = sizeof(struct yyyT20);
   yyyNdSz[21] = sizeof(struct yyyT21);
   for (i=0;i<22;i++) 
       {yyyNdSz[i] = yyyCeiling(yyyNdSz[i],yyyAlignSize); 
        yyyNdPrSz[i] = yyyNdSz[i] + yyyGNSz;
        if (yyyBiggestNodeSize < yyyNdSz[i])
           yyyBiggestNodeSize = yyyNdSz[i];
        yyyNdCopySz[i] = yyyCeiling(yyyNdSz[i],sizeof(yyyCopyType)) / 
                         sizeof(yyyCopyType); 
       }
  }




void yyySolveAndSignal() {
register long yyyiDum,*yyypL;
register int yyyws,yyywa;
register yyyGNT *yyyRSTopN,*yyyRefN; 
register void *yyyRSTopNp; 


yyyRSTopNp = (yyyRSTopN = yyyRSTop->node)->parent;
yyyRefN= (yyyws = (yyyRSTop->whichSym))?((yyyGNT *)yyyRSTopNp):yyyRSTopN;
yyywa = yyyRSTop->wa; 
yyyRSTop--;
switch(yyyRefN->prodNum) {
case 1:  /***yacc rule 1***/
  switch (yyyws) {
  case 1:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 2:  /***yacc rule 2***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 3:  /***yacc rule 3***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 0:
/* the structtab and fieldtab got initialised by an empty program nonterminal
			 * --> propagate them to the parent program and the definitions now */ (((yyyP3)(((char *)yyyRSTopN)+yyyGNSz))->structtab) = (((yyyP3)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->structtab);
			    break;
    case 1:
 (((yyyP3)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab)  = (((yyyP3)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->fieldtab);
			
			    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP4)(((char *)yyyRSTopN)+yyyGNSz))->structtab) = (((yyyP3)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->structtab);
			    break;
    case 1:
 (((yyyP4)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab)  = (((yyyP3)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->fieldtab);
		    break;
    }
  break;
  }
break;
case 4:  /***yacc rule 4***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
/* propagate the struct and field sym table to every function def */ (((yyyP6)(((char *)yyyRSTopN)+yyyGNSz))->structtab) = (((yyyP4)(((char *)yyyRefN)+yyyGNSz))->structtab);
			    break;
    case 1:
 (((yyyP6)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab)  = (((yyyP4)(((char *)yyyRefN)+yyyGNSz))->fieldtab);
		    break;
    }
  break;
  }
break;
case 5:  /***yacc rule 5***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
/* propagate the struct and field table to the every struct def */ (((yyyP5)(((char *)yyyRSTopN)+yyyGNSz))->structtab) = (((yyyP4)(((char *)yyyRefN)+yyyGNSz))->structtab);
			    break;
    case 1:
 (((yyyP5)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab)  = (((yyyP4)(((char *)yyyRefN)+yyyGNSz))->fieldtab);
		    break;
    }
  break;
  }
break;
case 6:  /***yacc rule 6***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 2:
 (((yyyP5)(((char *)yyyRSTopN)+yyyGNSz))->dummy1) = symtab_add((((yyyP5)(((char *)yyyRefN)+yyyGNSz))->structtab), NULL, (((yyyP1)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->name), NULL);
			    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    }
  break;
  case 4:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP8)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab)  = (((yyyP5)(((char *)yyyRefN)+yyyGNSz))->fieldtab);
			    break;
    }
  break;
  }
break;
case 7:  /***yacc rule 7***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 8:  /***yacc rule 8***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP8)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab) = symtab_add( (((yyyP8)(((char *)yyyRefN)+yyyGNSz))->fieldtab), next_reg(), (((yyyP1)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->name), (((yyyP8)(((char *)yyyRefN)+yyyGNSz))->structname));
			    break;
    case 1:
 (((yyyP8)(((char *)yyyRSTopN)+yyyGNSz))->structname) = (((yyyP8)(((char *)yyyRefN)+yyyGNSz))->structname);
		    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 9:  /***yacc rule 9***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 10:  /***yacc rule 10***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 0:
//@i @ParamDef.1.tab@ = symtab_add( @ParamDef.0.tab@, @IDENTIFIER.name@, @ParamDef.0.structname@);
 (((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->tab) = symtab_add( (((yyyP7)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->tab), next_reg(), (((yyyP1)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->name), NULL);
		    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 11:  /***yacc rule 11***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    }
  break;
  case 4:  /**/
    switch (yyywa) {
    }
  break;
  case 6:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP9)(((char *)yyyRSTopN)+yyyGNSz))->structtab) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->structtab);
			    break;
    case 1:
 (((yyyP9)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab)  = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->fieldtab);
			
			    break;
    case 2:
/* the parameters are visible within the function --> 
			 * get the new vartab (by the ParamDef) down the tree */ (((yyyP9)(((char *)yyyRSTopN)+yyyGNSz))->vartab) = (((yyyP7)(((char *)((yyyRefN->cL)[3]))+yyyGNSz))->tab);
		
			/* these come from the Def, are globally visible and may be 
			 * needed in the Stats as well --> get them down too! */
			    break;
    }
  break;
  }
break;
case 12:  /***yacc rule 12***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 13:  /***yacc rule 13***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
/* just distributing - move along please */ (((yyyP10)(((char *)yyyRSTopN)+yyyGNSz))->structtab) = (((yyyP9)(((char *)yyyRefN)+yyyGNSz))->structtab);
			    yyySignalEnts(yyyRefN,yyyEntL+48,yyyEntL+50);
    break;
    case 1:
 (((yyyP10)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab)  = (((yyyP9)(((char *)yyyRefN)+yyyGNSz))->fieldtab);
			    yyySignalEnts(yyyRefN,yyyEntL+50,yyyEntL+52);
    break;
    case 2:
 (((yyyP10)(((char *)yyyRSTopN)+yyyGNSz))->vartab)    = (((yyyP9)(((char *)yyyRefN)+yyyGNSz))->vartab);
	
			    yyySignalEnts(yyyRefN,yyyEntL+52,yyyEntL+54);
    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP9)(((char *)yyyRSTopN)+yyyGNSz))->structtab) = (((yyyP10)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->structtab);
			    break;
    case 1:
 (((yyyP9)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab)  = (((yyyP10)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->fieldtab);
			    break;
    case 2:
 (((yyyP9)(((char *)yyyRSTopN)+yyyGNSz))->vartab) = (((yyyP10)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->vartab);
			
			    break;
    }
  break;
  }
break;
case 14:  /***yacc rule 14***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP18)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab) = (((yyyP10)(((char *)yyyRefN)+yyyGNSz))->fieldtab);
			
			    break;
    case 1:
/* I could open a distribution business by now... */ (((yyyP18)(((char *)yyyRSTopN)+yyyGNSz))->vartab)   = (((yyyP10)(((char *)yyyRefN)+yyyGNSz))->vartab);
			    break;
    case 2:
 (((yyyP18)(((char *)yyyRSTopN)+yyyGNSz))->visscope) = (((yyyP10)(((char *)yyyRefN)+yyyGNSz))->vartab);
			    break;
    }
  break;
  }
break;
case 15:  /***yacc rule 15***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
/* distribute everything to the condlist */ (((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->structtab) = (((yyyP10)(((char *)yyyRefN)+yyyGNSz))->structtab);
			    break;
    case 1:
 (((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab)  = (((yyyP10)(((char *)yyyRefN)+yyyGNSz))->fieldtab);
			    break;
    case 2:
 (((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->vartab) 	  = (((yyyP10)(((char *)yyyRefN)+yyyGNSz))->vartab);
			
			    break;
    }
  break;
  }
break;
case 16:  /***yacc rule 16***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP12)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab) = (((yyyP10)(((char *)yyyRefN)+yyyGNSz))->fieldtab);
			
			/* in here new variables may be added - fork the vartab to ensure visibility scope */
			//@i @LetDef.0.vartab@ = symtab_dup( @Stat.0.vartab@, symtab_init());
			    break;
    case 2:
/* to ensure scope in definitions, fork vartab */ (((yyyP12)(((char *)yyyRSTopN)+yyyGNSz))->visscope) = symtab_dup((((yyyP10)(((char *)yyyRefN)+yyyGNSz))->vartab), symtab_init());
			    break;
    }
  break;
  case 4:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP9)(((char *)yyyRSTopN)+yyyGNSz))->structtab) = (((yyyP10)(((char *)yyyRefN)+yyyGNSz))->structtab);
			
			    break;
    case 1:
 (((yyyP9)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab)  = (((yyyP10)(((char *)yyyRefN)+yyyGNSz))->fieldtab);
			    break;
    case 2:
 (((yyyP9)(((char *)yyyRSTopN)+yyyGNSz))->vartab)    = symtab_merge( (((yyyP10)(((char *)yyyRefN)+yyyGNSz))->vartab), (((yyyP12)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->vartab));
			
			    break;
    }
  break;
  }
break;
case 17:  /***yacc rule 17***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP18)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab) = (((yyyP10)(((char *)yyyRefN)+yyyGNSz))->fieldtab);
			
			/* check if IDENTIFIER is a valid struct */
			    break;
    case 1:
 (((yyyP18)(((char *)yyyRSTopN)+yyyGNSz))->vartab)   = (((yyyP10)(((char *)yyyRefN)+yyyGNSz))->vartab);
			    break;
    case 2:
 (((yyyP18)(((char *)yyyRSTopN)+yyyGNSz))->visscope) = (((yyyP10)(((char *)yyyRefN)+yyyGNSz))->vartab);
			    break;
    }
  break;
  case 4:  /**/
    switch (yyywa) {
    }
  break;
  case 6:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP9)(((char *)yyyRSTopN)+yyyGNSz))->structtab) = (((yyyP10)(((char *)yyyRefN)+yyyGNSz))->structtab);
		
			    break;
    case 1:
/* and we have to pass things on as well */ (((yyyP9)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab)  = (((yyyP10)(((char *)yyyRefN)+yyyGNSz))->fieldtab);
			    break;
    case 2:
 (((yyyP9)(((char *)yyyRSTopN)+yyyGNSz))->vartab) = symtab_merge( (((yyyP10)(((char *)yyyRefN)+yyyGNSz))->vartab), symtab_subtab( (((yyyP10)(((char *)yyyRefN)+yyyGNSz))->fieldtab), (((yyyP1)(((char *)((yyyRefN->cL)[3]))+yyyGNSz))->name)));
			
			/* reassign scope if structs are defined below functions */
			    break;
    }
  break;
  }
break;
case 18:  /***yacc rule 18***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP13)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab) = (((yyyP10)(((char *)yyyRefN)+yyyGNSz))->fieldtab);
		
			    break;
    case 1:
/* onwards down the tree! */ (((yyyP13)(((char *)yyyRSTopN)+yyyGNSz))->vartab)   = (((yyyP10)(((char *)yyyRefN)+yyyGNSz))->vartab);
			    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP18)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab) = (((yyyP10)(((char *)yyyRefN)+yyyGNSz))->fieldtab);
			
			    break;
    case 1:
 (((yyyP18)(((char *)yyyRSTopN)+yyyGNSz))->vartab)   = (((yyyP10)(((char *)yyyRefN)+yyyGNSz))->vartab);	
			    break;
    case 2:
 (((yyyP18)(((char *)yyyRSTopN)+yyyGNSz))->visscope)   = (((yyyP10)(((char *)yyyRefN)+yyyGNSz))->vartab);	
			    break;
    }
  break;
  }
break;
case 19:  /***yacc rule 19***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab) = (((yyyP10)(((char *)yyyRefN)+yyyGNSz))->vartab);	
			
			    break;
    case 1:
/* down the rabbit hole! */ (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->vartab)   = (((yyyP10)(((char *)yyyRefN)+yyyGNSz))->vartab);	
			    break;
    case 2:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->visscope)   = (((yyyP10)(((char *)yyyRefN)+yyyGNSz))->vartab);	
			    break;
    }
  break;
  }
break;
case 20:  /***yacc rule 20***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 21:  /***yacc rule 21***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
/* distribute everything to the condlist */ (((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->structtab) = (((yyyP11)(((char *)yyyRefN)+yyyGNSz))->structtab);
			    break;
    case 1:
 (((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab)  = (((yyyP11)(((char *)yyyRefN)+yyyGNSz))->fieldtab);
			    break;
    case 2:
 (((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->vartab) 	  = (((yyyP11)(((char *)yyyRefN)+yyyGNSz))->vartab);
			
			/* distribute everything to the Stats */
			    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP18)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab)  = (((yyyP11)(((char *)yyyRefN)+yyyGNSz))->fieldtab);
			    break;
    case 1:
 (((yyyP18)(((char *)yyyRSTopN)+yyyGNSz))->vartab)	  = (((yyyP11)(((char *)yyyRefN)+yyyGNSz))->vartab);
			    break;
    case 2:
 (((yyyP18)(((char *)yyyRSTopN)+yyyGNSz))->visscope)	  = (((yyyP11)(((char *)yyyRefN)+yyyGNSz))->vartab);
		    break;
    }
  break;
  case 4:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP9)(((char *)yyyRSTopN)+yyyGNSz))->structtab) = (((yyyP11)(((char *)yyyRefN)+yyyGNSz))->structtab);
			    break;
    case 1:
 (((yyyP9)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab)  = (((yyyP11)(((char *)yyyRefN)+yyyGNSz))->fieldtab);
			    break;
    case 2:
 (((yyyP9)(((char *)yyyRSTopN)+yyyGNSz))->vartab)	   = (((yyyP11)(((char *)yyyRefN)+yyyGNSz))->vartab);	
			
			/* the Expr doesn't need to know the structs (at least i hope so) */	
			    break;
    }
  break;
  }
break;
case 22:  /***yacc rule 22***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 23:  /***yacc rule 23***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP12)(((char *)yyyRSTopN)+yyyGNSz))->vartab)   = symtab_add( (((yyyP12)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->vartab), NULL, (((yyyP1)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->name), NULL);

			    yyySignalEnts(yyyRefN,yyyEntL+132,yyyEntL+134);
    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP12)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab) = (((yyyP12)(((char *)yyyRefN)+yyyGNSz))->fieldtab);
			    break;
    case 2:
 (((yyyP12)(((char *)yyyRSTopN)+yyyGNSz))->visscope) = (((yyyP12)(((char *)yyyRefN)+yyyGNSz))->visscope);
			
		    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    }
  break;
  case 4:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP18)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab) = (((yyyP12)(((char *)yyyRefN)+yyyGNSz))->fieldtab);
			    break;
    case 1:
 (((yyyP18)(((char *)yyyRSTopN)+yyyGNSz))->vartab)   = (((yyyP12)(((char *)yyyRefN)+yyyGNSz))->vartab);
			    break;
    case 2:
 (((yyyP18)(((char *)yyyRSTopN)+yyyGNSz))->visscope) = (((yyyP12)(((char *)yyyRefN)+yyyGNSz))->visscope);
			
			//@i @LetDef.1.vartab@   = symtab_add( @LetDef.0.vartab@, @IDENTIFIER.0.name@, NULL);
			    break;
    }
  break;
  }
break;
case 24:  /***yacc rule 24***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab)  = (((yyyP13)(((char *)yyyRefN)+yyyGNSz))->fieldtab);	
		    break;
    case 1:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->vartab) 	= (((yyyP13)(((char *)yyyRefN)+yyyGNSz))->vartab);
			    break;
    case 2:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->visscope) 	= (((yyyP13)(((char *)yyyRefN)+yyyGNSz))->vartab);
			    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 25:  /***yacc rule 25***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 26:  /***yacc rule 26***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab) = (((yyyP14)(((char *)yyyRefN)+yyyGNSz))->fieldtab);
			
			    break;
    case 1:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->vartab)   = (((yyyP14)(((char *)yyyRefN)+yyyGNSz))->vartab);
			    break;
    case 2:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->visscope) = (((yyyP14)(((char *)yyyRefN)+yyyGNSz))->visscope);
			    break;
    }
  break;
  }
break;
case 27:  /***yacc rule 27***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab) = (((yyyP14)(((char *)yyyRefN)+yyyGNSz))->fieldtab);
			
			    break;
    case 1:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->vartab)   = (((yyyP14)(((char *)yyyRefN)+yyyGNSz))->vartab);
			    break;
    case 2:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->visscope) = (((yyyP14)(((char *)yyyRefN)+yyyGNSz))->visscope);
			    break;
    }
  break;
  }
break;
case 28:  /***yacc rule 28***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP14)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab) = (((yyyP14)(((char *)yyyRefN)+yyyGNSz))->fieldtab);
			
			    break;
    case 1:
 (((yyyP14)(((char *)yyyRSTopN)+yyyGNSz))->vartab)   = (((yyyP14)(((char *)yyyRefN)+yyyGNSz))->vartab);
			    break;
    case 2:
 (((yyyP14)(((char *)yyyRSTopN)+yyyGNSz))->visscope) = (((yyyP14)(((char *)yyyRefN)+yyyGNSz))->visscope);
			    break;
    }
  break;
  }
break;
case 29:  /***yacc rule 29***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP14)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab) = (((yyyP14)(((char *)yyyRefN)+yyyGNSz))->fieldtab);
			
			    break;
    case 1:
 (((yyyP14)(((char *)yyyRSTopN)+yyyGNSz))->vartab)   = (((yyyP14)(((char *)yyyRefN)+yyyGNSz))->vartab);
			    break;
    case 2:
 (((yyyP14)(((char *)yyyRSTopN)+yyyGNSz))->visscope) = (((yyyP14)(((char *)yyyRefN)+yyyGNSz))->visscope);
			    break;
    }
  break;
  }
break;
case 30:  /***yacc rule 30***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab) = (((yyyP15)(((char *)yyyRefN)+yyyGNSz))->fieldtab);
			    break;
    case 1:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->vartab)   = (((yyyP15)(((char *)yyyRefN)+yyyGNSz))->vartab);
			    break;
    case 2:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->visscope) = (((yyyP15)(((char *)yyyRefN)+yyyGNSz))->visscope);
			    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab) = (((yyyP15)(((char *)yyyRefN)+yyyGNSz))->fieldtab);
			
			    break;
    case 1:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->vartab)   = (((yyyP15)(((char *)yyyRefN)+yyyGNSz))->vartab);
			    break;
    case 2:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->visscope) = (((yyyP15)(((char *)yyyRefN)+yyyGNSz))->visscope);
		
			    break;
    }
  break;
  }
break;
case 31:  /***yacc rule 31***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP15)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab) = (((yyyP15)(((char *)yyyRefN)+yyyGNSz))->fieldtab);
			
			    break;
    case 1:
 (((yyyP15)(((char *)yyyRSTopN)+yyyGNSz))->vartab) = (((yyyP15)(((char *)yyyRefN)+yyyGNSz))->vartab);
			    break;
    case 2:
 (((yyyP15)(((char *)yyyRSTopN)+yyyGNSz))->visscope) = (((yyyP15)(((char *)yyyRefN)+yyyGNSz))->visscope);
	
			    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab)    = (((yyyP15)(((char *)yyyRefN)+yyyGNSz))->fieldtab);
			    break;
    case 1:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->vartab)    = (((yyyP15)(((char *)yyyRefN)+yyyGNSz))->vartab);
			    break;
    case 2:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->visscope)  = (((yyyP15)(((char *)yyyRefN)+yyyGNSz))->visscope);
			    break;
    }
  break;
  }
break;
case 32:  /***yacc rule 32***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab) = (((yyyP16)(((char *)yyyRefN)+yyyGNSz))->fieldtab);
			    break;
    case 1:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->vartab) = (((yyyP16)(((char *)yyyRefN)+yyyGNSz))->vartab);
			    break;
    case 2:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->visscope) = (((yyyP16)(((char *)yyyRefN)+yyyGNSz))->visscope);
			    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab) = (((yyyP16)(((char *)yyyRefN)+yyyGNSz))->fieldtab);
			
			    break;
    case 1:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->vartab) = (((yyyP16)(((char *)yyyRefN)+yyyGNSz))->vartab);
			    break;
    case 2:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->visscope) = (((yyyP16)(((char *)yyyRefN)+yyyGNSz))->visscope);

			    break;
    }
  break;
  }
break;
case 33:  /***yacc rule 33***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP16)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab) = (((yyyP16)(((char *)yyyRefN)+yyyGNSz))->fieldtab);
			
			    break;
    case 1:
 (((yyyP16)(((char *)yyyRSTopN)+yyyGNSz))->vartab) = (((yyyP16)(((char *)yyyRefN)+yyyGNSz))->vartab);
			    break;
    case 2:
 (((yyyP16)(((char *)yyyRSTopN)+yyyGNSz))->visscope) = (((yyyP16)(((char *)yyyRefN)+yyyGNSz))->visscope);

			    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab)    = (((yyyP16)(((char *)yyyRefN)+yyyGNSz))->fieldtab);
			    break;
    case 1:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->vartab)    = (((yyyP16)(((char *)yyyRefN)+yyyGNSz))->vartab);
			    break;
    case 2:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->visscope)    = (((yyyP16)(((char *)yyyRefN)+yyyGNSz))->visscope);
			    break;
    }
  break;
  }
break;
case 34:  /***yacc rule 34***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab) = (((yyyP17)(((char *)yyyRefN)+yyyGNSz))->fieldtab);
			    break;
    case 1:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->vartab) = (((yyyP17)(((char *)yyyRefN)+yyyGNSz))->vartab);
			    break;
    case 2:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->visscope) = (((yyyP17)(((char *)yyyRefN)+yyyGNSz))->visscope);
			    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab) = (((yyyP17)(((char *)yyyRefN)+yyyGNSz))->fieldtab);
			
			    break;
    case 1:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->vartab) = (((yyyP17)(((char *)yyyRefN)+yyyGNSz))->vartab);
			    break;
    case 2:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->visscope) = (((yyyP17)(((char *)yyyRefN)+yyyGNSz))->visscope);

			    break;
    }
  break;
  }
break;
case 35:  /***yacc rule 35***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP17)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab) = (((yyyP17)(((char *)yyyRefN)+yyyGNSz))->fieldtab);
			
			    break;
    case 1:
 (((yyyP17)(((char *)yyyRSTopN)+yyyGNSz))->vartab) = (((yyyP17)(((char *)yyyRefN)+yyyGNSz))->vartab);
			    break;
    case 2:
 (((yyyP17)(((char *)yyyRSTopN)+yyyGNSz))->visscope) = (((yyyP17)(((char *)yyyRefN)+yyyGNSz))->visscope);

			    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab)   = (((yyyP17)(((char *)yyyRefN)+yyyGNSz))->fieldtab);
			    break;
    case 1:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->vartab)   = (((yyyP17)(((char *)yyyRefN)+yyyGNSz))->vartab);
			    break;
    case 2:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->visscope) = (((yyyP17)(((char *)yyyRefN)+yyyGNSz))->visscope);
			    break;
    }
  break;
  }
break;
case 36:  /***yacc rule 36***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP14)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab) = (((yyyP18)(((char *)yyyRefN)+yyyGNSz))->fieldtab);
			
			    break;
    case 1:
 (((yyyP14)(((char *)yyyRSTopN)+yyyGNSz))->vartab)   = (((yyyP18)(((char *)yyyRefN)+yyyGNSz))->vartab);
			    break;
    case 2:
 (((yyyP14)(((char *)yyyRSTopN)+yyyGNSz))->visscope) = (((yyyP18)(((char *)yyyRefN)+yyyGNSz))->visscope);
			    break;
    }
  break;
  }
break;
case 37:  /***yacc rule 37***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP15)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab) = (((yyyP18)(((char *)yyyRefN)+yyyGNSz))->fieldtab);
			
			    break;
    case 1:
 (((yyyP15)(((char *)yyyRSTopN)+yyyGNSz))->vartab)   = (((yyyP18)(((char *)yyyRefN)+yyyGNSz))->vartab);
			    break;
    case 2:
 (((yyyP15)(((char *)yyyRSTopN)+yyyGNSz))->visscope) = (((yyyP18)(((char *)yyyRefN)+yyyGNSz))->visscope);
			    break;
    }
  break;
  }
break;
case 38:  /***yacc rule 38***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP16)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab) = (((yyyP18)(((char *)yyyRefN)+yyyGNSz))->fieldtab);
			
			    break;
    case 1:
 (((yyyP16)(((char *)yyyRSTopN)+yyyGNSz))->vartab)   = (((yyyP18)(((char *)yyyRefN)+yyyGNSz))->vartab);
			    break;
    case 2:
 (((yyyP16)(((char *)yyyRSTopN)+yyyGNSz))->visscope) = (((yyyP18)(((char *)yyyRefN)+yyyGNSz))->visscope);
			    break;
    }
  break;
  }
break;
case 39:  /***yacc rule 39***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP17)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab) = (((yyyP18)(((char *)yyyRefN)+yyyGNSz))->fieldtab);
			
			    break;
    case 1:
 (((yyyP17)(((char *)yyyRSTopN)+yyyGNSz))->vartab)   = (((yyyP18)(((char *)yyyRefN)+yyyGNSz))->vartab);
			    break;
    case 2:
 (((yyyP17)(((char *)yyyRSTopN)+yyyGNSz))->visscope) = (((yyyP18)(((char *)yyyRefN)+yyyGNSz))->visscope);
			    break;
    }
  break;
  }
break;
case 40:  /***yacc rule 40***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab) = (((yyyP18)(((char *)yyyRefN)+yyyGNSz))->fieldtab);
		
			    break;
    case 1:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->vartab)   = (((yyyP18)(((char *)yyyRefN)+yyyGNSz))->vartab);
			    break;
    case 2:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->visscope) = (((yyyP18)(((char *)yyyRefN)+yyyGNSz))->visscope);
			    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab) = (((yyyP18)(((char *)yyyRefN)+yyyGNSz))->fieldtab);
			
			    break;
    case 1:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->vartab)   = (((yyyP18)(((char *)yyyRefN)+yyyGNSz))->vartab);
			    break;
    case 2:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->visscope) = (((yyyP18)(((char *)yyyRefN)+yyyGNSz))->visscope);
			    break;
    }
  break;
  }
break;
case 41:  /***yacc rule 41***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab) = (((yyyP18)(((char *)yyyRefN)+yyyGNSz))->fieldtab);
	
			    break;
    case 1:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->vartab)   = (((yyyP18)(((char *)yyyRefN)+yyyGNSz))->vartab);
			    break;
    case 2:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->visscope) = (((yyyP18)(((char *)yyyRefN)+yyyGNSz))->visscope);
			    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab) = (((yyyP18)(((char *)yyyRefN)+yyyGNSz))->fieldtab);
			
			    break;
    case 1:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->vartab)   = (((yyyP18)(((char *)yyyRefN)+yyyGNSz))->vartab);
			    break;
    case 2:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->visscope) = (((yyyP18)(((char *)yyyRefN)+yyyGNSz))->visscope);
			    break;
    }
  break;
  }
break;
case 42:  /***yacc rule 42***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab) = (((yyyP18)(((char *)yyyRefN)+yyyGNSz))->fieldtab);
			
			    break;
    case 1:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->vartab)   = (((yyyP18)(((char *)yyyRefN)+yyyGNSz))->vartab);
			    break;
    case 2:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->visscope) = (((yyyP18)(((char *)yyyRefN)+yyyGNSz))->visscope);
			    break;
    }
  break;
  }
break;
case 43:  /***yacc rule 43***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 44:  /***yacc rule 44***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP19)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab) = (((yyyP19)(((char *)yyyRefN)+yyyGNSz))->fieldtab);
			    break;
    case 1:
/* we didn't have anything to get down for quite a while */ (((yyyP19)(((char *)yyyRSTopN)+yyyGNSz))->vartab)  = (((yyyP19)(((char *)yyyRefN)+yyyGNSz))->vartab);
			    break;
    case 2:
 (((yyyP19)(((char *)yyyRSTopN)+yyyGNSz))->visscope) = (((yyyP18)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->visscope);
			    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP18)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab) 	 = (((yyyP19)(((char *)yyyRefN)+yyyGNSz))->fieldtab);
		    break;
    case 1:
 (((yyyP18)(((char *)yyyRSTopN)+yyyGNSz))->vartab) 	    = (((yyyP19)(((char *)yyyRefN)+yyyGNSz))->vartab);
			    break;
    case 2:
 (((yyyP18)(((char *)yyyRSTopN)+yyyGNSz))->visscope)    = (((yyyP19)(((char *)yyyRefN)+yyyGNSz))->visscope);
			
			    yyySignalEnts(yyyRefN,yyyEntL+308,yyyEntL+310);
    break;
    }
  break;
  }
break;
case 45:  /***yacc rule 45***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 46:  /***yacc rule 46***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP18)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab) = (((yyyP20)(((char *)yyyRefN)+yyyGNSz))->fieldtab);
		    break;
    case 1:
 (((yyyP18)(((char *)yyyRSTopN)+yyyGNSz))->vartab)   = (((yyyP20)(((char *)yyyRefN)+yyyGNSz))->vartab);
			    break;
    case 2:
 (((yyyP18)(((char *)yyyRSTopN)+yyyGNSz))->visscope) = (((yyyP20)(((char *)yyyRefN)+yyyGNSz))->visscope);
			    break;
    }
  break;
  }
break;
case 47:  /***yacc rule 47***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP18)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab) = (((yyyP21)(((char *)yyyRefN)+yyyGNSz))->fieldtab);
			
			    break;
    case 1:
 (((yyyP18)(((char *)yyyRSTopN)+yyyGNSz))->vartab)   = (((yyyP21)(((char *)yyyRefN)+yyyGNSz))->vartab);
			    break;
    case 2:
 (((yyyP18)(((char *)yyyRSTopN)+yyyGNSz))->visscope) = (((yyyP21)(((char *)yyyRefN)+yyyGNSz))->visscope);
			    break;
    }
  break;
  }
break;
case 48:  /***yacc rule 48***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 49:  /***yacc rule 49***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab) = (((yyyP21)(((char *)yyyRefN)+yyyGNSz))->fieldtab);	
			
			    break;
    case 1:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->vartab)   = (((yyyP21)(((char *)yyyRefN)+yyyGNSz))->vartab);
			    break;
    case 2:
 (((yyyP21)(((char *)yyyRSTopN)+yyyGNSz))->visscope) = (((yyyP21)(((char *)yyyRefN)+yyyGNSz))->visscope);
			    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 50:  /***yacc rule 50***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 51:  /***yacc rule 51***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP19)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab) = (((yyyP21)(((char *)yyyRefN)+yyyGNSz))->fieldtab);
			    break;
    case 1:
/* IDENTIFIER is the name of the function --> ignore */ (((yyyP19)(((char *)yyyRSTopN)+yyyGNSz))->vartab) = (((yyyP21)(((char *)yyyRefN)+yyyGNSz))->vartab);
			    break;
    case 2:
 (((yyyP19)(((char *)yyyRSTopN)+yyyGNSz))->visscope) = (((yyyP21)(((char *)yyyRefN)+yyyGNSz))->visscope);
			    break;
    }
  break;
  case 4:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP20)(((char *)yyyRSTopN)+yyyGNSz))->fieldtab) = (((yyyP21)(((char *)yyyRefN)+yyyGNSz))->fieldtab);
			
			/* there will not be any function calls */
			    break;
    case 1:
 (((yyyP20)(((char *)yyyRSTopN)+yyyGNSz))->vartab) = (((yyyP21)(((char *)yyyRefN)+yyyGNSz))->vartab);
			    break;
    case 2:
 (((yyyP20)(((char *)yyyRSTopN)+yyyGNSz))->visscope) = (((yyyP21)(((char *)yyyRefN)+yyyGNSz))->visscope);
		
			    break;
    }
  break;
  }
break;
} /* switch */ 

if (yyyws)  /* the just-solved instance was inherited. */ 
   {if (yyyRSTopN->prodNum) 
       {yyyiDum = yyyIIEL[yyyIIIEL[yyyRSTopN->prodNum]] + yyywa;
        yyySignalEnts(yyyRSTopN,yyyEntL + yyyIEL[yyyiDum],
                                yyyEntL + yyyIEL[yyyiDum+1]
                     );
       }
   } 
   else     /* the just-solved instance was synthesized. */ 
   {if ((char *)yyyRSTopNp >= yyyNodeSpace) /* node has a parent. */ 
       {yyyiDum = yyyIIEL[yyyIIIEL[((yyyGNT *)yyyRSTopNp)->prodNum] + 
                          yyyRSTopN->whichSym 
                         ] + 
                  yyywa;
        yyySignalEnts((yyyGNT *)yyyRSTopNp,
                      yyyEntL + yyyIEL[yyyiDum],
                      yyyEntL + yyyIEL[yyyiDum+1] 
                     );
       } 
       else   /* node is still on the stack--it has no parent yet. */ 
       {yyypL = &(((struct yyyStackItem *)yyyRSTopNp)->solvedSAlist); 
        if (yyySSALCfreeList == yyyLambdaSSAL) 
           {yyySSALspace[yyyNewSSALC].next = *yyypL; 
            if ((*yyypL = yyyNewSSALC++) == yyySSALspaceSize) 
               yyyHandleOverflow(yyySSALof); 
           }  
           else
           {yyyiDum = yyySSALCfreeList; 
            yyySSALCfreeList = yyySSALspace[yyySSALCfreeList].next; 
            yyySSALspace[yyyiDum].next = *yyypL; 
            *yyypL = yyyiDum;  
           } 
        yyySSALspace[*yyypL].attrbNum = yyywa; 
       } 
   }

} /* yyySolveAndSignal */ 






#define condStg unsigned int conds;
#define yyyClearConds {yyyTST->conds = 0;}
#define yyySetCond(n) {yyyTST->conds += (1<<(n));}
#define yyyCond(n) ((yyyTST->conds & (1<<(n)))?1:0)



struct yyyTravStackItem {yyyGNT *node; 
                         char isReady;
                         condStg
                        };



void yyyDoTraversals()
{struct yyyTravStackItem *yyyTravStack,*yyyTST,*yyyAfterTravStack;
 register yyyGNT *yyyTSTn,**yyyCLptr1,**yyyCLptr2; 
 register int yyyi,yyyRL,yyyPass;

 if (!yyyYok) return;
 if ((yyyTravStack = 
                 ((struct yyyTravStackItem *) 
                  malloc((yyyTravStackMaxSize * 
                                  sizeof(struct yyyTravStackItem)
                                 )
                        )
                 )
     )
     == 
     (struct yyyTravStackItem *)NULL
    ) 
    {fprintf(stderr,"malloc error in traversal stack allocation\n"); 
     exit(-1); 
    } 

yyyAfterTravStack = yyyTravStack + yyyTravStackMaxSize; 
yyyTravStack++; 


for (yyyi=0; yyyi<5; yyyi++) {
yyyTST = yyyTravStack; 
yyyTST->node = yyyStack->node;
yyyTST->isReady = 0;
yyyClearConds

while(yyyTST >= yyyTravStack)
  {yyyTSTn = yyyTST->node;
   if (yyyTST->isReady)  
      {yyyPass = 1;
       goto yyyTravSwitch;
yyyTpop:
       yyyTST--;
      } 
      else 
      {yyyPass = 0;
       goto yyyTravSwitch;
yyyTpush:
       yyyTST->isReady = 1;  
       if (yyyTSTn->prodNum)
          if (yyyRL)
             {yyyCLptr2 = yyyTSTn->cL; 
              while 
                ((yyyCLptr2 != yyyNextCLspace)
                 &&
                 ((*yyyCLptr2)->parent == yyyTSTn) 
                )  
                {if (++yyyTST == yyyAfterTravStack)
                    yyyHandleOverflow(yyyTSof);
                    else
                    {yyyTST->node = *yyyCLptr2; 
                     yyyTST->isReady = 0; 
                     yyyClearConds
                    }
                 yyyCLptr2++; 
                } 
             } /* right to left */
             else  /* left to right */
             {yyyCLptr1 = yyyCLptr2 = yyyTSTn->cL; 
              while 
                ((yyyCLptr2 != yyyNextCLspace)
                 &&
                 ((*yyyCLptr2)->parent == yyyTSTn) 
                )  
                yyyCLptr2++; 
              while (yyyCLptr2-- > yyyCLptr1)
                if (++yyyTST == yyyAfterTravStack)
                   yyyHandleOverflow(yyyTSof);
                   else
                   {yyyTST->node = *yyyCLptr2; 
                    yyyTST->isReady = 0; 
                    yyyClearConds
                   }
             } /* left to right */
      } /* else */
   continue;
yyyTravSwitch:
				switch(yyyTSTn->prodNum)	{
case 1:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 4:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 2:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 4:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 3:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 4:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 4:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 4:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 5:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 4:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 6:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 4:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 7:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 4:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 8:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 4:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 9:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 4:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 10:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 4:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 11:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 4:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) { asm_func_prolog((((yyyP1)(((char *)((yyyTSTn->cL)[1]))+yyyGNSz))->name));
			}
if (yyyCond(1) != yyyPass) { burm_label((((yyyP9)(((char *)((yyyTSTn->cL)[5]))+yyyGNSz))->node)); burm_reduce((((yyyP9)(((char *)((yyyTSTn->cL)[5]))+yyyGNSz))->node),1);
			}
if (yyyCond(2) != yyyPass) { reset_regcursor();
		}
				break;
					}
		break;
			}

break;
case 12:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) { reset_regcursor();
		}
				break;
					}
		break;
		case 4:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 13:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)
yyySetCond(1)

				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP10)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->vartab)  = (((yyyP9)(((char *)yyyTSTn)+yyyGNSz))->vartab);
			}
if (yyyCond(1) != yyyPass) { (((yyyP9)(((char *)((yyyTSTn->cL)[2]))+yyyGNSz))->vartab) = (((yyyP9)(((char *)yyyTSTn)+yyyGNSz))->vartab);
		}
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 4:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP9)(((char *)yyyTSTn)+yyyGNSz))->node) = (((yyyP10)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->node);
			}
if (yyyCond(1) != yyyPass) { (((yyyP9)(((char *)yyyTSTn)+yyyGNSz))->node)->right = (((yyyP9)(((char *)((yyyTSTn->cL)[2]))+yyyGNSz))->node);
	
			}
				break;
					}
		break;
			}

break;
case 14:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 4:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP10)(((char *)yyyTSTn)+yyyGNSz))->node) = new_ret((((yyyP18)(((char *)((yyyTSTn->cL)[1]))+yyyGNSz))->node));
		}
				break;
					}
		break;
			}

break;
case 15:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 4:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 16:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP9)(((char *)((yyyTSTn->cL)[3]))+yyyGNSz))->vartab)  = symtab_merge_nodupcheck( (((yyyP10)(((char *)yyyTSTn)+yyyGNSz))->vartab), (((yyyP12)(((char *)((yyyTSTn->cL)[1]))+yyyGNSz))->vartab));
			
			//@i @Stats.0.vartab@    = @LetDef.0.vartab@;
			}
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 4:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 17:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP9)(((char *)((yyyTSTn->cL)[5]))+yyyGNSz))->vartab) = symtab_merge( (((yyyP10)(((char *)yyyTSTn)+yyyGNSz))->vartab), symtab_subtab( (((yyyP10)(((char *)yyyTSTn)+yyyGNSz))->fieldtab), (((yyyP1)(((char *)((yyyTSTn->cL)[3]))+yyyGNSz))->name)));
			
			}
				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) { symtab_isdef( (((yyyP10)(((char *)yyyTSTn)+yyyGNSz))->structtab), (((yyyP1)(((char *)((yyyTSTn->cL)[3]))+yyyGNSz))->name));
		
			/* good! now get all fields of the struct into a new symtab
			 * --> these will be added to the varscope of the with-block.  
			 * yet, we will need the already defined variables as well, so
			 * merge these two symtables into one
			 * NOTE: the result will be in arg2 (so the return * of the function 
			 * -- a new symtab_t to ensure scope), and the elements of arg1 will be
			 * appended as copies, so no mixup with the original elements */
			//@i @Stats.vartab@ = symtab_merge( @Stat.vartab@, symtab_subtab( @Stat.fieldtab@, @IDENTIFIER.0.name@));
			}
				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 4:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 18:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 4:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 19:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 4:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 20:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 4:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 21:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 4:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 22:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 4:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 23:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 4:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 24:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) { symtab_isdef( (((yyyP13)(((char *)yyyTSTn)+yyyGNSz))->fieldtab), (((yyyP1)(((char *)((yyyTSTn->cL)[2]))+yyyGNSz))->name));
			
			/* and as always there is stuff to get down */
			}
				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 4:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 25:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) { symtab_isdef( (((yyyP13)(((char *)yyyTSTn)+yyyGNSz))->vartab), (((yyyP1)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->name));
		}
				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 4:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 26:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 4:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP14)(((char *)yyyTSTn)+yyyGNSz))->node) = new_op(T_NEG, (((yyyP21)(((char *)((yyyTSTn->cL)[1]))+yyyGNSz))->node), NULL);
		}
				break;
					}
		break;
			}

break;
case 27:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 4:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP14)(((char *)yyyTSTn)+yyyGNSz))->node) = new_op(T_NOT, (((yyyP21)(((char *)((yyyTSTn->cL)[1]))+yyyGNSz))->node), NULL);
		}
				break;
					}
		break;
			}

break;
case 28:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 4:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP14)(((char *)yyyTSTn)+yyyGNSz))->node) = new_op(T_NEG, (((yyyP14)(((char *)((yyyTSTn->cL)[1]))+yyyGNSz))->node), NULL);
		}
				break;
					}
		break;
			}

break;
case 29:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 4:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP14)(((char *)yyyTSTn)+yyyGNSz))->node) = new_op(T_NOT, (((yyyP14)(((char *)((yyyTSTn->cL)[1]))+yyyGNSz))->node), NULL);
		}
				break;
					}
		break;
			}

break;
case 30:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 4:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP15)(((char *)yyyTSTn)+yyyGNSz))->node) = new_op(T_ADD, (((yyyP21)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->node), (((yyyP21)(((char *)((yyyTSTn->cL)[2]))+yyyGNSz))->node));
		}
				break;
					}
		break;
			}

break;
case 31:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 4:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP15)(((char *)yyyTSTn)+yyyGNSz))->node) = new_op(T_ADD, (((yyyP15)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->node), (((yyyP21)(((char *)((yyyTSTn->cL)[2]))+yyyGNSz))->node));
		}
				break;
					}
		break;
			}

break;
case 32:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 4:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP16)(((char *)yyyTSTn)+yyyGNSz))->node) = new_op(T_MUL, (((yyyP21)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->node), (((yyyP21)(((char *)((yyyTSTn->cL)[2]))+yyyGNSz))->node));
		}
				break;
					}
		break;
			}

break;
case 33:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 4:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP16)(((char *)yyyTSTn)+yyyGNSz))->node) = new_op(T_MUL, (((yyyP16)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->node), (((yyyP21)(((char *)((yyyTSTn->cL)[2]))+yyyGNSz))->node));
		}
				break;
					}
		break;
			}

break;
case 34:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 4:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP17)(((char *)yyyTSTn)+yyyGNSz))->node) = new_op(T_OR, (((yyyP21)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->node), (((yyyP21)(((char *)((yyyTSTn->cL)[2]))+yyyGNSz))->node));
		}
				break;
					}
		break;
			}

break;
case 35:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 4:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP17)(((char *)yyyTSTn)+yyyGNSz))->node) = new_op(T_OR, (((yyyP17)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->node), (((yyyP21)(((char *)((yyyTSTn->cL)[2]))+yyyGNSz))->node));
		}
				break;
					}
		break;
			}

break;
case 36:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 4:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP18)(((char *)yyyTSTn)+yyyGNSz))->node) = (((yyyP14)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->node);
		}
				break;
					}
		break;
			}

break;
case 37:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 4:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP18)(((char *)yyyTSTn)+yyyGNSz))->node) = (((yyyP15)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->node);
		}
				break;
					}
		break;
			}

break;
case 38:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 4:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP18)(((char *)yyyTSTn)+yyyGNSz))->node) = (((yyyP16)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->node);
		}
				break;
					}
		break;
			}

break;
case 39:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 4:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP18)(((char *)yyyTSTn)+yyyGNSz))->node) = (((yyyP17)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->node);
		}
				break;
					}
		break;
			}

break;
case 40:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 4:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP18)(((char *)yyyTSTn)+yyyGNSz))->node) = new_op(T_GRE, (((yyyP21)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->node), (((yyyP21)(((char *)((yyyTSTn->cL)[2]))+yyyGNSz))->node));
		}
				break;
					}
		break;
			}

break;
case 41:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 4:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP18)(((char *)yyyTSTn)+yyyGNSz))->node) = new_op(T_NEQ, (((yyyP21)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->node), (((yyyP21)(((char *)((yyyTSTn->cL)[2]))+yyyGNSz))->node));
		}
				break;
					}
		break;
			}

break;
case 42:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 4:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP18)(((char *)yyyTSTn)+yyyGNSz))->node) = (((yyyP21)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->node);
		}
				break;
					}
		break;
			}

break;
case 43:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 4:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 44:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 4:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 45:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 4:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 46:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 4:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 47:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 4:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP21)(((char *)yyyTSTn)+yyyGNSz))->node) = (((yyyP18)(((char *)((yyyTSTn->cL)[1]))+yyyGNSz))->node);
		}
				break;
					}
		break;
			}

break;
case 48:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 4:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP21)(((char *)yyyTSTn)+yyyGNSz))->node) = new_num((((yyyP2)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->val));
		}
				break;
					}
		break;
			}

break;
case 49:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) { symtab_isdef( (((yyyP21)(((char *)yyyTSTn)+yyyGNSz))->fieldtab), (((yyyP1)(((char *)((yyyTSTn->cL)[2]))+yyyGNSz))->name));
		
			/* and as always there is stuff to get down */
			}
				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 4:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 50:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) { symtab_isdef( (((yyyP21)(((char *)yyyTSTn)+yyyGNSz))->visscope), (((yyyP1)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->name));
		}
				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 4:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP21)(((char *)yyyTSTn)+yyyGNSz))->node) = new_var((((yyyP1)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->name), stentry_reg((((yyyP21)(((char *)yyyTSTn)+yyyGNSz))->vartab), (((yyyP1)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->name)));
			
			/* check if IDENTIFIER is a defined variable */
			//@checkscope symtab_isdef( @Term.0.vartab@, @IDENTIFIER.0.name@);
			}
				break;
					}
		break;
			}

break;
case 51:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 4:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
								} /* switch */ 
   if (yyyPass) goto yyyTpop; else goto yyyTpush; 
  } /* while */ 
 } /* for */ 
} /* yyyDoTraversals */ 

void yyyExecuteRRsection()  {
   int yyyi; 
   long yyynRefCounts; 
   long cycleSum = 0;
   long nNZrc = 0;

   if (!yyyYok) return; 
   yyynRefCounts = yyyNextRCLspace - yyyRefCountListSpace; 
   for (yyyi=0;yyyi<yyynRefCounts;yyyi++) 
     if (yyyRefCountListSpace[yyyi])
        {cycleSum += yyyRefCountListSpace[yyyi]; nNZrc++;} 
   if (nNZrc) 
      {
       fprintf(stderr,"\n\n\n**********\n");
       fprintf(stderr,
               "cycle detected in completed parse tree");
       fprintf(stderr,
               " after decoration.\n");
       fprintf(stderr,
         "searching parse tree for %d unsolved instances:\n",
               nNZrc
              );
       yyyUnsolvedInstSearchTravAux(yyyStackTop->node);
      }
   yyyDoTraversals();
} /* yyyExecuteRRsection */ 



yyyWAT yyyLRCIL[2] = {0,0,
};



void yyyYoxInit()                                  /*stock*/  
  { 

   yyyNodeSizeCalc(); 

   if ((yyyTermBuffer.snBufPtr = 
        (char *) malloc((yyyBiggestNodeSize + sizeof(yyyCopyType)))
       )  
       == 
       ((char *) NULL) 
      )   
      yyyfatal("malloc error in yyyTermBuffer allocation\n");  
  
  
   yyyNbytesStackStg = yyyMaxStackSize*sizeof(struct yyyStackItem); 
   yyyNbytesStackStg = ((yyyNbytesStackStg/yyyAlignSize)+1)*yyyAlignSize;  
   if ((yyyNodeAndStackSpace = 
        (char *) malloc((yyyNbytesStackStg + 
                                 yyyMaxNbytesNodeStg + 
                                 yyyGNSz + 
                                 yyyBiggestNodeSize + 
                                 sizeof(yyyCopyType) 
                                )
                       )
       )  
       == 
       ((char *) NULL) 
      )   
      yyyfatal("malloc error in ox node and stack space allocation\n");
   yyyStack = (struct yyyStackItem *) yyyNodeAndStackSpace; 
   yyyAfterStack = yyyStack + yyyMaxStackSize;  
   yyyNodeSpace = yyyNodeAndStackSpace + yyyNbytesStackStg;
   yyyAfterNodeSpace = yyyNodeSpace + yyyMaxNbytesNodeStg;
 
 
   if ((yyyRS = (struct yyyRSitem *) 
         malloc(((yyyRSmaxSize+1)*sizeof(struct yyyRSitem)))
       )  
       == 
       ((struct yyyRSitem *) NULL) 
      )   
      yyyfatal("malloc error in ox ready set space allocation\n");  
   yyyRS++; 
   yyyAfterRS = yyyRS + yyyRSmaxSize; 

 
   if ((yyyChildListSpace = 
        (yyyGNT **) malloc((yyyMaxNchildren*sizeof(yyyGNT *)))
       )  
       == 
       ((yyyGNT **) NULL) 
      )   
      yyyfatal("malloc error in ox child list space allocation\n");  
   yyyAfterChildListSpace = yyyChildListSpace + yyyMaxNchildren; 

 
   if ((yyyRefCountListSpace = 
        (yyyRCT *) malloc((yyyMaxNrefCounts * sizeof(yyyRCT)))
       )  
       == 
       ((yyyRCT *) NULL) 
      )   
      yyyfatal("malloc error in ox reference count list space allocation\n");  
   yyyAfterRefCountListSpace = yyyRefCountListSpace + yyyMaxNrefCounts;  
  
 
   if ((yyySSALspace = (struct yyySolvedSAlistCell *) 
          malloc(((yyySSALspaceSize+1) * 
                          sizeof(struct yyySolvedSAlistCell))
                         ) 
       ) 
       == 
       ((struct yyySolvedSAlistCell *) NULL) 
      ) 
      yyyfatal("malloc error in stack solved list space allocation\n"); 
  } /* yyyYoxInit */ 



void yyyYoxReset() 
  { 
   yyyTermBuffer.isEmpty = 1; 
   yyyStackTop = yyyStack; 
   while (yyyStackTop != yyyAfterStack) 
     (yyyStackTop++)->solvedSAlist = yyyLambdaSSAL; 
   yyyStackTop = yyyStack - 1; 
   yyyNextNodeSpace = yyyNodeSpace; 
   yyyRSTop = yyyRS - 1; 
   yyyNextCLspace = yyyChildListSpace;
   yyyNextRCLspace = yyyRefCountListSpace; 
  }  



void yyyDecorate() 
  { 
   while (yyyRSTop >= yyyRS) 
      yyySolveAndSignal();  
  } 



void yyyShift() 
  {yyyRCT *rcPdum; 
   register yyyCopyType *CTp1,*CTp2,*CTp3; 
   register yyyWAT *startP,*stopP;  

   if ((++yyyStackTop) == yyyAfterStack) 
      yyyHandleOverflow(yyySof);
   CTp2 = (yyyCopyType *)(yyyStackTop->oldestNode = 
                          yyyStackTop->node = 
                          (yyyGNT *)yyyNextNodeSpace 
                         ); 
   yyyTermBuffer.isEmpty = 1;
   ((yyyGNT *)CTp2)->parent = (void *)yyyStackTop; 
   ((yyyGNT *)CTp2)->cL = yyyNextCLspace;  
   rcPdum = ((yyyGNT *)CTp2)->refCountList = yyyNextRCLspace;  
   ((yyyGNT *)CTp2)->prodNum = 0; 
   if ((yyyNextRCLspace += yyyTermBuffer.nAttrbs) 
       > 
       yyyAfterRefCountListSpace 
      ) 
      yyyHandleOverflow(yyyRCof); 
   startP = yyyTermBuffer.startP;  
   stopP = yyyTermBuffer.stopP;  
   while (startP < stopP) rcPdum[*(startP++)] = 0; 
   if ((yyyNextNodeSpace += yyyNdPrSz[yyyTermBuffer.typeNum]) 
       > 
       yyyAfterNodeSpace 
      ) 
      yyyHandleOverflow(yyyNSof);  
   CTp1 = (yyyCopyType *)(yyyTermBuffer.snBufPtr); 
   CTp2 = (yyyCopyType *)(((char *)CTp2) + yyyGNSz); 
   CTp3 = CTp2 + yyyNdCopySz[yyyTermBuffer.typeNum]; 
   while (CTp2 < CTp3) *CTp2++ = *CTp1++; 
  } 



void yyyGenIntNode() 
  {register yyyWST i;
   register struct yyyStackItem *stDum;  
   register yyyGNT *gnpDum; 

   if ((stDum = (yyyStackTop -= (yyyRHSlength-1))) >= yyyAfterStack) 
      yyyHandleOverflow(yyySof);
   yyySTsn = ((char *)(yyySTN = (yyyGNT *)yyyNextNodeSpace)) + yyyGNSz; 
   yyySTN->parent       =  (void *)yyyStackTop;  
   yyySTN->cL           =  yyyNextCLspace; 
   yyySTN->refCountList =  yyyNextRCLspace; 
   yyySTN->prodNum      =  yyyProdNum; 
   if ((yyyNextCLspace+yyyRHSlength) > yyyAfterChildListSpace) 
      yyyHandleOverflow(yyyCLof); 
   for (i=1;i<=yyyRHSlength;i++) 
     {gnpDum = *(yyyNextCLspace++) = (stDum++)->node;  
      gnpDum->whichSym = i;  
      gnpDum->parent = (void *)yyyNextNodeSpace; 
     } 
   if ((yyyNextRCLspace += yyyNattrbs) > yyyAfterRefCountListSpace) 
      yyyHandleOverflow(yyyRCof); 
   if ((yyyNextNodeSpace += yyyNdPrSz[yyyTypeNum]) > yyyAfterNodeSpace) 
      yyyHandleOverflow(yyyNSof);  
  } 



#define yyyDECORfREQ 50 



void yyyAdjustINRC(startP,stopP) 
  register yyyFT *startP,*stopP;
  {yyyWST i;
   long SSALptr,SSALptrHead,*cPtrPtr; 
   long *pL; 
   struct yyyStackItem *stDum;  
   yyyGNT *gnpDum; 
   long iTemp;
   register yyyFT *nextP;
   static unsigned short intNodeCount = yyyDECORfREQ;

   nextP = startP;
   while (nextP < stopP) 
     {if ((*nextP) == yyyR)  
         {(yyySTN->refCountList)[*(nextP+1)] = *(nextP+2);
         } 
         else 
         {(((yyySTN->cL)[*nextP])->refCountList)[*(nextP+1)] = *(nextP+2);
         } 
      nextP += 3;  
     }
   pL = yyyIIEL + yyyIIIEL[yyyProdNum]; 
   stDum = yyyStackTop;  
   for (i=1;i<=yyyRHSlength;i++) 
     {pL++; 
      SSALptrHead = SSALptr = *(cPtrPtr = &((stDum++)->solvedSAlist)); 
      if (SSALptr != yyyLambdaSSAL) 
         {*cPtrPtr = yyyLambdaSSAL; 
          do 
            {
             iTemp = (*pL+yyySSALspace[SSALptr].attrbNum);
             yyySignalEnts(yyySTN,
                           yyyEntL + yyyIEL[iTemp],
                           yyyEntL + yyyIEL[iTemp+1]
                          );  
             SSALptr = *(cPtrPtr = &(yyySSALspace[SSALptr].next)); 
            } 
            while (SSALptr != yyyLambdaSSAL);  
          *cPtrPtr = yyySSALCfreeList;  
          yyySSALCfreeList = SSALptrHead;  
         } 
     } 
   nextP = startP + 2;
   while (nextP < stopP) 
     {if (!(*nextP))
         {if ((*(nextP-2)) == yyyR)  
             {pL = &(yyyStackTop->solvedSAlist); 
              if (yyySSALCfreeList == yyyLambdaSSAL) 
                 {yyySSALspace[yyyNewSSALC].next = *pL; 
                  if ((*pL = yyyNewSSALC++) == yyySSALspaceSize) 
                     yyyHandleOverflow(yyySSALof); 
                 }  
                 else
                 {iTemp = yyySSALCfreeList; 
                  yyySSALCfreeList = yyySSALspace[yyySSALCfreeList].next; 
                  yyySSALspace[iTemp].next = *pL; 
                  *pL = iTemp;  
                 } 
              yyySSALspace[*pL].attrbNum = *(nextP-1); 
             } 
             else 
             {if ((gnpDum = (yyySTN->cL)[*(nextP-2)])->prodNum != 0)
                 {
                  iTemp = yyyIIEL[yyyIIIEL[gnpDum->prodNum]] + *(nextP-1);
                  yyySignalEnts(gnpDum, 
                                yyyEntL + yyyIEL[iTemp],  
                                yyyEntL + yyyIEL[iTemp+1] 
                               );    
                 }  
             } 
         } 
      nextP += 3; 
     } 
   yyyStackTop->node = yyySTN;
   if (!yyyRHSlength) yyyStackTop->oldestNode = yyySTN; 
   if (!--intNodeCount) 
      {intNodeCount = yyyDECORfREQ; 
       yyyDecorate(); 
      } 
  } 



void yyyPrune(prodNum) 
  long prodNum;
  {  
   int i,n; 
   register char *cp1,*cp2;  
   register yyyRCT *rcp1,*rcp2,*rcp3;  
   long cycleSum = 0;
   long nNZrc = 0;
   yyyRCT *tempNextRCLspace;
   
   yyyDecorate();
   tempNextRCLspace = yyyNextRCLspace;
   yyyNextRCLspace = 
     (rcp1 = rcp2 = (yyyStackTop->oldestNode)->refCountList) + yyyNattrbs;
   rcp3 = (yyyStackTop->node)->refCountList; 
   while (rcp2 < rcp3) 
     if (*rcp2++) {cycleSum += *(rcp2 - 1); nNZrc++;} 
   if (nNZrc) 
      {
       fprintf(stderr,"\n\n\n----------\n");
       fprintf(stderr,
         "cycle detected during pruning of a subtree\n");
       fprintf(stderr,
         "  at whose root production %d is applied.\n",prodNum);
       yyyNextRCLspace = tempNextRCLspace; 
       fprintf(stderr,
         "prune aborted: searching subtree for %d unsolved instances:\n",
               nNZrc
              );
       yyyUnsolvedInstSearchTrav(yyyStackTop->node);
       return; 
      }
   for (i=0;i<yyyNattrbs;i++) rcp1[i] = rcp3[i]; 
   yyyNextCLspace = (yyyStackTop->oldestNode)->cL; 
   yyyNextNodeSpace = (char *)(yyyStackTop->oldestNode) + 
                      (n = yyyNdPrSz[yyyTypeNum]);
   cp1 = (char *)yyyStackTop->oldestNode; 
   cp2 = (char *)yyyStackTop->node; 
   for (i=0;i<n;i++) *cp1++ = *cp2++; 
   yyyStackTop->node = yyyStackTop->oldestNode; 
   (yyyStackTop->node)->refCountList = rcp1; 
   (yyyStackTop->node)->cL = yyyNextCLspace; 
  } 



void yyyGenLeaf(nAttrbs,typeNum,startP,stopP) 
  int nAttrbs,typeNum; 
  yyyWAT *startP,*stopP; 
  {
   if  (!(yyyTermBuffer.isEmpty)) yyyShift(); 
   yyyTermBuffer.isEmpty = 0;
   yyyTermBuffer.typeNum = typeNum; 
   yyyTermBuffer.nAttrbs = nAttrbs; 
   yyyTermBuffer.startP = startP; 
   yyyTermBuffer.stopP = stopP; 
   
  } 



void yyyerror()
  {yyyYok = 0; 
  } 



/* read the command line for changes in sizes of 
                  the evaluator's data structures */
void yyyCheckForResizes(argc,argv) 
  int argc; 
  char *argv[]; 
  {int i; 
   long dum; 
 
   if (!yyyPermitUserAlloc) return; 
   for (i=1;i<argc;i++) 
     { 
      if ((argv[i][0] != '-') || (argv[i][1] != 'Y')) continue; 
      if (strlen(argv[i]) < 4) goto yyyErrO1; 
      if (sscanf(argv[i]+3,"%d",&dum) != 1) goto yyyErrO1;
      if (dum < 2) dum = 2;
      switch (argv[i][2]) 
        {case yyyNSof:   yyyMaxNbytesNodeStg = dum; break; 
         case yyyRCof:   yyyMaxNrefCounts    = dum; break; 
         case yyyCLof:   yyyMaxNchildren     = dum; break; 
         case yyySof:    yyyMaxStackSize     = dum; break; 
         case yyySSALof: yyySSALspaceSize    = dum; break; 
         case yyyRSof:   yyyRSmaxSize        = dum; break; 
         case yyyTSof:   yyyTravStackMaxSize = dum; break; 
         default : goto yyyErrO1; 
        }
      continue;  
   yyyErrO1 : fprintf(stderr,"invalid command line option: %s\n",
                             argv[i] 
                     ); 
     } 
  } 
   
   
   


#define yyyLastProdNum 51


#define yyyNsorts 21


int yyyProdsInd[] = {
   0,
   0,   2,   3,   7,   9,  11,  17,  18,  21,  22,
  25,  33,  34,  38,  41,  45,  51,  59,  63,  65,
  66,  73,  74,  80,  84,  86,  89,  92,  95,  98,
 102, 106, 110, 114, 118, 122, 124, 126, 128, 130,
 134, 138, 140, 141, 145, 146, 148, 152, 154, 158,
 160,
 166,
};


int yyyProds[][2] = {
{ 334,   0},{1014,   3},{1014,   3},{1014,   3},{1014,   3},
{  21,   4},{ 548,   0},{  21,   4},{ 165,   6},{  21,   4},
{ 172,   5},{ 172,   5},{1049,   0},{ 580,   1},{ 540,   0},
{  70,   8},{ 124,   0},{  70,   8},{  70,   8},{  70,   8},
{ 580,   1},{  16,   7},{  16,   7},{  16,   7},{ 580,   1},
{ 165,   6},{ 662,   0},{ 580,   1},{ 396,   0},{  16,   7},
{ 404,   0},{  63,   9},{ 124,   0},{  63,   9},{  63,   9},
{ 246,  10},{ 548,   0},{  63,   9},{ 246,  10},{ 838,   0},
{ 431,  18},{ 246,  10},{ 675,   0},{ 793,  11},{ 124,   0},
{ 246,  10},{1083,   0},{  42,  12},{ 699,   0},{  63,   9},
{ 124,   0},{ 246,  10},{ 282,   0},{ 431,  18},{ 540,   0},
{ 580,   1},{ 702,   0},{  63,   9},{ 124,   0},{ 246,  10},
{ 286,  13},{ 564,   0},{ 431,  18},{ 246,  10},{ 997,  21},
{ 793,  11},{ 793,  11},{ 793,  11},{ 431,  18},{ 361,   0},
{  63,   9},{ 124,   0},{ 548,   0},{  42,  12},{  42,  12},
{  42,  12},{ 580,   1},{ 564,   0},{ 431,  18},{ 548,   0},
{ 286,  13},{ 997,  21},{ 444,   0},{ 580,   1},{ 286,  13},
{ 580,   1},{ 370,  14},{ 436,   0},{ 997,  21},{ 370,  14},
{1165,   0},{ 997,  21},{ 370,  14},{ 436,   0},{ 370,  14},
{ 370,  14},{1165,   0},{ 370,  14},{ 269,  15},{ 997,  21},
{ 420,   0},{ 997,  21},{ 269,  15},{ 269,  15},{ 420,   0},
{ 997,  21},{ 417,  16},{ 997,  21},{ 412,   0},{ 997,  21},
{ 417,  16},{ 417,  16},{ 412,   0},{ 997,  21},{ 394,  17},
{ 997,  21},{ 737,   0},{ 997,  21},{ 394,  17},{ 394,  17},
{ 737,   0},{ 997,  21},{ 431,  18},{ 370,  14},{ 431,  18},
{ 269,  15},{ 431,  18},{ 417,  16},{ 431,  18},{ 394,  17},
{ 431,  18},{ 997,  21},{ 572,   0},{ 997,  21},{ 431,  18},
{ 997,  21},{ 701,   0},{ 997,  21},{ 431,  18},{ 997,  21},
{ 867,  19},{ 867,  19},{ 867,  19},{ 431,  18},{ 428,   0},
{ 635,  20},{ 635,  20},{ 431,  18},{ 997,  21},{ 396,   0},
{ 431,  18},{ 404,   0},{ 997,  21},{ 717,   2},{ 997,  21},
{ 997,  21},{ 444,   0},{ 580,   1},{ 997,  21},{ 580,   1},
{ 997,  21},{ 580,   1},{ 396,   0},{ 867,  19},{ 635,  20},
{ 404,   0},
};


int yyySortsInd[] = {
  0,
  0,  1,  2,  4,  6,  9, 11, 12, 14, 18,
 22, 25, 28, 30, 34, 38, 42, 46, 50, 53,
 56,
 60,
};


int yyySorts[] = {
  381,  423,  362,  260,  362,  260,  362,  260,  887,  362,
  260, 1012,  260,  544,  362,  260,  210,  809,  362,  260,
  210,  809,  362,  260,  210,  260,  210,  762,  260,  210,
  260,  210,  762,  809,  260,  210,  762,  809,  260,  210,
  762,  809,  260,  210,  762,  809,  260,  210,  762,  809,
  260,  210,  762,  260,  210,  762,  260,  210,  762,  809,
};



char *yyyStringTab[] = {
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,"ParamDef",0,0,0,
0,"Def",0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
"ADD",0,"LetDef",0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,"Stats",0,
0,0,0,0,0,
"FieldDef",0,0,0,0,
0,0,0,0,0,
0,"right",0,0,0,
"T",0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,"t",0,0,
0,0,"y",0,"END",
0,0,0,0,0,
0,"reg",0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
"Funcdef",0,0,0,0,
0,0,"Structdef",0,0,
0,0,0,0,0,
0,0,"isdef",0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
"vartab",0,0,0,0,
0,0,0,0,0,
0,0,"NULL","reduce","GRE",
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,"Stat",0,0,0,
0,0,0,"NEG",0,
0,0,0,0,0,
"fieldtab",0,0,0,0,
0,0,0,0,"Addexpr",
0,0,0,0,0,
0,0,0,0,0,
0,0,"WITH",0,0,
0,"Lexpr",0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,"Start",
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,"THEN","structtab",0,0,
0,0,"subtab",0,0,
"Notexpr",0,0,0,0,
0,0,0,0,0,
0,"name",0,0,0,
0,0,0,0,0,
0,0,0,0,"Orexpr",
0,"'('",0,0,"symtab",
0,0,0,0,"')'",
0,0,0,0,0,
0,0,"'*'",0,0,
0,"strdup","Mulexpr",0,0,
"'+'",0,0,"val",0,
"label",0,0,"','",0,
"int64_t","Expr",0,0,0,
0,"'-'",0,0,0,
0,"tnode_t","prolog",0,"'.'",
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,"updatescope1",0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,"symtab_t",
0,0,0,0,0,
0,0,0,0,0,
"':'",0,"updatescope2",0,"structname",
0,0,0,"';'",0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,"'='",
0,0,0,0,0,
0,0,"'>'",0,0,
0,0,0,0,0,
"IDENTIFIER",0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
"asm",0,0,0,0,
0,0,0,0,0,
0,0,0,"init",0,
0,0,0,0,0,
0,0,0,0,0,
"FinalArg",0,0,0,"num",
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,"codegen",0,
0,0,"FUNC",0,0,
0,0,0,0,0,
0,0,0,0,0,
"COND",0,0,0,0,
0,0,0,0,0,
0,0,"nodupcheck","stentry",0,
0,0,0,0,0,
0,0,0,0,"IN",
"MUL","NOTEQUAL","DO",0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,"NUMBER",0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,"OR","checkscope",0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,"visscope",0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,"strtol",0,0,0,
0,0,0,0,0,
0,0,0,"Condlist",0,
0,0,0,0,0,
0,0,0,0,0,
0,0,"var",0,"node",
0,0,0,0,0,
0,0,0,0,0,
0,"dup",0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,"RETURN",0,
0,0,0,0,0,
0,0,0,0,0,
"next",0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,"ExprList",0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,"dummy1",0,0,
0,0,0,"NEQ",0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,"func",0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,"ret",0,
0,0,0,0,0,
0,0,0,0,0,
"reset",0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,"Term",0,0,
0,0,0,0,0,
0,0,0,"nval","op",
0,0,"tab","sval","Program",
0,0,0,0,0,
0,0,0,"yytext",0,
0,0,0,0,0,
0,0,0,0,"merge",
0,0,0,0,0,
0,0,0,0,0,
0,0,"regcursor",0,"STRUCT",
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,"LET",0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,"burm",
0,0,0,0,0,
"add",0,0,0,0,
0,"new",0,0,0,
0,0,0,0,0,
0,0,0,0,0,
"NOT",0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,"int64",0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,
};



#define yyySizeofProd(num) (yyyProdsInd[(num)+1] - yyyProdsInd[(num)])

#define yyyGSoccurStr(prodNum,symPos) \
   (yyyStringTab[yyyProds[yyyProdsInd[(prodNum)] + (symPos)][0]])

#define yyySizeofSort(num) (yyySortsInd[(num)+1] - yyySortsInd[(num)])

#define yyySortOf(prodNum,symPos) \
  (yyyProds[yyyProdsInd[(prodNum)] + (symPos)][1]) 

#define yyyAttrbStr(prodNum,symPos,attrbNum)                      \
  (yyyStringTab[yyySorts[yyySortsInd[yyySortOf(prodNum,symPos)] + \
                         (attrbNum)                               \
                        ]                                         \
               ]                                                  \
  )



void yyyShowProd(i)
  int i;
  {int j,nSyms;

   nSyms = yyySizeofProd(i);
   for (j=0; j<nSyms; j++)
     {
      fprintf(stderr,"%s",yyyGSoccurStr(i,j));
      if (j == 0) fprintf(stderr," : "); else fprintf(stderr," ");
     }
   fprintf(stderr,";\n");
  }



void yyyShowProds()
  {int i; for (i=1; i<=yyyLastProdNum; i++) yyyShowProd(i);}



void yyyShowSymsAndSorts()
  {int i; 

   for (i=1; i<=yyyLastProdNum; i++) 
     {int j, nSyms;

      fprintf(stderr,
              "\n\n\n---------------------------------- %3.1d\n",i);
      /* yyyShowProd(i); */ 
      nSyms = yyySizeofProd(i); 
      for (j=0; j<nSyms; j++) 
        {int k, sortSize;

         fprintf(stderr,"%s\n",yyyGSoccurStr(i,j));
         sortSize = yyySizeofSort(yyySortOf(i,j));
         for (k=0; k<sortSize; k++) 
            fprintf(stderr,"  %s\n",yyyAttrbStr(i,j,k));
         if (j == 0) fprintf(stderr,"->\n"); 
              else 
              fprintf(stderr,"\n"); 
        }
     }
  }



void yyyCheckNodeInstancesSolved(np)
  yyyGNT *np;
  {int mysort,sortSize,i,prodNum,symPos,inTerminalNode;
   int nUnsolvedInsts = 0;

   if (np->prodNum != 0)
     {inTerminalNode = 0;
      prodNum = np->prodNum;
      symPos = 0;
     }
   else
     {inTerminalNode = 1;
      prodNum = ((yyyGNT *)(np->parent))->prodNum;
      symPos = np->whichSym;
     }
   mysort = yyySortOf(prodNum,symPos);
   sortSize = yyySizeofSort(mysort);
   for (i=0; i<sortSize; i++)
     if ((np->refCountList)[i] != 0) nUnsolvedInsts += 1;
   if (nUnsolvedInsts)
     {fprintf(stderr,
      "\nFound node that has %d unsolved attribute instance(s).\n",
              nUnsolvedInsts
             );
      fprintf(stderr,"Node is labeled \"%s\".\n",
             yyyGSoccurStr(prodNum,symPos));
      if (inTerminalNode)
        {fprintf(stderr,
                 "Node is terminal.  Its parent production is:\n  ");
         yyyShowProd(prodNum);
        }
      else
        {fprintf(stderr,"Node is nonterminal.  ");
         if (((char *)(np->parent)) >= yyyNodeSpace)
           {fprintf(stderr,
                    "Node is %dth child in its parent production:\n  ",
                   np->whichSym
                  );
            yyyShowProd(((yyyGNT *)(np->parent))->prodNum);
           }
         fprintf(stderr,
                 "Node is on left hand side of this production:\n  ");
         yyyShowProd(np->prodNum);
        }
      fprintf(stderr,"The following instances are unsolved:\n");
      for (i=0; i<sortSize; i++)
        if ((np->refCountList)[i] != 0)
          fprintf(stderr,"     %-16s still has %1d dependencies.\n",
                  yyyAttrbStr(prodNum,symPos,i),(np->refCountList)[i]);
     }
  }



void yyyUnsolvedInstSearchTravAux(pNode)
  yyyGNT *pNode;
  {yyyGNT **yyyCLpdum;
   int i;
  
   yyyCheckNodeInstancesSolved(pNode); 
   yyyCLpdum = pNode->cL;
   while
     ((yyyCLpdum != yyyNextCLspace) && ((*yyyCLpdum)->parent == pNode))
     {
      yyyUnsolvedInstSearchTravAux(*yyyCLpdum);
      yyyCLpdum++;
     }
  }



void yyyUnsolvedInstSearchTrav(pNode)
  yyyGNT *pNode;
  {yyyGNT **yyyCLpdum;
   int i;
  
   yyyCLpdum = pNode->cL;
   while
     ((yyyCLpdum != yyyNextCLspace) && ((*yyyCLpdum)->parent == pNode))
     {
      yyyUnsolvedInstSearchTravAux(*yyyCLpdum);
      yyyCLpdum++;
     }
  }




