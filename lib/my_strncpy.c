/*
** my_strncpy.c for my_strncpy in /Users/laxa/Documents/Piscine/C/Jour_04/egloff_j/my_strncpy
** 
** Made by EGLOFF Julien
** Login   <egloff_j@etna-alternance.net>
** 
** Started on  Fri Mar 28 09:25:07 2014 EGLOFF Julien
** Last update Sat Mar 29 13:45:02 2014 EGLOFF Julien
*/

#include "libmy.h"

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  for (i = 0; i < n && src[i]; i++)
    dest[i] = src[i];
  if (n > my_strlen(src))
    dest[i] = '\0';
  return (dest);
}
