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
  YYSYMBOL_LEFT_SHIFT = 30,                /* LEFT_SHIFT  */
  YYSYMBOL_RIGHT_SHIFT = 31,               /* RIGHT_SHIFT  */
  YYSYMBOL_PLUS_ASSIGN = 32,               /* PLUS_ASSIGN  */
  YYSYMBOL_MINUS_ASSIGN = 33,              /* MINUS_ASSIGN  */
  YYSYMBOL_MULT_ASSIGN = 34,               /* MULT_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 35,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 36,                /* MOD_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 37,                /* AND_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 38,                 /* OR_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 39,                /* XOR_ASSIGN  */
  YYSYMBOL_LEFT_SHIFT_ASSIGN = 40,         /* LEFT_SHIFT_ASSIGN  */
  YYSYMBOL_RIGHT_SHIFT_ASSIGN = 41,        /* RIGHT_SHIFT_ASSIGN  */
  YYSYMBOL_EQUALS = 42,                    /* EQUALS  */
  YYSYMBOL_NOT_EQUALS = 43,                /* NOT_EQUALS  */
  YYSYMBOL_AND = 44,                       /* AND  */
  YYSYMBOL_OR = 45,                        /* OR  */
  YYSYMBOL_NOT = 46,                       /* NOT  */
  YYSYMBOL_GREATER_EQUALS = 47,            /* GREATER_EQUALS  */
  YYSYMBOL_LESS_EQUALS = 48,               /* LESS_EQUALS  */
  YYSYMBOL_INCREMENT = 49,                 /* INCREMENT  */
  YYSYMBOL_50_ = 50,                       /* '+'  */
  YYSYMBOL_51_ = 51,                       /* '-'  */
  YYSYMBOL_52_ = 52,                       /* '*'  */
  YYSYMBOL_53_ = 53,                       /* '/'  */
  YYSYMBOL_54_ = 54,                       /* '('  */
  YYSYMBOL_55_ = 55,                       /* ')'  */
  YYSYMBOL_56_ = 56,                       /* ';'  */
  YYSYMBOL_57_ = 57,                       /* '='  */
  YYSYMBOL_58_ = 58,                       /* '%'  */
  YYSYMBOL_59_ = 59,                       /* '&'  */
  YYSYMBOL_60_ = 60,                       /* '|'  */
  YYSYMBOL_61_ = 61,                       /* '^'  */
  YYSYMBOL_62_ = 62,                       /* '>'  */
  YYSYMBOL_63_ = 63,                       /* '<'  */
  YYSYMBOL_64_ = 64,                       /* '{'  */
  YYSYMBOL_65_ = 65,                       /* '}'  */
  YYSYMBOL_66_ = 66,                       /* ':'  */
  YYSYMBOL_67_ = 67,                       /* '['  */
  YYSYMBOL_68_ = 68,                       /* ']'  */
  YYSYMBOL_69_ = 69,                       /* ','  */
  YYSYMBOL_YYACCEPT = 70,                  /* $accept  */
  YYSYMBOL_program = 71,                   /* program  */
  YYSYMBOL_sentences = 72,                 /* sentences  */
  YYSYMBOL_sentence = 73,                  /* sentence  */
  YYSYMBOL_separator = 74,                 /* separator  */
  YYSYMBOL_instruction = 75,               /* instruction  */
  YYSYMBOL_assignment = 76,                /* assignment  */
  YYSYMBOL_assignment_expression = 77,     /* assignment_expression  */
  YYSYMBOL_declaration = 78,               /* declaration  */
  YYSYMBOL_primitive_types = 79,           /* primitive_types  */
  YYSYMBOL_primitive_values = 80,          /* primitive_values  */
  YYSYMBOL_expression = 81,                /* expression  */
  YYSYMBOL_IF_STATEMENT = 82,              /* IF_STATEMENT  */
  YYSYMBOL_IF_LIST = 83,                   /* IF_LIST  */
  YYSYMBOL_ELSE_STATEMENT = 84,            /* ELSE_STATEMENT  */
  YYSYMBOL_SWITCH_STATEMENT = 85,          /* SWITCH_STATEMENT  */
  YYSYMBOL_CASES = 86,                     /* CASES  */
  YYSYMBOL_DEFAULT_CASE = 87,              /* DEFAULT_CASE  */
  YYSYMBOL_WHILE_STATEMENT = 88,           /* WHILE_STATEMENT  */
  YYSYMBOL_FOR_STATEMENT = 89,             /* FOR_STATEMENT  */
  YYSYMBOL_dimensions = 90,                /* dimensions  */
  YYSYMBOL_dimension_expression = 91,      /* dimension_expression  */
  YYSYMBOL_dimension_values_list = 92,     /* dimension_values_list  */
  YYSYMBOL_dimension_value = 93,           /* dimension_value  */
  YYSYMBOL_optional_newlines = 94          /* optional_newlines  */
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
#define YYLAST   649

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  93
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  204

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   304


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
       2,     2,     2,     2,     2,     2,     2,    58,    59,     2,
      54,    55,    52,    50,    69,    51,     2,    53,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    66,    56,
      63,    57,    62,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    67,     2,    68,    61,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    64,    60,    65,     2,     2,     2,     2,
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
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   101,   101,   115,   125,   130,   133,   138,   139,   143,
     148,   155,   160,   168,   176,   180,   184,   191,   202,   209,
     215,   221,   227,   233,   239,   245,   251,   257,   263,   269,
     278,   295,   307,   321,   330,   344,   345,   346,   347,   348,
     349,   354,   360,   366,   372,   378,   384,   393,   394,   400,
     406,   413,   420,   427,   434,   441,   442,   449,   456,   463,
     471,   480,   488,   498,   506,   514,   522,   530,   538,   546,
     554,   562,   574,   584,   585,   594,   595,   599,   610,   611,
     621,   622,   630,   642,   671,   672,   675,   678,   679,   684,
     687,   690,   697,   698
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
  "EQUALS_OP", "LEFT_SHIFT", "RIGHT_SHIFT", "PLUS_ASSIGN", "MINUS_ASSIGN",
  "MULT_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "AND_ASSIGN", "OR_ASSIGN",
  "XOR_ASSIGN", "LEFT_SHIFT_ASSIGN", "RIGHT_SHIFT_ASSIGN", "EQUALS",
  "NOT_EQUALS", "AND", "OR", "NOT", "GREATER_EQUALS", "LESS_EQUALS",
  "INCREMENT", "'+'", "'-'", "'*'", "'/'", "'('", "')'", "';'", "'='",
  "'%'", "'&'", "'|'", "'^'", "'>'", "'<'", "'{'", "'}'", "':'", "'['",
  "']'", "','", "$accept", "program", "sentences", "sentence", "separator",
  "instruction", "assignment", "assignment_expression", "declaration",
  "primitive_types", "primitive_values", "expression", "IF_STATEMENT",
  "IF_LIST", "ELSE_STATEMENT", "SWITCH_STATEMENT", "CASES", "DEFAULT_CASE",
  "WHILE_STATEMENT", "FOR_STATEMENT", "dimensions", "dimension_expression",
  "dimension_values_list", "dimension_value", "optional_newlines", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-137)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-85)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -137,     6,   298,  -137,   -39,  -137,  -137,  -137,  -137,  -137,
    -137,  -137,   129,   -35,   -29,   -17,  -137,  -137,   -10,    -8,
    -137,  -137,  -137,    -7,  -137,   600,  -137,    37,  -137,  -137,
    -137,  -137,   216,    41,   216,   216,    46,   216,   120,  -137,
     216,   216,   216,   216,   216,   216,   216,   216,   216,   216,
    -137,   -36,  -137,  -137,  -137,    24,  -137,  -137,  -137,   216,
     216,   286,  -137,   520,    -3,   332,   366,    20,   392,    21,
     520,   520,   520,   520,   520,   520,   520,   520,   520,   520,
     216,   -25,    25,   520,   544,    34,   418,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   216,  -137,    16,    43,    49,
     216,   520,    60,    17,   216,   216,  -137,   520,   520,   520,
     520,   520,   520,   520,   520,   544,   544,   568,   568,   520,
     520,   520,   520,   520,   520,   520,    94,   115,   117,   444,
    -137,  -137,  -137,   468,   568,  -137,  -137,  -137,   133,    30,
    -137,    84,     1,   103,    98,  -137,   520,  -137,    79,  -137,
    -137,    83,    85,    87,  -137,    95,  -137,     9,   142,   134,
      88,   146,  -137,    96,    30,  -137,   -13,  -137,   147,  -137,
     150,  -137,   108,   152,  -137,   298,  -137,   142,   216,  -137,
     333,   158,   494,   177,   109,  -137,   102,  -137,   156,   168,
    -137,  -137,   232,  -137
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     0,     2,     1,    30,     7,    35,    36,    40,    38,
      37,    39,     0,     0,     0,     0,    16,    17,     0,     0,
       8,     3,     6,     0,    11,     0,     9,     0,    12,    13,
      14,    15,     0,     0,     0,     0,     0,     0,     0,     5,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      29,    32,    42,    46,    45,    48,    41,    43,    44,     0,
       0,     0,    47,    18,     0,     0,     0,     0,     0,     0,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
       0,     0,     0,    71,    49,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,     0,     0,     0,
       0,    31,     0,     0,     0,     0,    55,    60,    61,    63,
      64,    69,    70,    67,    68,    50,    51,    52,    53,    54,
      57,    58,    59,    65,    66,    33,     0,     0,     0,     0,
      92,    34,    85,     0,    56,     4,    78,     4,     0,    87,
      62,     0,    80,     0,     0,    93,    90,    91,    92,    92,
      73,     0,     0,     0,    82,     0,    92,     0,    88,    75,
       0,     0,    77,     0,     0,    86,     0,    72,     0,     4,
       0,    92,     0,     0,     4,    81,     4,    89,     0,     4,
       0,     0,     0,     0,    16,    83,     0,    76,     0,     0,
      79,     4,     0,    74
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -137,  -137,    82,  -137,   164,  -137,  -137,  -137,   143,   -11,
      39,   -32,  -137,  -137,  -137,  -137,  -137,  -137,  -137,  -137,
    -137,    86,  -137,    28,  -136
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,    21,    22,    23,    24,    25,    26,    27,
      62,   156,    28,   169,   177,    29,   152,   163,    30,    31,
      81,   157,   158,   159,   149
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      63,    33,    65,    66,     5,    68,     3,   182,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    32,    34,
     155,    80,   167,   168,   161,    35,   162,    83,    84,    86,
     174,   -84,   112,    52,    53,    54,    55,    36,    56,    57,
      58,   155,   113,    51,    37,   187,    38,    64,   111,    20,
      85,   183,    67,    82,   105,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   175,   108,    59,   110,   139,   114,
     136,    60,   143,   144,    61,   142,    52,    53,    54,   115,
       4,    56,    57,    58,   140,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,   145,    15,   137,    16,     4,
      17,    18,    19,   138,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,   140,    15,   146,    16,   147,    17,
      18,    19,     6,     7,     8,     9,    10,    11,    12,   154,
      20,     6,     7,     8,     9,    10,    11,   165,   166,   160,
     173,   171,   172,   155,   178,   176,   192,   179,   184,    20,
     180,   186,   188,   189,     4,   198,   199,   200,   164,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,   201,
      15,    69,    16,     4,    17,    18,    19,    39,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,   141,    15,
     170,    16,   181,    17,    18,    19,     0,     0,     0,     0,
       0,     0,     0,     0,    20,     0,     0,     0,     0,    52,
      53,    54,    55,   195,    56,    57,    58,   151,     0,   153,
       0,     0,     0,    20,     0,     0,     0,     0,     4,     0,
       0,     0,   197,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,     0,    15,     0,    16,     0,    17,    18,
      19,   185,    59,     0,     0,     0,   190,    60,   191,     0,
      61,   193,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   202,     0,     0,     0,     0,    20,    52,
      53,    54,    55,     0,    56,    57,    58,   203,     6,     7,
       8,     9,    10,    11,     4,     0,     0,     0,     0,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,     0,
      15,     0,    16,     0,    17,    18,    19,     0,     0,     0,
       0,     0,    59,     0,     0,     0,     0,    60,     0,     4,
      61,     0,     0,     0,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    20,    15,     0,   194,     0,    17,
      18,    19,    87,    88,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    89,    90,    91,    92,     0,    93,
      94,     0,    95,    96,    97,    98,     0,   106,     0,    20,
      99,   100,   101,   102,   103,   104,    87,    88,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    89,    90,
      91,    92,     0,    93,    94,     0,    95,    96,    97,    98,
       0,   107,    87,    88,    99,   100,   101,   102,   103,   104,
       0,     0,     0,     0,    89,    90,    91,    92,     0,    93,
      94,     0,    95,    96,    97,    98,     0,   109,    87,    88,
      99,   100,   101,   102,   103,   104,     0,     0,     0,     0,
      89,    90,    91,    92,     0,    93,    94,     0,    95,    96,
      97,    98,     0,   116,    87,    88,    99,   100,   101,   102,
     103,   104,     0,     0,     0,     0,    89,    90,    91,    92,
       0,    93,    94,     0,    95,    96,    97,    98,    87,    88,
     148,     0,    99,   100,   101,   102,   103,   104,     0,     0,
      89,    90,    91,    92,     0,    93,    94,     0,    95,    96,
      97,    98,     0,   150,    87,    88,    99,   100,   101,   102,
     103,   104,     0,     0,     0,     0,    89,    90,    91,    92,
       0,    93,    94,     0,    95,    96,    97,    98,     0,   196,
      87,    88,    99,   100,   101,   102,   103,   104,     0,     0,
       0,     0,    89,    90,    91,    92,     0,    93,    94,     0,
      95,    96,    97,    98,    87,    88,     0,     0,    99,   100,
     101,   102,   103,   104,     0,     0,    89,    90,    91,    92,
       0,    93,    94,     0,     0,     0,    97,    98,    87,    88,
       0,     0,    99,   100,   101,   102,   103,   104,     0,     0,
      89,    90,    91,    92,     0,    93,    94,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    99,   100,   101,   102,
     103,   104,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,     0,     0,     0,     0,     0,     0,     0,    50
};

static const yytype_int16 yycheck[] =
{
      32,    12,    34,    35,    11,    37,     0,    20,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    57,    54,
      11,    57,   158,   159,    23,    54,    25,    59,    60,    61,
     166,    67,    57,     3,     4,     5,     6,    54,     8,     9,
      10,    11,    67,     6,    54,   181,    54,     6,    80,    56,
      61,    64,     6,    29,    57,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,    65,    55,    46,    56,   110,    54,
      64,    51,   114,   115,    54,    68,     3,     4,     5,    55,
       6,     8,     9,    10,    64,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    11,    22,    64,    24,     6,
      26,    27,    28,    64,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    64,    22,    11,    24,    11,    26,
      27,    28,    12,    13,    14,    15,    16,    17,    18,     6,
      56,    12,    13,    14,    15,    16,    17,    49,    69,    65,
      55,    66,    65,    11,    66,    21,   188,    11,    11,    56,
      64,    11,    54,    11,     6,    56,    64,    11,    65,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    11,
      22,    38,    24,     6,    26,    27,    28,    23,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,   112,    22,
     161,    24,   174,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    65,     8,     9,    10,   145,    -1,   147,
      -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,     6,    -1,
      -1,    -1,    65,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    -1,    22,    -1,    24,    -1,    26,    27,
      28,   179,    46,    -1,    -1,    -1,   184,    51,   186,    -1,
      54,   189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,    56,     3,
       4,     5,     6,    -1,     8,     9,    10,    65,    12,    13,
      14,    15,    16,    17,     6,    -1,    -1,    -1,    -1,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      22,    -1,    24,    -1,    26,    27,    28,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    -1,    -1,    -1,    51,    -1,     6,
      54,    -1,    -1,    -1,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    56,    22,    -1,    24,    -1,    26,
      27,    28,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    44,    45,    -1,    47,
      48,    -1,    50,    51,    52,    53,    -1,    55,    -1,    56,
      58,    59,    60,    61,    62,    63,    30,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      44,    45,    -1,    47,    48,    -1,    50,    51,    52,    53,
      -1,    55,    30,    31,    58,    59,    60,    61,    62,    63,
      -1,    -1,    -1,    -1,    42,    43,    44,    45,    -1,    47,
      48,    -1,    50,    51,    52,    53,    -1,    55,    30,    31,
      58,    59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,
      42,    43,    44,    45,    -1,    47,    48,    -1,    50,    51,
      52,    53,    -1,    55,    30,    31,    58,    59,    60,    61,
      62,    63,    -1,    -1,    -1,    -1,    42,    43,    44,    45,
      -1,    47,    48,    -1,    50,    51,    52,    53,    30,    31,
      56,    -1,    58,    59,    60,    61,    62,    63,    -1,    -1,
      42,    43,    44,    45,    -1,    47,    48,    -1,    50,    51,
      52,    53,    -1,    55,    30,    31,    58,    59,    60,    61,
      62,    63,    -1,    -1,    -1,    -1,    42,    43,    44,    45,
      -1,    47,    48,    -1,    50,    51,    52,    53,    -1,    55,
      30,    31,    58,    59,    60,    61,    62,    63,    -1,    -1,
      -1,    -1,    42,    43,    44,    45,    -1,    47,    48,    -1,
      50,    51,    52,    53,    30,    31,    -1,    -1,    58,    59,
      60,    61,    62,    63,    -1,    -1,    42,    43,    44,    45,
      -1,    47,    48,    -1,    -1,    -1,    52,    53,    30,    31,
      -1,    -1,    58,    59,    60,    61,    62,    63,    -1,    -1,
      42,    43,    44,    45,    -1,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,    61,
      62,    63,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    71,    72,     0,     6,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    22,    24,    26,    27,    28,
      56,    73,    74,    75,    76,    77,    78,    79,    82,    85,
      88,    89,    57,    79,    54,    54,    54,    54,    54,    74,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      49,     6,     3,     4,     5,     6,     8,     9,    10,    46,
      51,    54,    80,    81,     6,    81,    81,     6,    81,    78,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      57,    90,    29,    81,    81,    79,    81,    30,    31,    42,
      43,    44,    45,    47,    48,    50,    51,    52,    53,    58,
      59,    60,    61,    62,    63,    57,    55,    55,    55,    55,
      56,    81,    57,    67,    54,    55,    55,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    64,    64,    64,    81,
      64,    91,    68,    81,    81,    11,    11,    11,    56,    94,
      55,    72,    86,    72,     6,    11,    81,    91,    92,    93,
      65,    23,    25,    87,    65,    49,    69,    94,    94,    83,
      80,    66,    65,    55,    94,    65,    21,    84,    66,    11,
      64,    93,    20,    64,    11,    72,    11,    94,    54,    11,
      72,    72,    81,    72,    24,    65,    55,    65,    56,    64,
      11,    11,    72,    65
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    70,    71,    72,    72,    73,    73,    74,    74,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      77,    78,    78,    78,    78,    79,    79,    79,    79,    79,
      79,    80,    80,    80,    80,    80,    80,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    82,    83,    83,    84,    84,    85,    86,    86,
      87,    87,    88,    89,    90,    90,    91,    92,    92,    92,
      93,    93,    94,    94
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     2,     1,     1,     1,     1,
       4,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       1,     4,     2,     5,     5,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       3,     3,     3,     3,     3,     3,     4,     3,     3,     3,
       3,     3,     5,     3,     3,     3,     3,     3,     3,     3,
       3,     2,    10,     0,    10,     0,     5,     9,     0,     9,
       0,     4,     8,    13,     0,     3,     5,     0,     2,     5,
       1,     1,     0,     2
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
#line 101 "src/parser/parser.y"
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
#line 1787 "build/parser.tab.c"
    break;

  case 3: /* sentences: sentences sentence  */
#line 116 "src/parser/parser.y"
        { 
            if ((yyvsp[0].instr) != NULL) {
                InstruccionList_insert((yyvsp[-1].instrList), (yyvsp[0].instr));
                (yyval.instrList) = (yyvsp[-1].instrList);
            } else {
                (yyval.instrList) = (yyvsp[-1].instrList);
            }
        }
#line 1800 "build/parser.tab.c"
    break;

  case 4: /* sentences: %empty  */
#line 125 "src/parser/parser.y"
        { 
            (yyval.instrList) = InstruccionList_create();
        }
#line 1808 "build/parser.tab.c"
    break;

  case 5: /* sentence: instruction separator  */
#line 130 "src/parser/parser.y"
                           {
        (yyval.instr) = (yyvsp[-1].instr);
    }
#line 1816 "build/parser.tab.c"
    break;

  case 6: /* sentence: separator  */
#line 133 "src/parser/parser.y"
                {
        (yyval.instr) = NULL;
    }
#line 1824 "build/parser.tab.c"
    break;

  case 7: /* separator: BREAK_LINE  */
#line 138 "src/parser/parser.y"
                 {}
#line 1830 "build/parser.tab.c"
    break;

  case 8: /* separator: ';'  */
#line 139 "src/parser/parser.y"
          { /* skip */ }
#line 1836 "build/parser.tab.c"
    break;

  case 9: /* instruction: declaration  */
#line 143 "src/parser/parser.y"
                {
        (yyvsp[0].instr)->InstType = "DECLARATION";
        (yyvsp[0].instr)->line = (yylsp[0]).first_line;
        (yyval.instr) = (yyvsp[0].instr);
    }
#line 1846 "build/parser.tab.c"
    break;

  case 10: /* instruction: PRINTLN '(' expression ')'  */
#line 148 "src/parser/parser.y"
                                 {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->InstType = "PRINTLN";
        instP->value = (yyvsp[-1].expr);
        instP->line = (yylsp[-3]).first_line;
        (yyval.instr) = instP;
    }
#line 1858 "build/parser.tab.c"
    break;

  case 11: /* instruction: assignment  */
#line 155 "src/parser/parser.y"
                 {
        (yyvsp[0].instr)->InstType = "ASSIGNMENT";
        (yyvsp[0].instr)->line = (yylsp[0]).first_line;
        (yyval.instr) = (yyvsp[0].instr);
    }
#line 1868 "build/parser.tab.c"
    break;

  case 12: /* instruction: IF_STATEMENT  */
#line 160 "src/parser/parser.y"
                   {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->InstType = "IF_STATEMENT";
        instP->ifData = (yyvsp[0].ifdata);
        instP->line = (yylsp[0]).first_line;
        instP->column = (yylsp[0]).first_column;
        (yyval.instr) = instP;
    }
#line 1881 "build/parser.tab.c"
    break;

  case 13: /* instruction: SWITCH_STATEMENT  */
#line 168 "src/parser/parser.y"
                       {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->InstType = "SWITCH_STATEMENT";
        instP->switchData = (yyvsp[0].switchdata);
        instP->line = (yylsp[0]).first_line;
        instP->column = (yylsp[0]).first_column;
        (yyval.instr) = instP;
    }
#line 1894 "build/parser.tab.c"
    break;

  case 14: /* instruction: WHILE_STATEMENT  */
#line 176 "src/parser/parser.y"
                      {
        (yyvsp[0].instr)->InstType = "WHILE_STATEMENT";
        (yyvsp[0].instr)->line = (yylsp[0]).first_line;
        (yyval.instr) = (yyvsp[0].instr); }
#line 1903 "build/parser.tab.c"
    break;

  case 15: /* instruction: FOR_STATEMENT  */
#line 180 "src/parser/parser.y"
                    {
        (yyvsp[0].instr)->InstType = "FOR_STATEMENT";
        (yyvsp[0].instr)->line = (yylsp[0]).first_line;
        (yyval.instr) = (yyvsp[0].instr); }
#line 1912 "build/parser.tab.c"
    break;

  case 16: /* instruction: BREAK  */
#line 184 "src/parser/parser.y"
            {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->InstType = "BREAK";
        instP->line = (yylsp[0]).first_line;
        instP->column = (yylsp[0]).first_column;
        (yyval.instr) = instP;
    }
#line 1924 "build/parser.tab.c"
    break;

  case 17: /* instruction: CONTINUE  */
#line 191 "src/parser/parser.y"
               {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->InstType = "CONTINUE";
        instP->line = (yylsp[0]).first_line;
        instP->column = (yylsp[0]).first_column;
        (yyval.instr) = instP;
    }
#line 1936 "build/parser.tab.c"
    break;

  case 18: /* assignment: ID '=' expression  */
#line 202 "src/parser/parser.y"
                      {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->id = (yyvsp[-2].sval);
        instP->value = (yyvsp[0].expr);
        instP->column = (yylsp[-2]).first_column;
        (yyval.instr) = instP; }
#line 1947 "build/parser.tab.c"
    break;

  case 19: /* assignment: assignment_expression PLUS_ASSIGN expression  */
#line 209 "src/parser/parser.y"
                                                   {
        (yyvsp[-2].instr)->value->type = "SUM";
        (yyvsp[-2].instr)->value->value = strdup("+");
        (yyvsp[-2].instr)->value->right = (yyvsp[0].expr);
        (yyval.instr) = (yyvsp[-2].instr); }
#line 1957 "build/parser.tab.c"
    break;

  case 20: /* assignment: assignment_expression MINUS_ASSIGN expression  */
#line 215 "src/parser/parser.y"
                                                    {
        (yyvsp[-2].instr)->value->type = "SUBTRACT";
        (yyvsp[-2].instr)->value->value = strdup("-");
        (yyvsp[-2].instr)->value->right = (yyvsp[0].expr);
        (yyval.instr) = (yyvsp[-2].instr); }
#line 1967 "build/parser.tab.c"
    break;

  case 21: /* assignment: assignment_expression MULT_ASSIGN expression  */
#line 221 "src/parser/parser.y"
                                                   {
        (yyvsp[-2].instr)->value->type = "MULTIPLICATION";
        (yyvsp[-2].instr)->value->value = strdup("*");
        (yyvsp[-2].instr)->value->right = (yyvsp[0].expr);
        (yyval.instr) = (yyvsp[-2].instr); }
#line 1977 "build/parser.tab.c"
    break;

  case 22: /* assignment: assignment_expression DIV_ASSIGN expression  */
#line 227 "src/parser/parser.y"
                                                  {
        (yyvsp[-2].instr)->value->type = "DIVIDE";
        (yyvsp[-2].instr)->value->value = strdup("/");
        (yyvsp[-2].instr)->value->right = (yyvsp[0].expr);
        (yyval.instr) = (yyvsp[-2].instr); }
#line 1987 "build/parser.tab.c"
    break;

  case 23: /* assignment: assignment_expression MOD_ASSIGN expression  */
#line 233 "src/parser/parser.y"
                                                  {
        (yyvsp[-2].instr)->value->type = "MODULO";
        (yyvsp[-2].instr)->value->value = strdup("%");
        (yyvsp[-2].instr)->value->right = (yyvsp[0].expr);
        (yyval.instr) = (yyvsp[-2].instr); }
#line 1997 "build/parser.tab.c"
    break;

  case 24: /* assignment: assignment_expression AND_ASSIGN expression  */
#line 239 "src/parser/parser.y"
                                                  {
        (yyvsp[-2].instr)->value->type = "BITWISE_AND";
        (yyvsp[-2].instr)->value->value = strdup("&");
        (yyvsp[-2].instr)->value->right = (yyvsp[0].expr);
        (yyval.instr) = (yyvsp[-2].instr); }
#line 2007 "build/parser.tab.c"
    break;

  case 25: /* assignment: assignment_expression OR_ASSIGN expression  */
#line 245 "src/parser/parser.y"
                                                 {
        (yyvsp[-2].instr)->value->type = "BITWISE_OR";
        (yyvsp[-2].instr)->value->value = strdup("|");
        (yyvsp[-2].instr)->value->right = (yyvsp[0].expr);
        (yyval.instr) = (yyvsp[-2].instr); }
#line 2017 "build/parser.tab.c"
    break;

  case 26: /* assignment: assignment_expression XOR_ASSIGN expression  */
#line 251 "src/parser/parser.y"
                                                  {
        (yyvsp[-2].instr)->value->type = "BITWISE_XOR";
        (yyvsp[-2].instr)->value->value = strdup("^");
        (yyvsp[-2].instr)->value->right = (yyvsp[0].expr);
        (yyval.instr) = (yyvsp[-2].instr); }
#line 2027 "build/parser.tab.c"
    break;

  case 27: /* assignment: assignment_expression LEFT_SHIFT_ASSIGN expression  */
#line 257 "src/parser/parser.y"
                                                         {
        (yyvsp[-2].instr)->value->type = "BITWISE_LEFT_SHIFT";
        (yyvsp[-2].instr)->value->value = strdup("<<");
        (yyvsp[-2].instr)->value->right = (yyvsp[0].expr);
        (yyval.instr) = (yyvsp[-2].instr); }
#line 2037 "build/parser.tab.c"
    break;

  case 28: /* assignment: assignment_expression RIGHT_SHIFT_ASSIGN expression  */
#line 263 "src/parser/parser.y"
                                                          {
        (yyvsp[-2].instr)->value->type = "BITWISE_RIGHT_SHIFT";
        (yyvsp[-2].instr)->value->value = strdup(">>");
        (yyvsp[-2].instr)->value->right = (yyvsp[0].expr);
        (yyval.instr) = (yyvsp[-2].instr); }
#line 2047 "build/parser.tab.c"
    break;

  case 29: /* assignment: assignment_expression INCREMENT  */
#line 269 "src/parser/parser.y"
                                      {
        (yyvsp[-1].instr)->value->type = "SUM";
        (yyvsp[-1].instr)->value->value = strdup("+");
        (yyvsp[-1].instr)->value->right = (Expression*)calloc(1, sizeof(Expression));
        (yyvsp[-1].instr)->value->right->type = "INTEGER";
        (yyvsp[-1].instr)->value->right->value = strdup("1");
        (yyval.instr) = (yyvsp[-1].instr); }
#line 2059 "build/parser.tab.c"
    break;

  case 30: /* assignment_expression: ID  */
#line 278 "src/parser/parser.y"
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
#line 2075 "build/parser.tab.c"
    break;

  case 31: /* declaration: primitive_types ID '=' expression  */
#line 295 "src/parser/parser.y"
                                      {

        // ? Crear instrucción

        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->id = (yyvsp[-2].sval);
        instP->type = (yyvsp[-3].sval);
        instP->column = (yylsp[-2]).first_column;
        instP->symbolType = "VARIABLE";
        instP->value = (yyvsp[0].expr);
        (yyval.instr) = instP; }
#line 2091 "build/parser.tab.c"
    break;

  case 32: /* declaration: primitive_types ID  */
#line 307 "src/parser/parser.y"
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
#line 2109 "build/parser.tab.c"
    break;

  case 33: /* declaration: FINAL primitive_types ID '=' expression  */
#line 321 "src/parser/parser.y"
                                              {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->id = (yyvsp[-2].sval);
        instP->type = (yyvsp[-3].sval);
        instP->column = (yylsp[-2]).first_column;
        instP->symbolType = "CONSTANT";
        instP->value = (yyvsp[0].expr);
        (yyval.instr) = instP; }
#line 2122 "build/parser.tab.c"
    break;

  case 34: /* declaration: primitive_types ID dimensions '=' dimension_expression  */
#line 330 "src/parser/parser.y"
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
#line 2137 "build/parser.tab.c"
    break;

  case 35: /* primitive_types: INT  */
#line 344 "src/parser/parser.y"
        { (yyval.sval) = strdup("INTEGER"); }
#line 2143 "build/parser.tab.c"
    break;

  case 36: /* primitive_types: STRING  */
#line 345 "src/parser/parser.y"
             { (yyval.sval) = strdup("STRING"); }
#line 2149 "build/parser.tab.c"
    break;

  case 37: /* primitive_types: DOUBLE  */
#line 346 "src/parser/parser.y"
             { (yyval.sval) = strdup("DOUBLE"); }
#line 2155 "build/parser.tab.c"
    break;

  case 38: /* primitive_types: FLOAT  */
#line 347 "src/parser/parser.y"
            { (yyval.sval) = strdup("FLOAT"); }
#line 2161 "build/parser.tab.c"
    break;

  case 39: /* primitive_types: BOOL  */
#line 348 "src/parser/parser.y"
           { (yyval.sval) = strdup("BOOLEAN"); }
#line 2167 "build/parser.tab.c"
    break;

  case 40: /* primitive_types: CHAR  */
#line 349 "src/parser/parser.y"
           { (yyval.sval) = strdup("CHARACTER"); }
#line 2173 "build/parser.tab.c"
    break;

  case 41: /* primitive_values: NUM  */
#line 354 "src/parser/parser.y"
        { 
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = strdup("INTEGER");
        exp->value = strdup((yyvsp[0].sval));

        (yyval.expr) = exp; }
#line 2184 "build/parser.tab.c"
    break;

  case 42: /* primitive_values: STR  */
#line 360 "src/parser/parser.y"
          { 
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = strdup("STRING");
        exp->value = strdup((yyvsp[0].sval));

        (yyval.expr) = exp; }
#line 2195 "build/parser.tab.c"
    break;

  case 43: /* primitive_values: DEC  */
#line 366 "src/parser/parser.y"
          { 
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = strdup("DOUBLE");
        exp->value = strdup((yyvsp[0].sval));

        (yyval.expr) = exp; }
#line 2206 "build/parser.tab.c"
    break;

  case 44: /* primitive_values: DECF  */
#line 372 "src/parser/parser.y"
           { 
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = strdup("FLOAT");
        exp->value = strdup((yyvsp[0].sval));

        (yyval.expr) = exp; }
#line 2217 "build/parser.tab.c"
    break;

  case 45: /* primitive_values: BOOLEAN  */
#line 378 "src/parser/parser.y"
              { 
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = strdup("BOOLEAN");
        exp->value = strdup((yyvsp[0].sval));

        (yyval.expr) = exp; }
#line 2228 "build/parser.tab.c"
    break;

  case 46: /* primitive_values: CHR  */
#line 384 "src/parser/parser.y"
          { 
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = strdup("CHARACTER");
        exp->value = strdup((yyvsp[0].sval));
        (yyval.expr) = exp; }
#line 2238 "build/parser.tab.c"
    break;

  case 47: /* expression: primitive_values  */
#line 393 "src/parser/parser.y"
                       { (yyval.expr) = (yyvsp[0].expr); }
#line 2244 "build/parser.tab.c"
    break;

  case 48: /* expression: ID  */
#line 394 "src/parser/parser.y"
         {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "ID";
        exp->value = strdup((yyvsp[0].sval));
        (yyval.expr) = exp;
        }
#line 2255 "build/parser.tab.c"
    break;

  case 49: /* expression: '-' expression  */
#line 400 "src/parser/parser.y"
                               {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "NEGATIVE";
        exp->value = strdup("-");
        exp->left = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2266 "build/parser.tab.c"
    break;

  case 50: /* expression: expression '+' expression  */
#line 406 "src/parser/parser.y"
                                {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "SUM";
        exp->value = strdup("+");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2278 "build/parser.tab.c"
    break;

  case 51: /* expression: expression '-' expression  */
#line 413 "src/parser/parser.y"
                                {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "SUBTRACT";
        exp->value = strdup("-");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2290 "build/parser.tab.c"
    break;

  case 52: /* expression: expression '*' expression  */
#line 420 "src/parser/parser.y"
                                {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "MULTIPLICATION";
        exp->value = strdup("*");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2302 "build/parser.tab.c"
    break;

  case 53: /* expression: expression '/' expression  */
#line 427 "src/parser/parser.y"
                                {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "DIVIDE";
        exp->value = strdup("/");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2314 "build/parser.tab.c"
    break;

  case 54: /* expression: expression '%' expression  */
#line 434 "src/parser/parser.y"
                                {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "MODULO";
        exp->value = strdup("%");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2326 "build/parser.tab.c"
    break;

  case 55: /* expression: '(' expression ')'  */
#line 441 "src/parser/parser.y"
                         { (yyval.expr) = (yyvsp[-1].expr); }
#line 2332 "build/parser.tab.c"
    break;

  case 56: /* expression: '(' primitive_types ')' expression  */
#line 442 "src/parser/parser.y"
                                         {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "CASTING";
        exp->value = (yyvsp[-2].sval);
        exp->left = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2343 "build/parser.tab.c"
    break;

  case 57: /* expression: expression '&' expression  */
#line 449 "src/parser/parser.y"
                                {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "BITWISE_AND";
        exp->value = strdup("&");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2355 "build/parser.tab.c"
    break;

  case 58: /* expression: expression '|' expression  */
#line 456 "src/parser/parser.y"
                                {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "BITWISE_OR";
        exp->value = strdup("|");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2367 "build/parser.tab.c"
    break;

  case 59: /* expression: expression '^' expression  */
#line 463 "src/parser/parser.y"
                                {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "BITWISE_XOR";
        exp->value = strdup("^");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2379 "build/parser.tab.c"
    break;

  case 60: /* expression: expression LEFT_SHIFT expression  */
#line 471 "src/parser/parser.y"
                                       {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "BITWISE_LEFT_SHIFT";
        exp->value = strdup("<<");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2391 "build/parser.tab.c"
    break;

  case 61: /* expression: expression RIGHT_SHIFT expression  */
#line 480 "src/parser/parser.y"
                                        {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "BITWISE_RIGHT_SHIFT";
        exp->value = strdup(">>");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2403 "build/parser.tab.c"
    break;

  case 62: /* expression: ID EQUALS_OP '(' expression ')'  */
#line 488 "src/parser/parser.y"
                                      {
        Expression *exp = (Expression*)calloc(1, sizeof(Expression));   
        exp->type = "EQUALS_OP";
        exp->value = strdup(".equals");
        exp->left = (Expression*)calloc(1, sizeof(Expression));
        exp->left->type = "ID";
        exp->left->value = strdup((yyvsp[-4].sval));
        exp->right = (yyvsp[-1].expr);
        (yyval.expr) = exp; }
#line 2417 "build/parser.tab.c"
    break;

  case 63: /* expression: expression EQUALS expression  */
#line 498 "src/parser/parser.y"
                                   {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "EQUALS";
        exp->value = strdup("==");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2429 "build/parser.tab.c"
    break;

  case 64: /* expression: expression NOT_EQUALS expression  */
#line 506 "src/parser/parser.y"
                                       {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "NOT_EQUALS";
        exp->value = strdup("!=");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2441 "build/parser.tab.c"
    break;

  case 65: /* expression: expression '>' expression  */
#line 514 "src/parser/parser.y"
                                {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "GREATER";
        exp->value = strdup(">");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2453 "build/parser.tab.c"
    break;

  case 66: /* expression: expression '<' expression  */
#line 522 "src/parser/parser.y"
                                {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "LESS";
        exp->value = strdup("<");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2465 "build/parser.tab.c"
    break;

  case 67: /* expression: expression GREATER_EQUALS expression  */
#line 530 "src/parser/parser.y"
                                           {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "GREATER_EQUALS";
        exp->value = strdup(">=");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2477 "build/parser.tab.c"
    break;

  case 68: /* expression: expression LESS_EQUALS expression  */
#line 538 "src/parser/parser.y"
                                        {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "LESS_EQUALS";
        exp->value = strdup("<=");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2489 "build/parser.tab.c"
    break;

  case 69: /* expression: expression AND expression  */
#line 546 "src/parser/parser.y"
                                {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "LOGICAL_AND";
        exp->value = strdup("&&");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2501 "build/parser.tab.c"
    break;

  case 70: /* expression: expression OR expression  */
#line 554 "src/parser/parser.y"
                               {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "LOGICAL_OR";
        exp->value = strdup("||");
        exp->left = (yyvsp[-2].expr);
        exp->right = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2513 "build/parser.tab.c"
    break;

  case 71: /* expression: NOT expression  */
#line 562 "src/parser/parser.y"
                     {
        Expression* exp = (Expression*)calloc(1, sizeof(Expression));
        exp->type = "LOGICAL_NOT";
        exp->value = strdup("!");
        exp->left = (yyvsp[0].expr);
        (yyval.expr) = exp; }
#line 2524 "build/parser.tab.c"
    break;

  case 72: /* IF_STATEMENT: IF '(' expression ')' '{' BREAK_LINE sentences '}' IF_LIST ELSE_STATEMENT  */
#line 574 "src/parser/parser.y"
                                                                                 {
        IfData* ifdata = (IfData*)calloc(1, sizeof(IfData));
        ifdata->condition = (yyvsp[-7].expr);
        ifdata->block = (yyvsp[-3].instrList);
        ifdata->elseIfs = (yyvsp[-1].ifnodelist);
        ifdata->elseBlock = (yyvsp[0].instrList);
        (yyval.ifdata) = ifdata;
    }
#line 2537 "build/parser.tab.c"
    break;

  case 73: /* IF_LIST: %empty  */
#line 584 "src/parser/parser.y"
                { (yyval.ifnodelist) = createIfNodeList(); }
#line 2543 "build/parser.tab.c"
    break;

  case 74: /* IF_LIST: IF_LIST ELSE IF '(' expression ')' '{' BREAK_LINE sentences '}'  */
#line 585 "src/parser/parser.y"
                                                                        {
        IfData* elseIfNode = (IfData*)malloc(sizeof(IfData));
        elseIfNode->condition = (yyvsp[-5].expr);
        elseIfNode->block = (yyvsp[-1].instrList);
        insertIfNode((yyvsp[-9].ifnodelist), elseIfNode);
        (yyval.ifnodelist) = (yyvsp[-9].ifnodelist);
    }
#line 2555 "build/parser.tab.c"
    break;

  case 75: /* ELSE_STATEMENT: %empty  */
#line 594 "src/parser/parser.y"
                { (yyval.instrList) = NULL; }
#line 2561 "build/parser.tab.c"
    break;

  case 76: /* ELSE_STATEMENT: ELSE '{' BREAK_LINE sentences '}'  */
#line 595 "src/parser/parser.y"
                                        { (yyval.instrList) = (yyvsp[-1].instrList); }
#line 2567 "build/parser.tab.c"
    break;

  case 77: /* SWITCH_STATEMENT: SWITCH '(' ID ')' '{' BREAK_LINE CASES DEFAULT_CASE '}'  */
#line 599 "src/parser/parser.y"
                                                            {
        SwitchData* switchdata = (SwitchData*)malloc(sizeof(SwitchData));
        switchdata->condition = strdup((yyvsp[-6].sval));
        switchdata->cases = (yyvsp[-2].casenodelist);
        switchdata->defaultCase = (yyvsp[-1].instrList);
        (yyval.switchdata) = switchdata;
    }
#line 2579 "build/parser.tab.c"
    break;

  case 78: /* CASES: %empty  */
#line 610 "src/parser/parser.y"
                { (yyval.casenodelist) = CaseNodeList_create(); }
#line 2585 "build/parser.tab.c"
    break;

  case 79: /* CASES: CASES CASE primitive_values ':' BREAK_LINE sentences BREAK ';' BREAK_LINE  */
#line 611 "src/parser/parser.y"
                                                                                {
        CaseData* new_case = (CaseData*)malloc(sizeof(CaseData));
        new_case->condition = (yyvsp[-6].expr);
        new_case->block = (yyvsp[-3].instrList);
        CaseNodeList_add((yyvsp[-8].casenodelist), new_case);
        (yyval.casenodelist) = (yyvsp[-8].casenodelist);
    }
#line 2597 "build/parser.tab.c"
    break;

  case 80: /* DEFAULT_CASE: %empty  */
#line 621 "src/parser/parser.y"
                { (yyval.instrList) = NULL; }
#line 2603 "build/parser.tab.c"
    break;

  case 81: /* DEFAULT_CASE: DEFAULT ':' BREAK_LINE sentences  */
#line 622 "src/parser/parser.y"
                                       { (yyval.instrList) = (yyvsp[0].instrList); }
#line 2609 "build/parser.tab.c"
    break;

  case 82: /* WHILE_STATEMENT: WHILE '(' expression ')' '{' BREAK_LINE sentences '}'  */
#line 630 "src/parser/parser.y"
                                                          {
        Instruccion* instP = (Instruccion*)malloc(sizeof(Instruccion));
        instP->whileData = (WhileData*)malloc(sizeof(WhileData));
        instP->whileData->condition = (yyvsp[-5].expr);
        instP->whileData->block = (yyvsp[-1].instrList);
        instP->column = (yylsp[-7]).first_column;
        (yyval.instr) = instP;
    }
#line 2622 "build/parser.tab.c"
    break;

  case 83: /* FOR_STATEMENT: FOR '(' declaration ';' expression ';' ID INCREMENT ')' '{' BREAK_LINE sentences '}'  */
#line 642 "src/parser/parser.y"
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
#line 2653 "build/parser.tab.c"
    break;

  case 84: /* dimensions: %empty  */
#line 671 "src/parser/parser.y"
                  { (yyval.ival) = 0; }
#line 2659 "build/parser.tab.c"
    break;

  case 85: /* dimensions: dimensions '[' ']'  */
#line 672 "src/parser/parser.y"
                         { (yyval.ival) = (yyvsp[-2].ival) + 1; }
#line 2665 "build/parser.tab.c"
    break;

  case 86: /* dimension_expression: '{' optional_newlines dimension_values_list optional_newlines '}'  */
#line 675 "src/parser/parser.y"
                                                                      {(yyval.list) = (yyvsp[-2].list); }
#line 2671 "build/parser.tab.c"
    break;

  case 87: /* dimension_values_list: %empty  */
#line 678 "src/parser/parser.y"
                  {  (yyval.list) = List_create(); }
#line 2677 "build/parser.tab.c"
    break;

  case 88: /* dimension_values_list: dimension_value optional_newlines  */
#line 679 "src/parser/parser.y"
                                        { 
        List* list = List_create(); 
        List_add(list, (yyvsp[-1].listdata)); 
        (yyval.list) = list; 
    }
#line 2687 "build/parser.tab.c"
    break;

  case 89: /* dimension_values_list: dimension_values_list ',' optional_newlines dimension_value optional_newlines  */
#line 684 "src/parser/parser.y"
                                                                                    {List_add((yyvsp[-4].list), (yyvsp[-1].listdata)); (yyval.list) = (yyvsp[-4].list);}
#line 2693 "build/parser.tab.c"
    break;

  case 90: /* dimension_value: expression  */
#line 687 "src/parser/parser.y"
               { ListData* data = (ListData*)calloc(1, sizeof(ListData));
                  data->exprData = (yyvsp[0].expr);
                  (yyval.listdata) = data; }
#line 2701 "build/parser.tab.c"
    break;

  case 91: /* dimension_value: dimension_expression  */
#line 690 "src/parser/parser.y"
                           {
        ListData* data = (ListData*)calloc(1, sizeof(ListData));
        data->listData = (yyvsp[0].list);
        (yyval.listdata) = data;
    }
#line 2711 "build/parser.tab.c"
    break;


#line 2715 "build/parser.tab.c"

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

#line 701 "src/parser/parser.y"


int yyerror(const char *s)
{
    extern YYLTYPE yylloc;
    printf("Syntax Error: %s en línea %d, columna %d\n", s, yylloc.first_line, yylloc.first_column);
    Error *error = malloc(sizeof(Error));
    error->type = strdup("Sintáctico");
    error->environment = strdup("-");
    error->message = strdup(s);
    error->line = yylloc.first_line;
    error->column = yylloc.first_column;
    insertError(list_errors, error);
    return 0;
}
