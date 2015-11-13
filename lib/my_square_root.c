/*
** my_square_root.c for my_square_root in /Users/laxa/Documents/Piscine/C/Jour_03/egloff_j/my_square_root
** 
** Made by EGLOFF Julien
** Login   <egloff_j@etna-alternance.net>
** 
** Started on  Thu Mar 27 11:05:38 2014 EGLOFF Julien
** Last update Sat Mar 29 13:47:32 2014 EGLOFF Julien
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
