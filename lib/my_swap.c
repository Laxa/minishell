/*
** my_swap.c for my_swap in /Users/laxa/Documents/Piscine/C/Jour_02/egloff_j/my_swap
** 
** Made by EGLOFF Julien
** Login   <egloff_j@etna-alternance.net>
** 
** Started on  Tue Mar 25 09:02:31 2014 EGLOFF Julien
** Last update Sat Mar 29 13:44:31 2014 EGLOFF Julien
*/

#include "libmy.h"

int	my_swap(int *a, int *b)
{
  int	tmp;

  tmp = *a;
  *a = *b;
  *b = tmp;
  return (0);
}
