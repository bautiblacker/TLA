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
     principal = 258,
     recibe = 259,
     coma = 260,
     es = 261,
     t_cadena = 262,
     t_entero = 263,
     t_mapa = 264,
     asignar = 265,
     reasignar = 266,
     punto = 267,
     par_abrir = 268,
     par_cerrar = 269,
     suma = 270,
     resta = 271,
     mult = 272,
     divis = 273,
     mostrar = 274,
     si = 275,
     fin = 276,
     y = 277,
     o = 278,
     protot = 279,
     igual = 280,
     mayor = 281,
     mayor_igual = 282,
     menor = 283,
     menor_igual = 284,
     distinto = 285,
     repetir_mientras = 286,
     incrementar = 287,
     decrementar = 288,
     es_funcion = 289,
     devuelve = 290,
     devolver = 291,
     evaluada_en = 292,
     dos_puntos = 293,
     prototipo_funciones = 294,
     variables_globales = 295,
     leer_en = 296,
     agregar = 297,
     a = 298,
     borrar = 299,
     de = 300,
     obtener = 301,
     cadena = 302,
     entero = 303,
     var_id = 304
   };
#endif
/* Tokens.  */
#define principal 258
#define recibe 259
#define coma 260
#define es 261
#define t_cadena 262
#define t_entero 263
#define t_mapa 264
#define asignar 265
#define reasignar 266
#define punto 267
#define par_abrir 268
#define par_cerrar 269
#define suma 270
#define resta 271
#define mult 272
#define divis 273
#define mostrar 274
#define si 275
#define fin 276
#define y 277
#define o 278
#define protot 279
#define igual 280
#define mayor 281
#define mayor_igual 282
#define menor 283
#define menor_igual 284
#define distinto 285
#define repetir_mientras 286
#define incrementar 287
#define decrementar 288
#define es_funcion 289
#define devuelve 290
#define devolver 291
#define evaluada_en 292
#define dos_puntos 293
#define prototipo_funciones 294
#define variables_globales 295
#define leer_en 296
#define agregar 297
#define a 298
#define borrar 299
#define de 300
#define obtener 301
#define cadena 302
#define entero 303
#define var_id 304




/* Copy the first part of user declarations.  */
#line 1 "yacc.y"

	#include <stdio.h>
    #include "node.h"
    #include "operations.h"    
    #include "compiler.h"

    extern int lineCount;

    int yylex();
	void yyerror(char * s);
    void printHeaders();


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
#line 14 "yacc.y"
{
	struct Node * node;
	char * value;
}
/* Line 193 of yacc.c.  */
#line 212 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 225 "y.tab.c"

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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   195

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNRULES -- Number of states.  */
#define YYNSTATES  164

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

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
      45,    46,    47,    48,    49
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     9,    12,    13,    17,    18,    21,    22,
      27,    28,    35,    36,    38,    40,    48,    57,    61,    62,
      67,    68,    72,    74,    77,    80,    83,    87,    88,    89,
      92,    94,    96,    98,   100,   102,   104,   106,   108,   110,
     112,   114,   116,   119,   122,   125,   129,   130,   133,   137,
     140,   143,   146,   148,   150,   152,   154,   156,   158,   162,
     164,   166,   170,   174,   178,   182,   186,   190,   194,   196,
     198,   200,   203,   206,   212,   218,   222,   226,   230,   234,
     236,   238,   240,   242,   244,   246,   248,   254,   258
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      51,     0,    -1,    52,    54,    67,    59,    61,    -1,    40,
      53,    -1,    -1,    58,    12,    53,    -1,    -1,    39,    55,
      -1,    -1,    67,    56,    12,    55,    -1,    -1,    49,    34,
      35,    78,    62,    57,    -1,    -1,    76,    -1,    74,    -1,
       3,    34,    35,    78,    38,    66,    65,    -1,    49,    34,
      35,    78,    62,    38,    66,    65,    -1,    67,    60,    61,
      -1,    -1,    12,     4,    38,    63,    -1,    -1,    64,     5,
      63,    -1,    64,    -1,    78,    49,    -1,    21,    12,    -1,
      68,    66,    -1,    67,    69,    66,    -1,    -1,    -1,    70,
      12,    -1,    86,    -1,    87,    -1,    76,    -1,    74,    -1,
      83,    -1,    72,    -1,    73,    -1,    71,    -1,    79,    -1,
      90,    -1,    92,    -1,    91,    -1,    36,    79,    -1,    32,
      49,    -1,    33,    49,    -1,    49,    77,    75,    -1,    -1,
      10,    79,    -1,    49,    11,    79,    -1,     6,     7,    -1,
       6,     8,    -1,     6,     9,    -1,     7,    -1,     8,    -1,
       9,    -1,    47,    -1,    48,    -1,    49,    -1,    13,    79,
      14,    -1,    80,    -1,    81,    -1,    13,    91,    14,    -1,
      79,    15,    79,    -1,    79,    16,    79,    -1,    79,    17,
      79,    -1,    79,    18,    79,    -1,    49,    37,    82,    -1,
      79,     5,    82,    -1,    79,    -1,    84,    -1,    85,    -1,
      19,    79,    -1,    41,    49,    -1,    20,    88,    38,    66,
      65,    -1,    31,    88,    38,    66,    65,    -1,    79,    89,
      79,    -1,    88,    22,    88,    -1,    88,    23,    88,    -1,
      13,    88,    14,    -1,    79,    -1,    25,    -1,    26,    -1,
      27,    -1,    28,    -1,    29,    -1,    30,    -1,    42,    79,
      79,    43,    49,    -1,    49,    45,    49,    -1,    44,    49,
      45,    49,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    40,    40,    49,    50,    53,    57,    60,    61,    64,
      68,    71,    79,    82,    83,    86,    93,   103,   106,   109,
     110,   113,   117,   120,   127,   130,   133,   136,   139,   142,
     147,   148,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   164,   169,   174,   179,   193,   194,   199,   210,
     211,   212,   215,   216,   217,   220,   221,   222,   227,   235,
     236,   237,   247,   248,   249,   250,   253,   263,   267,   270,
     271,   274,   283,   294,   303,   312,   328,   332,   336,   340,
     343,   344,   345,   346,   347,   348,   351,   366,   380
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "principal", "recibe", "coma", "es",
  "t_cadena", "t_entero", "t_mapa", "asignar", "reasignar", "punto",
  "par_abrir", "par_cerrar", "suma", "resta", "mult", "divis", "mostrar",
  "si", "fin", "y", "o", "protot", "igual", "mayor", "mayor_igual",
  "menor", "menor_igual", "distinto", "repetir_mientras", "incrementar",
  "decrementar", "es_funcion", "devuelve", "devolver", "evaluada_en",
  "dos_puntos", "prototipo_funciones", "variables_globales", "leer_en",
  "agregar", "a", "borrar", "de", "obtener", "cadena", "entero", "var_id",
  "$accept", "PROGRAMA", "LISTA_VAR", "VARIABLES", "LISTA_PROTO",
  "PROTOTIPOS", "PROTOTIPO", "FIN_PARAMS", "VARIABLE", "PRINCIPAL",
  "FUNCION", "FUNCIONES", "LISTA_PARAMETROS", "PARAMETROS", "PARAMETRO",
  "FIN", "LINEAS", "NUEVO_ALCANCE", "LINEA", "BLOQUE", "INSTRUCCION",
  "DEVOLVER", "INCREMENTACION", "DECREMENTACION", "DECLARACION",
  "ASIGNACION", "REASIGNACION", "TIPO", "TIPO_F", "EXPRESION", "OPERACION",
  "EVALUAR_FUNC", "ARGUMENTOS", "FUNCION_BUILTIN", "MOSTRAR", "LEER_CHAR",
  "CONDICIONAL", "REPETIR", "EVALUACION", "COMPARADOR", "AGREGAR",
  "OBTENER", "BORRAR", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    52,    52,    53,    53,    54,    54,    55,
      55,    56,    57,    58,    58,    59,    60,    61,    61,    62,
      62,    63,    63,    64,    65,    66,    66,    66,    67,    68,
      69,    69,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    71,    72,    73,    74,    75,    75,    76,    77,
      77,    77,    78,    78,    78,    79,    79,    79,    79,    79,
      79,    79,    80,    80,    80,    80,    81,    82,    82,    83,
      83,    84,    85,    86,    87,    88,    88,    88,    88,    88,
      89,    89,    89,    89,    89,    89,    90,    91,    92
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     2,     0,     3,     0,     2,     0,     4,
       0,     6,     0,     1,     1,     7,     8,     3,     0,     4,
       0,     3,     1,     2,     2,     2,     3,     0,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     3,     0,     2,     3,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       1,     2,     2,     5,     5,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     5,     3,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     6,     0,     8,     0,     3,     0,    14,    13,     1,
      10,    28,     0,     0,    46,     6,     7,     0,     0,    49,
      50,    51,     0,    55,    56,    57,    48,    59,    60,     0,
      45,     5,     0,     0,     0,    18,    57,     0,     0,     0,
       0,     0,     0,     0,    47,     0,    10,     0,     2,     0,
       0,    58,    61,    68,    66,    62,    63,    64,    65,     0,
       9,     0,     0,    18,    87,     0,    52,    53,    54,     0,
       0,     0,    17,    67,     0,    12,    28,     0,     0,    11,
       0,     0,     0,     0,     0,     0,     0,    57,     0,     0,
      28,     0,    37,    35,    36,    33,    32,    38,    34,    69,
      70,    39,    41,    40,    20,     0,    71,    43,    44,    42,
      72,     0,     0,     0,    15,     0,     0,    28,    30,    31,
      25,    29,     0,    19,    22,     0,     0,     0,    24,     0,
      79,     0,     0,    26,    28,     0,    23,     0,    88,    79,
       0,    80,    81,    82,    83,    84,    85,     0,     0,     0,
      28,    28,     0,    21,    86,    78,    75,    76,    77,     0,
       0,    16,    73,    74
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     5,    11,    16,    33,    79,     6,    35,
      63,    48,    75,   123,   124,   114,    88,    89,    90,   117,
      91,    92,    93,    94,    95,    30,    96,    14,   125,    97,
      27,    28,    54,    98,    99,   100,   118,   119,   131,   147,
     101,   102,   103
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -96
static const yytype_int16 yypact[] =
{
     -28,   -35,    35,    23,   108,   -96,    56,   -96,   -96,   -96,
      17,   -96,   149,   -10,    87,   -35,   -96,    52,   102,   -96,
     -96,   -96,    -7,   -96,   -96,    69,   137,   -96,   -96,   -10,
     -96,   -96,    83,   114,    97,    17,   -12,   133,   118,   -10,
     -10,   -10,   -10,   -10,   137,   127,    17,   129,   -96,   116,
     117,   -96,   -96,   128,   -96,     6,     6,   -96,   -96,   152,
     -96,   152,   134,    17,   -96,   -10,   -96,   -96,   -96,   151,
     131,   132,   -96,   -96,   166,   -96,    42,   152,   135,   -96,
     -10,   122,   123,   -10,   125,   -10,   126,    -1,   155,   -18,
      42,   165,   -96,   -96,   -96,   -96,   -96,   137,   -96,   -96,
     -96,   -96,   -96,   -96,   151,   152,   137,   -96,   -96,   137,
     -96,     2,   136,   167,   -96,    -2,    -2,    42,   -96,   -96,
     -96,   -96,   140,   -96,   175,   138,    64,   139,   -96,     9,
     112,    54,    77,   -96,    42,   152,   -96,   141,   -96,    95,
      71,   -96,   -96,   -96,   -96,   -96,   -96,   -10,    -2,    -2,
      42,    42,   155,   -96,   -96,   -96,   137,   159,   -96,   155,
     155,   -96,   -96,   -96
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -96,   -96,   -96,   168,   -96,   143,   -96,   -96,   -96,   -96,
     -96,   121,    81,    51,   -96,   -64,   -86,    -3,   -96,   -96,
     -96,   -96,   -96,   -96,    58,   -96,   103,   -96,    10,   -13,
     -96,   -96,   130,   -96,   -96,   -96,   -96,   -96,   -95,   -96,
     -96,   -21,   -96
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -29
static const yytype_int16 yytable[] =
{
      26,    38,   115,    22,   120,    12,    22,    17,    18,    37,
      13,   129,     1,   116,     4,    22,    44,    40,    41,    42,
      43,   132,   129,    42,    43,    39,    53,    55,    56,    57,
      58,   133,    49,    50,   140,     9,    39,    23,    24,    25,
      23,    24,    36,    17,    50,    23,    24,    25,   152,    23,
      24,    25,    53,   157,   158,    22,    23,    24,    36,     7,
      49,    80,    10,   -27,   159,   160,   -28,   106,    15,    69,
     109,    70,   111,     7,    81,    82,   148,   149,    83,    40,
      41,    42,    43,    84,    85,   155,    86,   104,   161,    23,
      24,    87,   150,   148,   149,   162,   163,    29,   126,   148,
     149,    32,   130,   130,     8,    34,    39,   137,    38,    51,
      40,    41,    42,    43,    12,   151,   139,    45,     8,    13,
     141,   142,   143,   144,   145,   146,    46,    40,    41,    42,
      43,    47,    52,    65,   156,   130,   130,   141,   142,   143,
     144,   145,   146,    40,    41,    42,    43,    51,    40,    41,
      42,    43,    40,    41,    42,    43,    19,    20,    21,    66,
      67,    68,    59,    74,    61,    62,    64,    77,    71,    76,
      78,   107,   108,   105,   110,   112,   113,   121,   134,   128,
     135,   127,   149,    31,    72,   122,   153,   136,   138,    60,
     154,     0,     0,     0,     0,    73
};

static const yytype_int16 yycheck[] =
{
      13,    22,    20,    13,    90,     6,    13,    10,    11,    22,
      11,    13,    40,    31,    49,    13,    29,    15,    16,    17,
      18,   116,    13,    17,    18,    37,    39,    40,    41,    42,
      43,   117,    35,    45,   129,     0,    37,    47,    48,    49,
      47,    48,    49,    46,    45,    47,    48,    49,   134,    47,
      48,    49,    65,   148,   149,    13,    47,    48,    49,     1,
      63,    19,    39,    21,   150,   151,    49,    80,    12,    59,
      83,    61,    85,    15,    32,    33,    22,    23,    36,    15,
      16,    17,    18,    41,    42,    14,    44,    77,   152,    47,
      48,    49,    38,    22,    23,   159,   160,    10,   111,    22,
      23,    49,   115,   116,     1,     3,    37,    43,   129,    14,
      15,    16,    17,    18,     6,    38,   129,    34,    15,    11,
      25,    26,    27,    28,    29,    30,    12,    15,    16,    17,
      18,    34,    14,     5,   147,   148,   149,    25,    26,    27,
      28,    29,    30,    15,    16,    17,    18,    14,    15,    16,
      17,    18,    15,    16,    17,    18,     7,     8,     9,     7,
       8,     9,    35,    12,    35,    49,    49,    35,    34,    38,
       4,    49,    49,    38,    49,    49,    21,    12,    38,    12,
       5,    45,    23,    15,    63,   104,   135,    49,    49,    46,
      49,    -1,    -1,    -1,    -1,    65
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    40,    51,    52,    49,    53,    58,    74,    76,     0,
      39,    54,     6,    11,    77,    12,    55,    67,    67,     7,
       8,     9,    13,    47,    48,    49,    79,    80,    81,    10,
      75,    53,    49,    56,     3,    59,    49,    79,    91,    37,
      15,    16,    17,    18,    79,    34,    12,    34,    61,    67,
      45,    14,    14,    79,    82,    79,    79,    79,    79,    35,
      55,    35,    49,    60,    49,     5,     7,     8,     9,    78,
      78,    34,    61,    82,    12,    62,    38,    35,     4,    57,
      19,    32,    33,    36,    41,    42,    44,    49,    66,    67,
      68,    70,    71,    72,    73,    74,    76,    79,    83,    84,
      85,    90,    91,    92,    78,    38,    79,    49,    49,    79,
      49,    79,    49,    21,    65,    20,    31,    69,    86,    87,
      66,    12,    62,    63,    64,    78,    79,    45,    12,    13,
      79,    88,    88,    66,    38,     5,    49,    43,    49,    79,
      88,    25,    26,    27,    28,    29,    30,    89,    22,    23,
      38,    38,    66,    63,    49,    14,    79,    88,    88,    66,
      66,    65,    65,    65
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
#line 40 "yacc.y"
    {   (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                                                    append((yyval.node), (yyvsp[(1) - (5)].node));
                                                                                    append((yyval.node), (yyvsp[(2) - (5)].node));
                                                                                    append((yyval.node), (yyvsp[(4) - (5)].node));
                                                                                    append((yyval.node), (yyvsp[(5) - (5)].node));
                                                                                    printHeaders();
                                                                                    printInorder((yyval.node)); }
    break;

  case 3:
#line 49 "yacc.y"
    {   (yyval.node) = (yyvsp[(2) - (2)].node); }
    break;

  case 4:
#line 50 "yacc.y"
    {   (yyval.node) = NULL; }
    break;

  case 5:
#line 53 "yacc.y"
    {   (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                                                        append((yyval.node), (yyvsp[(1) - (3)].node));
                                                                                        append((yyval.node), newNode(TYPE_LITERAL, ";\n"));
                                                                                        append((yyval.node), (yyvsp[(3) - (3)].node)); }
    break;

  case 6:
#line 57 "yacc.y"
    {   (yyval.node) = NULL; }
    break;

  case 7:
#line 60 "yacc.y"
    {   (yyval.node) = (yyvsp[(2) - (2)].node); }
    break;

  case 8:
#line 61 "yacc.y"
    {   (yyval.node) = NULL; }
    break;

  case 9:
#line 64 "yacc.y"
    {   (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                                    append((yyval.node), (yyvsp[(2) - (4)].node));
                                                                    append((yyval.node), newNode(TYPE_LITERAL, ");\n"));
                                                                    append((yyval.node), (yyvsp[(4) - (4)].node)); }
    break;

  case 10:
#line 68 "yacc.y"
    {   (yyval.node) = NULL; }
    break;

  case 11:
#line 71 "yacc.y"
    {   if (addVar((yyvsp[(1) - (6)].value), (yyvsp[(4) - (6)].node)->type) == -1)
                                                                                            yyerror("Se superó el límite de variables\n");
                                                                                        (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                                                        append((yyval.node), (yyvsp[(4) - (6)].node));
                                                                                        append((yyval.node), newNode(TYPE_LITERAL, (yyvsp[(1) - (6)].value)));
                                                                                        append((yyval.node), newNode(TYPE_LITERAL, "("));
                                                                                        append((yyval.node), (yyvsp[(5) - (6)].node)); }
    break;

  case 12:
#line 79 "yacc.y"
    {   closeScope(); }
    break;

  case 13:
#line 82 "yacc.y"
    {   (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 14:
#line 83 "yacc.y"
    {   (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 15:
#line 86 "yacc.y"
    {   (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                                                        append((yyval.node), (yyvsp[(4) - (7)].node));
                                                                                        append((yyval.node), newNode(TYPE_LITERAL, "main() {\n"));
                                                                                        append((yyval.node), (yyvsp[(6) - (7)].node));
                                                                                        append((yyval.node), newNode(TYPE_LITERAL, "}\n")); }
    break;

  case 16:
#line 93 "yacc.y"
    {   (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                                                                    append((yyval.node), (yyvsp[(4) - (8)].node));
                                                                                                    append((yyval.node), newNode(TYPE_LITERAL, (yyvsp[(1) - (8)].value)));
                                                                                                    append((yyval.node), newNode(TYPE_LITERAL, "("));
                                                                                                    append((yyval.node), (yyvsp[(5) - (8)].node));
                                                                                                    append((yyval.node), newNode(TYPE_LITERAL, ") {\n"));
                                                                                                    append((yyval.node), (yyvsp[(7) - (8)].node));
                                                                                                    append((yyval.node), newNode(TYPE_LITERAL, "}\n")); }
    break;

  case 17:
#line 103 "yacc.y"
    {   (yyval.node) = newNode(TYPE_EMPTY, NULL); 
                                                                    append((yyval.node), (yyvsp[(2) - (3)].node));
                                                                    append((yyval.node), (yyvsp[(3) - (3)].node)); }
    break;

  case 18:
#line 106 "yacc.y"
    {   (yyval.node) = NULL; }
    break;

  case 19:
#line 109 "yacc.y"
    {   (yyval.node) = (yyvsp[(4) - (4)].node); }
    break;

  case 20:
#line 110 "yacc.y"
    {   (yyval.node) = NULL; }
    break;

  case 21:
#line 113 "yacc.y"
    {   (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                                    append((yyval.node), (yyvsp[(1) - (3)].node));
                                                                    append((yyval.node), newNode(TYPE_LITERAL, ", "));
                                                                    append((yyval.node), (yyvsp[(3) - (3)].node)); }
    break;

  case 22:
#line 117 "yacc.y"
    {   (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 23:
#line 120 "yacc.y"
    {   if (addVar((yyvsp[(2) - (2)].value), (yyvsp[(1) - (2)].node)->type) == -1)
                                                                        yyerror("Se superó el límite de variables\n");
                                                                    (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                                    append((yyval.node), (yyvsp[(1) - (2)].node));
                                                                    append((yyval.node), newNode(TYPE_LITERAL, (yyvsp[(2) - (2)].value))); }
    break;

  case 24:
#line 127 "yacc.y"
    {   closeScope(); }
    break;

  case 25:
#line 130 "yacc.y"
    {   (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                        append((yyval.node), (yyvsp[(1) - (2)].node));
                                                        append((yyval.node), (yyvsp[(2) - (2)].node)); }
    break;

  case 26:
#line 133 "yacc.y"
    {   (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                        append((yyval.node), (yyvsp[(2) - (3)].node));
                                                        append((yyval.node), (yyvsp[(3) - (3)].node)); }
    break;

  case 27:
#line 136 "yacc.y"
    {   (yyval.node) = NULL; }
    break;

  case 28:
#line 139 "yacc.y"
    {   openScope(); }
    break;

  case 29:
#line 142 "yacc.y"
    {   (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                        append((yyval.node), (yyvsp[(1) - (2)].node));
                                                        append((yyval.node), newNode(TYPE_LITERAL, ";\n")); }
    break;

  case 30:
#line 147 "yacc.y"
    {   (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 31:
#line 148 "yacc.y"
    {   (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 32:
#line 151 "yacc.y"
    {   (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 33:
#line 152 "yacc.y"
    {   (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 34:
#line 153 "yacc.y"
    {   (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 35:
#line 154 "yacc.y"
    {   (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 36:
#line 155 "yacc.y"
    {   (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 37:
#line 156 "yacc.y"
    {   (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 38:
#line 157 "yacc.y"
    {   (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 39:
#line 158 "yacc.y"
    {   (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 40:
#line 159 "yacc.y"
    {   (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 41:
#line 160 "yacc.y"
    {   (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 42:
#line 164 "yacc.y"
    {   (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                        append((yyval.node), newNode(TYPE_LITERAL, "return "));
                                                        append((yyval.node), (yyvsp[(2) - (2)].node)); }
    break;

  case 43:
#line 169 "yacc.y"
    {   (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                        append((yyval.node), newNode(TYPE_LITERAL, (yyvsp[(2) - (2)].value)));
                                                        append((yyval.node), newNode(TYPE_LITERAL, "++")); }
    break;

  case 44:
#line 174 "yacc.y"
    {   (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                        append((yyval.node), newNode(TYPE_LITERAL, (yyvsp[(2) - (2)].value)));
                                                        append((yyval.node), newNode(TYPE_LITERAL, "--")); }
    break;

  case 45:
#line 179 "yacc.y"
    {   if (isInCurrentScope((yyvsp[(1) - (3)].value)) == 1)
                                                            yyerror("Variable ya declarada previamente\n");
                                                        if (addVar((yyvsp[(1) - (3)].value), (yyvsp[(2) - (3)].node)->type) == -1)
                                                            yyerror("Se superó el límite de variables\n");
                                                        if ((yyvsp[(3) - (3)].node) != NULL && (yyvsp[(2) - (3)].node)->type != (yyvsp[(3) - (3)].node)->type) {
                                                            if((yyvsp[(2) - (3)].node)->type != (yyvsp[(3) - (3)].node)->type) yyerror("dif types tambien\n");
                                                            yyerror("Asignación entre tipos incompatibles\n");
                                                        }
                                                        (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                        append((yyval.node), (yyvsp[(2) - (3)].node));
                                                        append((yyval.node), newNode(TYPE_LITERAL, (yyvsp[(1) - (3)].value)));
                                                        append((yyval.node), (yyvsp[(3) - (3)].node)); }
    break;

  case 46:
#line 193 "yacc.y"
    {   (yyval.node) = NULL; }
    break;

  case 47:
#line 194 "yacc.y"
    {   (yyval.node) = newNode((yyvsp[(2) - (2)].node)->type, NULL);
                                                        append((yyval.node), newNode(TYPE_LITERAL, " = "));
                                                        append((yyval.node), (yyvsp[(2) - (2)].node)); }
    break;

  case 48:
#line 199 "yacc.y"
    {   int type = getType((yyvsp[(1) - (3)].value));
                                                        if (type == -1)
                                                            yyerror("Variable o funcion no declarada previamente\n");
                                                        if (type != (yyvsp[(3) - (3)].node)->type)
                                                            yyerror("Asignación entre tipos incompatibles\n");
                                                        (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                        append((yyval.node), newNode(TYPE_LITERAL, (yyvsp[(1) - (3)].value)));
                                                        append((yyval.node), newNode(TYPE_LITERAL, " = "));
                                                        append((yyval.node), (yyvsp[(3) - (3)].node)); }
    break;

  case 49:
#line 210 "yacc.y"
    {   (yyval.node) = newNode(TYPE_STRING, "char * "); }
    break;

  case 50:
#line 211 "yacc.y"
    {   (yyval.node) = newNode(TYPE_INT, "int "); }
    break;

  case 51:
#line 212 "yacc.y"
    {   (yyval.node) = newNode(TYPE_MAP, "MapNode * "); }
    break;

  case 52:
#line 215 "yacc.y"
    {   (yyval.node) = newNode(TYPE_STRING, "char * "); }
    break;

  case 53:
#line 216 "yacc.y"
    {   (yyval.node) = newNode(TYPE_INT, "int "); }
    break;

  case 54:
#line 217 "yacc.y"
    {   (yyval.node) = newNode(TYPE_MAP, "MapNode * "); }
    break;

  case 55:
#line 220 "yacc.y"
    {   (yyval.node) = newNode(TYPE_STRING, (yyvsp[(1) - (1)].value)); }
    break;

  case 56:
#line 221 "yacc.y"
    {   (yyval.node) = newNode(TYPE_INT, (yyvsp[(1) - (1)].value)); }
    break;

  case 57:
#line 222 "yacc.y"
    {   int type = getType((yyvsp[(1) - (1)].value));
                                                        if (type == -1)
                                                            yyerror("Variable o funcion no declarada previamente\n");
                                                        (yyval.node) = newNode(type, NULL);
                                                        append((yyval.node), newNode(TYPE_LITERAL, (yyvsp[(1) - (1)].value))); }
    break;

  case 58:
#line 227 "yacc.y"
    {   if ((yyvsp[(2) - (3)].node)->value != NULL) {
                                                            (yyval.node) = (yyvsp[(2) - (3)].node);
                                                        } else  {
                                                            (yyval.node) = newNode((yyvsp[(2) - (3)].node)->type, NULL); 
                                                            append((yyval.node), newNode(TYPE_LITERAL, "("));
                                                            append((yyval.node), (yyvsp[(2) - (3)].node));
                                                            append((yyval.node), newNode(TYPE_LITERAL, ")")); 
                                                        } }
    break;

  case 59:
#line 235 "yacc.y"
    {   (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 60:
#line 236 "yacc.y"
    {   (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 61:
#line 237 "yacc.y"
    {   if ((yyvsp[(2) - (3)].node)->value != NULL) {
                                                            (yyval.node) = (yyvsp[(2) - (3)].node);
                                                        } else  {
                                                            (yyval.node) = newNode(TYPE_STRING, NULL); 
                                                            append((yyval.node), newNode(TYPE_LITERAL, "("));
                                                            append((yyval.node), (yyvsp[(2) - (3)].node));
                                                            append((yyval.node), newNode(TYPE_LITERAL, ")")); 
                                                        } }
    break;

  case 62:
#line 247 "yacc.y"
    {   (yyval.node) = addExpressions((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); }
    break;

  case 63:
#line 248 "yacc.y"
    {   (yyval.node) = subtractExpressions((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); }
    break;

  case 64:
#line 249 "yacc.y"
    {   (yyval.node) = multiplyExpressions((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); }
    break;

  case 65:
#line 250 "yacc.y"
    {   (yyval.node) = divideExpressions((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); }
    break;

  case 66:
#line 253 "yacc.y"
    {   int type = getType((yyvsp[(1) - (3)].value));
                                                        if (type == -1)
                                                            yyerror("Funcion no declarada previamente\n");
                                                        (yyval.node) = newNode(type, NULL);
                                                        append((yyval.node), newNode(TYPE_LITERAL, (yyvsp[(1) - (3)].value)));
                                                        append((yyval.node), newNode(TYPE_LITERAL, "("));
                                                        append((yyval.node), (yyvsp[(3) - (3)].node));
                                                        append((yyval.node), newNode(TYPE_LITERAL, ")"));
                                                    }
    break;

  case 67:
#line 263 "yacc.y"
    {   (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                        append((yyval.node), (yyvsp[(1) - (3)].node));
                                                        append((yyval.node), newNode(TYPE_LITERAL, ", "));
                                                        append((yyval.node), (yyvsp[(3) - (3)].node)); }
    break;

  case 68:
#line 267 "yacc.y"
    {   (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 69:
#line 270 "yacc.y"
    {   (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 70:
#line 271 "yacc.y"
    {   (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 71:
#line 274 "yacc.y"
    {   (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                        if ((yyvsp[(2) - (2)].node)->type == TYPE_STRING)
                                                            append((yyval.node), newNode(TYPE_LITERAL, "printf(\"%s\", "));
                                                        if ((yyvsp[(2) - (2)].node)->type == TYPE_INT)
                                                            append((yyval.node), newNode(TYPE_LITERAL, "printf(\"%d\", "));
                                                        append((yyval.node), (yyvsp[(2) - (2)].node)); 
                                                        append((yyval.node), newNode(TYPE_LITERAL, ")")); }
    break;

  case 72:
#line 283 "yacc.y"
    {   int type = getType((yyvsp[(2) - (2)].value));
                                                        if (type == -1)
                                                            yyerror("Variable no declarada previamente\n");
                                                        if (type != TYPE_STRING)
                                                            yyerror("Asignación entre tipos incompatibles\n");
    
                                                        (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                        append((yyval.node), newNode(TYPE_LITERAL, (yyvsp[(2) - (2)].value)));
                                                        append((yyval.node), newNode(TYPE_LITERAL, " = _getchar_to_var()"));
    }
    break;

  case 73:
#line 294 "yacc.y"
    {   (yyval.node) = newNode(TYPE_EMPTY, NULL); 
                                                                        append((yyval.node), newNode(TYPE_LITERAL, "if(")); 
                                                                        append((yyval.node), (yyvsp[(2) - (5)].node)); 
                                                                        append((yyval.node), newNode(TYPE_LITERAL, ")"));
                                                                        append((yyval.node), newNode(TYPE_LITERAL, "{\n"));
                                                                        append((yyval.node), (yyvsp[(4) - (5)].node)); 
                                                                        append((yyval.node), newNode(TYPE_LITERAL, "}\n")); }
    break;

  case 74:
#line 303 "yacc.y"
    {   (yyval.node) = newNode(TYPE_EMPTY, NULL); 
                                                                        append((yyval.node), newNode(TYPE_LITERAL, "while(")); 
                                                                        append((yyval.node), (yyvsp[(2) - (5)].node)); 
                                                                        append((yyval.node), newNode(TYPE_LITERAL, ")"));
                                                                        append((yyval.node), newNode(TYPE_LITERAL, "{\n"));
                                                                        append((yyval.node), (yyvsp[(4) - (5)].node)); 
                                                                        append((yyval.node), newNode(TYPE_LITERAL, "}\n")); }
    break;

  case 75:
#line 312 "yacc.y"
    {   (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                                        if ((yyvsp[(1) - (3)].node)->type == TYPE_STRING && (yyvsp[(3) - (3)].node)->type == TYPE_STRING) {
                                                                            append((yyval.node), newNode(TYPE_LITERAL, "strcmp("));
                                                                            append((yyval.node), (yyvsp[(1) - (3)].node));
                                                                            append((yyval.node), newNode(TYPE_LITERAL, ", "));
                                                                            append((yyval.node), (yyvsp[(3) - (3)].node));
                                                                            append((yyval.node), newNode(TYPE_LITERAL, ")"));
                                                                            append((yyval.node), (yyvsp[(2) - (3)].node));
                                                                            append((yyval.node), newNode(TYPE_LITERAL, "0"));
                                                                        } else if ((yyvsp[(1) - (3)].node)->type == TYPE_INT && (yyvsp[(3) - (3)].node)->type == TYPE_INT) {
                                                                            append((yyval.node), (yyvsp[(1) - (3)].node)); 
                                                                            append((yyval.node), (yyvsp[(2) - (3)].node)); 
                                                                            append((yyval.node), (yyvsp[(3) - (3)].node));
                                                                        } else {
                                                                            yyerror("Comparación entre tipos incompatibles");
                                                                        } }
    break;

  case 76:
#line 328 "yacc.y"
    {   (yyval.node) = newNode(TYPE_EMPTY, NULL); 
                                                                        append((yyval.node), (yyvsp[(1) - (3)].node)); 
                                                                        append((yyval.node), newNode(TYPE_LITERAL, " && "));
                                                                        append((yyval.node), (yyvsp[(3) - (3)].node));                           }
    break;

  case 77:
#line 332 "yacc.y"
    {   (yyval.node) = newNode(TYPE_EMPTY, NULL); 
                                                                        append((yyval.node), (yyvsp[(1) - (3)].node)); 
                                                                        append((yyval.node), newNode(TYPE_LITERAL, " || "));
                                                                        append((yyval.node), (yyvsp[(3) - (3)].node));                           }
    break;

  case 78:
#line 336 "yacc.y"
    {   (yyval.node) = newNode(TYPE_EMPTY, NULL); 
                                                                        append((yyval.node), newNode(TYPE_LITERAL, "(")); 
                                                                        append((yyval.node), (yyvsp[(2) - (3)].node)); 
                                                                        append((yyval.node), newNode(TYPE_LITERAL, ")"));   }
    break;

  case 79:
#line 340 "yacc.y"
    {   (yyval.node) = (yyvsp[(1) - (1)].node);                                  }
    break;

  case 80:
#line 343 "yacc.y"
    {   (yyval.node) = newNode(TYPE_LITERAL, " == "); }
    break;

  case 81:
#line 344 "yacc.y"
    {   (yyval.node) = newNode(TYPE_LITERAL, " > "); }
    break;

  case 82:
#line 345 "yacc.y"
    {   (yyval.node) = newNode(TYPE_LITERAL, " >= "); }
    break;

  case 83:
#line 346 "yacc.y"
    {   (yyval.node) = newNode(TYPE_LITERAL, " < "); }
    break;

  case 84:
#line 347 "yacc.y"
    {   (yyval.node) = newNode(TYPE_LITERAL, " <= "); }
    break;

  case 85:
#line 348 "yacc.y"
    {   (yyval.node) = newNode(TYPE_LITERAL, " != "); }
    break;

  case 86:
#line 351 "yacc.y"
    {   int type = getType((yyvsp[(5) - (5)].value));
                                                                    if (type == -1)
                                                                        yyerror("Variable no declarada previamente\n");
                                                                    if (type != TYPE_MAP)
                                                                        yyerror("Asignación entre tipos incompatibles\n");

                                                                    (yyval.node) = newNode(TYPE_EMPTY, NULL); 
                                                                    append((yyval.node), newNode(TYPE_LITERAL, "addKeyValue(")); 
                                                                    append((yyval.node), newNode(TYPE_LITERAL, (yyvsp[(5) - (5)].value))); 
                                                                    append((yyval.node), newNode(TYPE_LITERAL, ","));
                                                                    append((yyval.node), (yyvsp[(2) - (5)].node));
                                                                    append((yyval.node), newNode(TYPE_LITERAL, ","));
                                                                    append((yyval.node), (yyvsp[(3) - (5)].node));
                                                                    append((yyval.node), newNode(TYPE_LITERAL, ")")); }
    break;

  case 87:
#line 366 "yacc.y"
    {   int type = getType((yyvsp[(3) - (3)].value));
                                                                    if (type == -1)
                                                                        yyerror("Variable no declarada previamente\n");
                                                                    if (type != TYPE_MAP) {
                                                                        yyerror("Asignación entre tipos incompatibles\n");
                                                                    }

                                                                    (yyval.node) = newNode(TYPE_EMPTY, NULL); 
                                                                    append((yyval.node), newNode(TYPE_LITERAL, "getValue(")); 
                                                                    append((yyval.node), newNode(TYPE_LITERAL, (yyvsp[(3) - (3)].value))); 
                                                                    append((yyval.node), newNode(TYPE_LITERAL, ","));
                                                                    append((yyval.node), newNode(TYPE_LITERAL, (yyvsp[(1) - (3)].value)));
                                                                    append((yyval.node), newNode(TYPE_LITERAL, ")")); }
    break;

  case 88:
#line 380 "yacc.y"
    {}
    break;


/* Line 1267 of yacc.c.  */
#line 2191 "y.tab.c"
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


#line 382 "yacc.y"


void yyerror(char * s){
    fprintf(stderr, "Error en la linea %d: %s\n", lineCount, s);
    
    freeResources();

    if(remove(TMP_FILE_NAME)) {
        printf ("Error al eliminar el archivo de código intermedio.\n");
        exit(1);
    }

	exit(1);
}

void printHeaders() {
    fprintf(tmpFile, "#include <stdio.h>\n");
    fprintf(tmpFile, "#include <stdlib.h>\n");
    fprintf(tmpFile, "#include <string.h>\n");

    fprintf(tmpFile, "%s" , strCatFunction);
    fprintf(tmpFile, "%s" , strIntCatFunction);
    fprintf(tmpFile, "%s" , strIntMultFunction);
    fprintf(tmpFile, "%s" , getCharToVar);
    fprintf(tmpFile, "%s" , mapStructure);
    fprintf(tmpFile, "%s" , searchMapNode);
    fprintf(tmpFile, "%s" , newMapNode);
    fprintf(tmpFile, "%s" , getMapNode);
    fprintf(tmpFile, "%s" , addMapNode);
}
