/*
** my_power_rec.c for my_power_rec in /Users/laxa/Documents/Piscine/C/Jour_03/egloff_j/my_power_rec
** 
** Made by EGLOFF Julien
** Login   <egloff_j@etna-alternance.net>
** 
** Started on  Thu Mar 27 10:21:04 2014 EGLOFF Julien
** Last update Sat Mar 29 13:49:04 2014 EGLOFF Julien
*/

#include "libmy.h"

int	my_power_rec(int nb, int power)
{
  if (power == 0)
    return (1);
  if (power < 0)
    return (0);
  if (power >= 1)
    return (nb * my_power_rec(nb, power - 1));
  return (nb);
}
