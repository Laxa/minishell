/*
** my_square_root.c for my_square_root in /Users/laxa/Documents/Piscine/C/Jour_03/egloff_j/my_square_root
** 
** Made by EGLOFF Julien
** Login   <laxa>
** 
** Started on  Thu Mar 27 11:05:38 2014 EGLOFF Julien
** Last update Mon Nov 16 11:32:35 2015 EGLOFF Julien
*/

#include "libmy.h"

int	my_square_root(int nb)
{
  int	i;

  for (i = 0; i <= nb; i++)
    {
      if (i * i == nb)
	return (i);
    }
  return (0);
}
