/*
** my_put_nbr.c for my_put_nbr in /Users/laxa/Documents/Piscine/C/Jour_01/egloff_j/my_put_nbr
** 
** Made by EGLOFF Julien
** Login   <laxa>
** 
** Started on  Mon Mar 24 12:20:12 2014 EGLOFF Julien
** Last update Sat Mar 29 13:48:57 2014 EGLOFF Julien
*/

#include "libmy.h"

int	my_put_nbr(int nb)
{
  int	i;

  i = 0;
  if (nb == -2147483648)
    {
      nb++;
      i = 1;
    }
  if (nb < 0)
    {
      my_putchar('-');
      nb *= -1;
    }
  if (nb >= 10)
    {
      my_put_nbr(nb / 10);
    }
  if (i == 1)
    my_putchar(nb % 10 + '1');
  else
    my_putchar(nb % 10 + '0');
  return (0);
}
