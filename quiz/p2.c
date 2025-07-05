/*
 *    SPDX-FileCopyrightText: 2021 Monaco F. J. <monaco@usp.br>
 *    SPDX-FileCopyrightText: 2025 reisvictor1 <reisvictor448@gmail.com>
 *   
 *    SPDX-License-Identifier: GPL-3.0-or-later
 *
 *  This file is a derivative of SYSeg (https://gitlab.com/monaco/syseg)
 *  and includes modifications made by the following author(s):
 *  reisvictor1 <reisvictor448@gmail.com>
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* int verify_password (const char *); */

int main (void)
{
  int verified = 0;
  char user_key[10];

  /* Read user's credentials. */

  printf ("Enter password: ");
  scanf ("%s", user_key);

  /* Verify credentials. */

  if (!strcmp (user_key, "foo"))
    verified = 1;

  if (!verified)
    {
      printf ("Access denied\n");
      exit (1);
    }

  printf ("Access granted.\n");

  /* Priviledged code follows... */

  return 0;
}


