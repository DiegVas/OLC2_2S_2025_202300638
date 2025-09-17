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
#line 2 "src/parser/parser.y"

#include <stdio.h>
#include <string.h>
#include "../structures/parser.h"

int yylex();
int yyerror(const char *s);

	extern InstruccionList *list_tokens;
    extern ErrorList *list_errors;


#line 84 "build/parser.tab.c"

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
  YYSYMBOL_STR = 3,                        /* STR  */
  YYSYMBOL_CHR = 4,                        /* CHR  */
  YYSYMBOL_BOOLEAN = 5,                    /* BOOLEAN  */
  YYSYMBOL_ID = 6,                         /* ID  */
  YYSYMBOL_OTHER = 7,                      /* OTHER  */
  YYSYMBOL_NUM = 8,                        /* NUM  */
  YYSYMBOL_DEC = 9,                        /* DEC  */
  YYSYMBOL_DECF = 10,                      /* DECF  */
  YYSYMBOL_BREAK_LINE = 11,                /* BREAK_LINE  */
  YYSYMBOL_INT = 12,                       /* INT  */
  YYSYMBOL_STRING = 13,                    /* STRING  */
  YYSYMBOL_CHAR = 14,                      /* CHAR  */
  YYSYMBOL_FLOAT = 15,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 16,                    /* DOUBLE  */
  YYSYMBOL_BOOL = 17,                      /* BOOL  */
  YYSYMBOL_FINAL = 18,                     /* FINAL  */
  YYSYMBOL_PRINTLN = 19,                   /* PRINTLN  */
  YYSYMBOL_IF = 20,                        /* IF  */
  YYSYMBOL_ELSE = 21,                      /* ELSE  */
  YYSYMBOL_SWITCH = 22,                    /* SWITCH  */
  YYSYMBOL_CASE = 23,                      /* CASE  */
  YYSYMBOL_BREAK = 24,                     /* BREAK  */
  YYSYMBOL_DEFAULT = 25,                   /* DEFAULT  */
  YYSYMBOL_CONTINUE = 26,                  /* CONTINUE  */
  YYSYMBOL_WHILE = 27,                     /* WHILE  */
  YYSYMBOL_FOR = 28,                       /* FOR  */
  YYSYMBOL_EQUALS_OP = 29,                 /* EQUALS_OP  */
  YYSYMBOL_NEW = 30,                       /* NEW  */
  YYSYMBOL_INTEGER_OBJ = 31,               /* INTEGER_OBJ  */
  YYSYMBOL_PARSEINT = 32,                  /* PARSEINT  */
  YYSYMBOL_DOUBLE_OBJ = 33,                /* DOUBLE_OBJ  */
  YYSYMBOL_PARSEDOUBLE = 34,               /* PARSEDOUBLE  */
  YYSYMBOL_FLOAT_OBJ = 35,                 /* FLOAT_OBJ  */
  YYSYMBOL_PARSEFLOAT = 36,                /* PARSEFLOAT  */
  YYSYMBOL_VALUEOF = 37,                   /* VALUEOF  */
  YYSYMBOL_JOIN = 38,                      /* JOIN  */
  YYSYMBOL_RETURN = 39,                    /* RETURN  */
  YYSYMBOL_VOID = 40,                      /* VOID  */
  YYSYMBOL_LEFT_SHIFT = 41,                /* LEFT_SHIFT  */
  YYSYMBOL_RIGHT_SHIFT = 42,               /* RIGHT_SHIFT  */
  YYSYMBOL_PLUS_ASSIGN = 43,               /* PLUS_ASSIGN  */
  YYSYMBOL_MINUS_ASSIGN = 44,              /* MINUS_ASSIGN  */
  YYSYMBOL_MULT_ASSIGN = 45,               /* MULT_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 46,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 47,                /* MOD_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 48,                /* AND_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 49,                 /* OR_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 50,                /* XOR_ASSIGN  */
  YYSYMBOL_LEFT_SHIFT_ASSIGN = 51,         /* LEFT_SHIFT_ASSIGN  */
  YYSYMBOL_RIGHT_SHIFT_ASSIGN = 52,        /* RIGHT_SHIFT_ASSIGN  */
  YYSYMBOL_EQUALS = 53,                    /* EQUALS  */
  YYSYMBOL_NOT_EQUALS = 54,                /* NOT_EQUALS  */
  YYSYMBOL_AND = 55,                       /* AND  */
  YYSYMBOL_OR = 56,                        /* OR  */
  YYSYMBOL_NOT = 57,                       /* NOT  */
  YYSYMBOL_GREATER_EQUALS = 58,            /* GREATER_EQUALS  */
  YYSYMBOL_LESS_EQUALS = 59,               /* LESS_EQUALS  */
  YYSYMBOL_INCREMENT = 60,                 /* INCREMENT  */
  YYSYMBOL_ARRAYS = 61,                    /* ARRAYS  */
  YYSYMBOL_INDEXOF = 62,                   /* INDEXOF  */
  YYSYMBOL_LENGTH = 63,                    /* LENGTH  */
  YYSYMBOL_ADD = 64,                       /* ADD  */
  YYSYMBOL_65_ = 65,                       /* '='  */
  YYSYMBOL_66_ = 66,                       /* '|'  */
  YYSYMBOL_67_ = 67,                       /* '^'  */
  YYSYMBOL_68_ = 68,                       /* '&'  */
  YYSYMBOL_69_ = 69,                       /* '<'  */
  YYSYMBOL_70_ = 70,                       /* '>'  */
  YYSYMBOL_71_ = 71,                       /* '+'  */
  YYSYMBOL_72_ = 72,                       /* '-'  */
  YYSYMBOL_73_ = 73,                       /* '*'  */
  YYSYMBOL_74_ = 74,                       /* '/'  */
  YYSYMBOL_75_ = 75,                       /* '%'  */
  YYSYMBOL_UMINUS = 76,                    /* UMINUS  */
  YYSYMBOL_77_ = 77,                       /* '['  */
  YYSYMBOL_78_ = 78,                       /* ']'  */
  YYSYMBOL_79_ = 79,                       /* ';'  */
  YYSYMBOL_80_ = 80,                       /* '('  */
  YYSYMBOL_81_ = 81,                       /* ')'  */
  YYSYMBOL_82_ = 82,                       /* '{'  */
  YYSYMBOL_83_ = 83,                       /* '}'  */
  YYSYMBOL_84_ = 84,                       /* '.'  */
  YYSYMBOL_85_ = 85,                       /* ','  */
  YYSYMBOL_86_ = 86,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 87,                  /* $accept  */
  YYSYMBOL_program = 88,                   /* program  */
  YYSYMBOL_sentences = 89,                 /* sentences  */
  YYSYMBOL_sentence = 90,                  /* sentence  */
  YYSYMBOL_separator = 91,                 /* separator  */
  YYSYMBOL_instruction = 92,               /* instruction  */
  YYSYMBOL_assignment = 93,                /* assignment  */
  YYSYMBOL_assignment_expression = 94,     /* assignment_expression  */
  YYSYMBOL_declaration = 95,               /* declaration  */
  YYSYMBOL_primitive_types = 96,           /* primitive_types  */
  YYSYMBOL_primitive_values = 97,          /* primitive_values  */
  YYSYMBOL_expression = 98,                /* expression  */
  YYSYMBOL_exprList = 99,                  /* exprList  */
  YYSYMBOL_IF_STATEMENT = 100,             /* IF_STATEMENT  */
  YYSYMBOL_IF_LIST = 101,                  /* IF_LIST  */
  YYSYMBOL_ELSE_STATEMENT = 102,           /* ELSE_STATEMENT  */
  YYSYMBOL_SWITCH_STATEMENT = 103,         /* SWITCH_STATEMENT  */
  YYSYMBOL_CASES = 104,                    /* CASES  */
  YYSYMBOL_DEFAULT_CASE = 105,             /* DEFAULT_CASE  */
  YYSYMBOL_WHILE_STATEMENT = 106,          /* WHILE_STATEMENT  */
  YYSYMBOL_FOR_STATEMENT = 107,            /* FOR_STATEMENT  */
  YYSYMBOL_FOREACH_STATEMENT = 108,        /* FOREACH_STATEMENT  */
  YYSYMBOL_dimensions = 109,               /* dimensions  */
  YYSYMBOL_dimensions_value_list = 110,    /* dimensions_value_list  */
  YYSYMBOL_dimensions_expressions = 111,   /* dimensions_expressions  */
  YYSYMBOL_vectorList = 112,               /* vectorList  */
  YYSYMBOL_matrixList = 113,               /* matrixList  */
  YYSYMBOL_dimension_expression = 114,     /* dimension_expression  */
  YYSYMBOL_dimension_values_list = 115,    /* dimension_values_list  */
  YYSYMBOL_dimension_value = 116,          /* dimension_value  */
  YYSYMBOL_optional_newlines = 117,        /* optional_newlines  */
  YYSYMBOL_paramsList = 118                /* paramsList  */
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
typedef yytype_int16 yy_state_t;

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

#if 1

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
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1533

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  139
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  359

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   320


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
       2,     2,     2,     2,     2,     2,     2,    75,    68,     2,
      80,    81,    73,    71,    85,    72,    84,    74,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    86,    79,
      69,    65,    70,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    77,     2,    78,    67,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    82,    66,    83,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      76
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   148,   148,   162,   172,   177,   180,   183,   190,   191,
     195,   200,   207,   217,   222,   230,   238,   243,   248,   253,
     260,   267,   275,   288,   295,   303,   312,   320,   326,   332,
     338,   344,   350,   356,   362,   368,   374,   380,   389,   400,
     425,   437,   451,   460,   469,   484,   498,   508,   527,   538,
     547,   557,   579,   580,   581,   582,   583,   584,   589,   595,
     601,   607,   613,   619,   628,   629,   635,   641,   648,   655,
     662,   669,   676,   677,   684,   691,   698,   706,   715,   723,
     733,   741,   749,   757,   765,   773,   781,   789,   797,   804,
     811,   818,   825,   832,   839,   846,   852,   859,   866,   875,
     884,   893,   897,   902,   912,   922,   923,   932,   933,   937,
     948,   949,   959,   960,   968,   980,  1008,  1021,  1022,  1025,
    1032,  1040,  1045,  1052,  1056,  1061,  1069,  1073,  1078,  1084,
    1087,  1088,  1093,  1096,  1099,  1106,  1107,  1114,  1115,  1120
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "STR", "CHR",
  "BOOLEAN", "ID", "OTHER", "NUM", "DEC", "DECF", "BREAK_LINE", "INT",
  "STRING", "CHAR", "FLOAT", "DOUBLE", "BOOL", "FINAL", "PRINTLN", "IF",
  "ELSE", "SWITCH", "CASE", "BREAK", "DEFAULT", "CONTINUE", "WHILE", "FOR",
  "EQUALS_OP", "NEW", "INTEGER_OBJ", "PARSEINT", "DOUBLE_OBJ",
  "PARSEDOUBLE", "FLOAT_OBJ", "PARSEFLOAT", "VALUEOF", "JOIN", "RETURN",
  "VOID", "LEFT_SHIFT", "RIGHT_SHIFT", "PLUS_ASSIGN", "MINUS_ASSIGN",
  "MULT_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "AND_ASSIGN", "OR_ASSIGN",
  "XOR_ASSIGN", "LEFT_SHIFT_ASSIGN", "RIGHT_SHIFT_ASSIGN", "EQUALS",
  "NOT_EQUALS", "AND", "OR", "NOT", "GREATER_EQUALS", "LESS_EQUALS",
  "INCREMENT", "ARRAYS", "INDEXOF", "LENGTH", "ADD", "'='", "'|'", "'^'",
  "'&'", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "UMINUS", "'['",
  "']'", "';'", "'('", "')'", "'{'", "'}'", "'.'", "','", "':'", "$accept",
  "program", "sentences", "sentence", "separator", "instruction",
  "assignment", "assignment_expression", "declaration", "primitive_types",
  "primitive_values", "expression", "exprList", "IF_STATEMENT", "IF_LIST",
  "ELSE_STATEMENT", "SWITCH_STATEMENT", "CASES", "DEFAULT_CASE",
  "WHILE_STATEMENT", "FOR_STATEMENT", "FOREACH_STATEMENT", "dimensions",
  "dimensions_value_list", "dimensions_expressions", "vectorList",
  "matrixList", "dimension_expression", "dimension_values_list",
  "dimension_value", "optional_newlines", "paramsList", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-288)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-122)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -288,    33,   515,  -288,   -10,     5,  -288,  -288,  -288,  -288,
    -288,  -288,  -288,   226,   -20,   -15,   -12,  -288,  -288,    -6,
      30,   719,    73,  -288,  -288,  -288,   -10,  -288,  1473,  -288,
      -1,  -288,  -288,  -288,  -288,  -288,  -288,   719,   719,    32,
     -50,    75,   634,   719,   114,   719,   556,  -288,  -288,  -288,
      28,  -288,  -288,  -288,    41,    50,    59,    82,   719,    83,
     719,   646,  -288,  1302,    79,  -288,   719,   719,   719,   719,
     719,   719,   719,   719,   719,   719,  -288,    44,    52,  1302,
    1197,  -288,   719,   719,   103,  -288,   689,   742,    91,   777,
      96,     0,    97,   719,   719,   -44,    99,    69,   146,   159,
     161,  -288,   143,    64,    41,   125,   812,   719,   719,   719,
     719,   719,   719,   719,   719,   719,   719,   719,   719,   719,
     719,   719,   719,   719,   719,   130,  1302,  1302,  1302,  1302,
    1302,  1302,  1302,  1302,  1302,  1302,   719,   226,   -22,     3,
      46,  1302,  1232,   719,  -288,   132,   136,   137,   719,   -42,
     719,  1267,  1302,   -67,  -288,   150,   164,   165,   167,   170,
     172,   173,   719,  -288,   203,   203,  1417,  1417,  1348,  1325,
     129,   129,  1371,  1394,  1440,   129,   129,    64,    64,  -288,
    -288,  -288,   188,  1302,   206,   -56,   -23,   176,   190,   202,
    -288,  1302,   257,   271,   275,  1162,   281,   847,   212,  -288,
     719,   719,   719,   719,   719,   719,   719,   284,  1302,   282,
    -288,   213,   226,   226,  -288,  -288,  -288,    -4,   288,  -288,
    -288,  -288,   291,   217,  -288,  1302,   882,   917,   -14,   952,
     987,  1022,   214,  -288,   289,   307,   238,   553,   235,   226,
     719,   255,   134,    11,   209,   262,   241,  -288,  -288,  -288,
    -288,  -288,  -288,   719,   245,  -288,  -288,   317,   250,  -288,
    1302,  -288,   256,  -288,   279,   268,  1302,    31,   -19,  -288,
     186,   263,   267,  -288,   270,   341,  1057,  -288,   290,   276,
     345,  -288,    -8,   344,   277,   348,  -288,   719,   226,  -288,
     337,   278,   350,  -288,   280,  -288,  -288,  -288,  -288,   285,
     553,  -288,   719,   287,  1302,   293,     1,   -16,  -288,   356,
    -288,   357,   320,  -288,  -288,  1092,  -288,   364,   719,    43,
     294,   375,  -288,   365,  -288,  -288,   344,  -288,   297,    72,
    -288,  -288,   719,  -288,   589,   395,   311,  -288,     2,  1127,
     440,   315,  -288,   382,   344,   719,   313,  -288,   386,   322,
      80,   387,  -288,  -288,  -288,  -288,   344,   470,  -288
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     1,     0,    38,     8,    52,    53,    57,
      55,    54,    56,     0,     0,     0,     0,    19,    20,     0,
       0,     0,     0,     9,     3,     6,     0,    13,     0,    10,
       0,    14,    15,    16,    18,    17,     7,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    59,    63,    62,
      65,    58,    60,    61,     0,     0,     0,     0,     0,     0,
       0,     0,    64,    21,     0,     5,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    37,    41,     0,    23,
       0,    22,     0,     0,     0,    12,     0,     0,     0,     0,
       0,     0,     0,     0,   101,     0,    99,     0,     0,     0,
       0,    88,     0,    66,    53,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,     0,   137,     0,     0,
      39,    26,     0,     0,    11,     0,     0,     0,     0,    41,
       0,     0,   102,     0,    95,     0,     0,     0,     0,     0,
       0,     0,     0,    72,    77,    78,    80,    81,    86,    87,
      84,    85,    75,    76,    74,    83,    82,    67,    68,    69,
      70,    71,     0,    40,     0,     0,     0,     0,     0,     0,
     122,    42,     0,     0,     0,     0,     0,     0,    97,   100,
       0,     0,     0,   101,     0,     0,     0,     0,    73,     0,
     138,     0,     0,     0,   135,    50,   118,     0,     0,     4,
     110,     4,     0,     0,    79,   103,     0,     0,     0,     0,
       0,     0,     0,     4,     0,     0,     0,   130,     0,     0,
     123,     0,     0,   112,     0,     0,     0,    96,    92,    93,
      89,    90,    91,     0,     0,     4,   139,     0,    51,   136,
     133,   134,   135,   135,     0,     0,   124,     0,     0,   105,
       0,     0,     0,   114,     0,     0,     0,    49,     0,     0,
       0,   135,     0,   131,     0,     0,    43,     0,     0,   135,
     107,     0,     0,   109,     0,     4,    94,    48,   119,     0,
       0,   129,     0,     0,   125,     0,   126,     0,   104,     0,
       4,     0,     0,   120,   135,     0,    44,     0,   123,     0,
       0,     0,     4,     0,     4,   116,   132,    45,     0,     0,
      46,   135,     0,     4,     0,     0,     0,   135,     0,     0,
       0,    19,   115,     0,   127,   123,     0,   108,     0,     0,
       0,     0,   111,    47,   135,     4,   128,     0,   106
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -288,  -288,  -191,  -288,     6,  -288,  -288,  -288,   370,    -5,
     148,   -21,   199,  -288,  -288,  -288,  -288,  -288,  -288,  -288,
    -288,  -288,  -288,  -288,   374,  -287,  -288,   234,  -288,   126,
    -145,  -288
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     2,    24,    25,    26,    27,    28,    29,    30,
      62,   266,   153,    31,   290,   308,    32,   243,   272,    33,
      34,    35,   138,   258,    40,   267,   319,   261,   262,   263,
     237,   185
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      63,     6,   238,   259,   320,    77,   149,   213,    41,   188,
      36,   288,   259,   259,   199,    82,    79,    80,   200,   154,
     155,    86,    87,   136,    89,   211,   239,    83,   242,   212,
     244,   329,    65,     3,   270,  -117,   271,   101,   137,   103,
     106,    91,   254,   186,   196,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   187,   105,    92,   350,   214,
      42,   141,   142,   289,   278,    43,   321,   249,    44,    23,
      37,   200,   151,   152,    45,   301,    78,    78,   240,    64,
     189,    84,    38,   318,   345,    39,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   312,    93,   156,   157,    94,   136,
      46,  -121,    95,    81,   286,   183,   287,   282,   283,   323,
      88,  -117,   191,  -121,   137,    97,   330,   195,   331,   197,
     139,   334,   184,   335,    98,     4,   300,   122,   123,   124,
       5,   208,   340,    99,   306,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,   337,    16,   287,    17,   125,
      18,    19,    20,   354,   357,   287,   100,   102,   143,   326,
     107,   108,   146,    21,    22,   148,    83,   150,   158,   225,
     226,   227,   152,   229,   230,   231,   338,  -122,  -122,    47,
      48,    49,   344,   159,    51,    52,    53,   160,  -122,  -122,
     120,   121,   122,   123,   124,   161,   162,   235,   236,   356,
       4,   182,   210,    23,   192,     5,   260,   269,   193,   194,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
     201,    16,   276,    17,   265,    18,    19,    20,     7,     8,
       9,    10,    11,    12,   202,   203,     4,   204,    21,    22,
     205,     5,   206,   207,   216,   217,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,   304,    16,   219,    17,
     209,    18,    19,    20,   120,   121,   122,   123,   124,   260,
     218,   315,   220,   305,    21,    22,   221,   223,    23,  -121,
     232,     4,   273,   233,   241,   234,     5,   245,   246,   253,
     255,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,   339,    16,   256,    17,   257,    18,    19,    20,   264,
     268,     4,   274,   275,    23,   279,     5,   280,   277,    21,
      22,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,   281,    16,   284,    17,   285,    18,    19,    20,   292,
     293,   294,   295,   299,   298,   259,   303,   302,   307,    21,
      22,   310,   311,   313,   309,   316,     4,   322,   324,    23,
     317,     5,   328,   297,   332,   336,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,   333,    16,   343,    17,
     349,    18,    19,    20,   348,   351,     4,   352,   355,    23,
     353,     5,   228,   325,    21,    22,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    90,    16,   291,    17,
     215,    18,    19,    20,    96,     0,   314,     0,     0,     0,
       0,     0,     0,     0,    21,    22,     0,     0,     0,     0,
       0,     4,     0,     0,    23,     0,     5,     0,  -113,     0,
       0,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,     0,    16,     0,    17,     0,    18,    19,    20,     0,
       0,     4,     0,     0,    23,     0,     5,     0,   342,    21,
      22,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,     0,    16,     0,    17,     0,    18,    19,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    21,
      22,     0,     0,     0,     0,    -2,     4,     0,     0,    23,
       0,     5,     0,   347,     0,     0,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,     0,    16,     0,    17,
       0,    18,    19,    20,     0,     0,     0,     0,     0,    23,
       0,     0,     0,   358,    21,    22,    47,    48,    49,    50,
       0,    51,    52,    53,   259,     0,    54,     0,     7,     8,
       9,    10,    11,    12,    13,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    55,     0,    56,     0,    57,     0,
       4,     0,     0,     0,    23,     5,    22,     0,     0,     0,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      58,    16,     0,   341,    59,    18,    19,    20,     0,     0,
       0,     0,     0,     0,     0,    60,     0,     0,    21,    22,
       0,     0,     0,    61,     0,   214,     0,    47,    48,    49,
      50,     0,    51,    52,    53,     0,     0,    54,     0,    47,
      48,    49,    50,     0,    51,    52,    53,     0,     7,   104,
       9,    10,    11,    12,     0,    55,     0,    56,    23,    57,
       0,     0,     0,     0,     0,     0,     0,    55,     0,    56,
       0,    57,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    58,     0,     0,     0,    59,     0,     0,     0,     0,
       0,     0,     0,    58,     0,     0,    60,    59,     0,     0,
       0,     0,     0,     0,    61,    85,     0,     0,    60,     0,
       0,     0,    47,    48,    49,    50,    61,    51,    52,    53,
     107,   108,    54,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   109,   110,   111,   112,     0,   113,   114,     0,
      55,     0,    56,     0,    57,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,     0,     0,     0,     0,     0,
     144,     0,     0,     0,     0,     0,    58,     0,     0,     0,
      59,     0,     0,   107,   108,     0,     0,     0,     0,     0,
       0,    60,     0,     0,     0,   109,   110,   111,   112,    61,
     113,   114,     0,     0,     0,     0,     0,     0,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   107,   108,
       0,     0,     0,   145,     0,     0,     0,     0,     0,     0,
     109,   110,   111,   112,     0,   113,   114,     0,     0,     0,
       0,     0,     0,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   107,   108,     0,     0,     0,   147,     0,
       0,     0,     0,     0,     0,   109,   110,   111,   112,     0,
     113,   114,     0,     0,     0,     0,     0,     0,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   107,   108,
       0,     0,     0,   163,     0,     0,     0,     0,     0,     0,
     109,   110,   111,   112,     0,   113,   114,     0,     0,     0,
       0,     0,     0,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   107,   108,     0,     0,     0,   224,     0,
       0,     0,     0,     0,     0,   109,   110,   111,   112,     0,
     113,   114,     0,     0,     0,     0,     0,     0,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   107,   108,
       0,     0,     0,   247,     0,     0,     0,     0,     0,     0,
     109,   110,   111,   112,     0,   113,   114,     0,     0,     0,
       0,     0,     0,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   107,   108,     0,     0,     0,   248,     0,
       0,     0,     0,     0,     0,   109,   110,   111,   112,     0,
     113,   114,     0,     0,     0,     0,     0,     0,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   107,   108,
       0,     0,     0,   250,     0,     0,     0,     0,     0,     0,
     109,   110,   111,   112,     0,   113,   114,     0,     0,     0,
       0,     0,     0,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   107,   108,     0,     0,     0,   251,     0,
       0,     0,     0,     0,     0,   109,   110,   111,   112,     0,
     113,   114,     0,     0,     0,     0,     0,     0,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   107,   108,
       0,     0,     0,   252,     0,     0,     0,     0,     0,     0,
     109,   110,   111,   112,     0,   113,   114,     0,     0,     0,
       0,     0,     0,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   107,   108,     0,     0,     0,   296,     0,
       0,     0,     0,     0,     0,   109,   110,   111,   112,     0,
     113,   114,     0,     0,     0,     0,     0,     0,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   107,   108,
       0,     0,     0,   327,     0,     0,     0,     0,     0,     0,
     109,   110,   111,   112,     0,   113,   114,     0,     0,     0,
       0,     0,     0,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   107,   108,     0,     0,     0,   346,     0,
       0,     0,     0,     0,     0,   109,   110,   111,   112,     0,
     113,   114,     0,     0,     0,     0,     0,     0,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   107,   108,
       0,   222,     0,     0,     0,     0,     0,     0,     0,     0,
     109,   110,   111,   112,     0,   113,   114,     0,     0,     0,
       0,     0,     0,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   107,   108,   140,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   109,   110,   111,   112,     0,
     113,   114,     0,     0,     0,     0,     0,     0,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   107,   108,
     190,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     109,   110,   111,   112,     0,   113,   114,     0,     0,     0,
       0,     0,     0,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   107,   108,   198,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   109,   110,   111,   112,     0,
     113,   114,     0,     0,     0,     0,   107,   108,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   109,   110,
     111,     0,     0,   113,   114,     0,     0,     0,     0,   107,
     108,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   109,   110,     0,     0,     0,   113,   114,     0,     0,
       0,     0,   107,   108,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   109,   110,     0,     0,     0,   113,
     114,     0,     0,     0,     0,   107,   108,     0,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   109,   110,     0,
       0,     0,   113,   114,     0,     0,     0,     0,   107,   108,
       0,     0,   117,   118,   119,   120,   121,   122,   123,   124,
    -122,  -122,     0,     0,     0,   113,   114,     0,     0,     0,
       0,   107,   108,     0,     0,     0,   118,   119,   120,   121,
     122,   123,   124,   109,   110,     0,     0,     0,   113,   114,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   118,
     119,   120,   121,   122,   123,   124,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,     0,     0,     0,     0,
       0,     0,     0,    76
};

static const yytype_int16 yycheck[] =
{
      21,    11,     6,    11,    20,     6,     6,    30,    13,     6,
       4,    30,    11,    11,    81,    65,    37,    38,    85,    63,
      64,    42,    43,    65,    45,    81,    30,    77,   219,    85,
     221,   318,    26,     0,    23,    77,    25,    58,    80,    60,
      61,    46,   233,    65,    86,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    77,    61,    29,   345,    82,
      80,    82,    83,    82,   255,    80,    82,    81,    80,    79,
      65,    85,    93,    94,    80,    83,    77,    77,    82,     6,
      77,     6,    77,    82,    82,    80,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   295,    77,    37,    38,    80,    65,
      80,    65,    84,    81,    83,   136,    85,   262,   263,   310,
       6,    77,   143,    77,    80,    84,    83,   148,    85,   150,
      78,   322,   137,   324,    84,     1,   281,    73,    74,    75,
       6,   162,   333,    84,   289,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    83,    22,    85,    24,    80,
      26,    27,    28,    83,   355,    85,    84,    84,    65,   314,
      41,    42,    81,    39,    40,    79,    77,    80,    32,   200,
     201,   202,   203,   204,   205,   206,   331,    58,    59,     3,
       4,     5,   337,    34,     8,     9,    10,    36,    69,    70,
      71,    72,    73,    74,    75,    62,    81,   212,   213,   354,
       1,    81,     6,    79,    82,     6,   237,    83,    82,    82,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      80,    22,   253,    24,   239,    26,    27,    28,    12,    13,
      14,    15,    16,    17,    80,    80,     1,    80,    39,    40,
      80,     6,    80,    80,    78,    65,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,   287,    22,    11,    24,
      82,    26,    27,    28,    71,    72,    73,    74,    75,   300,
      78,   302,    11,   288,    39,    40,    11,     6,    79,    77,
       6,     1,    83,    11,     6,    82,     6,     6,    81,    85,
      11,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,   332,    22,     6,    24,    77,    26,    27,    28,    84,
      65,     1,    60,    82,    79,     8,     6,    77,    83,    39,
      40,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    85,    22,    64,    24,    77,    26,    27,    28,    86,
      83,    81,    11,     8,    78,    11,     8,    80,    21,    39,
      40,    11,    82,    78,    86,    78,     1,    11,    11,    79,
      77,     6,     8,    83,    80,    78,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    11,    22,    77,    24,
       8,    26,    27,    28,    79,    82,     1,    11,    11,    79,
      78,     6,   203,    83,    39,    40,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    46,    22,   270,    24,
     186,    26,    27,    28,    50,    -1,   300,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    40,    -1,    -1,    -1,    -1,
      -1,     1,    -1,    -1,    79,    -1,     6,    -1,    83,    -1,
      -1,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    -1,    22,    -1,    24,    -1,    26,    27,    28,    -1,
      -1,     1,    -1,    -1,    79,    -1,     6,    -1,    83,    39,
      40,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    -1,    22,    -1,    24,    -1,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      40,    -1,    -1,    -1,    -1,     0,     1,    -1,    -1,    79,
      -1,     6,    -1,    83,    -1,    -1,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    22,    -1,    24,
      -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    -1,    83,    39,    40,     3,     4,     5,     6,
      -1,     8,     9,    10,    11,    -1,    13,    -1,    12,    13,
      14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    33,    -1,    35,    -1,
       1,    -1,    -1,    -1,    79,     6,    40,    -1,    -1,    -1,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      57,    22,    -1,    24,    61,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    39,    40,
      -1,    -1,    -1,    80,    -1,    82,    -1,     3,     4,     5,
       6,    -1,     8,     9,    10,    -1,    -1,    13,    -1,     3,
       4,     5,     6,    -1,     8,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    -1,    31,    -1,    33,    79,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    33,
      -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    -1,    -1,    72,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    81,    -1,    -1,    72,    -1,
      -1,    -1,     3,     4,     5,     6,    80,     8,     9,    10,
      41,    42,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    54,    55,    56,    -1,    58,    59,    -1,
      31,    -1,    33,    -1,    35,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,
      61,    -1,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    -1,    -1,    53,    54,    55,    56,    80,
      58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    41,    42,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    54,    55,    56,    -1,    58,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    41,    42,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    54,    55,    56,    -1,
      58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    41,    42,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    54,    55,    56,    -1,    58,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    41,    42,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    54,    55,    56,    -1,
      58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    41,    42,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    54,    55,    56,    -1,    58,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    41,    42,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    54,    55,    56,    -1,
      58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    41,    42,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    54,    55,    56,    -1,    58,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    41,    42,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    54,    55,    56,    -1,
      58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    41,    42,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    54,    55,    56,    -1,    58,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    41,    42,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    54,    55,    56,    -1,
      58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    41,    42,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    54,    55,    56,    -1,    58,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    41,    42,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    54,    55,    56,    -1,
      58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    41,    42,
      -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    54,    55,    56,    -1,    58,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    41,    42,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    54,    55,    56,    -1,
      58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    41,    42,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    54,    55,    56,    -1,    58,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    41,    42,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    54,    55,    56,    -1,
      58,    59,    -1,    -1,    -1,    -1,    41,    42,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    53,    54,
      55,    -1,    -1,    58,    59,    -1,    -1,    -1,    -1,    41,
      42,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    53,    54,    -1,    -1,    -1,    58,    59,    -1,    -1,
      -1,    -1,    41,    42,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    53,    54,    -1,    -1,    -1,    58,
      59,    -1,    -1,    -1,    -1,    41,    42,    -1,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    53,    54,    -1,
      -1,    -1,    58,    59,    -1,    -1,    -1,    -1,    41,    42,
      -1,    -1,    68,    69,    70,    71,    72,    73,    74,    75,
      53,    54,    -1,    -1,    -1,    58,    59,    -1,    -1,    -1,
      -1,    41,    42,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    74,    75,    53,    54,    -1,    -1,    -1,    58,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,    75,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    60
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    88,    89,     0,     1,     6,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    22,    24,    26,    27,
      28,    39,    40,    79,    90,    91,    92,    93,    94,    95,
      96,   100,   103,   106,   107,   108,    91,    65,    77,    80,
     111,    96,    80,    80,    80,    80,    80,     3,     4,     5,
       6,     8,     9,    10,    13,    31,    33,    35,    57,    61,
      72,    80,    97,    98,     6,    91,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    60,     6,    77,    98,
      98,    81,    65,    77,     6,    81,    98,    98,     6,    98,
      95,    96,    29,    77,    80,    84,   111,    84,    84,    84,
      84,    98,    84,    98,    13,    96,    98,    41,    42,    53,
      54,    55,    56,    58,    59,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    80,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    65,    80,   109,    78,
      78,    98,    98,    65,    81,    81,    81,    81,    79,     6,
      80,    98,    98,    99,    63,    64,    37,    38,    32,    34,
      36,    62,    81,    81,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    81,    98,    96,   118,    65,    77,     6,    77,
      78,    98,    82,    82,    82,    98,    86,    98,    78,    81,
      85,    80,    80,    80,    80,    80,    80,    80,    98,    82,
       6,    81,    85,    30,    82,   114,    78,    65,    78,    11,
      11,    11,    79,     6,    81,    98,    98,    98,    99,    98,
      98,    98,     6,    11,    82,    96,    96,   117,     6,    30,
      82,     6,    89,   104,    89,     6,    81,    81,    81,    81,
      81,    81,    81,    85,    89,    11,     6,    77,   110,    11,
      98,   114,   115,   116,    84,    96,    98,   112,    65,    83,
      23,    25,   105,    83,    60,    82,    98,    83,    89,     8,
      77,    85,   117,   117,    64,    77,    83,    85,    30,    82,
     101,    97,    86,    83,    81,    11,    81,    83,    78,     8,
     117,    83,    80,     8,    98,    96,   117,    21,   102,    86,
      11,    82,    89,    78,   116,    98,    78,    77,    82,   113,
      20,    82,    11,    89,    11,    83,   117,    81,     8,   112,
      83,    85,    80,    11,    89,    89,    78,    83,   117,    98,
      89,    24,    83,    77,   117,    82,    81,    83,    79,     8,
     112,    82,    11,    78,    83,    11,   117,    89,    83
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    87,    88,    89,    89,    90,    90,    90,    91,    91,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    94,    94,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    96,    96,    96,    96,    96,    96,    97,    97,
      97,    97,    97,    97,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    99,    99,    99,   100,   101,   101,   102,   102,   103,
     104,   104,   105,   105,   106,   107,   108,   109,   109,   110,
     110,   111,   111,   112,   112,   112,   113,   113,   113,   114,
     115,   115,   115,   116,   116,   117,   117,   118,   118,   118
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     2,     1,     2,     1,     1,
       1,     4,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     3,     3,     6,     9,     4,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     1,     4,
       4,     2,     5,     8,    10,    11,    11,    15,     9,     8,
       5,     7,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     3,     3,     3,
       3,     3,     3,     4,     3,     3,     3,     3,     3,     5,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     6,
       6,     6,     6,     6,     8,     3,     6,     4,     7,     2,
       4,     0,     1,     3,    10,     0,    10,     0,     5,     9,
       0,     9,     0,     4,     8,    13,    11,     0,     3,     3,
       4,     3,     4,     0,     1,     3,     0,     4,     7,     5,
       0,     2,     5,     1,     1,     0,     2,     0,     2,     4
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

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
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
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
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
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
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

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yyerror_range[1] = yylloc;
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
  *++yylsp = yylloc;

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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: sentences  */
#line 148 "src/parser/parser.y"
                { 
        printf("Programa completo\n");
        // Copiar todas las instrucciones a la lista global
        if ((yyvsp[0].instrList) && (yyvsp[0].instrList)->head) {
            InstruccionNode *curr = (yyvsp[0].instrList)->head;
            while (curr) {
                InstruccionList_insert(list_tokens, curr->instr);
                curr = curr->next;
            }
        }
        (yyval.instrList) = (yyvsp[0].instrList);
     }
#line 2055 "build/parser.tab.c"
    break;

  case 3: /* sentences: sentences sentence  */
#line 163 "src/parser/parser.y"
        { 
            if ((yyvsp[0].instr) != NULL) {
                InstruccionList_insert((yyvsp[-1].instrList), (yyvsp[0].instr));
                (yyval.instrList) = (yyvsp[-1].instrList);
            } else {
                (yyval.instrList) = (yyvsp[-1].instrList);
            }
        }
#line 2068 "build/parser.tab.c"
    break;

  case 4: /* sentences: %empty  */
#line 172 "src/parser/parser.y"
        { 
            (yyval.instrList) = InstruccionList_create();
        }
#line 2076 "build/parser.tab.c"
    break;

  case 5: /* sentence: instruction separator  */
#line 177 "src/parser/parser.y"
                           {
        (yyval.instr) = (yyvsp[-1].instr);
    }
#line 2084 "build/parser.tab.c"
    break;

  case 6: /* sentence: separator  */
#line 180 "src/parser/parser.y"
                {
        (yyval.instr) = NULL;
    }
#line 2092 "build/parser.tab.c"
    break;

  case 7: /* sentence: error separator  */
#line 183 "src/parser/parser.y"
                      {
        // Recuperación de error: saltar hasta el siguiente separador
        yyerrok;
        (yyval.instr) = NULL;
    }
#line 2102 "build/parser.tab.c"
    break;

  case 8: /* separator: BREAK_LINE  */
#line 190 "src/parser/parser.y"
                 {}
#line 2108 "build/parser.tab.c"
    break;

  case 9: /* separator: ';'  */
#line 191 "src/parser/parser.y"
          { /* skip */ }
#line 2114 "build/parser.tab.c"
    break;

  case 10: /* instruction: declaration  */
#line 195 "src/parser/parser.y"
                {
        (yyvsp[0].instr)->InstType = "DECLARATION";
        (yyvsp[0].instr)->line = (yylsp[0]).first_line;
        (yyval.instr) = (yyvsp[0].instr);
    }
#line 2124 "build/parser.tab.c"
    break;

  case 11: /* instruction: PRINTLN '(' expression ')'  */
#line 200 "src/parser/parser.y"
                                 {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->InstType = "PRINTLN";
        instP->value = (yyvsp[-1].expr);
        instP->line = (yylsp[-3]).first_line;
        (yyval.instr) = instP;
    }
#line 2136 "build/parser.tab.c"
    break;

  case 12: /* instruction: PRINTLN '(' ')'  */
#line 207 "src/parser/parser.y"
                      {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->InstType = "PRINTLN";
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = strdup("CHARACTER");
        exp->value = strdup("\n");
        instP->value = exp;
        instP->line = (yylsp[-2]).first_line;
        (yyval.instr) = instP;
    }
#line 2151 "build/parser.tab.c"
    break;

  case 13: /* instruction: assignment  */
#line 217 "src/parser/parser.y"
                 {
        (yyvsp[0].instr)->InstType = "ASSIGNMENT";
        (yyvsp[0].instr)->line = (yylsp[0]).first_line;
        (yyval.instr) = (yyvsp[0].instr);
    }
#line 2161 "build/parser.tab.c"
    break;

  case 14: /* instruction: IF_STATEMENT  */
#line 222 "src/parser/parser.y"
                   {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->InstType = "IF_STATEMENT";
        instP->ifData = (yyvsp[0].ifdata);
        instP->line = (yylsp[0]).first_line;
        instP->column = (yylsp[0]).first_column;
        (yyval.instr) = instP;
    }
#line 2174 "build/parser.tab.c"
    break;

  case 15: /* instruction: SWITCH_STATEMENT  */
#line 230 "src/parser/parser.y"
                       {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->InstType = "SWITCH_STATEMENT";
        instP->switchData = (yyvsp[0].switchdata);
        instP->line = (yylsp[0]).first_line;
        instP->column = (yylsp[0]).first_column;
        (yyval.instr) = instP;
    }
#line 2187 "build/parser.tab.c"
    break;

  case 16: /* instruction: WHILE_STATEMENT  */
#line 238 "src/parser/parser.y"
                      {
        (yyvsp[0].instr)->InstType = "WHILE_STATEMENT";
        (yyvsp[0].instr)->line = (yylsp[0]).first_line;
        (yyval.instr) = (yyvsp[0].instr); 
    }
#line 2197 "build/parser.tab.c"
    break;

  case 17: /* instruction: FOREACH_STATEMENT  */
#line 243 "src/parser/parser.y"
                       {
        (yyvsp[0].instr)->InstType = "FOREACH_STATEMENT";
        (yyvsp[0].instr)->line = (yylsp[0]).first_line;
        (yyval.instr) = (yyvsp[0].instr);
    }
#line 2207 "build/parser.tab.c"
    break;

  case 18: /* instruction: FOR_STATEMENT  */
#line 248 "src/parser/parser.y"
                    {
        (yyvsp[0].instr)->InstType = "FOR_STATEMENT";
        (yyvsp[0].instr)->line = (yylsp[0]).first_line;
        (yyval.instr) = (yyvsp[0].instr); 
    }
#line 2217 "build/parser.tab.c"
    break;

  case 19: /* instruction: BREAK  */
#line 253 "src/parser/parser.y"
            {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->InstType = "BREAK";
        instP->line = (yylsp[0]).first_line;
        instP->column = (yylsp[0]).first_column;
        (yyval.instr) = instP;
    }
#line 2229 "build/parser.tab.c"
    break;

  case 20: /* instruction: CONTINUE  */
#line 260 "src/parser/parser.y"
               {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->InstType = "CONTINUE";
        instP->line = (yylsp[0]).first_line;
        instP->column = (yylsp[0]).first_column;
        (yyval.instr) = instP;
    }
#line 2241 "build/parser.tab.c"
    break;

  case 21: /* instruction: RETURN expression  */
#line 267 "src/parser/parser.y"
                        {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->InstType = "RETURN";
        instP->value = (yyvsp[0].expr);
        instP->line = (yylsp[-1]).first_line;
        instP->column = (yylsp[-1]).first_column;
        (yyval.instr) = instP;
    }
#line 2254 "build/parser.tab.c"
    break;

  case 22: /* instruction: ID '(' ')'  */
#line 275 "src/parser/parser.y"
                 {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->InstType = "VOID_CALL";
        instP->id = (yyvsp[-2].sval);
        instP->line = (yylsp[-2]).first_line;
        instP->column = (yylsp[-2]).first_column;
        (yyval.instr) = instP;
    }
#line 2267 "build/parser.tab.c"
    break;

  case 23: /* assignment: ID '=' expression  */
#line 288 "src/parser/parser.y"
                      {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->id = (yyvsp[-2].sval);
        instP->value = (yyvsp[0].expr);
        instP->column = (yylsp[-2]).first_column;
        (yyval.instr) = instP; }
#line 2278 "build/parser.tab.c"
    break;

  case 24: /* assignment: ID '[' expression ']' '=' expression  */
#line 295 "src/parser/parser.y"
                                           {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->id = (yyvsp[-5].sval);
        instP->IndexVector = (yyvsp[-3].expr);
        instP->value = (yyvsp[0].expr);
        instP->column = (yylsp[-5]).first_column;
        (yyval.instr) = instP; }
#line 2290 "build/parser.tab.c"
    break;

  case 25: /* assignment: ID '[' expression ']' '[' expression ']' '=' expression  */
#line 303 "src/parser/parser.y"
                                                              {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->id = (yyvsp[-8].sval);
        instP->IndexVector = (yyvsp[-3].expr);
        instP->IndexMatrix = (yyvsp[-6].expr);
        instP->value = (yyvsp[0].expr);
        instP->column = (yylsp[-8]).first_column;
        (yyval.instr) = instP; }
#line 2303 "build/parser.tab.c"
    break;

  case 26: /* assignment: ID dimensions_expressions '=' expression  */
#line 312 "src/parser/parser.y"
                                               {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->id = (yyvsp[-3].sval);
        instP->indexList = (yyvsp[-2].exprList);
        instP->value = (yyvsp[0].expr);
        instP->column = (yylsp[-3]).first_column;
        (yyval.instr) = instP; }
#line 2315 "build/parser.tab.c"
    break;

  case 27: /* assignment: assignment_expression PLUS_ASSIGN expression  */
#line 320 "src/parser/parser.y"
                                                   {
        (yyvsp[-2].instr)->value->type = "SUM";
        (yyvsp[-2].instr)->value->value = strdup("+");
        (yyvsp[-2].instr)->value->right = (yyvsp[0].expr);
        (yyval.instr) = (yyvsp[-2].instr); }
#line 2325 "build/parser.tab.c"
    break;

  case 28: /* assignment: assignment_expression MINUS_ASSIGN expression  */
#line 326 "src/parser/parser.y"
                                                    {
        (yyvsp[-2].instr)->value->type = "SUBTRACT";
        (yyvsp[-2].instr)->value->value = strdup("-");
        (yyvsp[-2].instr)->value->right = (yyvsp[0].expr);
        (yyval.instr) = (yyvsp[-2].instr); }
#line 2335 "build/parser.tab.c"
    break;

  case 29: /* assignment: assignment_expression MULT_ASSIGN expression  */
#line 332 "src/parser/parser.y"
                                                   {
        (yyvsp[-2].instr)->value->type = "MULTIPLICATION";
        (yyvsp[-2].instr)->value->value = strdup("*");
        (yyvsp[-2].instr)->value->right = (yyvsp[0].expr);
        (yyval.instr) = (yyvsp[-2].instr); }
#line 2345 "build/parser.tab.c"
    break;

  case 30: /* assignment: assignment_expression DIV_ASSIGN expression  */
#line 338 "src/parser/parser.y"
                                                  {
        (yyvsp[-2].instr)->value->type = "DIVIDE";
        (yyvsp[-2].instr)->value->value = strdup("/");
        (yyvsp[-2].instr)->value->right = (yyvsp[0].expr);
        (yyval.instr) = (yyvsp[-2].instr); }
#line 2355 "build/parser.tab.c"
    break;

  case 31: /* assignment: assignment_expression MOD_ASSIGN expression  */
#line 344 "src/parser/parser.y"
                                                  {
        (yyvsp[-2].instr)->value->type = "MODULO";
        (yyvsp[-2].instr)->value->value = strdup("%");
        (yyvsp[-2].instr)->value->right = (yyvsp[0].expr);
        (yyval.instr) = (yyvsp[-2].instr); }
#line 2365 "build/parser.tab.c"
    break;

  case 32: /* assignment: assignment_expression AND_ASSIGN expression  */
#line 350 "src/parser/parser.y"
                                                  {
        (yyvsp[-2].instr)->value->type = "BITWISE_AND";
        (yyvsp[-2].instr)->value->value = strdup("&");
        (yyvsp[-2].instr)->value->right = (yyvsp[0].expr);
        (yyval.instr) = (yyvsp[-2].instr); }
#line 2375 "build/parser.tab.c"
    break;

  case 33: /* assignment: assignment_expression OR_ASSIGN expression  */
#line 356 "src/parser/parser.y"
                                                 {
        (yyvsp[-2].instr)->value->type = "BITWISE_OR";
        (yyvsp[-2].instr)->value->value = strdup("|");
        (yyvsp[-2].instr)->value->right = (yyvsp[0].expr);
        (yyval.instr) = (yyvsp[-2].instr); }
#line 2385 "build/parser.tab.c"
    break;

  case 34: /* assignment: assignment_expression XOR_ASSIGN expression  */
#line 362 "src/parser/parser.y"
                                                  {
        (yyvsp[-2].instr)->value->type = "BITWISE_XOR";
        (yyvsp[-2].instr)->value->value = strdup("^");
        (yyvsp[-2].instr)->value->right = (yyvsp[0].expr);
        (yyval.instr) = (yyvsp[-2].instr); }
#line 2395 "build/parser.tab.c"
    break;

  case 35: /* assignment: assignment_expression LEFT_SHIFT_ASSIGN expression  */
#line 368 "src/parser/parser.y"
                                                         {
        (yyvsp[-2].instr)->value->type = "BITWISE_LEFT_SHIFT";
        (yyvsp[-2].instr)->value->value = strdup("<<");
        (yyvsp[-2].instr)->value->right = (yyvsp[0].expr);
        (yyval.instr) = (yyvsp[-2].instr); }
#line 2405 "build/parser.tab.c"
    break;

  case 36: /* assignment: assignment_expression RIGHT_SHIFT_ASSIGN expression  */
#line 374 "src/parser/parser.y"
                                                          {
        (yyvsp[-2].instr)->value->type = "BITWISE_RIGHT_SHIFT";
        (yyvsp[-2].instr)->value->value = strdup(">>");
        (yyvsp[-2].instr)->value->right = (yyvsp[0].expr);
        (yyval.instr) = (yyvsp[-2].instr); }
#line 2415 "build/parser.tab.c"
    break;

  case 37: /* assignment: assignment_expression INCREMENT  */
#line 380 "src/parser/parser.y"
                                      {
        (yyvsp[-1].instr)->value->type = "SUM";
        (yyvsp[-1].instr)->value->value = strdup("+");
        (yyvsp[-1].instr)->value->right = (Expression*)calloc(1, sizeof(Expression));
        (yyvsp[-1].instr)->value->right->type = "INTEGER";
        (yyvsp[-1].instr)->value->right->value = strdup("1");
        (yyval.instr) = (yyvsp[-1].instr); }
#line 2427 "build/parser.tab.c"
    break;

  case 38: /* assignment_expression: ID  */
#line 389 "src/parser/parser.y"
       {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->id = (yyvsp[0].sval);
        instP->column = (yylsp[0]).first_column;

        instP->value = (Expression*)calloc(1, sizeof(Expression));
        instP->value->left = (Expression*)calloc(1, sizeof(Expression));
        instP->value->left->type = "ID";
        instP->value->left->value = strdup((yyvsp[0].sval));
        (yyval.instr) = instP;
        }
#line 2443 "build/parser.tab.c"
    break;

  case 39: /* assignment_expression: ID '[' expression ']'  */
#line 400 "src/parser/parser.y"
                            {
        
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->id = (yyvsp[-3].sval);
        instP->IndexVector = (yyvsp[-1].expr);
        instP->column = (yylsp[-3]).first_column;

        
        instP->value = (Expression*)calloc(1, sizeof(Expression));
        instP->value->left = (Expression*)calloc(1, sizeof(Expression));
        instP->value->left->type = "VECTOR_ACCESS";
        instP->value->left->value = strdup((yyvsp[-3].sval));
        instP->value->left->left = (yyvsp[-1].expr);

    

        (yyval.instr) = instP;
        }
#line 2466 "build/parser.tab.c"
    break;

  case 40: /* declaration: primitive_types ID '=' expression  */
#line 425 "src/parser/parser.y"
                                      {

        // ? Crear instrucción

        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->id = (yyvsp[-2].sval);
        instP->type = (yyvsp[-3].sval);
        instP->column = (yylsp[-2]).first_column;
        instP->symbolType = "VARIABLE";
        instP->value = (yyvsp[0].expr);
        (yyval.instr) = instP; }
#line 2482 "build/parser.tab.c"
    break;

  case 41: /* declaration: primitive_types ID  */
#line 437 "src/parser/parser.y"
                         {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->id = (yyvsp[0].sval);
        instP->type = (yyvsp[-1].sval);
        instP->column = (yylsp[0]).first_column;
        instP->symbolType = "VARIABLE";

        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = (yyvsp[-1].sval);
        exp->value = strdup("UNDEFINED");

        instP->value = exp;
        (yyval.instr) = instP; }
#line 2500 "build/parser.tab.c"
    break;

  case 42: /* declaration: FINAL primitive_types ID '=' expression  */
#line 451 "src/parser/parser.y"
                                              {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->id = (yyvsp[-2].sval);
        instP->type = (yyvsp[-3].sval);
        instP->column = (yylsp[-2]).first_column;
        instP->symbolType = "CONSTANT";
        instP->value = (yyvsp[0].expr);
        (yyval.instr) = instP; }
#line 2513 "build/parser.tab.c"
    break;

  case 43: /* declaration: primitive_types '[' ']' ID '=' '{' vectorList '}'  */
#line 460 "src/parser/parser.y"
                                                        {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->id = (yyvsp[-4].sval);
        instP->type = (yyvsp[-7].sval);
        instP->column = (yylsp[-5]).first_column;
        instP->symbolType = "VECTOR";
        instP->vectorValues = (yyvsp[-1].VList);
        (yyval.instr) = instP; }
#line 2526 "build/parser.tab.c"
    break;

  case 44: /* declaration: primitive_types '[' ']' ID '=' NEW primitive_types '[' NUM ']'  */
#line 469 "src/parser/parser.y"
                                                                     {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->id = (yyvsp[-6].sval);
        instP->type = (yyvsp[-9].sval);
        instP->column = (yylsp[-7]).first_column;
        instP->symbolType = "VECTOR";
        instP->vectorValues = (VectorList*)calloc(1, sizeof(VectorList));
        for (int i = 0; i < atoi((yyvsp[-1].sval)); i++) {
            Expression* exp = (Expression*)calloc(1, sizeof(Expression));
            exp->type = (yyvsp[-3].sval);
            exp->value = strdup("UNDEFINED");
            VectorList_addExp(instP->vectorValues, exp);
        }
        (yyval.instr) = instP; }
#line 2545 "build/parser.tab.c"
    break;

  case 45: /* declaration: primitive_types '[' ']' ID '=' ID '.' ADD '(' expression ')'  */
#line 484 "src/parser/parser.y"
                                                                   {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->id = (yyvsp[-7].sval);
        instP->type = (yyvsp[-10].sval);
        instP->column = (yylsp[-8]).first_column;
        instP->symbolType = "VECTOR";
        instP->vectorValues = (VectorList*)calloc(1, sizeof(VectorList));
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "ADD";
        exp->value = strdup((yyvsp[-5].sval));
        exp->left = (yyvsp[-1].expr);
        VectorList_addExp(instP->vectorValues, exp);
        (yyval.instr) = instP; }
#line 2563 "build/parser.tab.c"
    break;

  case 46: /* declaration: primitive_types '[' ']' '[' ']' ID '=' '{' optional_newlines matrixList '}'  */
#line 498 "src/parser/parser.y"
                                                                               {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->id = (yyvsp[-5].sval);
        instP->type = (yyvsp[-10].sval);
        instP->column = (yylsp[-6]).first_column;
        instP->symbolType = "MATRIX";
        instP->matrixValues = (yyvsp[-1].MList);
        (yyval.instr) = instP;
    }
#line 2577 "build/parser.tab.c"
    break;

  case 47: /* declaration: primitive_types '[' ']' '[' ']' ID '=' NEW primitive_types '[' NUM ']' '[' NUM ']'  */
#line 508 "src/parser/parser.y"
                                                                                       {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->id = (yyvsp[-9].sval);
        instP->type = (yyvsp[-14].sval);
        instP->column = (yylsp[-10]).first_column;
        instP->symbolType = "MATRIX";
        instP->matrixValues = (MatrixList*)calloc(1, sizeof(MatrixList));
        for (int i = 0; i < atoi((yyvsp[-4].sval)); i++) {
            VectorList* vecList = (VectorList*)calloc(1, sizeof(VectorList));
            for (int j = 0; j < atoi((yyvsp[-1].sval)); j++) {
                Expression* exp = (Expression*)calloc(1, sizeof(Expression));
                exp->type = (yyvsp[-6].sval);
                exp->value = strdup("UNDEFINED");
                VectorList_addExp(vecList, exp);
            }
            MatrixList_add(instP->matrixValues, vecList);
            }
        (yyval.instr) = instP; }
#line 2600 "build/parser.tab.c"
    break;

  case 48: /* declaration: primitive_types ID '(' paramsList ')' '{' BREAK_LINE sentences '}'  */
#line 527 "src/parser/parser.y"
                                                                         {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->id = (yyvsp[-7].sval);
        instP->type = (yyvsp[-8].sval);
        instP->column = (yylsp[-7]).first_column;
        instP->symbolType = "FUNCTION";
        instP->functionData = (Function*)calloc(1, sizeof(Function));
        instP->functionData->parameters = (yyvsp[-5].paramlist);
        instP->functionData->body = (yyvsp[-1].instrList);
        (yyval.instr) = instP; }
#line 2615 "build/parser.tab.c"
    break;

  case 49: /* declaration: VOID ID '(' ')' '{' BREAK_LINE sentences '}'  */
#line 538 "src/parser/parser.y"
                                                   {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->id = (yyvsp[-6].sval);
        instP->column = (yylsp[-6]).first_column;
        instP->symbolType = "VOID";
        instP->functionData = (Function*)calloc(1, sizeof(Function));
        instP->functionData->body = (yyvsp[-1].instrList);
        (yyval.instr) = instP; }
#line 2628 "build/parser.tab.c"
    break;

  case 50: /* declaration: primitive_types ID dimensions '=' dimension_expression  */
#line 547 "src/parser/parser.y"
                                                             {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->id = (yyvsp[-3].sval);
        instP->type = (yyvsp[-4].sval);
        instP->arrayValues = (SymbolList*)calloc(1, sizeof(SymbolList));
        instP->arrayValues->dimension = (yyvsp[-2].ival);
        instP->arrayValues->values = (yyvsp[0].list);
        instP->column = (yylsp[-2]).first_column;
        instP->symbolType = "LIST";
        (yyval.instr) = instP; }
#line 2643 "build/parser.tab.c"
    break;

  case 51: /* declaration: primitive_types ID dimensions '=' NEW primitive_types dimensions_value_list  */
#line 557 "src/parser/parser.y"
                                                                                  {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->id = (yyvsp[-5].sval);
        instP->type = (yyvsp[-6].sval);
        instP->arrayValues = (SymbolList*)calloc(1, sizeof(SymbolList));
        instP->arrayValues->dimension = (yyvsp[-4].ival);
        
        // Usar la función multidimensional para crear la estructura
        instP->arrayValues->values = create_multidimensional_array((yyvsp[0].dimlist)->dimensions, (yyvsp[0].dimlist)->count, (yyvsp[-1].sval));
        
        // Liberar la estructura temporal
        free((yyvsp[0].dimlist)->dimensions);
        free((yyvsp[0].dimlist));
        
        instP->column = (yylsp[-4]).first_column;
        instP->symbolType = "LIST";
        (yyval.instr) = instP; 
    }
#line 2666 "build/parser.tab.c"
    break;

  case 52: /* primitive_types: INT  */
#line 579 "src/parser/parser.y"
        { (yyval.sval) = strdup("INTEGER"); }
#line 2672 "build/parser.tab.c"
    break;

  case 53: /* primitive_types: STRING  */
#line 580 "src/parser/parser.y"
             { (yyval.sval) = strdup("STRING"); }
#line 2678 "build/parser.tab.c"
    break;

  case 54: /* primitive_types: DOUBLE  */
#line 581 "src/parser/parser.y"
             { (yyval.sval) = strdup("DOUBLE"); }
#line 2684 "build/parser.tab.c"
    break;

  case 55: /* primitive_types: FLOAT  */
#line 582 "src/parser/parser.y"
            { (yyval.sval) = strdup("FLOAT"); }
#line 2690 "build/parser.tab.c"
    break;

  case 56: /* primitive_types: BOOL  */
#line 583 "src/parser/parser.y"
           { (yyval.sval) = strdup("BOOLEAN"); }
#line 2696 "build/parser.tab.c"
    break;

  case 57: /* primitive_types: CHAR  */
#line 584 "src/parser/parser.y"
           { (yyval.sval) = strdup("CHARACTER"); }
#line 2702 "build/parser.tab.c"
    break;

  case 58: /* primitive_values: NUM  */
#line 589 "src/parser/parser.y"
        { 
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = strdup("INTEGER");
        exp->value = strdup((yyvsp[0].sval));

        (yyval.expr) = exp; }
#line 2713 "build/parser.tab.c"
    break;

  case 59: /* primitive_values: STR  */
#line 595 "src/parser/parser.y"
          { 
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = strdup("STRING");
        exp->value = strdup((yyvsp[0].sval));

        (yyval.expr) = exp; }
#line 2724 "build/parser.tab.c"
    break;

  case 60: /* primitive_values: DEC  */
#line 601 "src/parser/parser.y"
          { 
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = strdup("DOUBLE");
        exp->value = strdup((yyvsp[0].sval));

        (yyval.expr) = exp; }
#line 2735 "build/parser.tab.c"
    break;

  case 61: /* primitive_values: DECF  */
#line 607 "src/parser/parser.y"
           { 
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = strdup("FLOAT");
        exp->value = strdup((yyvsp[0].sval));

        (yyval.expr) = exp; }
#line 2746 "build/parser.tab.c"
    break;

  case 62: /* primitive_values: BOOLEAN  */
#line 613 "src/parser/parser.y"
              { 
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = strdup("BOOLEAN");
        exp->value = strdup((yyvsp[0].sval));

        (yyval.expr) = exp; }
#line 2757 "build/parser.tab.c"
    break;

  case 63: /* primitive_values: CHR  */
#line 619 "src/parser/parser.y"
          { 
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = strdup("CHARACTER");
        exp->value = strdup((yyvsp[0].sval));
        (yyval.expr) = exp; }
#line 2767 "build/parser.tab.c"
    break;

  case 64: /* expression: primitive_values  */
#line 628 "src/parser/parser.y"
                       { (yyval.expr) = (yyvsp[0].expr); }
#line 2773 "build/parser.tab.c"
    break;

  case 65: /* expression: ID  */
#line 629 "src/parser/parser.y"
         {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "ID";
        exp->value = strdup((yyvsp[0].sval));
        (yyval.expr) = exp;
        }
#line 2784 "build/parser.tab.c"
    break;

  case 66: /* expression: '-' expression  */
#line 635 "src/parser/parser.y"
                               {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "NEGATIVE";
        exp->value = strdup("-");
        exp->left = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2795 "build/parser.tab.c"
    break;

  case 67: /* expression: expression '+' expression  */
#line 641 "src/parser/parser.y"
                                {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "SUM";
        exp->value = strdup("+");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2807 "build/parser.tab.c"
    break;

  case 68: /* expression: expression '-' expression  */
#line 648 "src/parser/parser.y"
                                {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "SUBTRACT";
        exp->value = strdup("-");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2819 "build/parser.tab.c"
    break;

  case 69: /* expression: expression '*' expression  */
#line 655 "src/parser/parser.y"
                                {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "MULTIPLICATION";
        exp->value = strdup("*");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2831 "build/parser.tab.c"
    break;

  case 70: /* expression: expression '/' expression  */
#line 662 "src/parser/parser.y"
                                {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "DIVIDE";
        exp->value = strdup("/");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2843 "build/parser.tab.c"
    break;

  case 71: /* expression: expression '%' expression  */
#line 669 "src/parser/parser.y"
                                {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "MODULO";
        exp->value = strdup("%");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2855 "build/parser.tab.c"
    break;

  case 72: /* expression: '(' expression ')'  */
#line 676 "src/parser/parser.y"
                         { (yyval.expr) = (yyvsp[-1].expr); }
#line 2861 "build/parser.tab.c"
    break;

  case 73: /* expression: '(' primitive_types ')' expression  */
#line 677 "src/parser/parser.y"
                                         {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "CASTING";
        exp->value = (yyvsp[-2].sval);
        exp->left = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2872 "build/parser.tab.c"
    break;

  case 74: /* expression: expression '&' expression  */
#line 684 "src/parser/parser.y"
                                {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "BITWISE_AND";
        exp->value = strdup("&");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2884 "build/parser.tab.c"
    break;

  case 75: /* expression: expression '|' expression  */
#line 691 "src/parser/parser.y"
                                {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "BITWISE_OR";
        exp->value = strdup("|");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2896 "build/parser.tab.c"
    break;

  case 76: /* expression: expression '^' expression  */
#line 698 "src/parser/parser.y"
                                {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "BITWISE_XOR";
        exp->value = strdup("^");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2908 "build/parser.tab.c"
    break;

  case 77: /* expression: expression LEFT_SHIFT expression  */
#line 706 "src/parser/parser.y"
                                       {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "BITWISE_LEFT_SHIFT";
        exp->value = strdup("<<");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2920 "build/parser.tab.c"
    break;

  case 78: /* expression: expression RIGHT_SHIFT expression  */
#line 715 "src/parser/parser.y"
                                        {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "BITWISE_RIGHT_SHIFT";
        exp->value = strdup(">>");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2932 "build/parser.tab.c"
    break;

  case 79: /* expression: ID EQUALS_OP '(' expression ')'  */
#line 723 "src/parser/parser.y"
                                      {
        Expression *exp = (Expression*)calloc(1, sizeof(Expression));   
        exp->type = "EQUALS_OP";
        exp->value = strdup(".equals");
        exp->left = (Expression*)calloc(1, sizeof(Expression));
        exp->left->type = "ID";
        exp->left->value = strdup((yyvsp[-4].sval));
        exp->right = (yyvsp[-1].expr);
        (yyval.expr) = exp; }
#line 2946 "build/parser.tab.c"
    break;

  case 80: /* expression: expression EQUALS expression  */
#line 733 "src/parser/parser.y"
                                   {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "EQUALS";
        exp->value = strdup("==");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2958 "build/parser.tab.c"
    break;

  case 81: /* expression: expression NOT_EQUALS expression  */
#line 741 "src/parser/parser.y"
                                       {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "NOT_EQUALS";
        exp->value = strdup("!=");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2970 "build/parser.tab.c"
    break;

  case 82: /* expression: expression '>' expression  */
#line 749 "src/parser/parser.y"
                                {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "GREATER";
        exp->value = strdup(">");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2982 "build/parser.tab.c"
    break;

  case 83: /* expression: expression '<' expression  */
#line 757 "src/parser/parser.y"
                                {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "LESS";
        exp->value = strdup("<");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2994 "build/parser.tab.c"
    break;

  case 84: /* expression: expression GREATER_EQUALS expression  */
#line 765 "src/parser/parser.y"
                                           {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "GREATER_EQUALS";
        exp->value = strdup(">=");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 3006 "build/parser.tab.c"
    break;

  case 85: /* expression: expression LESS_EQUALS expression  */
#line 773 "src/parser/parser.y"
                                        {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "LESS_EQUALS";
        exp->value = strdup("<=");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 3018 "build/parser.tab.c"
    break;

  case 86: /* expression: expression AND expression  */
#line 781 "src/parser/parser.y"
                                {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "LOGICAL_AND";
        exp->value = strdup("&&");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 3030 "build/parser.tab.c"
    break;

  case 87: /* expression: expression OR expression  */
#line 789 "src/parser/parser.y"
                               {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "LOGICAL_OR";
        exp->value = strdup("||");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 3042 "build/parser.tab.c"
    break;

  case 88: /* expression: NOT expression  */
#line 797 "src/parser/parser.y"
                     {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "LOGICAL_NOT";
        exp->value = strdup("!");
        exp->left = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 3053 "build/parser.tab.c"
    break;

  case 89: /* expression: INTEGER_OBJ '.' PARSEINT '(' expression ')'  */
#line 804 "src/parser/parser.y"
                                                  {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "PARSEINT";
        exp->value = strdup("Integer.parseInt");
        exp->left = (yyvsp[-1].expr);
        (yyval.expr) = exp; }
#line 3064 "build/parser.tab.c"
    break;

  case 90: /* expression: DOUBLE_OBJ '.' PARSEDOUBLE '(' expression ')'  */
#line 811 "src/parser/parser.y"
                                                    {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "PARSEDOUBLE";
        exp->value = strdup("Double.parseDouble");
        exp->left = (yyvsp[-1].expr);
        (yyval.expr) = exp; }
#line 3075 "build/parser.tab.c"
    break;

  case 91: /* expression: FLOAT_OBJ '.' PARSEFLOAT '(' expression ')'  */
#line 818 "src/parser/parser.y"
                                                  {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "PARSEFLOAT";
        exp->value = strdup("Float.parseFloat");
        exp->left = (yyvsp[-1].expr);
        (yyval.expr) = exp; }
#line 3086 "build/parser.tab.c"
    break;

  case 92: /* expression: STRING '.' VALUEOF '(' expression ')'  */
#line 825 "src/parser/parser.y"
                                            {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "VALUEOF";
        exp->value = strdup("String.valueOf");
        exp->left = (yyvsp[-1].expr);
        (yyval.expr) = exp; }
#line 3097 "build/parser.tab.c"
    break;

  case 93: /* expression: STRING '.' JOIN '(' exprList ')'  */
#line 832 "src/parser/parser.y"
                                       {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "JOIN";
        exp->value = strdup("String.join");
        exp->list = (yyvsp[-1].exprList);
        (yyval.expr) = exp; }
#line 3108 "build/parser.tab.c"
    break;

  case 94: /* expression: ARRAYS '.' INDEXOF '(' ID ',' expression ')'  */
#line 839 "src/parser/parser.y"
                                                   {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "INDEXOF";
        exp->value = (yyvsp[-3].sval);
        exp->left = (yyvsp[-1].expr);
        (yyval.expr) = exp; }
#line 3119 "build/parser.tab.c"
    break;

  case 95: /* expression: ID '.' LENGTH  */
#line 846 "src/parser/parser.y"
                    {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "LENGTH";
        exp->value = strdup((yyvsp[-2].sval));
        (yyval.expr) = exp; }
#line 3129 "build/parser.tab.c"
    break;

  case 96: /* expression: ID '.' ADD '(' expression ')'  */
#line 852 "src/parser/parser.y"
                                    {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "ADD";
        exp->value = strdup((yyvsp[-5].sval));
        exp->left = (yyvsp[-1].expr);
        (yyval.expr) = exp; }
#line 3140 "build/parser.tab.c"
    break;

  case 97: /* expression: ID '[' expression ']'  */
#line 859 "src/parser/parser.y"
                            {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "VECTOR_ACCESS";
        exp->value = (yyvsp[-3].sval);
        exp->left = (yyvsp[-1].expr);
        (yyval.expr) = exp; }
#line 3151 "build/parser.tab.c"
    break;

  case 98: /* expression: ID '[' expression ']' '[' expression ']'  */
#line 866 "src/parser/parser.y"
                                               {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "MATRIX_ACCESS";
        exp->value = (yyvsp[-6].sval);
        exp->left = (yyvsp[-4].expr);
        exp->right = (yyvsp[-1].expr);
        (yyval.expr) = exp;
    }
#line 3164 "build/parser.tab.c"
    break;

  case 99: /* expression: ID dimensions_expressions  */
#line 875 "src/parser/parser.y"
                                {
        fprintf(stderr,"Dimensiones de acceso");
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "ARRAY_ACCESS";
        exp->value = (yyvsp[-1].sval);
        exp->list = (yyvsp[0].exprList);
        (yyval.expr) = exp;
    }
#line 3177 "build/parser.tab.c"
    break;

  case 100: /* expression: ID '(' exprList ')'  */
#line 884 "src/parser/parser.y"
                          {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "FUNCTION_CALL";
        exp->value = strdup((yyvsp[-3].sval));
        exp->list = (yyvsp[-1].exprList);
        (yyval.expr) = exp;
    }
#line 3189 "build/parser.tab.c"
    break;

  case 101: /* exprList: %empty  */
#line 893 "src/parser/parser.y"
                { 
        ExpressionList* exprList = create_expression_list();
        (yyval.exprList) = exprList;
    }
#line 3198 "build/parser.tab.c"
    break;

  case 102: /* exprList: expression  */
#line 897 "src/parser/parser.y"
                 {
        ExpressionList* exprList = create_expression_list();
        ExpressionList_add(exprList, (yyvsp[0].expr));
        (yyval.exprList) = exprList;
     }
#line 3208 "build/parser.tab.c"
    break;

  case 103: /* exprList: exprList ',' expression  */
#line 902 "src/parser/parser.y"
                              {
        ExpressionList_add((yyvsp[-2].exprList), (yyvsp[0].expr));
        (yyval.exprList) = (yyvsp[-2].exprList);
     }
#line 3217 "build/parser.tab.c"
    break;

  case 104: /* IF_STATEMENT: IF '(' expression ')' '{' BREAK_LINE sentences '}' IF_LIST ELSE_STATEMENT  */
#line 912 "src/parser/parser.y"
                                                                                 {
        IfData* ifdata = (IfData*)calloc(1, sizeof(IfData));
        ifdata->condition = (yyvsp[-7].expr);
        ifdata->block = (yyvsp[-3].instrList);
        ifdata->elseIfs = (yyvsp[-1].ifnodelist);
        ifdata->elseBlock = (yyvsp[0].instrList);
        (yyval.ifdata) = ifdata;
    }
#line 3230 "build/parser.tab.c"
    break;

  case 105: /* IF_LIST: %empty  */
#line 922 "src/parser/parser.y"
                { (yyval.ifnodelist) = createIfNodeList(); }
#line 3236 "build/parser.tab.c"
    break;

  case 106: /* IF_LIST: IF_LIST ELSE IF '(' expression ')' '{' BREAK_LINE sentences '}'  */
#line 923 "src/parser/parser.y"
                                                                        {
        IfData* elseIfNode = (IfData*)malloc(sizeof(IfData));
        elseIfNode->condition = (yyvsp[-5].expr);
        elseIfNode->block = (yyvsp[-1].instrList);
        insertIfNode((yyvsp[-9].ifnodelist), elseIfNode);
        (yyval.ifnodelist) = (yyvsp[-9].ifnodelist);
    }
#line 3248 "build/parser.tab.c"
    break;

  case 107: /* ELSE_STATEMENT: %empty  */
#line 932 "src/parser/parser.y"
                { (yyval.instrList) = NULL; }
#line 3254 "build/parser.tab.c"
    break;

  case 108: /* ELSE_STATEMENT: ELSE '{' BREAK_LINE sentences '}'  */
#line 933 "src/parser/parser.y"
                                        { (yyval.instrList) = (yyvsp[-1].instrList); }
#line 3260 "build/parser.tab.c"
    break;

  case 109: /* SWITCH_STATEMENT: SWITCH '(' ID ')' '{' BREAK_LINE CASES DEFAULT_CASE '}'  */
#line 937 "src/parser/parser.y"
                                                            {
        SwitchData* switchdata = (SwitchData*)malloc(sizeof(SwitchData));
        switchdata->condition = strdup((yyvsp[-6].sval));
        switchdata->cases = (yyvsp[-2].casenodelist);
        switchdata->defaultCase = (yyvsp[-1].instrList);
        (yyval.switchdata) = switchdata;
    }
#line 3272 "build/parser.tab.c"
    break;

  case 110: /* CASES: %empty  */
#line 948 "src/parser/parser.y"
                { (yyval.casenodelist) = CaseNodeList_create(); }
#line 3278 "build/parser.tab.c"
    break;

  case 111: /* CASES: CASES CASE primitive_values ':' BREAK_LINE sentences BREAK ';' BREAK_LINE  */
#line 949 "src/parser/parser.y"
                                                                                {
        CaseData* new_case = (CaseData*)malloc(sizeof(CaseData));
        new_case->condition = (yyvsp[-6].expr);
        new_case->block = (yyvsp[-3].instrList);
        CaseNodeList_add((yyvsp[-8].casenodelist), new_case);
        (yyval.casenodelist) = (yyvsp[-8].casenodelist);
    }
#line 3290 "build/parser.tab.c"
    break;

  case 112: /* DEFAULT_CASE: %empty  */
#line 959 "src/parser/parser.y"
                { (yyval.instrList) = NULL; }
#line 3296 "build/parser.tab.c"
    break;

  case 113: /* DEFAULT_CASE: DEFAULT ':' BREAK_LINE sentences  */
#line 960 "src/parser/parser.y"
                                       { (yyval.instrList) = (yyvsp[0].instrList); }
#line 3302 "build/parser.tab.c"
    break;

  case 114: /* WHILE_STATEMENT: WHILE '(' expression ')' '{' BREAK_LINE sentences '}'  */
#line 968 "src/parser/parser.y"
                                                          {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->whileData = (WhileData*)malloc(sizeof(WhileData));
        instP->whileData->condition = (yyvsp[-5].expr);
        instP->whileData->block = (yyvsp[-1].instrList);
        instP->column = (yylsp[-7]).first_column;
        (yyval.instr) = instP;
    }
#line 3315 "build/parser.tab.c"
    break;

  case 115: /* FOR_STATEMENT: FOR '(' declaration ';' expression ';' ID INCREMENT ')' '{' BREAK_LINE sentences '}'  */
#line 980 "src/parser/parser.y"
                                                                                         {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->forData = (ForData*)malloc(sizeof(ForData));
        instP->forData->init = (yyvsp[-10].instr);
        instP->forData->init->InstType = "DECLARATION";
        instP->forData->init->line = (yylsp[-12]).first_line;
        instP->forData->condition = (yyvsp[-8].expr);

        Instruccion* updateInst = (Instruccion*)malloc(sizeof(Instruccion));
        updateInst->id = (yyvsp[-6].sval);
        updateInst->InstType = "ASSIGNMENT";
        updateInst->value = (Expression*)calloc(1, sizeof(Expression));
        updateInst->value->left = (Expression*)calloc(1, sizeof(Expression));
        updateInst->value->left->type = "ID";
        updateInst->value->left->value = strdup((yyvsp[-6].sval));
        updateInst->value->type = "SUM";
        updateInst->value->value = strdup("+");
        updateInst->value->right = (Expression*)calloc(1, sizeof(Expression));
        updateInst->value->right->type = "INTEGER";
        updateInst->value->right->value = strdup("1");

        instP->forData->update = updateInst;
        instP->forData->block = (yyvsp[-1].instrList);
        instP->column = (yylsp[-12]).first_column;
        (yyval.instr) = instP;
    }
#line 3346 "build/parser.tab.c"
    break;

  case 116: /* FOREACH_STATEMENT: FOR '(' primitive_types ID ':' ID ')' '{' BREAK_LINE sentences '}'  */
#line 1008 "src/parser/parser.y"
                                                                       {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->forEachData = (ForEachData*)malloc(sizeof(ForEachData));
        instP->forEachData->type = (yyvsp[-8].sval);
        instP->forEachData->item = (yyvsp[-7].sval);
        instP->forEachData->array = (yyvsp[-5].sval);
        instP->forEachData->block = (yyvsp[-1].instrList);
        instP->column = (yylsp[-10]).first_column;
        (yyval.instr) = instP;
    }
#line 3361 "build/parser.tab.c"
    break;

  case 117: /* dimensions: %empty  */
#line 1021 "src/parser/parser.y"
                  { (yyval.ival) = 0; }
#line 3367 "build/parser.tab.c"
    break;

  case 118: /* dimensions: dimensions '[' ']'  */
#line 1022 "src/parser/parser.y"
                         { (yyval.ival) = (yyvsp[-2].ival) + 1; }
#line 3373 "build/parser.tab.c"
    break;

  case 119: /* dimensions_value_list: '[' NUM ']'  */
#line 1025 "src/parser/parser.y"
                  { 
        DimensionsList* dimList = (DimensionsList*)malloc(sizeof(DimensionsList));
        dimList->dimensions = (int*)malloc(sizeof(int));
        dimList->dimensions[0] = atoi((yyvsp[-1].sval));
        dimList->count = 1;
        (yyval.dimlist) = dimList;
    }
#line 3385 "build/parser.tab.c"
    break;

  case 120: /* dimensions_value_list: dimensions_value_list '[' NUM ']'  */
#line 1032 "src/parser/parser.y"
                                        { 
        (yyvsp[-3].dimlist)->dimensions = (int*)realloc((yyvsp[-3].dimlist)->dimensions, sizeof(int) * ((yyvsp[-3].dimlist)->count + 1));
        (yyvsp[-3].dimlist)->dimensions[(yyvsp[-3].dimlist)->count] = atoi((yyvsp[-1].sval));
        (yyvsp[-3].dimlist)->count += 1;
        (yyval.dimlist) = (yyvsp[-3].dimlist);
    }
#line 3396 "build/parser.tab.c"
    break;

  case 121: /* dimensions_expressions: '[' expression ']'  */
#line 1040 "src/parser/parser.y"
                       { 
        ExpressionList* exprList = create_expression_list();
        ExpressionList_add(exprList, (yyvsp[-1].expr));
        (yyval.exprList) = exprList;
    }
#line 3406 "build/parser.tab.c"
    break;

  case 122: /* dimensions_expressions: dimensions_expressions '[' expression ']'  */
#line 1045 "src/parser/parser.y"
                                                {
        ExpressionList_add((yyvsp[-3].exprList), (yyvsp[-1].expr));
        (yyval.exprList) = (yyvsp[-3].exprList);
     }
#line 3415 "build/parser.tab.c"
    break;

  case 123: /* vectorList: %empty  */
#line 1052 "src/parser/parser.y"
                  { 
        VectorList* vecList = VectorList_create();
        (yyval.VList) = vecList;
    }
#line 3424 "build/parser.tab.c"
    break;

  case 124: /* vectorList: expression  */
#line 1056 "src/parser/parser.y"
                 {
        VectorList* vecList = VectorList_create();
        VectorList_addExp(vecList, (yyvsp[0].expr));
        (yyval.VList) = vecList;
     }
#line 3434 "build/parser.tab.c"
    break;

  case 125: /* vectorList: vectorList ',' expression  */
#line 1061 "src/parser/parser.y"
                                {
        VectorList_addExp((yyvsp[-2].VList), (yyvsp[0].expr));
        (yyval.VList) = (yyvsp[-2].VList);
     }
#line 3443 "build/parser.tab.c"
    break;

  case 126: /* matrixList: %empty  */
#line 1069 "src/parser/parser.y"
                  { 
        MatrixList* matList = MatrixList_create();
        (yyval.MList) = matList;
    }
#line 3452 "build/parser.tab.c"
    break;

  case 127: /* matrixList: '{' vectorList '}' optional_newlines  */
#line 1073 "src/parser/parser.y"
                                          {
        MatrixList* matList = MatrixList_create();
        MatrixList_add(matList, (yyvsp[-2].VList));
        (yyval.MList) = matList;
     }
#line 3462 "build/parser.tab.c"
    break;

  case 128: /* matrixList: matrixList ',' optional_newlines '{' vectorList '}' optional_newlines  */
#line 1078 "src/parser/parser.y"
                                                                             {
        MatrixList_add((yyvsp[-6].MList), (yyvsp[-2].VList));
        (yyval.MList) = (yyvsp[-6].MList);
     }
#line 3471 "build/parser.tab.c"
    break;

  case 129: /* dimension_expression: '{' optional_newlines dimension_values_list optional_newlines '}'  */
#line 1084 "src/parser/parser.y"
                                                                      {(yyval.list) = (yyvsp[-2].list); }
#line 3477 "build/parser.tab.c"
    break;

  case 130: /* dimension_values_list: %empty  */
#line 1087 "src/parser/parser.y"
                  {  (yyval.list) = List_create(); }
#line 3483 "build/parser.tab.c"
    break;

  case 131: /* dimension_values_list: dimension_value optional_newlines  */
#line 1088 "src/parser/parser.y"
                                        { 
        List* list = List_create(); 
        List_add(list, (yyvsp[-1].listdata)); 
        (yyval.list) = list; 
    }
#line 3493 "build/parser.tab.c"
    break;

  case 132: /* dimension_values_list: dimension_values_list ',' optional_newlines dimension_value optional_newlines  */
#line 1093 "src/parser/parser.y"
                                                                                    {List_add((yyvsp[-4].list), (yyvsp[-1].listdata)); (yyval.list) = (yyvsp[-4].list);}
#line 3499 "build/parser.tab.c"
    break;

  case 133: /* dimension_value: expression  */
#line 1096 "src/parser/parser.y"
               { ListData* data = (ListData*)calloc(1, sizeof(ListData));
                  data->exprData = (yyvsp[0].expr);
                  (yyval.listdata) = data; }
#line 3507 "build/parser.tab.c"
    break;

  case 134: /* dimension_value: dimension_expression  */
#line 1099 "src/parser/parser.y"
                           {
        ListData* data = (ListData*)calloc(1, sizeof(ListData));
        data->listData = (yyvsp[0].list);
        (yyval.listdata) = data;
    }
#line 3517 "build/parser.tab.c"
    break;

  case 137: /* paramsList: %empty  */
#line 1114 "src/parser/parser.y"
                { (yyval.paramlist) = createParamsList(); }
#line 3523 "build/parser.tab.c"
    break;

  case 138: /* paramsList: primitive_types ID  */
#line 1115 "src/parser/parser.y"
                         {
        paramsList* paramList = createParamsList();
        addParam(paramList, (yyvsp[-1].sval), (yyvsp[0].sval));
        (yyval.paramlist) = paramList;
     }
#line 3533 "build/parser.tab.c"
    break;

  case 139: /* paramsList: paramsList ',' primitive_types ID  */
#line 1120 "src/parser/parser.y"
                                        {
        addParam((yyvsp[-3].paramlist), (yyvsp[-1].sval), (yyvsp[0].sval));
        (yyval.paramlist) = (yyvsp[-3].paramlist);
     }
#line 3542 "build/parser.tab.c"
    break;


#line 3546 "build/parser.tab.c"

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
  *++yylsp = yyloc;

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
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  yyerror_range[1] = yylloc;
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
                      yytoken, &yylval, &yylloc);
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

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
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 1125 "src/parser/parser.y"


// Función para reinicializar el estado del parser
void reset_parser_state() {
    // Reinicializar solo las variables básicas del lexer
    extern int yylineno;
    extern int yycolumn; 
    yylineno = 1;
    yycolumn = 1;
}

int yyerror(const char *s)
{
    extern YYLTYPE yylloc;
    
    // Crear mensaje de error más detallado
    char detailed_message[512];
    snprintf(detailed_message, sizeof(detailed_message), 
             "%s en línea %d, columna %d", s, yylloc.first_line, yylloc.first_column);
    
    printf("Syntax Error: %s\n", detailed_message);
    
    // Verificar que list_errors esté inicializada
    if (list_errors == NULL) {
        list_errors = createErrorList();
    }
    
    Error *error = malloc(sizeof(Error));
    error->type = strdup("Sintáctico");
    error->environment = strdup("Global");
    error->message = strdup(detailed_message);
    error->line = yylloc.first_line;
    error->column = yylloc.first_column;
    
    insertError(list_errors, error);
    
    // Limpiar el estado del parser para mejor recuperación
    extern int yychar;
    yychar = YYEMPTY;
    
    // Continuar con el análisis (no abortar)
    return 0;
}
