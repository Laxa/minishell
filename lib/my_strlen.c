/*
** my_strlen.c for my_strlen in /Users/laxa/Documents/Piscine/C/Jour_02/egloff_j/my_strlen
** 
** Made by EGLOFF Julien
** Login   <egloff_j@etna-alternance.net>
** 
** Started on  Tue Mar 25 10:10:38 2014 EGLOFF Julien
** Last update Sat Mar 29 13:45:40 2014 EGLOFF Julien
*/

#include "libmy.h"

int	my_strlen(char *str)
{
  int	i;

  for (i = 0; str[i]; i++);
  return (i);
}
