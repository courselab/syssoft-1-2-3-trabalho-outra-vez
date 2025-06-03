#    SPDX-FileCopyrightText: 2025 Pones <felipemoma@yahoo.com.br>
#   
#    SPDX-License-Identifier: GPL-3.0-or-later
#
#  This file is a derivative of SYSeg (https://gitlab.com/monaco/syseg)
#  and includes modifications made by the following author(s):
#  Pones <felipemoma@yahoo.com.br>

	.code16gcc
	.global _start
	
_start:
	mov $0x7c00, %sp
	call main
halt:	
	hlt
	jmp halt
