/*
** my_strcat.c for my_strcat in /Users/laxa/Documents/Piscine/C/Jour_05/egloff_j/libmy
** 
** Made by EGLOFF Julien
** Login   <egloff_j@etna-alternance.net>
** 
** Started on  Sat Mar 29 09:59:23 2014 EGLOFF Julien
** Last update Sat Mar 29 13:46:31 2014 EGLOFF Julien
*/

#include "libmy.h"

char	*my_strcat(char *str1, char *str2)
{
  int	i;
  int	ii;

  for (i = my_strlen(str1), ii = 0; str2[ii]; ii++, i++)
    str1[i] = str2[ii];
  str1[i] = '\0';
  return (str1);
}
