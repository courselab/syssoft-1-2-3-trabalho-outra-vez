#    SPDX-FileCopyrightText: 2025 Pones <felipemoma@yahoo.com.br>
#   
#    SPDX-License-Identifier: GPL-3.0-or-later
#
#  This file is a derivative of SYSeg (https://gitlab.com/monaco/syseg)
#  and includes modifications made by the following author(s):
#  Pones <felipemoma@yahoo.com.br>

.code16gcc
	.global printf

	.section .text
	
printf:	

	mov   %cx, %bx
	
        mov   $0x0e,%ah               
        mov   $0x0, %si               
loop:                                 
        mov   (%bx, %si), %al           
        cmp   $0x0, %al               
        je    end                    
        int   $0x10                   
        add   $0x1, %si               
        jmp   loop                    
end:
        mov %si, %ax
        ret


/*memsize chama a interrupcao BIOS INT 0x12 para obter o tamanho de memoria e retorna em AX*/
/* assinatura C : unsigned short memsize(void); */
	.code16gcc
	.globl memsize
	.type  memsize, @function

memsize:
    xor   %bx, %bx         /* BX = 0 */
    int   $0x12            /* BIOS retorna em AX o numero de KB de memoria */
    ret                    /* devolve AX */
