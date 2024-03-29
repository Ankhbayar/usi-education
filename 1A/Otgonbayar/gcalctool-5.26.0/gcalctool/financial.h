/*  $Header$
 *
 *  Copyright (c) 1987-2008 Sun Microsystems, Inc. All Rights Reserved.
 *           
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *           
 *  This program is distributed in the hope that it will be useful, but 
 *  WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU 
 *  General Public License for more details.
 *           
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 *  02111-1307, USA.
 */

#ifndef FINANCIAL_H
#define FINANCIAL_H

#include "mp.h"

void do_finc_expression(int function, int arg1[MP_SIZE], int arg2[MP_SIZE],
                        int arg3[MP_SIZE], int arg4[MP_SIZE]);

enum finc_dialogs {
    FINC_CTRM_DIALOG,
    FINC_DDB_DIALOG,
    FINC_FV_DIALOG,
    FINC_GPM_DIALOG,
    FINC_PMT_DIALOG,
    FINC_PV_DIALOG,
    FINC_RATE_DIALOG,
    FINC_SLN_DIALOG,
    FINC_SYD_DIALOG,
    FINC_TERM_DIALOG,
	FINC_NUM_DIALOGS,
};

#endif /* FINANCIAL_H */
