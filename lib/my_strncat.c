/*
** my_strncat.c for my_strncat in /Users/laxa/Documents/Piscine/C/Jour_05/egloff_j/libmy
** 
** Made by EGLOFF Julien
** Login   <egloff_j@etna-alternance.net>
** 
** Started on  Sat Mar 29 10:10:10 2014 EGLOFF Julien
** Last update Sat Mar 29 13:45:24 2014 EGLOFF Julien
*/

#include "libmy.h"

char	*my_strncat(char *str1, char *str2, int n)
{
  int	i;
  int	ii;

  for (i = my_strlen(str1), ii = 0; str2[ii] && ii < n; ii++, i++)
    str1[i] = str2[ii];
  str1[i] = '\0';
  return (str1);
}
