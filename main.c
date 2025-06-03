/*
 *    SPDX-FileCopyrightText: 2021 Monaco F. J. <monaco@usp.br>
 *    SPDX-FileCopyrightText: 2025 Pones <felipemoma@yahoo.com.br>
 *
 *    SPDX-License-Identifier: GPL-3.0-or-later
 *
 *  This file is a derivative of SYSeg (https://gitlab.com/monaco/syseg)
 *  and includes modifications made by the following author(s):
 *  Pones <felipemoma@yahoo.com.br>
 *  Victor Reis <reisvictor448@gmail.com>*/

/* main.c */
#include <stdio.h>

char buffer[6];

int main(void)
{
    unsigned short tamanho = memsize(); /* chama INT 0x12 */
    /* converte tamanho para string decimal */
    /* empilha digitos no final de buffer e inverte */
    if (tamanho == 0)
    {
        buffer[0] = '0';
        buffer[1] = '\0';
    }
    else
    {
        unsigned short tmp = tamanho;
        int idx = 0;
        char rev[5];
        while (tmp)
        {
            rev[idx++] = '0' + (tmp % 10);
            tmp /= 10;
        }
        /* inverte rev para buffer */
        for (int i = 0; i < idx; i++)
        {
            buffer[i] = rev[idx - 1 - i];
        }
        buffer[idx] = '\0';
    }

    /* imprimindo resultados */
    printf("Hello World\n");
    printf("Mem: ");
    printf(buffer);
    printf(" KB\n");

    for (;;)
    {
    }

    return 0;
}
