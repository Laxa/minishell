/*
** my_str_isnum.c for my_str_isnum in /Users/laxa/Documents/Piscine/C/Jour_04/egloff_j/my_str_isnum
** 
** Made by EGLOFF Julien
** Login   <laxa>
** 
** Started on  Fri Mar 28 12:24:42 2014 EGLOFF Julien
** Last update Sat Mar 29 13:47:10 2014 EGLOFF Julien
*/

#include "libmy.h"

int	my_str_isnum(char *str)
{
  int	i;

  for (i = 0; str[i]; i++)
    {
      if (str[i] >= '0' && str[i] <= '9');
      else
	return (0);
    }
  return (1);
}
