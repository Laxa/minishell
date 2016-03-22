/*
** my_str_isalpha.c for my_str_isalpha in /Users/laxa/Documents/Piscine/C/Jour_04/egloff_j/my_str_isalpha
** 
** Made by EGLOFF Julien
** Login   <laxa>
** 
** Started on  Fri Mar 28 12:10:20 2014 EGLOFF Julien
** Last update Sat Mar 29 13:47:24 2014 EGLOFF Julien
*/

#include "libmy.h"

int	my_str_isalpha(char *str)
{
  int	i;

  for (i = 0; str[i]; i++)
    {
      if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'));
      else
	return (0);
    }
  return (1);
}
