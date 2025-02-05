
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUM = 258,
     VAR = 259,
     IF = 260,
     ELIF = 261,
     ELSE = 262,
     MAIN = 263,
     INT = 264,
     FLOAT = 265,
     DOUBLE = 266,
     CHAR = 267,
     LP = 268,
     RP = 269,
     LB = 270,
     RB = 271,
     CM = 272,
     SM = 273,
     PLUS = 274,
     MINUS = 275,
     MULT = 276,
     DIV = 277,
     POW = 278,
     ASSIGN = 279,
     FOR = 280,
     COL = 281,
     WHILE = 282,
     BREAK = 283,
     DEFAULT = 284,
     CASE = 285,
     AND = 286,
     SWITCH = 287,
     inc = 288,
     OR = 289,
     XOR = 290,
     FACTORIAL = 291,
     ODDEVEN = 292,
     LEAPYEAR = 293,
     PALINDROME = 294,
     POWER = 295,
     PRIME = 296,
     MAX_FUNC = 297,
     MIN_FUNC = 298,
     LCM_FUNC = 299,
     GCD_FUNC = 300,
     SIN = 301,
     CLP = 302,
     CCP = 303,
     COS = 304,
     TAN = 305,
     NL = 306,
     SQRT = 307,
     ARRAY = 308,
     FLOAT_NUM = 309,
     GT = 310,
     LT = 311
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 31 "Tonmoy.y"

        int number;
        float floating;
        char *string;



/* Line 1676 of yacc.c  */
#line 116 "Tonmoy.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


