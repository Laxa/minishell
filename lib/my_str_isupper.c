/*
** my_str_isupper.c for my_str_isupper in /Users/laxa/Documents/Piscine/C/Jour_04/egloff_j/my_str_isupper
** 
** Made by EGLOFF Julien
** Login   <laxa>
** 
** Started on  Fri Mar 28 13:15:12 2014 EGLOFF Julien
** Last update Sat Mar 29 13:46:58 2014 EGLOFF Julien
*/

#include "libmy.h"

int	my_str_isupper(char *str)
{
  int	i;

  for (i = 0; str[i]; i++)
    {
      if (str[i] >= 'A' && str[i] <= 'Z');
      else
	return (0);
    }
  return (1);
}
