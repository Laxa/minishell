/*
** my_strcpy.c for my_strcpy in /Users/laxa/Documents/Piscine/C/Jour_04/egloff_j/my_strcpy
** 
** Made by EGLOFF Julien
** Login   <egloff_j@etna-alternance.net>
** 
** Started on  Fri Mar 28 09:07:01 2014 EGLOFF Julien
** Last update Sat Mar 29 13:46:06 2014 EGLOFF Julien
*/

#include "libmy.h"

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  for (i = 0; src[i]; i++)
    dest[i] = src[i];
  dest[i] = '\0';
  return (dest);
}
