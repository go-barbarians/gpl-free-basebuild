/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
    FINAL = 259,
    FATAL = 260,
    LT = 261,
    LE = 262,
    GT = 263,
    GE = 264,
    EQ = 265,
    NE = 266,
    MATCH = 267,
    NOTMATCH = 268,
    APPEND = 269,
    ADD = 270,
    MINUS = 271,
    MULT = 272,
    DIVIDE = 273,
    MOD = 274,
    UMINUS = 275,
    ASSIGN = 276,
    ADDEQ = 277,
    SUBEQ = 278,
    MULTEQ = 279,
    DIVEQ = 280,
    MODEQ = 281,
    JUMP = 282,
    XBEGIN = 283,
    XEND = 284,
    NL = 285,
    PRINT = 286,
    PRINTF = 287,
    SPRINTF = 288,
    SPLIT = 289,
    IF = 290,
    ELSE = 291,
    WHILE = 292,
    FOR = 293,
    IN = 294,
    NEXT = 295,
    EXIT = 296,
    BREAK = 297,
    CONTINUE = 298,
    PROGRAM = 299,
    PASTAT = 300,
    PASTAT2 = 301,
    REGEXPR = 302,
    ASGNOP = 303,
    BOR = 304,
    AND = 305,
    NOT = 306,
    NUMBER = 307,
    VAR = 308,
    ARRAY = 309,
    FNCN = 310,
    SUBSTR = 311,
    LSUBSTR = 312,
    INDEX = 313,
    GETLINE = 314,
    RELOP = 315,
    MATCHOP = 316,
    OR = 317,
    STRING = 318,
    DOT = 319,
    CCL = 320,
    NCCL = 321,
    CHAR = 322,
    CAT = 323,
    STAR = 324,
    PLUS = 325,
    QUEST = 326,
    POSTINCR = 327,
    PREINCR = 328,
    POSTDECR = 329,
    PREDECR = 330,
    INCR = 331,
    DECR = 332,
    FIELD = 333,
    INDIRECT = 334,
    LASTTOKEN = 335
  };
#endif
/* Tokens.  */
#define FIRSTTOKEN 258
#define FINAL 259
#define FATAL 260
#define LT 261
#define LE 262
#define GT 263
#define GE 264
#define EQ 265
#define NE 266
#define MATCH 267
#define NOTMATCH 268
#define APPEND 269
#define ADD 270
#define MINUS 271
#define MULT 272
#define DIVIDE 273
#define MOD 274
#define UMINUS 275
#define ASSIGN 276
#define ADDEQ 277
#define SUBEQ 278
#define MULTEQ 279
#define DIVEQ 280
#define MODEQ 281
#define JUMP 282
#define XBEGIN 283
#define XEND 284
#define NL 285
#define PRINT 286
#define PRINTF 287
#define SPRINTF 288
#define SPLIT 289
#define IF 290
#define ELSE 291
#define WHILE 292
#define FOR 293
#define IN 294
#define NEXT 295
#define EXIT 296
#define BREAK 297
#define CONTINUE 298
#define PROGRAM 299
#define PASTAT 300
#define PASTAT2 301
#define REGEXPR 302
#define ASGNOP 303
#define BOR 304
#define AND 305
#define NOT 306
#define NUMBER 307
#define VAR 308
#define ARRAY 309
#define FNCN 310
#define SUBSTR 311
#define LSUBSTR 312
#define INDEX 313
#define GETLINE 314
#define RELOP 315
#define MATCHOP 316
#define OR 317
#define STRING 318
#define DOT 319
#define CCL 320
#define NCCL 321
#define CHAR 322
#define CAT 323
#define STAR 324
#define PLUS 325
#define QUEST 326
#define POSTINCR 327
#define PREINCR 328
#define POSTDECR 329
#define PREDECR 330
#define INCR 331
#define DECR 332
#define FIELD 333
#define INDIRECT 334
#define LASTTOKEN 335

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
