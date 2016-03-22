/*
** my_getnbr_base.c for my_getnbr_base in /Users/laxa/Documents/Piscine/C/Jour_04/egloff_j/my_getnbr_base
** 
** Made by EGLOFF Julien
** Login   <laxa>
** 
** Started on  Fri Mar 28 14:57:41 2014 EGLOFF Julien
** Last update Tue Apr  1 12:10:25 2014 EGLOFF Julien
*/

#include "libmy.h"

int	my_getnbr_base(char *str, char *base)
{
  int	nb;
  int	i;
  int	fac;

  nb = 0;
  fac = 1;
  if (str[0] == '-')
    return (-my_getnbr_base(&str[1], base));
  for (i = my_strlen(str) - 1; i >= 0; i--)
    {
      nb = nb + find_pos(str[i], base) * fac;
      fac *= my_strlen(base);
    }
  return (nb);
}

int	find_pos(char c, char *str)
{
  int	i;

  for (i = 0; str[i]; i++)
    {
      if (str[i] == c)
	return (i);
    }
  return (0);
}
