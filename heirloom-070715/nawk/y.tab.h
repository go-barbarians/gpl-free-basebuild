#include <inttypes.h>
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
    PROGRAM = 259,
    PASTAT = 260,
    PASTAT2 = 261,
    XBEGIN = 262,
    XEND = 263,
    NL = 264,
    ARRAY = 265,
    MATCH = 266,
    NOTMATCH = 267,
    MATCHOP = 268,
    FINAL = 269,
    DOT = 270,
    ALL = 271,
    CCL = 272,
    NCCL = 273,
    CHAR = 274,
    MCHAR = 275,
    OR = 276,
    STAR = 277,
    QUEST = 278,
    PLUS = 279,
    AND = 280,
    BOR = 281,
    APPEND = 282,
    EQ = 283,
    GE = 284,
    GT = 285,
    LE = 286,
    LT = 287,
    NE = 288,
    IN = 289,
    ARG = 290,
    BLTIN = 291,
    BREAK = 292,
    CONTINUE = 293,
    DELETE = 294,
    DO = 295,
    EXIT = 296,
    FOR = 297,
    FUNC = 298,
    SUB = 299,
    GSUB = 300,
    IF = 301,
    INDEX = 302,
    LSUBSTR = 303,
    MATCHFCN = 304,
    NEXT = 305,
    ADD = 306,
    MINUS = 307,
    MULT = 308,
    DIVIDE = 309,
    MOD = 310,
    ASSIGN = 311,
    ASGNOP = 312,
    ADDEQ = 313,
    SUBEQ = 314,
    MULTEQ = 315,
    DIVEQ = 316,
    MODEQ = 317,
    POWEQ = 318,
    PRINT = 319,
    PRINTF = 320,
    SPRINTF = 321,
    ELSE = 322,
    INTEST = 323,
    CONDEXPR = 324,
    POSTINCR = 325,
    PREINCR = 326,
    POSTDECR = 327,
    PREDECR = 328,
    VAR = 329,
    IVAR = 330,
    VARNF = 331,
    CALL = 332,
    NUMBER = 333,
    STRING = 334,
    FIELD = 335,
    REGEXPR = 336,
    GETLINE = 337,
    RETURN = 338,
    SPLIT = 339,
    SUBSTR = 340,
    WHILE = 341,
    CAT = 342,
    NOT = 343,
    UMINUS = 344,
    POWER = 345,
    DECR = 346,
    INCR = 347,
    INDIRECT = 348,
    LASTTOKEN = 349
  };
#endif
/* Tokens.  */
#define FIRSTTOKEN 258
#define PROGRAM 259
#define PASTAT 260
#define PASTAT2 261
#define XBEGIN 262
#define XEND 263
#define NL 264
#define ARRAY 265
#define MATCH 266
#define NOTMATCH 267
#define MATCHOP 268
#define FINAL 269
#define DOT 270
#define ALL 271
#define CCL 272
#define NCCL 273
#define CHAR 274
#define MCHAR 275
#define OR 276
#define STAR 277
#define QUEST 278
#define PLUS 279
#define AND 280
#define BOR 281
#define APPEND 282
#define EQ 283
#define GE 284
#define GT 285
#define LE 286
#define LT 287
#define NE 288
#define IN 289
#define ARG 290
#define BLTIN 291
#define BREAK 292
#define CONTINUE 293
#define DELETE 294
#define DO 295
#define EXIT 296
#define FOR 297
#define FUNC 298
#define SUB 299
#define GSUB 300
#define IF 301
#define INDEX 302
#define LSUBSTR 303
#define MATCHFCN 304
#define NEXT 305
#define ADD 306
#define MINUS 307
#define MULT 308
#define DIVIDE 309
#define MOD 310
#define ASSIGN 311
#define ASGNOP 312
#define ADDEQ 313
#define SUBEQ 314
#define MULTEQ 315
#define DIVEQ 316
#define MODEQ 317
#define POWEQ 318
#define PRINT 319
#define PRINTF 320
#define SPRINTF 321
#define ELSE 322
#define INTEST 323
#define CONDEXPR 324
#define POSTINCR 325
#define PREINCR 326
#define POSTDECR 327
#define PREDECR 328
#define VAR 329
#define IVAR 330
#define VARNF 331
#define CALL 332
#define NUMBER 333
#define STRING 334
#define FIELD 335
#define REGEXPR 336
#define GETLINE 337
#define RETURN 338
#define SPLIT 339
#define SUBSTR 340
#define WHILE 341
#define CAT 342
#define NOT 343
#define UMINUS 344
#define POWER 345
#define DECR 346
#define INCR 347
#define INDIRECT 348
#define LASTTOKEN 349

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 51 "awk.g.y" /* yacc.c:1909  */

	Node	*p;
	Cell	*cp;
	intptr_t	i;
	unsigned char	*s;

#line 249 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
