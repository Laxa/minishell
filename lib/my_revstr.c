/*
** my_revstr.c for my_revstr in /Users/laxa/Documents/Piscine/C/Jour_04/egloff_j/my_revstr
** 
** Made by EGLOFF Julien
** Login   <laxa>
** 
** Started on  Fri Mar 28 09:42:30 2014 EGLOFF Julien
** Last update Sat Mar 29 13:48:21 2014 EGLOFF Julien
*/

#include "libmy.h"

char	*my_revstr(char *str)
{
  char	tmp;
  int	i;

  for (i = 0; i < (my_strlen(str) / 2); i++)
    {
      tmp = str[i];
      str[i] = str[my_strlen(str) - i - 1];
      str[my_strlen(str) - i - 1] = tmp;
    }
  return (str);
}
