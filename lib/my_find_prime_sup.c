/*
** my_find_prime_sup.c for my_find_prime_sup in /Users/laxa/Documents/Piscine/C/Jour_03/egloff_j/my_find_prime_sup
** 
** Made by EGLOFF Julien
** Login   <laxa>
** 
** Started on  Thu Mar 27 12:12:01 2014 EGLOFF Julien
** Last update Sat Mar 29 13:49:58 2014 EGLOFF Julien
*/

#include "libmy.h"

int	my_find_prime_sup(int nb)
{
  int	i;

  for (i = 0; my_is_prime(nb + i) == 0; i++);
  return (nb + i);
}
