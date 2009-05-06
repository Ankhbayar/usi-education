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
     tCTRM = 272,
     tDDB = 273,
     tEXP = 274,
     tFRAC = 275,
     tFV = 276,
     tINT = 277,
     tLN = 278,
     tLOG10 = 279,
     tLOG2 = 280,
     tMOD = 281,
     tNOT = 282,
     tOR = 283,
     tPI = 284,
     tPMT = 285,
     tPV = 286,
     tRAND = 287,
     tRATE = 288,
     tRCL = 289,
     tSIN = 290,
     tSINH = 291,
     tSLN = 292,
     tSQRT = 293,
     tSTO = 294,
     tSYD = 295,
     tTAN = 296,
     tTANH = 297,
     tTERM = 298,
     tU16 = 299,
     tU32 = 300,
     tXNOR = 301,
     tXOR = 302,
     tNUMBER = 303,
     tREG = 304,
     NEG = 305,
     MED = 306,
     POS = 307,
     HIGH = 308
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
#define tCTRM 272
#define tDDB 273
#define tEXP 274
#define tFRAC 275
#define tFV 276
#define tINT 277
#define tLN 278
#define tLOG10 279
#define tLOG2 280
#define tMOD 281
#define tNOT 282
#define tOR 283
#define tPI 284
#define tPMT 285
#define tPV 286
#define tRAND 287
#define tRATE 288
#define tRCL 289
#define tSIN 290
#define tSINH 291
#define tSLN 292
#define tSQRT 293
#define tSTO 294
#define tSYD 295
#define tTAN 296
#define tTANH 297
#define tTERM 298
#define tU16 299
#define tU32 300
#define tXNOR 301
#define tXOR 302
#define tNUMBER 303
#define tREG 304
#define NEG 305
#define MED 306
#define POS 307
#define HIGH 308




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 37 "./ce_parser.y"
{
  int int_t[MP_SIZE];
  int integer;
}
/* Line 1489 of yacc.c.  */
#line 160 "ce_parser.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE celval;

