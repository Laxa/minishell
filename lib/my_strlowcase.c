/*
** my_strlowcase.c for my_strlowcase in /Users/laxa/Documents/Piscine/C/Jour_04/egloff_j/my_strlowcase
** 
** Made by EGLOFF Julien
** Login   <egloff_j@etna-alternance.net>
** 
** Started on  Fri Mar 28 11:27:14 2014 EGLOFF Julien
** Last update Sat Mar 29 13:45:30 2014 EGLOFF Julien
*/

#include "libmy.h"

char	*my_strlowcase(char *str)
{
  int	i;

  for (i = 0; str[i]; i++)
    {
      if (str[i] >= 'A' && str[i] <= 'Z')
	str[i] += 32;
    }
  return (str);
}
