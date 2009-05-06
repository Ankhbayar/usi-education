/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     tABS = 258,
     tACOS = 259,
     tACOSH = 260,
     tAND = 261,
     tANS = 262,
     tASIN = 263,
     tASINH = 264,
     tATAN = 265,
     tATANH = 266,
     tCBRT = 267,
     tCHS = 268,
     tCLR = 269,
     tCOS = 270,
     tCOSH = 271,
     tEXP = 272,
     tFRAC = 273,
     tINT = 274,
     tLN = 275,
     tLOG10 = 276,
     tLOG2 = 277,
     tMOD = 278,
     tNOT = 279,
     tOR = 280,
     tPI = 281,
     tRAND = 282,
     tRCL = 283,
     tSIN = 284,
     tSINH = 285,
     tSQRT = 286,
     tSTO = 287,
     tTAN = 288,
     tTANH = 289,
     tU16 = 290,
     tU32 = 291,
     tXNOR = 292,
     tXOR = 293,
     tNUMBER = 294,
     tREG = 295,
     NEG = 296,
     MED = 297,
     LNEG = 298,
     POS = 299,
     HIGH = 300
   };
#endif
/* Tokens.  */
#define tABS 258
#define tACOS 259
#define tACOSH 260
#define tAND 261
#define tANS 262
#define tASIN 263
#define tASINH 264
#define tATAN 265
#define tATANH 266
#define tCBRT 267
#define tCHS 268
#define tCLR 269
#define tCOS 270
#define tCOSH 271
#define tEXP 272
#define tFRAC 273
#define tINT 274
#define tLN 275
#define tLOG10 276
#define tLOG2 277
#define tMOD 278
#define tNOT 279
#define tOR 280
#define tPI 281
#define tRAND 282
#define tRCL 283
#define tSIN 284
#define tSINH 285
#define tSQRT 286
#define tSTO 287
#define tTAN 288
#define tTANH 289
#define tU16 290
#define tU32 291
#define tXNOR 292
#define tXOR 293
#define tNUMBER 294
#define tREG 295
#define NEG 296
#define MED 297
#define LNEG 298
#define POS 299
#define HIGH 300




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 36 "./ce_parser.y"
{
  int int_t[MP_SIZE];
  int integer;
}
/* Line 1489 of yacc.c.  */
#line 144 "ce_parser.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE celval;

