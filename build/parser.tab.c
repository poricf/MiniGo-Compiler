/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "src/parser.y"

#include <stdio.h>
#include <stdlib.h>
#include "error.h"
#include "ast.h"

/* External lexer function */
extern int yylex(void);
extern FILE *yyin;
extern char *yytext;

/* Error reporting */
void yyerror(const char *s);
int yyparse(void);

#line 87 "build/parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_PACKAGE = 3,                    /* PACKAGE  */
  YYSYMBOL_IMPORT = 4,                     /* IMPORT  */
  YYSYMBOL_FUNC = 5,                       /* FUNC  */
  YYSYMBOL_VAR = 6,                        /* VAR  */
  YYSYMBOL_CONST = 7,                      /* CONST  */
  YYSYMBOL_IF = 8,                         /* IF  */
  YYSYMBOL_ELSE = 9,                       /* ELSE  */
  YYSYMBOL_FOR = 10,                       /* FOR  */
  YYSYMBOL_RETURN = 11,                    /* RETURN  */
  YYSYMBOL_BREAK = 12,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 13,                  /* CONTINUE  */
  YYSYMBOL_TRUE = 14,                      /* TRUE  */
  YYSYMBOL_FALSE = 15,                     /* FALSE  */
  YYSYMBOL_INT = 16,                       /* INT  */
  YYSYMBOL_FLOAT64 = 17,                   /* FLOAT64  */
  YYSYMBOL_STRING = 18,                    /* STRING  */
  YYSYMBOL_BOOL = 19,                      /* BOOL  */
  YYSYMBOL_PLUS = 20,                      /* PLUS  */
  YYSYMBOL_MINUS = 21,                     /* MINUS  */
  YYSYMBOL_MULT = 22,                      /* MULT  */
  YYSYMBOL_DIV = 23,                       /* DIV  */
  YYSYMBOL_MOD = 24,                       /* MOD  */
  YYSYMBOL_EQ = 25,                        /* EQ  */
  YYSYMBOL_NE = 26,                        /* NE  */
  YYSYMBOL_LT = 27,                        /* LT  */
  YYSYMBOL_LE = 28,                        /* LE  */
  YYSYMBOL_GT = 29,                        /* GT  */
  YYSYMBOL_GE = 30,                        /* GE  */
  YYSYMBOL_AND = 31,                       /* AND  */
  YYSYMBOL_OR = 32,                        /* OR  */
  YYSYMBOL_NOT = 33,                       /* NOT  */
  YYSYMBOL_ASSIGN = 34,                    /* ASSIGN  */
  YYSYMBOL_PLUS_ASSIGN = 35,               /* PLUS_ASSIGN  */
  YYSYMBOL_MINUS_ASSIGN = 36,              /* MINUS_ASSIGN  */
  YYSYMBOL_MULT_ASSIGN = 37,               /* MULT_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 38,                /* DIV_ASSIGN  */
  YYSYMBOL_LPAREN = 39,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 40,                    /* RPAREN  */
  YYSYMBOL_LBRACE = 41,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 42,                    /* RBRACE  */
  YYSYMBOL_LBRACKET = 43,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 44,                  /* RBRACKET  */
  YYSYMBOL_COMMA = 45,                     /* COMMA  */
  YYSYMBOL_SEMICOLON = 46,                 /* SEMICOLON  */
  YYSYMBOL_COLON = 47,                     /* COLON  */
  YYSYMBOL_DOT = 48,                       /* DOT  */
  YYSYMBOL_INTEGER_LIT = 49,               /* INTEGER_LIT  */
  YYSYMBOL_FLOAT_LIT = 50,                 /* FLOAT_LIT  */
  YYSYMBOL_STRING_LIT = 51,                /* STRING_LIT  */
  YYSYMBOL_IDENTIFIER = 52,                /* IDENTIFIER  */
  YYSYMBOL_CHAR_LIT = 53,                  /* CHAR_LIT  */
  YYSYMBOL_ERROR_TOKEN = 54,               /* ERROR_TOKEN  */
  YYSYMBOL_UMINUS = 55,                    /* UMINUS  */
  YYSYMBOL_YYACCEPT = 56,                  /* $accept  */
  YYSYMBOL_program = 57,                   /* program  */
  YYSYMBOL_package_decl = 58,              /* package_decl  */
  YYSYMBOL_import_list = 59,               /* import_list  */
  YYSYMBOL_import_decl = 60,               /* import_decl  */
  YYSYMBOL_import_spec_list = 61,          /* import_spec_list  */
  YYSYMBOL_import_spec = 62,               /* import_spec  */
  YYSYMBOL_top_level_decl_list = 63,       /* top_level_decl_list  */
  YYSYMBOL_top_level_decl = 64,            /* top_level_decl  */
  YYSYMBOL_function_decl = 65,             /* function_decl  */
  YYSYMBOL_param_list = 66,                /* param_list  */
  YYSYMBOL_param = 67,                     /* param  */
  YYSYMBOL_return_type = 68,               /* return_type  */
  YYSYMBOL_type = 69,                      /* type  */
  YYSYMBOL_var_decl = 70,                  /* var_decl  */
  YYSYMBOL_var_spec_list = 71,             /* var_spec_list  */
  YYSYMBOL_var_spec = 72,                  /* var_spec  */
  YYSYMBOL_const_decl = 73,                /* const_decl  */
  YYSYMBOL_const_spec_list = 74,           /* const_spec_list  */
  YYSYMBOL_const_spec = 75,                /* const_spec  */
  YYSYMBOL_block = 76,                     /* block  */
  YYSYMBOL_stmt_list = 77,                 /* stmt_list  */
  YYSYMBOL_stmt = 78,                      /* stmt  */
  YYSYMBOL_if_stmt = 79,                   /* if_stmt  */
  YYSYMBOL_for_stmt = 80,                  /* for_stmt  */
  YYSYMBOL_for_init = 81,                  /* for_init  */
  YYSYMBOL_for_post = 82,                  /* for_post  */
  YYSYMBOL_return_stmt = 83,               /* return_stmt  */
  YYSYMBOL_break_stmt = 84,                /* break_stmt  */
  YYSYMBOL_continue_stmt = 85,             /* continue_stmt  */
  YYSYMBOL_expression = 86,                /* expression  */
  YYSYMBOL_primary_expr = 87,              /* primary_expr  */
  YYSYMBOL_argument_list = 88,             /* argument_list  */
  YYSYMBOL_unary_expr = 89,                /* unary_expr  */
  YYSYMBOL_binary_expr = 90,               /* binary_expr  */
  YYSYMBOL_assignment_expr = 91,           /* assignment_expr  */
  YYSYMBOL_literal = 92                    /* literal  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
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
#define YYLAST   387

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  103
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  180

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   310


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      55
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    60,    60,    67,    75,    76,    80,    81,    85,    86,
      90,    95,   104,   105,   109,   110,   111,   116,   121,   129,
     130,   134,   139,   148,   149,   153,   154,   155,   156,   157,
     165,   166,   170,   171,   175,   180,   185,   193,   194,   198,
     199,   203,   208,   217,   221,   222,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   238,   239,   243,   244,   245,
     249,   250,   254,   258,   259,   263,   267,   272,   273,   274,
     275,   279,   280,   284,   289,   294,   298,   299,   303,   304,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   324,   328,   332,   336,   340,   347,   348,
     349,   353,   354,   355
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "PACKAGE", "IMPORT",
  "FUNC", "VAR", "CONST", "IF", "ELSE", "FOR", "RETURN", "BREAK",
  "CONTINUE", "TRUE", "FALSE", "INT", "FLOAT64", "STRING", "BOOL", "PLUS",
  "MINUS", "MULT", "DIV", "MOD", "EQ", "NE", "LT", "LE", "GT", "GE", "AND",
  "OR", "NOT", "ASSIGN", "PLUS_ASSIGN", "MINUS_ASSIGN", "MULT_ASSIGN",
  "DIV_ASSIGN", "LPAREN", "RPAREN", "LBRACE", "RBRACE", "LBRACKET",
  "RBRACKET", "COMMA", "SEMICOLON", "COLON", "DOT", "INTEGER_LIT",
  "FLOAT_LIT", "STRING_LIT", "IDENTIFIER", "CHAR_LIT", "ERROR_TOKEN",
  "UMINUS", "$accept", "program", "package_decl", "import_list",
  "import_decl", "import_spec_list", "import_spec", "top_level_decl_list",
  "top_level_decl", "function_decl", "param_list", "param", "return_type",
  "type", "var_decl", "var_spec_list", "var_spec", "const_decl",
  "const_spec_list", "const_spec", "block", "stmt_list", "stmt", "if_stmt",
  "for_stmt", "for_init", "for_post", "return_stmt", "break_stmt",
  "continue_stmt", "expression", "primary_expr", "argument_list",
  "unary_expr", "binary_expr", "assignment_expr", "literal", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-75)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       9,   -31,    31,   -75,    -7,   -75,    41,   -75,   -28,   -75,
     142,   -48,   -75,    -5,    21,    16,   -25,   -24,   -75,   -75,
     -75,   -75,   -18,   -75,   -75,   -75,    35,    29,    -9,    38,
      53,    74,    63,    79,   -75,   -11,   -10,   -75,   -75,   -75,
     -75,   -75,   214,   -75,    95,   -75,    30,   -75,   214,    97,
     -75,   -75,    78,    94,    43,   -75,    93,   -75,   -75,   -75,
     214,   214,   214,   -75,   -75,   -75,    85,   -75,   344,   -75,
     -75,   -75,   -75,   -75,   214,   104,   -75,   344,   214,    46,
     -75,    78,   -75,    78,    81,   -75,   -75,   -75,   323,   214,
     214,   214,   214,   214,   172,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   344,   -75,
     344,   -75,   -75,   -75,    46,   -75,   -75,   344,   344,   344,
     344,   344,   -75,   344,    87,   173,   173,   -75,   -75,   -75,
     132,   132,   153,   153,   153,   153,   357,   275,    65,   -75,
     -75,   214,   214,   151,   193,   112,   118,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   248,   344,   301,
     -75,   -75,   121,   301,   -75,   261,   -75,   -75,   -75,   159,
     214,   -75,   -75,   130,   288,   -75,   214,    46,   344,   -75
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     4,     0,     1,    12,     3,     0,     5,
       2,     0,    10,     0,     0,     0,     0,     0,    13,    14,
      15,    16,     0,     8,    11,     6,     0,     0,     0,     0,
       0,     0,     0,     0,     9,     0,     0,    32,    25,    26,
      27,    28,     0,    29,    34,    30,     0,    39,     0,     0,
      37,     7,    23,     0,     0,    19,     0,    33,   102,   103,
       0,     0,     0,    98,    99,   100,    72,   101,    36,    67,
      68,    69,    70,    71,     0,     0,    40,    41,     0,     0,
      24,    29,    21,    23,     0,    31,    79,    78,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    35,    38,
      42,    44,    18,    22,     0,    20,    75,    93,    94,    95,
      96,    97,    74,    76,     0,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,     0,    17,
      73,     0,     0,     0,     0,     0,     0,    43,    47,    48,
      54,    45,    49,    50,    51,    52,    53,     0,    77,     0,
      60,    59,     0,    61,    63,     0,    65,    66,    46,    55,
       0,    57,    64,     0,     0,    56,     0,     0,    62,    58
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -75,   -75,   -75,   -75,   -75,   -75,    15,   -75,   -75,   -75,
     -75,    86,   102,   -15,    -8,   -75,     8,   168,   -75,   -29,
     -74,   -75,    18,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -42,   -75,   -75,   -75,   -75,   -75,   -75
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     6,     9,    22,    14,    10,    18,    19,
      54,    55,    79,    80,   148,    36,    29,   149,    46,    32,
     150,   138,   151,   152,   153,   162,   177,   154,   155,   156,
     157,    69,   124,    70,    71,    72,    73
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      68,    47,    20,    12,    13,   112,    77,    38,    39,    40,
      41,    11,     1,    44,    27,    30,    49,    76,    86,    87,
      88,     4,    33,    12,    13,    42,    23,    28,    31,    52,
      56,     5,   108,    12,    13,    37,   110,    34,    82,     7,
     139,    53,    28,    43,    57,     8,    24,   117,   118,   119,
     120,   121,   123,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   113,    25,    26,   161,
      75,    16,    17,   142,    35,   143,   144,   145,   146,    58,
      59,    28,    31,    83,    45,   169,    60,   111,    84,   171,
      38,    39,    40,    41,    38,    39,    40,    41,    61,   158,
     159,   163,   165,   179,    62,    31,   111,   147,    48,    50,
      38,    39,    40,    41,    63,    64,    65,    66,    67,    89,
      90,    91,    92,    93,    94,    51,    43,   140,   174,    74,
      43,    78,   141,    53,   178,   160,    16,    17,   142,    85,
     143,   144,   145,   146,    58,    59,    81,    15,    16,    17,
     109,    60,    95,    96,    97,    98,    99,    16,   166,   102,
     103,   104,   105,    61,   167,    58,    59,   170,   173,    62,
     115,   111,    60,    95,    96,    97,    98,    99,    21,    63,
      64,    65,    66,    67,    61,   114,    58,    59,     0,     0,
      62,   175,   111,    60,     0,    97,    98,    99,     0,     0,
      63,    64,    65,    66,    67,    61,     0,    58,    59,     0,
       0,    62,   122,     0,    60,     0,     0,     0,     0,     0,
       0,    63,    64,    65,    66,    67,    61,     0,    58,    59,
       0,     0,    62,     0,     0,    60,     0,     0,     0,   164,
       0,     0,    63,    64,    65,    66,    67,    61,     0,     0,
       0,     0,     0,    62,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   168,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   172,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   176,     0,     0,     0,     0,     0,
       0,     0,   111,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,     0,     0,     0,     0,
       0,     0,     0,   116,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105
};

static const yytype_int16 yycheck[] =
{
      42,    30,    10,    51,    52,    79,    48,    16,    17,    18,
      19,    39,     3,    28,    39,    39,    31,    46,    60,    61,
      62,    52,    40,    51,    52,    34,    11,    52,    52,    40,
      40,     0,    74,    51,    52,    27,    78,    22,    53,    46,
     114,    52,    52,    52,    36,     4,    51,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,    81,    46,    52,   143,
      40,     6,     7,     8,    39,    10,    11,    12,    13,    14,
      15,    52,    52,    40,    46,   159,    21,    41,    45,   163,
      16,    17,    18,    19,    16,    17,    18,    19,    33,   141,
     142,   143,   144,   177,    39,    52,    41,    42,    34,    46,
      16,    17,    18,    19,    49,    50,    51,    52,    53,    34,
      35,    36,    37,    38,    39,    46,    52,    40,   170,    34,
      52,    34,    45,    52,   176,   143,     6,     7,     8,    46,
      10,    11,    12,    13,    14,    15,    52,     5,     6,     7,
      46,    21,    20,    21,    22,    23,    24,     6,    46,    27,
      28,    29,    30,    33,    46,    14,    15,    46,     9,    39,
      84,    41,    21,    20,    21,    22,    23,    24,    10,    49,
      50,    51,    52,    53,    33,    83,    14,    15,    -1,    -1,
      39,   173,    41,    21,    -1,    22,    23,    24,    -1,    -1,
      49,    50,    51,    52,    53,    33,    -1,    14,    15,    -1,
      -1,    39,    40,    -1,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    51,    52,    53,    33,    -1,    14,    15,
      -1,    -1,    39,    -1,    -1,    21,    -1,    -1,    -1,    46,
      -1,    -1,    49,    50,    51,    52,    53,    33,    -1,    -1,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    51,    52,    53,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    46,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    46,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    57,    58,    52,     0,    59,    46,     4,    60,
      63,    39,    51,    52,    62,     5,     6,     7,    64,    65,
      70,    73,    61,    62,    51,    46,    52,    39,    52,    72,
      39,    52,    75,    40,    62,    39,    71,    72,    16,    17,
      18,    19,    34,    52,    69,    46,    74,    75,    34,    69,
      46,    46,    40,    52,    66,    67,    40,    72,    14,    15,
      21,    33,    39,    49,    50,    51,    52,    53,    86,    87,
      89,    90,    91,    92,    34,    40,    75,    86,    34,    68,
      69,    52,    69,    40,    45,    46,    86,    86,    86,    34,
      35,    36,    37,    38,    39,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    86,    46,
      86,    41,    76,    69,    68,    67,    40,    86,    86,    86,
      86,    86,    40,    86,    88,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    77,    76,
      40,    45,     8,    10,    11,    12,    13,    42,    70,    73,
      76,    78,    79,    80,    83,    84,    85,    86,    86,    86,
      70,    76,    81,    86,    46,    86,    46,    46,    46,    76,
      46,    76,    46,     9,    86,    78,    46,    82,    86,    76
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    56,    57,    58,    59,    59,    60,    60,    61,    61,
      62,    62,    63,    63,    64,    64,    64,    65,    65,    66,
      66,    67,    67,    68,    68,    69,    69,    69,    69,    69,
      70,    70,    71,    71,    72,    72,    72,    73,    73,    74,
      74,    75,    75,    76,    77,    77,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    79,    79,    80,    80,    80,
      81,    81,    82,    83,    83,    84,    85,    86,    86,    86,
      86,    87,    87,    87,    87,    87,    88,    88,    89,    89,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    91,    91,    91,    91,    91,    92,    92,
      92,    92,    92,    92
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     3,     0,     2,     3,     5,     1,     2,
       1,     2,     0,     2,     1,     1,     1,     7,     6,     1,
       3,     2,     3,     0,     1,     1,     1,     1,     1,     1,
       3,     5,     1,     2,     2,     4,     3,     3,     5,     1,
       2,     3,     4,     3,     0,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     5,     3,     7,     2,
       1,     1,     1,     2,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     4,     3,     3,     1,     3,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* program: package_decl import_list top_level_decl_list  */
#line 61 "src/parser.y"
    {
        printf("\n✓ Parse successful: Valid Mini-Go program\n");
    }
#line 1337 "build/parser.tab.c"
    break;

  case 3: /* package_decl: PACKAGE IDENTIFIER SEMICOLON  */
#line 68 "src/parser.y"
    {
        printf("Package: %s\n", (yyvsp[-1].string_val));
        free((yyvsp[-1].string_val));
    }
#line 1346 "build/parser.tab.c"
    break;

  case 10: /* import_spec: STRING_LIT  */
#line 91 "src/parser.y"
    {
        printf("Import: %s\n", (yyvsp[0].string_val));
        free((yyvsp[0].string_val));
    }
#line 1355 "build/parser.tab.c"
    break;

  case 11: /* import_spec: IDENTIFIER STRING_LIT  */
#line 96 "src/parser.y"
    {
        printf("Import %s: %s\n", (yyvsp[-1].string_val), (yyvsp[0].string_val));
        free((yyvsp[-1].string_val));
        free((yyvsp[0].string_val));
    }
#line 1365 "build/parser.tab.c"
    break;

  case 17: /* function_decl: FUNC IDENTIFIER LPAREN param_list RPAREN return_type block  */
#line 117 "src/parser.y"
    {
        printf("Function: %s\n", (yyvsp[-5].string_val));
        free((yyvsp[-5].string_val));
    }
#line 1374 "build/parser.tab.c"
    break;

  case 18: /* function_decl: FUNC IDENTIFIER LPAREN RPAREN return_type block  */
#line 122 "src/parser.y"
    {
        printf("Function: %s\n", (yyvsp[-4].string_val));
        free((yyvsp[-4].string_val));
    }
#line 1383 "build/parser.tab.c"
    break;

  case 21: /* param: IDENTIFIER type  */
#line 135 "src/parser.y"
    {
        printf("Parameter: %s\n", (yyvsp[-1].string_val));
        free((yyvsp[-1].string_val));
    }
#line 1392 "build/parser.tab.c"
    break;

  case 22: /* param: IDENTIFIER IDENTIFIER type  */
#line 140 "src/parser.y"
    {
        printf("Parameter: %s %s\n", (yyvsp[-2].string_val), (yyvsp[-1].string_val));
        free((yyvsp[-2].string_val));
        free((yyvsp[-1].string_val));
    }
#line 1402 "build/parser.tab.c"
    break;

  case 29: /* type: IDENTIFIER  */
#line 158 "src/parser.y"
    {
        free((yyvsp[0].string_val));
    }
#line 1410 "build/parser.tab.c"
    break;

  case 34: /* var_spec: IDENTIFIER type  */
#line 176 "src/parser.y"
    {
        printf("Variable: %s\n", (yyvsp[-1].string_val));
        free((yyvsp[-1].string_val));
    }
#line 1419 "build/parser.tab.c"
    break;

  case 35: /* var_spec: IDENTIFIER type ASSIGN expression  */
#line 181 "src/parser.y"
    {
        printf("Variable: %s (with initializer)\n", (yyvsp[-3].string_val));
        free((yyvsp[-3].string_val));
    }
#line 1428 "build/parser.tab.c"
    break;

  case 36: /* var_spec: IDENTIFIER ASSIGN expression  */
#line 186 "src/parser.y"
    {
        printf("Variable: %s (type inferred)\n", (yyvsp[-2].string_val));
        free((yyvsp[-2].string_val));
    }
#line 1437 "build/parser.tab.c"
    break;

  case 41: /* const_spec: IDENTIFIER ASSIGN expression  */
#line 204 "src/parser.y"
    {
        printf("Constant: %s\n", (yyvsp[-2].string_val));
        free((yyvsp[-2].string_val));
    }
#line 1446 "build/parser.tab.c"
    break;

  case 42: /* const_spec: IDENTIFIER type ASSIGN expression  */
#line 209 "src/parser.y"
    {
        printf("Constant: %s\n", (yyvsp[-3].string_val));
        free((yyvsp[-3].string_val));
    }
#line 1455 "build/parser.tab.c"
    break;

  case 72: /* primary_expr: IDENTIFIER  */
#line 281 "src/parser.y"
    {
        free((yyvsp[0].string_val));
    }
#line 1463 "build/parser.tab.c"
    break;

  case 73: /* primary_expr: IDENTIFIER LPAREN argument_list RPAREN  */
#line 285 "src/parser.y"
    {
        printf("Function call: %s\n", (yyvsp[-3].string_val));
        free((yyvsp[-3].string_val));
    }
#line 1472 "build/parser.tab.c"
    break;

  case 74: /* primary_expr: IDENTIFIER LPAREN RPAREN  */
#line 290 "src/parser.y"
    {
        printf("Function call: %s\n", (yyvsp[-2].string_val));
        free((yyvsp[-2].string_val));
    }
#line 1481 "build/parser.tab.c"
    break;

  case 93: /* assignment_expr: IDENTIFIER ASSIGN expression  */
#line 325 "src/parser.y"
    {
        free((yyvsp[-2].string_val));
    }
#line 1489 "build/parser.tab.c"
    break;

  case 94: /* assignment_expr: IDENTIFIER PLUS_ASSIGN expression  */
#line 329 "src/parser.y"
    {
        free((yyvsp[-2].string_val));
    }
#line 1497 "build/parser.tab.c"
    break;

  case 95: /* assignment_expr: IDENTIFIER MINUS_ASSIGN expression  */
#line 333 "src/parser.y"
    {
        free((yyvsp[-2].string_val));
    }
#line 1505 "build/parser.tab.c"
    break;

  case 96: /* assignment_expr: IDENTIFIER MULT_ASSIGN expression  */
#line 337 "src/parser.y"
    {
        free((yyvsp[-2].string_val));
    }
#line 1513 "build/parser.tab.c"
    break;

  case 97: /* assignment_expr: IDENTIFIER DIV_ASSIGN expression  */
#line 341 "src/parser.y"
    {
        free((yyvsp[-2].string_val));
    }
#line 1521 "build/parser.tab.c"
    break;

  case 100: /* literal: STRING_LIT  */
#line 350 "src/parser.y"
    {
        free((yyvsp[0].string_val));
    }
#line 1529 "build/parser.tab.c"
    break;


#line 1533 "build/parser.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 358 "src/parser.y"


void yyerror(const char *s) {
    syntax_error(s);
}

