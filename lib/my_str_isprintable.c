/*
** my_str_isprintable.c for my_str_isprintable in /Users/laxa/Documents/Piscine/C/Jour_04/egloff_j/my_str_isprintable
** 
** Made by EGLOFF Julien
** Login   <egloff_j@etna-alternance.net>
** 
** Started on  Fri Mar 28 14:34:50 2014 EGLOFF Julien
** Last update Sat Mar 29 13:47:03 2014 EGLOFF Julien
*/

#include "libmy.h"

int	my_str_isprintable(char *str)
{
  int	i;

  for (i = 0; str[i]; i++)
    {
      if (str[i] < 32 || str[i] > 126)
	return (0);
    }
  return (1);
}
