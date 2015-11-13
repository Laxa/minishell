/*
** my_strdup.c for my_strdup in /Users/laxa/Documents/Piscine/C/Jour_06
** 
** Made by EGLOFF Julien
** Login   <egloff_j@etna-alternance.net>
** 
** Started on  Mon Mar 31 18:42:18 2014 EGLOFF Julien
** Last update Fri Nov 13 16:16:14 2015 Julien EGLOFF
*/

#include <stdlib.h>
#include "libmy.h"

char	*my_strdup(char *str)
{
  char	*new;
  int	i;

  new = malloc(my_strlen(str) + 1);
  for (i = 0; str[i]; i++)
    new[i] = str[i];
  new[i] = '\0';
  return (new);
}
