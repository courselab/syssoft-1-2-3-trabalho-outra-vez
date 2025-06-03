/*
 *    SPDX-FileCopyrightText: 2025 Pones <felipemoma@yahoo.com.br>
 *
 *    SPDX-License-Identifier: GPL-3.0-or-later
 *
 *  This file is a derivative of SYSeg (https://gitlab.com/monaco/syseg)
 *  and includes modifications made by the following author(s):
 *  Pones <felipemoma@yahoo.com.br>
 *  Victor Reis <reisvictor448@gmail.com>
 */

#ifndef E8_H
#define E8_H

void __attribute__((fastcall, naked)) printf(const char *);

unsigned short memsize(void);

#endif
