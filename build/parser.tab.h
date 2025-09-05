/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_BUILD_PARSER_TAB_H_INCLUDED
# define YY_YY_BUILD_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 17 "src/parser/parser.y"

    typedef struct Instruccion Instruccion;
    typedef struct Expression Expression;

#line 54 "build/parser.tab.h"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    STR = 258,                     /* STR  */
    CHR = 259,                     /* CHR  */
    BOOLEAN = 260,                 /* BOOLEAN  */
    ID = 261,                      /* ID  */
    OTHER = 262,                   /* OTHER  */
    NUM = 263,                     /* NUM  */
    DEC = 264,                     /* DEC  */
    DECF = 265,                    /* DECF  */
    BREAK_LINE = 266,              /* BREAK_LINE  */
    INT = 267,                     /* INT  */
    STRING = 268,                  /* STRING  */
    CHAR = 269,                    /* CHAR  */
    FLOAT = 270,                   /* FLOAT  */
    DOUBLE = 271,                  /* DOUBLE  */
    BOOL = 272,                    /* BOOL  */
    FINAL = 273,                   /* FINAL  */
    PRINTLN = 274,                 /* PRINTLN  */
    LEFT_SHIFT = 275,              /* LEFT_SHIFT  */
    RIGHT_SHIFT = 276,             /* RIGHT_SHIFT  */
    PLUS_ASSIGN = 277,             /* PLUS_ASSIGN  */
    MINUS_ASSIGN = 278,            /* MINUS_ASSIGN  */
    MULT_ASSIGN = 279,             /* MULT_ASSIGN  */
    DIV_ASSIGN = 280,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 281,              /* MOD_ASSIGN  */
    AND_ASSIGN = 282,              /* AND_ASSIGN  */
    OR_ASSIGN = 283,               /* OR_ASSIGN  */
    XOR_ASSIGN = 284,              /* XOR_ASSIGN  */
    LEFT_SHIFT_ASSIGN = 285,       /* LEFT_SHIFT_ASSIGN  */
    RIGHT_SHIFT_ASSIGN = 286       /* RIGHT_SHIFT_ASSIGN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 24 "src/parser/parser.y"

    char* sval;
    Instruccion* instr;
    Expression* expr;

#line 108 "build/parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;

int yyparse (void);


#endif /* !YY_YY_BUILD_PARSER_TAB_H_INCLUDED  */
