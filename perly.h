/* ex: set ro ft=c: -*- buffer-read-only: t -*-
   !!!!!!!   DO NOT EDIT THIS FILE   !!!!!!!
   This file is built by regen_perly.pl from perly.y.
   Any changes made here will be lost!
 */

#define PERL_BISON_VERSION  30000

#ifdef PERL_CORE
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
    GRAMPROG = 258,
    GRAMEXPR = 259,
    GRAMBLOCK = 260,
    GRAMBARESTMT = 261,
    GRAMFULLSTMT = 262,
    GRAMSTMTSEQ = 263,
    BAREWORD = 264,
    METHOD = 265,
    FUNCMETH = 266,
    THING = 267,
    PMFUNC = 268,
    PRIVATEREF = 269,
    QWLIST = 270,
    FUNC0OP = 271,
    FUNC0SUB = 272,
    UNIOPSUB = 273,
    LSTOPSUB = 274,
    PLUGEXPR = 275,
    PLUGSTMT = 276,
    LABEL = 277,
    FORMAT = 278,
    SUB = 279,
    ANONSUB = 280,
    PACKAGE = 281,
    USE = 282,
    WHILE = 283,
    UNTIL = 284,
    IF = 285,
    UNLESS = 286,
    ELSE = 287,
    ELSIF = 288,
    CONTINUE = 289,
    FOR = 290,
    GIVEN = 291,
    WHEN = 292,
    DEFAULT = 293,
    LOOPEX = 294,
    DOTDOT = 295,
    YADAYADA = 296,
    FUNC0 = 297,
    FUNC1 = 298,
    FUNC = 299,
    UNIOP = 300,
    LSTOP = 301,
    RELOP = 302,
    EQOP = 303,
    MULOP = 304,
    ADDOP = 305,
    DOLSHARP = 306,
    DO = 307,
    HASHBRACK = 308,
    NOAMP = 309,
    LOCAL = 310,
    MY = 311,
    REQUIRE = 312,
    COLONATTR = 313,
    FORMLBRACK = 314,
    FORMRBRACK = 315,
    PREC_LOW = 316,
    OROP = 317,
    DOROP = 318,
    ANDOP = 319,
    NOTOP = 320,
    ASSIGNOP = 321,
    OROR = 322,
    DORDOR = 323,
    ANDAND = 324,
    BITOROP = 325,
    BITANDOP = 326,
    SHIFTOP = 327,
    MATCHOP = 328,
    UMINUS = 329,
    REFGEN = 330,
    POWOP = 331,
    POWCOP = 332,
    PREINC = 333,
    PREDEC = 334,
    POSTINC = 335,
    POSTDEC = 336,
    POSTJOIN = 337,
    ARROW = 338
  };
#endif

/* Tokens.  */
#define GRAMPROG 258
#define GRAMEXPR 259
#define GRAMBLOCK 260
#define GRAMBARESTMT 261
#define GRAMFULLSTMT 262
#define GRAMSTMTSEQ 263
#define BAREWORD 264
#define METHOD 265
#define FUNCMETH 266
#define THING 267
#define PMFUNC 268
#define PRIVATEREF 269
#define QWLIST 270
#define FUNC0OP 271
#define FUNC0SUB 272
#define UNIOPSUB 273
#define LSTOPSUB 274
#define PLUGEXPR 275
#define PLUGSTMT 276
#define LABEL 277
#define FORMAT 278
#define SUB 279
#define ANONSUB 280
#define PACKAGE 281
#define USE 282
#define WHILE 283
#define UNTIL 284
#define IF 285
#define UNLESS 286
#define ELSE 287
#define ELSIF 288
#define CONTINUE 289
#define FOR 290
#define GIVEN 291
#define WHEN 292
#define DEFAULT 293
#define LOOPEX 294
#define DOTDOT 295
#define YADAYADA 296
#define FUNC0 297
#define FUNC1 298
#define FUNC 299
#define UNIOP 300
#define LSTOP 301
#define RELOP 302
#define EQOP 303
#define MULOP 304
#define ADDOP 305
#define DOLSHARP 306
#define DO 307
#define HASHBRACK 308
#define NOAMP 309
#define LOCAL 310
#define MY 311
#define REQUIRE 312
#define COLONATTR 313
#define FORMLBRACK 314
#define FORMRBRACK 315
#define PREC_LOW 316
#define OROP 317
#define DOROP 318
#define ANDOP 319
#define NOTOP 320
#define ASSIGNOP 321
#define OROR 322
#define DORDOR 323
#define ANDAND 324
#define BITOROP 325
#define BITANDOP 326
#define SHIFTOP 327
#define MATCHOP 328
#define UMINUS 329
#define REFGEN 330
#define POWOP 331
#define POWCOP 332
#define PREINC 333
#define PREDEC 334
#define POSTINC 335
#define POSTDEC 336
#define POSTJOIN 337
#define ARROW 338

/* Value type.  */
#ifdef PERL_IN_TOKE_C
static bool
S_is_opval_token(int type) {
    switch (type) {
    case BAREWORD:
    case FUNC0OP:
    case FUNC0SUB:
    case FUNCMETH:
    case LSTOPSUB:
    case METHOD:
    case PLUGEXPR:
    case PLUGSTMT:
    case PMFUNC:
    case PRIVATEREF:
    case QWLIST:
    case THING:
    case UNIOPSUB:
	return 1;
    }
    return 0;
}
#endif /* PERL_IN_TOKE_C */
#endif /* PERL_CORE */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{

    I32	ival; /* __DEFAULT__ (marker for regen_perly.pl;
				must always be 1st union member) */
    char *pval;
    OP *opval;
    GV *gvval;

};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int yyparse (void);


#if YYDEBUG
#define YYPRINT
#endif

/* Generated from:
 * 6bf09ad3ced0febcc3497ae19ced2925a70f29398042313bad63639b7b10af6c perly.y
 * 34c0653ef7c691f2b4ac71336f4ea94e2bd925344002392f88ceeb0b435555fa regen_perly.pl
 * ex: set ro: */
