/*
** my_strupcase.c for my_strupcase in /Users/laxa/Documents/Piscine/C/Jour_04/egloff_j/my_strupcase
** 
** Made by EGLOFF Julien
** Login   <egloff_j@etna-alternance.net>
** 
** Started on  Fri Mar 28 11:01:27 2014 EGLOFF Julien
** Last update Sat Mar 29 13:44:39 2014 EGLOFF Julien
*/

#include "libmy.h"

char	*my_strupcase(char *str)
{
  int	i;

  for (i = 0; str[i]; i++)
    {
      if (str[i] >= 'a' && str[i] <= 'z')
	str[i] -= 32;
    }
  return (str);
}
