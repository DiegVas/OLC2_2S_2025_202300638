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
  YYSYMBOL_65_ = 65,                       /* '+'  */
  YYSYMBOL_66_ = 66,                       /* '-'  */
  YYSYMBOL_67_ = 67,                       /* '*'  */
  YYSYMBOL_68_ = 68,                       /* '/'  */
  YYSYMBOL_69_ = 69,                       /* '('  */
  YYSYMBOL_70_ = 70,                       /* ')'  */
  YYSYMBOL_71_ = 71,                       /* ';'  */
  YYSYMBOL_72_ = 72,                       /* '='  */
  YYSYMBOL_73_ = 73,                       /* '['  */
  YYSYMBOL_74_ = 74,                       /* ']'  */
  YYSYMBOL_75_ = 75,                       /* '{'  */
  YYSYMBOL_76_ = 76,                       /* '}'  */
  YYSYMBOL_77_ = 77,                       /* '.'  */
  YYSYMBOL_78_ = 78,                       /* '%'  */
  YYSYMBOL_79_ = 79,                       /* '&'  */
  YYSYMBOL_80_ = 80,                       /* '|'  */
  YYSYMBOL_81_ = 81,                       /* '^'  */
  YYSYMBOL_82_ = 82,                       /* '>'  */
  YYSYMBOL_83_ = 83,                       /* '<'  */
  YYSYMBOL_84_ = 84,                       /* ','  */
  YYSYMBOL_85_ = 85,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 86,                  /* $accept  */
  YYSYMBOL_program = 87,                   /* program  */
  YYSYMBOL_sentences = 88,                 /* sentences  */
  YYSYMBOL_sentence = 89,                  /* sentence  */
  YYSYMBOL_separator = 90,                 /* separator  */
  YYSYMBOL_instruction = 91,               /* instruction  */
  YYSYMBOL_assignment = 92,                /* assignment  */
  YYSYMBOL_assignment_expression = 93,     /* assignment_expression  */
  YYSYMBOL_declaration = 94,               /* declaration  */
  YYSYMBOL_primitive_types = 95,           /* primitive_types  */
  YYSYMBOL_primitive_values = 96,          /* primitive_values  */
  YYSYMBOL_expression = 97,                /* expression  */
  YYSYMBOL_exprList = 98,                  /* exprList  */
  YYSYMBOL_IF_STATEMENT = 99,              /* IF_STATEMENT  */
  YYSYMBOL_IF_LIST = 100,                  /* IF_LIST  */
  YYSYMBOL_ELSE_STATEMENT = 101,           /* ELSE_STATEMENT  */
  YYSYMBOL_SWITCH_STATEMENT = 102,         /* SWITCH_STATEMENT  */
  YYSYMBOL_CASES = 103,                    /* CASES  */
  YYSYMBOL_DEFAULT_CASE = 104,             /* DEFAULT_CASE  */
  YYSYMBOL_WHILE_STATEMENT = 105,          /* WHILE_STATEMENT  */
  YYSYMBOL_FOR_STATEMENT = 106,            /* FOR_STATEMENT  */
  YYSYMBOL_dimensions = 107,               /* dimensions  */
  YYSYMBOL_vectorList = 108,               /* vectorList  */
  YYSYMBOL_matrixList = 109,               /* matrixList  */
  YYSYMBOL_dimension_expression = 110,     /* dimension_expression  */
  YYSYMBOL_dimension_values_list = 111,    /* dimension_values_list  */
  YYSYMBOL_dimension_value = 112,          /* dimension_value  */
  YYSYMBOL_optional_newlines = 113,        /* optional_newlines  */
  YYSYMBOL_paramsList = 114                /* paramsList  */
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
#define YYLAST   1489

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  86
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  132
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  345

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   319


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
       2,     2,     2,     2,     2,     2,     2,    78,    79,     2,
      69,    70,    67,    65,    84,    66,    77,    68,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    85,    71,
      83,    72,    82,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    73,     2,    74,    81,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    75,    80,    76,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   117,   117,   131,   141,   146,   149,   152,   159,   160,
     164,   169,   176,   181,   189,   197,   202,   207,   214,   221,
     229,   242,   249,   257,   266,   272,   278,   284,   290,   296,
     302,   308,   314,   320,   326,   335,   346,   371,   383,   397,
     406,   415,   430,   444,   454,   473,   484,   493,   507,   508,
     509,   510,   511,   512,   517,   523,   529,   535,   541,   547,
     556,   557,   563,   569,   576,   583,   590,   597,   604,   605,
     612,   619,   626,   634,   643,   651,   661,   669,   677,   685,
     693,   701,   709,   717,   725,   732,   739,   746,   753,   760,
     767,   774,   780,   787,   794,   803,   810,   820,   824,   829,
     833,   838,   850,   860,   861,   870,   871,   875,   886,   887,
     897,   898,   906,   918,   949,   950,   954,   958,   963,   971,
     975,   980,   986,   989,   990,   995,   998,  1001,  1008,  1009,
    1016,  1017,  1022
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
  "INCREMENT", "ARRAYS", "INDEXOF", "LENGTH", "ADD", "'+'", "'-'", "'*'",
  "'/'", "'('", "')'", "';'", "'='", "'['", "']'", "'{'", "'}'", "'.'",
  "'%'", "'&'", "'|'", "'^'", "'>'", "'<'", "','", "':'", "$accept",
  "program", "sentences", "sentence", "separator", "instruction",
  "assignment", "assignment_expression", "declaration", "primitive_types",
  "primitive_values", "expression", "exprList", "IF_STATEMENT", "IF_LIST",
  "ELSE_STATEMENT", "SWITCH_STATEMENT", "CASES", "DEFAULT_CASE",
  "WHILE_STATEMENT", "FOR_STATEMENT", "dimensions", "vectorList",
  "matrixList", "dimension_expression", "dimension_values_list",
  "dimension_value", "optional_newlines", "paramsList", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-291)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-124)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -291,    14,   634,  -291,    -7,     5,  -291,  -291,  -291,  -291,
    -291,  -291,  -291,   125,   -51,   -15,     7,  -291,  -291,    10,
      44,   736,    63,  -291,  -291,  -291,    -7,  -291,   145,  -291,
      -3,  -291,  -291,  -291,  -291,  -291,    45,   736,   736,   115,
     736,   736,   117,   736,    16,  -291,  -291,  -291,  -291,    29,
    -291,  -291,  -291,    66,    67,    68,    69,   736,    72,   736,
     717,  -291,  1344,    90,  -291,   736,   736,   736,   736,   736,
     736,   736,   736,   736,   736,  -291,    95,    91,  -291,  1344,
     783,    94,   817,   848,   101,   879,   108,   112,   229,   736,
      41,    22,   151,   150,   149,  1344,   138,  1375,    66,   131,
     910,   736,   736,   736,   736,   736,   736,   736,   736,   736,
     736,   736,   736,   736,   736,   736,   736,   736,   736,   132,
    1344,  1344,  1344,  1344,  1344,  1344,  1344,  1344,  1344,  1344,
     125,   736,   -30,    -1,    55,   736,  -291,   128,   135,   136,
     736,   736,  -291,  1344,   -63,   941,  -291,   118,   137,   143,
     146,   148,   152,   155,   736,  -291,  1344,  1344,  1344,  1344,
    1344,  1344,  1344,  1344,  1375,  1375,  1406,  1406,  1344,  1344,
    1344,  1344,  1344,  1344,   139,   201,   -60,  1344,   144,   154,
     153,   162,   736,   736,  1344,   207,   209,   218,   972,  1003,
    -291,   786,   168,   736,   736,   229,   736,   736,   736,   237,
    1406,   233,  -291,   170,   125,  -291,  -291,  -291,    -4,   241,
    1344,  1034,  -291,  -291,  -291,   246,  -291,  -291,  1344,   736,
    1065,  1096,   -47,  1127,  1158,  1189,   172,  -291,   248,   255,
     147,   186,   125,   245,   193,   194,   319,    40,   349,   211,
    1220,  -291,  -291,  -291,  -291,  -291,  -291,   736,   390,  -291,
    -291,  -291,  1344,  -291,   183,  -291,   205,   199,  1344,    23,
     -18,   736,  -291,   126,   188,   203,  -291,   212,  -291,  1251,
    -291,   420,  -291,   -10,   264,   208,   273,  -291,   736,   125,
    -291,  1344,   262,   200,   276,  -291,   213,  -291,  -291,   606,
    -291,   736,   210,  1344,   216,    -2,   -14,  -291,   280,  -291,
     281,  -291,  1282,  -291,   285,   245,    27,   225,   289,  -291,
     461,  -291,   264,  -291,   222,    32,  -291,  -291,   736,  -291,
     676,   491,   228,  -291,     0,  1313,   532,   232,  -291,   296,
     264,   245,   230,  -291,   297,   235,    33,   299,  -291,  -291,
    -291,  -291,   264,   562,  -291
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     1,     0,    35,     8,    48,    49,    53,
      51,    50,    52,     0,     0,     0,     0,    17,    18,     0,
       0,     0,     0,     9,     3,     6,     0,    12,     0,    10,
       0,    13,    14,    15,    16,     7,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    96,    55,    59,    58,    61,
      54,    56,    57,     0,     0,     0,     0,     0,     0,     0,
       0,    60,    19,     0,     5,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    34,    38,     0,    20,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    84,     0,    62,    49,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
     130,     0,     0,     0,    36,     0,    11,     0,     0,     0,
       0,     0,    96,    98,     0,     0,    91,     0,     0,     0,
       0,     0,     0,     0,     0,    68,    73,    74,    76,    77,
      82,    83,    80,    81,    63,    64,    65,    66,    67,    70,
      71,    72,    78,    79,     0,     0,     0,    37,     0,     0,
       0,     0,     0,     0,    39,     0,     0,     0,     0,     0,
      95,     0,    93,     0,     0,     0,     0,     0,     0,     0,
      69,     0,   131,     0,     0,   128,    47,   115,     0,     0,
      22,     0,     4,   108,     4,     0,    75,    96,    99,     0,
       0,     0,     0,     0,     0,     0,     0,     4,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   110,     0,     0,
       0,    92,    88,    89,    85,    86,    87,     0,     0,     4,
     132,   129,   126,   127,   128,   128,     0,     0,   117,     0,
       0,     0,   103,     0,     0,     0,   112,     0,    94,     0,
      46,     0,   128,     0,   124,     0,     0,    40,     0,     0,
     128,    23,   105,     0,     0,   107,     0,    90,    45,     0,
     122,     0,     0,   118,     0,   119,     0,   102,     0,     4,
       0,   128,     0,    41,     0,     0,     0,     0,     0,     4,
       0,     4,   125,    42,     0,     0,    43,   128,     0,     4,
       0,     0,     0,   128,     0,     0,     0,    17,   113,     0,
     120,     0,     0,   106,     0,     0,     0,     0,   109,    44,
     128,     4,   121,     0,   104
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -291,  -291,  -187,  -291,     9,  -291,  -291,  -291,   263,    -5,
      49,   -21,   120,  -291,  -291,  -291,  -291,  -291,  -291,  -291,
    -291,  -291,  -290,  -291,   140,  -291,    28,  -154,  -291
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     2,    24,    25,    26,    27,    28,    29,    30,
      61,   258,   144,    31,   282,   297,    32,   237,   265,    33,
      34,   132,   259,   306,   253,   254,   255,   230,   176
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      62,   251,   231,    76,     6,   180,   307,   190,    39,   251,
     203,   251,   279,    35,     3,   315,    79,    80,    40,    82,
      83,   191,    85,   243,   204,   236,   232,   238,     7,     8,
       9,    10,    11,    12,    13,    64,    95,   191,    97,   100,
     248,   336,   178,   179,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,    41,    99,    22,   280,    87,   148,
     149,   308,   271,   263,    23,   264,   290,   143,   145,    63,
      77,   233,   181,   305,    36,   331,    42,    37,    38,    43,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,    88,   277,
     273,   274,    89,   316,   146,   147,    90,   278,   323,   340,
     177,   317,   310,    44,   184,    78,   278,   278,   289,   188,
     189,    81,   320,    84,   321,   175,   295,   182,   183,    46,
      47,    48,   326,   200,    50,    51,    52,     7,     8,     9,
      10,    11,    12,    91,    92,    93,    94,   312,    45,    96,
      46,    47,    48,    49,   343,    50,    51,    52,   251,   119,
      53,   210,   211,   324,   130,   133,   135,   131,  -114,   330,
     218,   138,   220,   221,   143,   223,   224,   225,    54,   140,
      55,   141,    56,   150,   151,   152,   342,   193,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,   240,   229,
     153,   154,   174,   185,    57,    75,   194,   202,    58,   252,
     186,   187,   195,    59,   201,   196,    60,   197,   212,   205,
     213,   198,   205,  -123,   199,   208,   269,   257,   207,   214,
     142,  -123,    46,    47,    48,    49,   209,    50,    51,    52,
     281,   219,    53,   226,   227,   228,    45,   234,    46,    47,
      48,    49,   239,    50,    51,    52,   247,   293,    53,   249,
      54,   250,    55,   256,    56,   260,   261,   272,   252,   275,
     302,   267,   276,   284,   294,   251,    54,   291,    55,   285,
      56,   292,   286,   296,   303,   298,    57,   299,   300,   304,
      58,   309,   311,   314,   318,    59,   322,   325,    60,   -97,
     319,   329,    57,   334,   335,   337,    58,    86,   338,   339,
     341,    59,   283,   -97,    60,   222,     0,   301,   206,     0,
       4,  -116,     0,     0,     0,     5,     0,     0,     0,  -116,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
       0,    16,     0,    17,     0,    18,    19,    20,     0,     0,
       4,     0,     0,     0,     0,     5,     0,     0,    21,    22,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
       0,    16,     0,    17,     0,    18,    19,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    21,    22,
      23,     4,     0,     0,     0,   262,     5,     0,     0,     0,
       0,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,     0,    16,     0,    17,     0,    18,    19,    20,     0,
      23,     4,     0,     0,     0,   266,     5,     0,     0,    21,
      22,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,     0,    16,     0,    17,     0,    18,    19,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    21,
      22,    23,     4,     0,     0,     0,   270,     5,     0,     0,
       0,     0,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,     0,    16,     0,    17,     0,    18,    19,    20,
       0,    23,     4,     0,     0,     0,   288,     5,     0,     0,
      21,    22,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,     0,    16,     0,    17,     0,    18,    19,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      21,    22,    23,     4,     0,     0,     0,  -111,     5,     0,
       0,     0,     0,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,     0,    16,     0,    17,     0,    18,    19,
      20,     0,    23,     4,     0,     0,     0,   328,     5,     0,
       0,    21,    22,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,     0,    16,     0,    17,     0,    18,    19,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    21,    22,    23,     0,     0,     0,    45,   333,    46,
      47,    48,    49,     0,    50,    51,    52,   251,     0,    53,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    23,    -2,     4,     0,    54,   344,    55,
       5,    56,     0,     0,     0,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,     0,    16,     0,    17,     0,
      18,    19,    20,    57,     0,     0,     0,    58,     0,     0,
       0,     0,    59,    21,    22,    60,     0,     4,     0,     0,
       0,   205,     5,     0,     0,     0,     0,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,     0,    16,     0,
     327,     0,    18,    19,    20,    23,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    21,    22,     0,    45,     0,
      46,    47,    48,    49,     0,    50,    51,    52,     0,     7,
      98,     9,    10,    11,    12,     0,     0,    45,     0,    46,
      47,    48,    49,     0,    50,    51,    52,    23,    54,    53,
      55,     0,    56,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    54,     0,    55,
       0,    56,     0,     0,    57,     0,     0,     0,    58,     0,
       0,     0,     0,    59,     0,     0,    60,   217,     0,    46,
      47,    48,    49,    57,    50,    51,    52,    58,     0,    53,
       0,     0,    59,     0,     0,    60,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    54,     0,    55,
       0,    56,     0,     0,   101,   102,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   103,   104,   105,   106,
       0,   107,   108,    57,     0,     0,     0,    58,   109,   110,
     111,   112,    59,     0,     0,    60,     0,   134,   101,   102,
       0,   113,   114,   115,   116,   117,   118,     0,     0,     0,
     103,   104,   105,   106,     0,   107,   108,     0,     0,     0,
       0,     0,   109,   110,   111,   112,     0,   136,     0,   101,
     102,     0,     0,     0,     0,   113,   114,   115,   116,   117,
     118,   103,   104,   105,   106,     0,   107,   108,     0,     0,
       0,     0,     0,   109,   110,   111,   112,     0,   137,     0,
     101,   102,     0,     0,     0,     0,   113,   114,   115,   116,
     117,   118,   103,   104,   105,   106,     0,   107,   108,     0,
       0,     0,     0,     0,   109,   110,   111,   112,     0,   139,
       0,   101,   102,     0,     0,     0,     0,   113,   114,   115,
     116,   117,   118,   103,   104,   105,   106,     0,   107,   108,
       0,     0,     0,     0,     0,   109,   110,   111,   112,     0,
     155,     0,   101,   102,     0,     0,     0,     0,   113,   114,
     115,   116,   117,   118,   103,   104,   105,   106,     0,   107,
     108,     0,     0,     0,     0,     0,   109,   110,   111,   112,
       0,     0,     0,   101,   102,   192,     0,     0,     0,   113,
     114,   115,   116,   117,   118,   103,   104,   105,   106,     0,
     107,   108,     0,     0,     0,     0,     0,   109,   110,   111,
     112,     0,     0,   215,   101,   102,     0,     0,     0,     0,
     113,   114,   115,   116,   117,   118,   103,   104,   105,   106,
       0,   107,   108,     0,     0,     0,     0,     0,   109,   110,
     111,   112,     0,   216,     0,   101,   102,     0,     0,     0,
       0,   113,   114,   115,   116,   117,   118,   103,   104,   105,
     106,     0,   107,   108,     0,     0,     0,     0,     0,   109,
     110,   111,   112,     0,     0,     0,   101,   102,   235,     0,
       0,     0,   113,   114,   115,   116,   117,   118,   103,   104,
     105,   106,     0,   107,   108,     0,     0,     0,     0,     0,
     109,   110,   111,   112,     0,   241,     0,   101,   102,     0,
       0,     0,     0,   113,   114,   115,   116,   117,   118,   103,
     104,   105,   106,     0,   107,   108,     0,     0,     0,     0,
       0,   109,   110,   111,   112,     0,   242,     0,   101,   102,
       0,     0,     0,     0,   113,   114,   115,   116,   117,   118,
     103,   104,   105,   106,     0,   107,   108,     0,     0,     0,
       0,     0,   109,   110,   111,   112,     0,   244,     0,   101,
     102,     0,     0,     0,     0,   113,   114,   115,   116,   117,
     118,   103,   104,   105,   106,     0,   107,   108,     0,     0,
       0,     0,     0,   109,   110,   111,   112,     0,   245,     0,
     101,   102,     0,     0,     0,     0,   113,   114,   115,   116,
     117,   118,   103,   104,   105,   106,     0,   107,   108,     0,
       0,     0,     0,     0,   109,   110,   111,   112,     0,   246,
       0,   101,   102,     0,     0,     0,     0,   113,   114,   115,
     116,   117,   118,   103,   104,   105,   106,     0,   107,   108,
       0,     0,     0,     0,     0,   109,   110,   111,   112,     0,
       0,     0,   101,   102,   268,     0,     0,     0,   113,   114,
     115,   116,   117,   118,   103,   104,   105,   106,     0,   107,
     108,     0,     0,     0,     0,     0,   109,   110,   111,   112,
       0,   287,     0,   101,   102,     0,     0,     0,     0,   113,
     114,   115,   116,   117,   118,   103,   104,   105,   106,     0,
     107,   108,     0,     0,     0,     0,     0,   109,   110,   111,
     112,     0,   313,     0,   101,   102,     0,     0,     0,     0,
     113,   114,   115,   116,   117,   118,   103,   104,   105,   106,
       0,   107,   108,     0,     0,     0,     0,     0,   109,   110,
     111,   112,     0,   332,     0,   101,   102,     0,     0,     0,
       0,   113,   114,   115,   116,   117,   118,   103,   104,   105,
     106,     0,   107,   108,     0,     0,     0,     0,     0,   109,
     110,   111,   112,     0,     0,     0,   101,   102,     0,     0,
       0,     0,   113,   114,   115,   116,   117,   118,   103,   104,
     105,   106,     0,   107,   108,     0,     0,     0,     0,     0,
       0,     0,   111,   112,     0,     0,     0,   101,   102,     0,
       0,     0,     0,   113,   114,   115,   116,   117,   118,   103,
     104,   105,   106,     0,   107,   108,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   113,   114,   115,   116,   117,   118
};

static const yytype_int16 yycheck[] =
{
      21,    11,     6,     6,    11,     6,    20,    70,    13,    11,
      70,    11,    30,     4,     0,   305,    37,    38,    69,    40,
      41,    84,    43,    70,    84,   212,    30,   214,    12,    13,
      14,    15,    16,    17,    18,    26,    57,    84,    59,    60,
     227,   331,    72,    73,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    69,    60,    40,    75,    29,    37,
      38,    75,   249,    23,    71,    25,    76,    88,    89,     6,
      73,    75,    73,    75,    69,    75,    69,    72,    73,    69,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,    69,    76,
     254,   255,    73,    76,    63,    64,    77,    84,    76,    76,
     131,    84,   299,    69,   135,    70,    84,    84,   272,   140,
     141,     6,   309,     6,   311,   130,   280,    72,    73,     3,
       4,     5,   319,   154,     8,     9,    10,    12,    13,    14,
      15,    16,    17,    77,    77,    77,    77,   301,     1,    77,
       3,     4,     5,     6,   341,     8,     9,    10,    11,    69,
      13,   182,   183,   317,    69,    74,    72,    72,    73,   323,
     191,    70,   193,   194,   195,   196,   197,   198,    31,    71,
      33,    69,    35,    32,    34,    36,   340,    69,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,   219,   204,
      62,    70,    70,    75,    57,    60,    69,     6,    61,   230,
      75,    75,    69,    66,    75,    69,    69,    69,    11,    75,
      11,    69,    75,    76,    69,    72,   247,   232,    74,    11,
       1,    84,     3,     4,     5,     6,    74,     8,     9,    10,
     261,    73,    13,     6,    11,    75,     1,     6,     3,     4,
       5,     6,     6,     8,     9,    10,    84,   278,    13,    11,
      31,     6,    33,    77,    35,    72,    72,    84,   289,    64,
     291,    60,    73,    85,   279,    11,    31,    69,    33,    76,
      35,     8,    70,    21,    74,    85,    57,    11,    75,    73,
      61,    11,    11,     8,    69,    66,    74,   318,    69,    70,
      11,    73,    57,    71,     8,    75,    61,    44,    11,    74,
      11,    66,   263,    84,    69,   195,    -1,   289,   178,    -1,
       1,    76,    -1,    -1,    -1,     6,    -1,    -1,    -1,    84,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    22,    -1,    24,    -1,    26,    27,    28,    -1,    -1,
       1,    -1,    -1,    -1,    -1,     6,    -1,    -1,    39,    40,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    22,    -1,    24,    -1,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,
      71,     1,    -1,    -1,    -1,    76,     6,    -1,    -1,    -1,
      -1,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    -1,    22,    -1,    24,    -1,    26,    27,    28,    -1,
      71,     1,    -1,    -1,    -1,    76,     6,    -1,    -1,    39,
      40,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    -1,    22,    -1,    24,    -1,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      40,    71,     1,    -1,    -1,    -1,    76,     6,    -1,    -1,
      -1,    -1,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    22,    -1,    24,    -1,    26,    27,    28,
      -1,    71,     1,    -1,    -1,    -1,    76,     6,    -1,    -1,
      39,    40,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    22,    -1,    24,    -1,    26,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    40,    71,     1,    -1,    -1,    -1,    76,     6,    -1,
      -1,    -1,    -1,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    -1,    22,    -1,    24,    -1,    26,    27,
      28,    -1,    71,     1,    -1,    -1,    -1,    76,     6,    -1,
      -1,    39,    40,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    -1,    22,    -1,    24,    -1,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    40,    71,    -1,    -1,    -1,     1,    76,     3,
       4,     5,     6,    -1,     8,     9,    10,    11,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,     0,     1,    -1,    31,    76,    33,
       6,    35,    -1,    -1,    -1,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    -1,    22,    -1,    24,    -1,
      26,    27,    28,    57,    -1,    -1,    -1,    61,    -1,    -1,
      -1,    -1,    66,    39,    40,    69,    -1,     1,    -1,    -1,
      -1,    75,     6,    -1,    -1,    -1,    -1,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    22,    -1,
      24,    -1,    26,    27,    28,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    40,    -1,     1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    -1,    -1,     1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    10,    71,    31,    13,
      33,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    33,
      -1,    35,    -1,    -1,    57,    -1,    -1,    -1,    61,    -1,
      -1,    -1,    -1,    66,    -1,    -1,    69,     1,    -1,     3,
       4,     5,     6,    57,     8,     9,    10,    61,    -1,    13,
      -1,    -1,    66,    -1,    -1,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    33,
      -1,    35,    -1,    -1,    41,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    55,    56,
      -1,    58,    59,    57,    -1,    -1,    -1,    61,    65,    66,
      67,    68,    66,    -1,    -1,    69,    -1,    74,    41,    42,
      -1,    78,    79,    80,    81,    82,    83,    -1,    -1,    -1,
      53,    54,    55,    56,    -1,    58,    59,    -1,    -1,    -1,
      -1,    -1,    65,    66,    67,    68,    -1,    70,    -1,    41,
      42,    -1,    -1,    -1,    -1,    78,    79,    80,    81,    82,
      83,    53,    54,    55,    56,    -1,    58,    59,    -1,    -1,
      -1,    -1,    -1,    65,    66,    67,    68,    -1,    70,    -1,
      41,    42,    -1,    -1,    -1,    -1,    78,    79,    80,    81,
      82,    83,    53,    54,    55,    56,    -1,    58,    59,    -1,
      -1,    -1,    -1,    -1,    65,    66,    67,    68,    -1,    70,
      -1,    41,    42,    -1,    -1,    -1,    -1,    78,    79,    80,
      81,    82,    83,    53,    54,    55,    56,    -1,    58,    59,
      -1,    -1,    -1,    -1,    -1,    65,    66,    67,    68,    -1,
      70,    -1,    41,    42,    -1,    -1,    -1,    -1,    78,    79,
      80,    81,    82,    83,    53,    54,    55,    56,    -1,    58,
      59,    -1,    -1,    -1,    -1,    -1,    65,    66,    67,    68,
      -1,    -1,    -1,    41,    42,    74,    -1,    -1,    -1,    78,
      79,    80,    81,    82,    83,    53,    54,    55,    56,    -1,
      58,    59,    -1,    -1,    -1,    -1,    -1,    65,    66,    67,
      68,    -1,    -1,    71,    41,    42,    -1,    -1,    -1,    -1,
      78,    79,    80,    81,    82,    83,    53,    54,    55,    56,
      -1,    58,    59,    -1,    -1,    -1,    -1,    -1,    65,    66,
      67,    68,    -1,    70,    -1,    41,    42,    -1,    -1,    -1,
      -1,    78,    79,    80,    81,    82,    83,    53,    54,    55,
      56,    -1,    58,    59,    -1,    -1,    -1,    -1,    -1,    65,
      66,    67,    68,    -1,    -1,    -1,    41,    42,    74,    -1,
      -1,    -1,    78,    79,    80,    81,    82,    83,    53,    54,
      55,    56,    -1,    58,    59,    -1,    -1,    -1,    -1,    -1,
      65,    66,    67,    68,    -1,    70,    -1,    41,    42,    -1,
      -1,    -1,    -1,    78,    79,    80,    81,    82,    83,    53,
      54,    55,    56,    -1,    58,    59,    -1,    -1,    -1,    -1,
      -1,    65,    66,    67,    68,    -1,    70,    -1,    41,    42,
      -1,    -1,    -1,    -1,    78,    79,    80,    81,    82,    83,
      53,    54,    55,    56,    -1,    58,    59,    -1,    -1,    -1,
      -1,    -1,    65,    66,    67,    68,    -1,    70,    -1,    41,
      42,    -1,    -1,    -1,    -1,    78,    79,    80,    81,    82,
      83,    53,    54,    55,    56,    -1,    58,    59,    -1,    -1,
      -1,    -1,    -1,    65,    66,    67,    68,    -1,    70,    -1,
      41,    42,    -1,    -1,    -1,    -1,    78,    79,    80,    81,
      82,    83,    53,    54,    55,    56,    -1,    58,    59,    -1,
      -1,    -1,    -1,    -1,    65,    66,    67,    68,    -1,    70,
      -1,    41,    42,    -1,    -1,    -1,    -1,    78,    79,    80,
      81,    82,    83,    53,    54,    55,    56,    -1,    58,    59,
      -1,    -1,    -1,    -1,    -1,    65,    66,    67,    68,    -1,
      -1,    -1,    41,    42,    74,    -1,    -1,    -1,    78,    79,
      80,    81,    82,    83,    53,    54,    55,    56,    -1,    58,
      59,    -1,    -1,    -1,    -1,    -1,    65,    66,    67,    68,
      -1,    70,    -1,    41,    42,    -1,    -1,    -1,    -1,    78,
      79,    80,    81,    82,    83,    53,    54,    55,    56,    -1,
      58,    59,    -1,    -1,    -1,    -1,    -1,    65,    66,    67,
      68,    -1,    70,    -1,    41,    42,    -1,    -1,    -1,    -1,
      78,    79,    80,    81,    82,    83,    53,    54,    55,    56,
      -1,    58,    59,    -1,    -1,    -1,    -1,    -1,    65,    66,
      67,    68,    -1,    70,    -1,    41,    42,    -1,    -1,    -1,
      -1,    78,    79,    80,    81,    82,    83,    53,    54,    55,
      56,    -1,    58,    59,    -1,    -1,    -1,    -1,    -1,    65,
      66,    67,    68,    -1,    -1,    -1,    41,    42,    -1,    -1,
      -1,    -1,    78,    79,    80,    81,    82,    83,    53,    54,
      55,    56,    -1,    58,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    68,    -1,    -1,    -1,    41,    42,    -1,
      -1,    -1,    -1,    78,    79,    80,    81,    82,    83,    53,
      54,    55,    56,    -1,    58,    59,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    79,    80,    81,    82,    83
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    87,    88,     0,     1,     6,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    22,    24,    26,    27,
      28,    39,    40,    71,    89,    90,    91,    92,    93,    94,
      95,    99,   102,   105,   106,    90,    69,    72,    73,    95,
      69,    69,    69,    69,    69,     1,     3,     4,     5,     6,
       8,     9,    10,    13,    31,    33,    35,    57,    61,    66,
      69,    96,    97,     6,    90,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    60,     6,    73,    70,    97,
      97,     6,    97,    97,     6,    97,    94,    29,    69,    73,
      77,    77,    77,    77,    77,    97,    77,    97,    13,    95,
      97,    41,    42,    53,    54,    55,    56,    58,    59,    65,
      66,    67,    68,    78,    79,    80,    81,    82,    83,    69,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      69,    72,   107,    74,    74,    72,    70,    70,    70,    70,
      71,    69,     1,    97,    98,    97,    63,    64,    37,    38,
      32,    34,    36,    62,    70,    70,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    70,    95,   114,    97,    72,    73,
       6,    73,    72,    73,    97,    75,    75,    75,    97,    97,
      70,    84,    74,    69,    69,    69,    69,    69,    69,    69,
      97,    75,     6,    70,    84,    75,   110,    74,    72,    74,
      97,    97,    11,    11,    11,    71,    70,     1,    97,    73,
      97,    97,    98,    97,    97,    97,     6,    11,    75,    95,
     113,     6,    30,    75,     6,    74,    88,   103,    88,     6,
      97,    70,    70,    70,    70,    70,    70,    84,    88,    11,
       6,    11,    97,   110,   111,   112,    77,    95,    97,   108,
      72,    72,    76,    23,    25,   104,    76,    60,    74,    97,
      76,    88,    84,   113,   113,    64,    73,    76,    84,    30,
      75,    97,   100,    96,    85,    76,    70,    70,    76,   113,
      76,    69,     8,    97,    95,   113,    21,   101,    85,    11,
      75,   112,    97,    74,    73,    75,   109,    20,    75,    11,
      88,    11,   113,    70,     8,   108,    76,    84,    69,    11,
      88,    88,    74,    76,   113,    97,    88,    24,    76,    73,
     113,    75,    70,    76,    71,     8,   108,    75,    11,    74,
      76,    11,   113,    88,    76
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    86,    87,    88,    88,    89,    89,    89,    90,    90,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    93,    93,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    95,    95,
      95,    95,    95,    95,    96,    96,    96,    96,    96,    96,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    98,    98,    98,
      98,    98,    99,   100,   100,   101,   101,   102,   103,   103,
     104,   104,   105,   106,   107,   107,   108,   108,   108,   109,
     109,   109,   110,   111,   111,   111,   112,   112,   113,   113,
     114,   114,   114
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     2,     1,     2,     1,     1,
       1,     4,     1,     1,     1,     1,     1,     1,     1,     2,
       3,     3,     6,     9,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     1,     4,     4,     2,     5,
       8,    10,    11,    11,    15,     9,     8,     5,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     3,     3,     3,     3,     3,     3,     4,
       3,     3,     3,     3,     3,     5,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     6,     6,     6,     6,     6,
       8,     3,     6,     4,     7,     4,     1,     0,     1,     3,
       3,     1,    10,     0,    10,     0,     5,     9,     0,     9,
       0,     4,     8,    13,     0,     3,     0,     1,     3,     0,
       4,     7,     5,     0,     2,     5,     1,     1,     0,     2,
       0,     2,     4
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
#line 117 "src/parser/parser.y"
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
#line 2034 "build/parser.tab.c"
    break;

  case 3: /* sentences: sentences sentence  */
#line 132 "src/parser/parser.y"
        { 
            if ((yyvsp[0].instr) != NULL) {
                InstruccionList_insert((yyvsp[-1].instrList), (yyvsp[0].instr));
                (yyval.instrList) = (yyvsp[-1].instrList);
            } else {
                (yyval.instrList) = (yyvsp[-1].instrList);
            }
        }
#line 2047 "build/parser.tab.c"
    break;

  case 4: /* sentences: %empty  */
#line 141 "src/parser/parser.y"
        { 
            (yyval.instrList) = InstruccionList_create();
        }
#line 2055 "build/parser.tab.c"
    break;

  case 5: /* sentence: instruction separator  */
#line 146 "src/parser/parser.y"
                           {
        (yyval.instr) = (yyvsp[-1].instr);
    }
#line 2063 "build/parser.tab.c"
    break;

  case 6: /* sentence: separator  */
#line 149 "src/parser/parser.y"
                {
        (yyval.instr) = NULL;
    }
#line 2071 "build/parser.tab.c"
    break;

  case 7: /* sentence: error separator  */
#line 152 "src/parser/parser.y"
                      {
        // Recuperación de error: saltar hasta el siguiente separador
        yyerrok;
        (yyval.instr) = NULL;
    }
#line 2081 "build/parser.tab.c"
    break;

  case 8: /* separator: BREAK_LINE  */
#line 159 "src/parser/parser.y"
                 {}
#line 2087 "build/parser.tab.c"
    break;

  case 9: /* separator: ';'  */
#line 160 "src/parser/parser.y"
          { /* skip */ }
#line 2093 "build/parser.tab.c"
    break;

  case 10: /* instruction: declaration  */
#line 164 "src/parser/parser.y"
                {
        (yyvsp[0].instr)->InstType = "DECLARATION";
        (yyvsp[0].instr)->line = (yylsp[0]).first_line;
        (yyval.instr) = (yyvsp[0].instr);
    }
#line 2103 "build/parser.tab.c"
    break;

  case 11: /* instruction: PRINTLN '(' expression ')'  */
#line 169 "src/parser/parser.y"
                                 {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->InstType = "PRINTLN";
        instP->value = (yyvsp[-1].expr);
        instP->line = (yylsp[-3]).first_line;
        (yyval.instr) = instP;
    }
#line 2115 "build/parser.tab.c"
    break;

  case 12: /* instruction: assignment  */
#line 176 "src/parser/parser.y"
                 {
        (yyvsp[0].instr)->InstType = "ASSIGNMENT";
        (yyvsp[0].instr)->line = (yylsp[0]).first_line;
        (yyval.instr) = (yyvsp[0].instr);
    }
#line 2125 "build/parser.tab.c"
    break;

  case 13: /* instruction: IF_STATEMENT  */
#line 181 "src/parser/parser.y"
                   {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->InstType = "IF_STATEMENT";
        instP->ifData = (yyvsp[0].ifdata);
        instP->line = (yylsp[0]).first_line;
        instP->column = (yylsp[0]).first_column;
        (yyval.instr) = instP;
    }
#line 2138 "build/parser.tab.c"
    break;

  case 14: /* instruction: SWITCH_STATEMENT  */
#line 189 "src/parser/parser.y"
                       {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->InstType = "SWITCH_STATEMENT";
        instP->switchData = (yyvsp[0].switchdata);
        instP->line = (yylsp[0]).first_line;
        instP->column = (yylsp[0]).first_column;
        (yyval.instr) = instP;
    }
#line 2151 "build/parser.tab.c"
    break;

  case 15: /* instruction: WHILE_STATEMENT  */
#line 197 "src/parser/parser.y"
                      {
        (yyvsp[0].instr)->InstType = "WHILE_STATEMENT";
        (yyvsp[0].instr)->line = (yylsp[0]).first_line;
        (yyval.instr) = (yyvsp[0].instr); 
    }
#line 2161 "build/parser.tab.c"
    break;

  case 16: /* instruction: FOR_STATEMENT  */
#line 202 "src/parser/parser.y"
                    {
        (yyvsp[0].instr)->InstType = "FOR_STATEMENT";
        (yyvsp[0].instr)->line = (yylsp[0]).first_line;
        (yyval.instr) = (yyvsp[0].instr); 
    }
#line 2171 "build/parser.tab.c"
    break;

  case 17: /* instruction: BREAK  */
#line 207 "src/parser/parser.y"
            {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->InstType = "BREAK";
        instP->line = (yylsp[0]).first_line;
        instP->column = (yylsp[0]).first_column;
        (yyval.instr) = instP;
    }
#line 2183 "build/parser.tab.c"
    break;

  case 18: /* instruction: CONTINUE  */
#line 214 "src/parser/parser.y"
               {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->InstType = "CONTINUE";
        instP->line = (yylsp[0]).first_line;
        instP->column = (yylsp[0]).first_column;
        (yyval.instr) = instP;
    }
#line 2195 "build/parser.tab.c"
    break;

  case 19: /* instruction: RETURN expression  */
#line 221 "src/parser/parser.y"
                        {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->InstType = "RETURN";
        instP->value = (yyvsp[0].expr);
        instP->line = (yylsp[-1]).first_line;
        instP->column = (yylsp[-1]).first_column;
        (yyval.instr) = instP;
    }
#line 2208 "build/parser.tab.c"
    break;

  case 20: /* instruction: ID '(' ')'  */
#line 229 "src/parser/parser.y"
                 {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->InstType = "VOID_CALL";
        instP->id = (yyvsp[-2].sval);
        instP->line = (yylsp[-2]).first_line;
        instP->column = (yylsp[-2]).first_column;
        (yyval.instr) = instP;
    }
#line 2221 "build/parser.tab.c"
    break;

  case 21: /* assignment: ID '=' expression  */
#line 242 "src/parser/parser.y"
                      {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->id = (yyvsp[-2].sval);
        instP->value = (yyvsp[0].expr);
        instP->column = (yylsp[-2]).first_column;
        (yyval.instr) = instP; }
#line 2232 "build/parser.tab.c"
    break;

  case 22: /* assignment: ID '[' expression ']' '=' expression  */
#line 249 "src/parser/parser.y"
                                           {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->id = (yyvsp[-5].sval);
        instP->IndexVector = (yyvsp[-3].expr);
        instP->value = (yyvsp[0].expr);
        instP->column = (yylsp[-5]).first_column;
        (yyval.instr) = instP; }
#line 2244 "build/parser.tab.c"
    break;

  case 23: /* assignment: ID '[' expression ']' '[' expression ']' '=' expression  */
#line 257 "src/parser/parser.y"
                                                              {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->id = (yyvsp[-8].sval);
        instP->IndexVector = (yyvsp[-3].expr);
        instP->IndexMatrix = (yyvsp[-6].expr);
        instP->value = (yyvsp[0].expr);
        instP->column = (yylsp[-8]).first_column;
        (yyval.instr) = instP; }
#line 2257 "build/parser.tab.c"
    break;

  case 24: /* assignment: assignment_expression PLUS_ASSIGN expression  */
#line 266 "src/parser/parser.y"
                                                   {
        (yyvsp[-2].instr)->value->type = "SUM";
        (yyvsp[-2].instr)->value->value = strdup("+");
        (yyvsp[-2].instr)->value->right = (yyvsp[0].expr);
        (yyval.instr) = (yyvsp[-2].instr); }
#line 2267 "build/parser.tab.c"
    break;

  case 25: /* assignment: assignment_expression MINUS_ASSIGN expression  */
#line 272 "src/parser/parser.y"
                                                    {
        (yyvsp[-2].instr)->value->type = "SUBTRACT";
        (yyvsp[-2].instr)->value->value = strdup("-");
        (yyvsp[-2].instr)->value->right = (yyvsp[0].expr);
        (yyval.instr) = (yyvsp[-2].instr); }
#line 2277 "build/parser.tab.c"
    break;

  case 26: /* assignment: assignment_expression MULT_ASSIGN expression  */
#line 278 "src/parser/parser.y"
                                                   {
        (yyvsp[-2].instr)->value->type = "MULTIPLICATION";
        (yyvsp[-2].instr)->value->value = strdup("*");
        (yyvsp[-2].instr)->value->right = (yyvsp[0].expr);
        (yyval.instr) = (yyvsp[-2].instr); }
#line 2287 "build/parser.tab.c"
    break;

  case 27: /* assignment: assignment_expression DIV_ASSIGN expression  */
#line 284 "src/parser/parser.y"
                                                  {
        (yyvsp[-2].instr)->value->type = "DIVIDE";
        (yyvsp[-2].instr)->value->value = strdup("/");
        (yyvsp[-2].instr)->value->right = (yyvsp[0].expr);
        (yyval.instr) = (yyvsp[-2].instr); }
#line 2297 "build/parser.tab.c"
    break;

  case 28: /* assignment: assignment_expression MOD_ASSIGN expression  */
#line 290 "src/parser/parser.y"
                                                  {
        (yyvsp[-2].instr)->value->type = "MODULO";
        (yyvsp[-2].instr)->value->value = strdup("%");
        (yyvsp[-2].instr)->value->right = (yyvsp[0].expr);
        (yyval.instr) = (yyvsp[-2].instr); }
#line 2307 "build/parser.tab.c"
    break;

  case 29: /* assignment: assignment_expression AND_ASSIGN expression  */
#line 296 "src/parser/parser.y"
                                                  {
        (yyvsp[-2].instr)->value->type = "BITWISE_AND";
        (yyvsp[-2].instr)->value->value = strdup("&");
        (yyvsp[-2].instr)->value->right = (yyvsp[0].expr);
        (yyval.instr) = (yyvsp[-2].instr); }
#line 2317 "build/parser.tab.c"
    break;

  case 30: /* assignment: assignment_expression OR_ASSIGN expression  */
#line 302 "src/parser/parser.y"
                                                 {
        (yyvsp[-2].instr)->value->type = "BITWISE_OR";
        (yyvsp[-2].instr)->value->value = strdup("|");
        (yyvsp[-2].instr)->value->right = (yyvsp[0].expr);
        (yyval.instr) = (yyvsp[-2].instr); }
#line 2327 "build/parser.tab.c"
    break;

  case 31: /* assignment: assignment_expression XOR_ASSIGN expression  */
#line 308 "src/parser/parser.y"
                                                  {
        (yyvsp[-2].instr)->value->type = "BITWISE_XOR";
        (yyvsp[-2].instr)->value->value = strdup("^");
        (yyvsp[-2].instr)->value->right = (yyvsp[0].expr);
        (yyval.instr) = (yyvsp[-2].instr); }
#line 2337 "build/parser.tab.c"
    break;

  case 32: /* assignment: assignment_expression LEFT_SHIFT_ASSIGN expression  */
#line 314 "src/parser/parser.y"
                                                         {
        (yyvsp[-2].instr)->value->type = "BITWISE_LEFT_SHIFT";
        (yyvsp[-2].instr)->value->value = strdup("<<");
        (yyvsp[-2].instr)->value->right = (yyvsp[0].expr);
        (yyval.instr) = (yyvsp[-2].instr); }
#line 2347 "build/parser.tab.c"
    break;

  case 33: /* assignment: assignment_expression RIGHT_SHIFT_ASSIGN expression  */
#line 320 "src/parser/parser.y"
                                                          {
        (yyvsp[-2].instr)->value->type = "BITWISE_RIGHT_SHIFT";
        (yyvsp[-2].instr)->value->value = strdup(">>");
        (yyvsp[-2].instr)->value->right = (yyvsp[0].expr);
        (yyval.instr) = (yyvsp[-2].instr); }
#line 2357 "build/parser.tab.c"
    break;

  case 34: /* assignment: assignment_expression INCREMENT  */
#line 326 "src/parser/parser.y"
                                      {
        (yyvsp[-1].instr)->value->type = "SUM";
        (yyvsp[-1].instr)->value->value = strdup("+");
        (yyvsp[-1].instr)->value->right = (Expression*)calloc(1, sizeof(Expression));
        (yyvsp[-1].instr)->value->right->type = "INTEGER";
        (yyvsp[-1].instr)->value->right->value = strdup("1");
        (yyval.instr) = (yyvsp[-1].instr); }
#line 2369 "build/parser.tab.c"
    break;

  case 35: /* assignment_expression: ID  */
#line 335 "src/parser/parser.y"
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
#line 2385 "build/parser.tab.c"
    break;

  case 36: /* assignment_expression: ID '[' expression ']'  */
#line 346 "src/parser/parser.y"
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
#line 2408 "build/parser.tab.c"
    break;

  case 37: /* declaration: primitive_types ID '=' expression  */
#line 371 "src/parser/parser.y"
                                      {

        // ? Crear instrucción

        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->id = (yyvsp[-2].sval);
        instP->type = (yyvsp[-3].sval);
        instP->column = (yylsp[-2]).first_column;
        instP->symbolType = "VARIABLE";
        instP->value = (yyvsp[0].expr);
        (yyval.instr) = instP; }
#line 2424 "build/parser.tab.c"
    break;

  case 38: /* declaration: primitive_types ID  */
#line 383 "src/parser/parser.y"
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
#line 2442 "build/parser.tab.c"
    break;

  case 39: /* declaration: FINAL primitive_types ID '=' expression  */
#line 397 "src/parser/parser.y"
                                              {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->id = (yyvsp[-2].sval);
        instP->type = (yyvsp[-3].sval);
        instP->column = (yylsp[-2]).first_column;
        instP->symbolType = "CONSTANT";
        instP->value = (yyvsp[0].expr);
        (yyval.instr) = instP; }
#line 2455 "build/parser.tab.c"
    break;

  case 40: /* declaration: primitive_types '[' ']' ID '=' '{' vectorList '}'  */
#line 406 "src/parser/parser.y"
                                                        {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->id = (yyvsp[-4].sval);
        instP->type = (yyvsp[-7].sval);
        instP->column = (yylsp[-5]).first_column;
        instP->symbolType = "VECTOR";
        instP->vectorValues = (yyvsp[-1].VList);
        (yyval.instr) = instP; }
#line 2468 "build/parser.tab.c"
    break;

  case 41: /* declaration: primitive_types '[' ']' ID '=' NEW primitive_types '[' NUM ']'  */
#line 415 "src/parser/parser.y"
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
#line 2487 "build/parser.tab.c"
    break;

  case 42: /* declaration: primitive_types '[' ']' ID '=' ID '.' ADD '(' expression ')'  */
#line 430 "src/parser/parser.y"
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
#line 2505 "build/parser.tab.c"
    break;

  case 43: /* declaration: primitive_types '[' ']' '[' ']' ID '=' '{' optional_newlines matrixList '}'  */
#line 444 "src/parser/parser.y"
                                                                               {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->id = (yyvsp[-5].sval);
        instP->type = (yyvsp[-10].sval);
        instP->column = (yylsp[-6]).first_column;
        instP->symbolType = "MATRIX";
        instP->matrixValues = (yyvsp[-1].MList);
        (yyval.instr) = instP;
    }
#line 2519 "build/parser.tab.c"
    break;

  case 44: /* declaration: primitive_types '[' ']' '[' ']' ID '=' NEW primitive_types '[' NUM ']' '[' NUM ']'  */
#line 454 "src/parser/parser.y"
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
#line 2542 "build/parser.tab.c"
    break;

  case 45: /* declaration: primitive_types ID '(' paramsList ')' '{' BREAK_LINE sentences '}'  */
#line 473 "src/parser/parser.y"
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
#line 2557 "build/parser.tab.c"
    break;

  case 46: /* declaration: VOID ID '(' ')' '{' BREAK_LINE sentences '}'  */
#line 484 "src/parser/parser.y"
                                                   {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->id = (yyvsp[-6].sval);
        instP->column = (yylsp[-6]).first_column;
        instP->symbolType = "VOID";
        instP->functionData = (Function*)calloc(1, sizeof(Function));
        instP->functionData->body = (yyvsp[-1].instrList);
        (yyval.instr) = instP; }
#line 2570 "build/parser.tab.c"
    break;

  case 47: /* declaration: primitive_types ID dimensions '=' dimension_expression  */
#line 493 "src/parser/parser.y"
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
#line 2585 "build/parser.tab.c"
    break;

  case 48: /* primitive_types: INT  */
#line 507 "src/parser/parser.y"
        { (yyval.sval) = strdup("INTEGER"); }
#line 2591 "build/parser.tab.c"
    break;

  case 49: /* primitive_types: STRING  */
#line 508 "src/parser/parser.y"
             { (yyval.sval) = strdup("STRING"); }
#line 2597 "build/parser.tab.c"
    break;

  case 50: /* primitive_types: DOUBLE  */
#line 509 "src/parser/parser.y"
             { (yyval.sval) = strdup("DOUBLE"); }
#line 2603 "build/parser.tab.c"
    break;

  case 51: /* primitive_types: FLOAT  */
#line 510 "src/parser/parser.y"
            { (yyval.sval) = strdup("FLOAT"); }
#line 2609 "build/parser.tab.c"
    break;

  case 52: /* primitive_types: BOOL  */
#line 511 "src/parser/parser.y"
           { (yyval.sval) = strdup("BOOLEAN"); }
#line 2615 "build/parser.tab.c"
    break;

  case 53: /* primitive_types: CHAR  */
#line 512 "src/parser/parser.y"
           { (yyval.sval) = strdup("CHARACTER"); }
#line 2621 "build/parser.tab.c"
    break;

  case 54: /* primitive_values: NUM  */
#line 517 "src/parser/parser.y"
        { 
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = strdup("INTEGER");
        exp->value = strdup((yyvsp[0].sval));

        (yyval.expr) = exp; }
#line 2632 "build/parser.tab.c"
    break;

  case 55: /* primitive_values: STR  */
#line 523 "src/parser/parser.y"
          { 
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = strdup("STRING");
        exp->value = strdup((yyvsp[0].sval));

        (yyval.expr) = exp; }
#line 2643 "build/parser.tab.c"
    break;

  case 56: /* primitive_values: DEC  */
#line 529 "src/parser/parser.y"
          { 
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = strdup("DOUBLE");
        exp->value = strdup((yyvsp[0].sval));

        (yyval.expr) = exp; }
#line 2654 "build/parser.tab.c"
    break;

  case 57: /* primitive_values: DECF  */
#line 535 "src/parser/parser.y"
           { 
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = strdup("FLOAT");
        exp->value = strdup((yyvsp[0].sval));

        (yyval.expr) = exp; }
#line 2665 "build/parser.tab.c"
    break;

  case 58: /* primitive_values: BOOLEAN  */
#line 541 "src/parser/parser.y"
              { 
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = strdup("BOOLEAN");
        exp->value = strdup((yyvsp[0].sval));

        (yyval.expr) = exp; }
#line 2676 "build/parser.tab.c"
    break;

  case 59: /* primitive_values: CHR  */
#line 547 "src/parser/parser.y"
          { 
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = strdup("CHARACTER");
        exp->value = strdup((yyvsp[0].sval));
        (yyval.expr) = exp; }
#line 2686 "build/parser.tab.c"
    break;

  case 60: /* expression: primitive_values  */
#line 556 "src/parser/parser.y"
                       { (yyval.expr) = (yyvsp[0].expr); }
#line 2692 "build/parser.tab.c"
    break;

  case 61: /* expression: ID  */
#line 557 "src/parser/parser.y"
         {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "ID";
        exp->value = strdup((yyvsp[0].sval));
        (yyval.expr) = exp;
        }
#line 2703 "build/parser.tab.c"
    break;

  case 62: /* expression: '-' expression  */
#line 563 "src/parser/parser.y"
                               {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "NEGATIVE";
        exp->value = strdup("-");
        exp->left = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2714 "build/parser.tab.c"
    break;

  case 63: /* expression: expression '+' expression  */
#line 569 "src/parser/parser.y"
                                {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "SUM";
        exp->value = strdup("+");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2726 "build/parser.tab.c"
    break;

  case 64: /* expression: expression '-' expression  */
#line 576 "src/parser/parser.y"
                                {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "SUBTRACT";
        exp->value = strdup("-");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2738 "build/parser.tab.c"
    break;

  case 65: /* expression: expression '*' expression  */
#line 583 "src/parser/parser.y"
                                {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "MULTIPLICATION";
        exp->value = strdup("*");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2750 "build/parser.tab.c"
    break;

  case 66: /* expression: expression '/' expression  */
#line 590 "src/parser/parser.y"
                                {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "DIVIDE";
        exp->value = strdup("/");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2762 "build/parser.tab.c"
    break;

  case 67: /* expression: expression '%' expression  */
#line 597 "src/parser/parser.y"
                                {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "MODULO";
        exp->value = strdup("%");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2774 "build/parser.tab.c"
    break;

  case 68: /* expression: '(' expression ')'  */
#line 604 "src/parser/parser.y"
                         { (yyval.expr) = (yyvsp[-1].expr); }
#line 2780 "build/parser.tab.c"
    break;

  case 69: /* expression: '(' primitive_types ')' expression  */
#line 605 "src/parser/parser.y"
                                         {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "CASTING";
        exp->value = (yyvsp[-2].sval);
        exp->left = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2791 "build/parser.tab.c"
    break;

  case 70: /* expression: expression '&' expression  */
#line 612 "src/parser/parser.y"
                                {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "BITWISE_AND";
        exp->value = strdup("&");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2803 "build/parser.tab.c"
    break;

  case 71: /* expression: expression '|' expression  */
#line 619 "src/parser/parser.y"
                                {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "BITWISE_OR";
        exp->value = strdup("|");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2815 "build/parser.tab.c"
    break;

  case 72: /* expression: expression '^' expression  */
#line 626 "src/parser/parser.y"
                                {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "BITWISE_XOR";
        exp->value = strdup("^");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2827 "build/parser.tab.c"
    break;

  case 73: /* expression: expression LEFT_SHIFT expression  */
#line 634 "src/parser/parser.y"
                                       {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "BITWISE_LEFT_SHIFT";
        exp->value = strdup("<<");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2839 "build/parser.tab.c"
    break;

  case 74: /* expression: expression RIGHT_SHIFT expression  */
#line 643 "src/parser/parser.y"
                                        {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "BITWISE_RIGHT_SHIFT";
        exp->value = strdup(">>");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2851 "build/parser.tab.c"
    break;

  case 75: /* expression: ID EQUALS_OP '(' expression ')'  */
#line 651 "src/parser/parser.y"
                                      {
        Expression *exp = (Expression*)calloc(1, sizeof(Expression));   
        exp->type = "EQUALS_OP";
        exp->value = strdup(".equals");
        exp->left = (Expression*)calloc(1, sizeof(Expression));
        exp->left->type = "ID";
        exp->left->value = strdup((yyvsp[-4].sval));
        exp->right = (yyvsp[-1].expr);
        (yyval.expr) = exp; }
#line 2865 "build/parser.tab.c"
    break;

  case 76: /* expression: expression EQUALS expression  */
#line 661 "src/parser/parser.y"
                                   {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "EQUALS";
        exp->value = strdup("==");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2877 "build/parser.tab.c"
    break;

  case 77: /* expression: expression NOT_EQUALS expression  */
#line 669 "src/parser/parser.y"
                                       {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "NOT_EQUALS";
        exp->value = strdup("!=");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2889 "build/parser.tab.c"
    break;

  case 78: /* expression: expression '>' expression  */
#line 677 "src/parser/parser.y"
                                {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "GREATER";
        exp->value = strdup(">");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2901 "build/parser.tab.c"
    break;

  case 79: /* expression: expression '<' expression  */
#line 685 "src/parser/parser.y"
                                {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "LESS";
        exp->value = strdup("<");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2913 "build/parser.tab.c"
    break;

  case 80: /* expression: expression GREATER_EQUALS expression  */
#line 693 "src/parser/parser.y"
                                           {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "GREATER_EQUALS";
        exp->value = strdup(">=");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2925 "build/parser.tab.c"
    break;

  case 81: /* expression: expression LESS_EQUALS expression  */
#line 701 "src/parser/parser.y"
                                        {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "LESS_EQUALS";
        exp->value = strdup("<=");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2937 "build/parser.tab.c"
    break;

  case 82: /* expression: expression AND expression  */
#line 709 "src/parser/parser.y"
                                {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "LOGICAL_AND";
        exp->value = strdup("&&");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2949 "build/parser.tab.c"
    break;

  case 83: /* expression: expression OR expression  */
#line 717 "src/parser/parser.y"
                               {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "LOGICAL_OR";
        exp->value = strdup("||");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2961 "build/parser.tab.c"
    break;

  case 84: /* expression: NOT expression  */
#line 725 "src/parser/parser.y"
                     {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "LOGICAL_NOT";
        exp->value = strdup("!");
        exp->left = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2972 "build/parser.tab.c"
    break;

  case 85: /* expression: INTEGER_OBJ '.' PARSEINT '(' expression ')'  */
#line 732 "src/parser/parser.y"
                                                  {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "PARSEINT";
        exp->value = strdup("Integer.parseInt");
        exp->left = (yyvsp[-1].expr);
        (yyval.expr) = exp; }
#line 2983 "build/parser.tab.c"
    break;

  case 86: /* expression: DOUBLE_OBJ '.' PARSEDOUBLE '(' expression ')'  */
#line 739 "src/parser/parser.y"
                                                    {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "PARSEDOUBLE";
        exp->value = strdup("Double.parseDouble");
        exp->left = (yyvsp[-1].expr);
        (yyval.expr) = exp; }
#line 2994 "build/parser.tab.c"
    break;

  case 87: /* expression: FLOAT_OBJ '.' PARSEFLOAT '(' expression ')'  */
#line 746 "src/parser/parser.y"
                                                  {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "PARSEFLOAT";
        exp->value = strdup("Float.parseFloat");
        exp->left = (yyvsp[-1].expr);
        (yyval.expr) = exp; }
#line 3005 "build/parser.tab.c"
    break;

  case 88: /* expression: STRING '.' VALUEOF '(' expression ')'  */
#line 753 "src/parser/parser.y"
                                            {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "VALUEOF";
        exp->value = strdup("String.valueOf");
        exp->left = (yyvsp[-1].expr);
        (yyval.expr) = exp; }
#line 3016 "build/parser.tab.c"
    break;

  case 89: /* expression: STRING '.' JOIN '(' exprList ')'  */
#line 760 "src/parser/parser.y"
                                       {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "JOIN";
        exp->value = strdup("String.join");
        exp->list = (yyvsp[-1].exprList);
        (yyval.expr) = exp; }
#line 3027 "build/parser.tab.c"
    break;

  case 90: /* expression: ARRAYS '.' INDEXOF '(' ID ',' expression ')'  */
#line 767 "src/parser/parser.y"
                                                   {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "INDEXOF";
        exp->value = (yyvsp[-3].sval);
        exp->left = (yyvsp[-1].expr);
        (yyval.expr) = exp; }
#line 3038 "build/parser.tab.c"
    break;

  case 91: /* expression: ID '.' LENGTH  */
#line 774 "src/parser/parser.y"
                    {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "LENGTH";
        exp->value = strdup((yyvsp[-2].sval));
        (yyval.expr) = exp; }
#line 3048 "build/parser.tab.c"
    break;

  case 92: /* expression: ID '.' ADD '(' expression ')'  */
#line 780 "src/parser/parser.y"
                                    {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "ADD";
        exp->value = strdup((yyvsp[-5].sval));
        exp->left = (yyvsp[-1].expr);
        (yyval.expr) = exp; }
#line 3059 "build/parser.tab.c"
    break;

  case 93: /* expression: ID '[' expression ']'  */
#line 787 "src/parser/parser.y"
                            {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "VECTOR_ACCESS";
        exp->value = (yyvsp[-3].sval);
        exp->left = (yyvsp[-1].expr);
        (yyval.expr) = exp; }
#line 3070 "build/parser.tab.c"
    break;

  case 94: /* expression: ID '[' expression ']' '[' expression ']'  */
#line 794 "src/parser/parser.y"
                                               {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "MATRIX_ACCESS";
        exp->value = (yyvsp[-6].sval);
        exp->left = (yyvsp[-4].expr);
        exp->right = (yyvsp[-1].expr);
        (yyval.expr) = exp;
    }
#line 3083 "build/parser.tab.c"
    break;

  case 95: /* expression: ID '(' exprList ')'  */
#line 803 "src/parser/parser.y"
                          {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "FUNCTION_CALL";
        exp->value = strdup((yyvsp[-3].sval));
        exp->list = (yyvsp[-1].exprList);
        (yyval.expr) = exp;
    }
#line 3095 "build/parser.tab.c"
    break;

  case 96: /* expression: error  */
#line 810 "src/parser/parser.y"
            {
        // Recuperación de error en expresiones
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "ERROR";
        exp->value = strdup("EXPRESION_INVALIDA");
        yyerrok;
        (yyval.expr) = exp;
    }
#line 3108 "build/parser.tab.c"
    break;

  case 97: /* exprList: %empty  */
#line 820 "src/parser/parser.y"
                { 
        ExpressionList* exprList = create_expression_list();
        (yyval.exprList) = exprList;
    }
#line 3117 "build/parser.tab.c"
    break;

  case 98: /* exprList: expression  */
#line 824 "src/parser/parser.y"
                 {
        ExpressionList* exprList = create_expression_list();
        ExpressionList_add(exprList, (yyvsp[0].expr));
        (yyval.exprList) = exprList;
     }
#line 3127 "build/parser.tab.c"
    break;

  case 99: /* exprList: exprList ',' expression  */
#line 829 "src/parser/parser.y"
                              {
        ExpressionList_add((yyvsp[-2].exprList), (yyvsp[0].expr));
        (yyval.exprList) = (yyvsp[-2].exprList);
     }
#line 3136 "build/parser.tab.c"
    break;

  case 100: /* exprList: exprList ',' error  */
#line 833 "src/parser/parser.y"
                         {
        // Recuperación de error en lista de expresiones
        yyerrok;
        (yyval.exprList) = (yyvsp[-2].exprList);
     }
#line 3146 "build/parser.tab.c"
    break;

  case 101: /* exprList: error  */
#line 838 "src/parser/parser.y"
            {
        // Recuperación de error al inicio de lista de expresiones
        ExpressionList* exprList = create_expression_list();
        yyerrok;
        (yyval.exprList) = exprList;
     }
#line 3157 "build/parser.tab.c"
    break;

  case 102: /* IF_STATEMENT: IF '(' expression ')' '{' BREAK_LINE sentences '}' IF_LIST ELSE_STATEMENT  */
#line 850 "src/parser/parser.y"
                                                                                 {
        IfData* ifdata = (IfData*)calloc(1, sizeof(IfData));
        ifdata->condition = (yyvsp[-7].expr);
        ifdata->block = (yyvsp[-3].instrList);
        ifdata->elseIfs = (yyvsp[-1].ifnodelist);
        ifdata->elseBlock = (yyvsp[0].instrList);
        (yyval.ifdata) = ifdata;
    }
#line 3170 "build/parser.tab.c"
    break;

  case 103: /* IF_LIST: %empty  */
#line 860 "src/parser/parser.y"
                { (yyval.ifnodelist) = createIfNodeList(); }
#line 3176 "build/parser.tab.c"
    break;

  case 104: /* IF_LIST: IF_LIST ELSE IF '(' expression ')' '{' BREAK_LINE sentences '}'  */
#line 861 "src/parser/parser.y"
                                                                        {
        IfData* elseIfNode = (IfData*)malloc(sizeof(IfData));
        elseIfNode->condition = (yyvsp[-5].expr);
        elseIfNode->block = (yyvsp[-1].instrList);
        insertIfNode((yyvsp[-9].ifnodelist), elseIfNode);
        (yyval.ifnodelist) = (yyvsp[-9].ifnodelist);
    }
#line 3188 "build/parser.tab.c"
    break;

  case 105: /* ELSE_STATEMENT: %empty  */
#line 870 "src/parser/parser.y"
                { (yyval.instrList) = NULL; }
#line 3194 "build/parser.tab.c"
    break;

  case 106: /* ELSE_STATEMENT: ELSE '{' BREAK_LINE sentences '}'  */
#line 871 "src/parser/parser.y"
                                        { (yyval.instrList) = (yyvsp[-1].instrList); }
#line 3200 "build/parser.tab.c"
    break;

  case 107: /* SWITCH_STATEMENT: SWITCH '(' ID ')' '{' BREAK_LINE CASES DEFAULT_CASE '}'  */
#line 875 "src/parser/parser.y"
                                                            {
        SwitchData* switchdata = (SwitchData*)malloc(sizeof(SwitchData));
        switchdata->condition = strdup((yyvsp[-6].sval));
        switchdata->cases = (yyvsp[-2].casenodelist);
        switchdata->defaultCase = (yyvsp[-1].instrList);
        (yyval.switchdata) = switchdata;
    }
#line 3212 "build/parser.tab.c"
    break;

  case 108: /* CASES: %empty  */
#line 886 "src/parser/parser.y"
                { (yyval.casenodelist) = CaseNodeList_create(); }
#line 3218 "build/parser.tab.c"
    break;

  case 109: /* CASES: CASES CASE primitive_values ':' BREAK_LINE sentences BREAK ';' BREAK_LINE  */
#line 887 "src/parser/parser.y"
                                                                                {
        CaseData* new_case = (CaseData*)malloc(sizeof(CaseData));
        new_case->condition = (yyvsp[-6].expr);
        new_case->block = (yyvsp[-3].instrList);
        CaseNodeList_add((yyvsp[-8].casenodelist), new_case);
        (yyval.casenodelist) = (yyvsp[-8].casenodelist);
    }
#line 3230 "build/parser.tab.c"
    break;

  case 110: /* DEFAULT_CASE: %empty  */
#line 897 "src/parser/parser.y"
                { (yyval.instrList) = NULL; }
#line 3236 "build/parser.tab.c"
    break;

  case 111: /* DEFAULT_CASE: DEFAULT ':' BREAK_LINE sentences  */
#line 898 "src/parser/parser.y"
                                       { (yyval.instrList) = (yyvsp[0].instrList); }
#line 3242 "build/parser.tab.c"
    break;

  case 112: /* WHILE_STATEMENT: WHILE '(' expression ')' '{' BREAK_LINE sentences '}'  */
#line 906 "src/parser/parser.y"
                                                          {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->whileData = (WhileData*)malloc(sizeof(WhileData));
        instP->whileData->condition = (yyvsp[-5].expr);
        instP->whileData->block = (yyvsp[-1].instrList);
        instP->column = (yylsp[-7]).first_column;
        (yyval.instr) = instP;
    }
#line 3255 "build/parser.tab.c"
    break;

  case 113: /* FOR_STATEMENT: FOR '(' declaration ';' expression ';' ID INCREMENT ')' '{' BREAK_LINE sentences '}'  */
#line 918 "src/parser/parser.y"
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
#line 3286 "build/parser.tab.c"
    break;

  case 114: /* dimensions: %empty  */
#line 949 "src/parser/parser.y"
                  { (yyval.ival) = 0; }
#line 3292 "build/parser.tab.c"
    break;

  case 115: /* dimensions: dimensions '[' ']'  */
#line 950 "src/parser/parser.y"
                         { (yyval.ival) = (yyvsp[-2].ival) + 1; }
#line 3298 "build/parser.tab.c"
    break;

  case 116: /* vectorList: %empty  */
#line 954 "src/parser/parser.y"
                  { 
        VectorList* vecList = VectorList_create();
        (yyval.VList) = vecList;
    }
#line 3307 "build/parser.tab.c"
    break;

  case 117: /* vectorList: expression  */
#line 958 "src/parser/parser.y"
                 {
        VectorList* vecList = VectorList_create();
        VectorList_addExp(vecList, (yyvsp[0].expr));
        (yyval.VList) = vecList;
     }
#line 3317 "build/parser.tab.c"
    break;

  case 118: /* vectorList: vectorList ',' expression  */
#line 963 "src/parser/parser.y"
                                {
        VectorList_addExp((yyvsp[-2].VList), (yyvsp[0].expr));
        (yyval.VList) = (yyvsp[-2].VList);
     }
#line 3326 "build/parser.tab.c"
    break;

  case 119: /* matrixList: %empty  */
#line 971 "src/parser/parser.y"
                  { 
        MatrixList* matList = MatrixList_create();
        (yyval.MList) = matList;
    }
#line 3335 "build/parser.tab.c"
    break;

  case 120: /* matrixList: '{' vectorList '}' optional_newlines  */
#line 975 "src/parser/parser.y"
                                          {
        MatrixList* matList = MatrixList_create();
        MatrixList_add(matList, (yyvsp[-2].VList));
        (yyval.MList) = matList;
     }
#line 3345 "build/parser.tab.c"
    break;

  case 121: /* matrixList: matrixList ',' optional_newlines '{' vectorList '}' optional_newlines  */
#line 980 "src/parser/parser.y"
                                                                             {
        MatrixList_add((yyvsp[-6].MList), (yyvsp[-2].VList));
        (yyval.MList) = (yyvsp[-6].MList);
     }
#line 3354 "build/parser.tab.c"
    break;

  case 122: /* dimension_expression: '{' optional_newlines dimension_values_list optional_newlines '}'  */
#line 986 "src/parser/parser.y"
                                                                      {(yyval.list) = (yyvsp[-2].list); }
#line 3360 "build/parser.tab.c"
    break;

  case 123: /* dimension_values_list: %empty  */
#line 989 "src/parser/parser.y"
                  {  (yyval.list) = List_create(); }
#line 3366 "build/parser.tab.c"
    break;

  case 124: /* dimension_values_list: dimension_value optional_newlines  */
#line 990 "src/parser/parser.y"
                                        { 
        List* list = List_create(); 
        List_add(list, (yyvsp[-1].listdata)); 
        (yyval.list) = list; 
    }
#line 3376 "build/parser.tab.c"
    break;

  case 125: /* dimension_values_list: dimension_values_list ',' optional_newlines dimension_value optional_newlines  */
#line 995 "src/parser/parser.y"
                                                                                    {List_add((yyvsp[-4].list), (yyvsp[-1].listdata)); (yyval.list) = (yyvsp[-4].list);}
#line 3382 "build/parser.tab.c"
    break;

  case 126: /* dimension_value: expression  */
#line 998 "src/parser/parser.y"
               { ListData* data = (ListData*)calloc(1, sizeof(ListData));
                  data->exprData = (yyvsp[0].expr);
                  (yyval.listdata) = data; }
#line 3390 "build/parser.tab.c"
    break;

  case 127: /* dimension_value: dimension_expression  */
#line 1001 "src/parser/parser.y"
                           {
        ListData* data = (ListData*)calloc(1, sizeof(ListData));
        data->listData = (yyvsp[0].list);
        (yyval.listdata) = data;
    }
#line 3400 "build/parser.tab.c"
    break;

  case 130: /* paramsList: %empty  */
#line 1016 "src/parser/parser.y"
                { (yyval.paramlist) = createParamsList(); }
#line 3406 "build/parser.tab.c"
    break;

  case 131: /* paramsList: primitive_types ID  */
#line 1017 "src/parser/parser.y"
                         {
        paramsList* paramList = createParamsList();
        addParam(paramList, (yyvsp[-1].sval), (yyvsp[0].sval));
        (yyval.paramlist) = paramList;
     }
#line 3416 "build/parser.tab.c"
    break;

  case 132: /* paramsList: paramsList ',' primitive_types ID  */
#line 1022 "src/parser/parser.y"
                                        {
        addParam((yyvsp[-3].paramlist), (yyvsp[-1].sval), (yyvsp[0].sval));
        (yyval.paramlist) = (yyvsp[-3].paramlist);
     }
#line 3425 "build/parser.tab.c"
    break;


#line 3429 "build/parser.tab.c"

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

#line 1027 "src/parser/parser.y"


// Función para reinicializar el estado del parser
void reset_parser_state() {
    // Reinicializar variables del lexer
    extern int yylineno;
    extern int yycolumn; 
    extern FILE *yyin;
    yylineno = 1;
    yycolumn = 1;
    
    // Limpiar el estado de error del parser
    extern int yynerrs;
    yynerrs = 0;
    
    // Reinicializar yyin si es necesario
    if (yyin && yyin != stdin) {
        rewind(yyin);
    }
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
