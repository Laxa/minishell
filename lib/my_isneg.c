/*
** my_isneg.c for my_isgned in /Users/laxa/Documents/Piscine/C/Jour_01/egloff_j/my_isneg
** 
** Made by EGLOFF Julien
** Login   <egloff_j@etna-alternance.net>
** 
** Started on  Mon Mar 24 10:34:50 2014 EGLOFF Julien
** Last update Sat Mar 29 13:49:13 2014 EGLOFF Julien
*/

#include "libmy.h"

int	my_isneg(int n)
{
  if (n >= 0)
    my_putchar('P');
  else
    my_putchar('N');
  return (0);
}
