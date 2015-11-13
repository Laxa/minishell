/*
** my_strlcat.c for my_strlcat in /Users/laxa/Documents/Piscine/C/Jour_05/egloff_j/libmy
** 
** Made by EGLOFF Julien
** Login   <egloff_j@etna-alternance.net>
** 
** Started on  Sat Mar 29 10:16:03 2014 EGLOFF Julien
** Last update Sat Mar 29 13:45:52 2014 EGLOFF Julien
*/

#include "libmy.h"

int	my_strlcat(char *str1, char *str2, int l)
{
  int	i;
  int	ii;
  int	n;
  int	k;

  ii = 0;
  for (i = 0; str1[i] && i < l; i++);
  n = l - (&str1[i] - &str1[0]);
  k = i;
  if (n == 0)
    return (&str1[i] - &str1[0] + my_strlen(str2));
  while (str2[ii])
    {
      if (n != 1)
	{
	  str1[i] = str2[ii];
	  n--;
	  i++;
	}
      ii++;
    }
  str1[i] = '\0';
  return ((&str1[k] - &str1[0]) + (&str2[ii] - &str2[0]));
}
