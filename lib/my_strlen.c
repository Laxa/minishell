/*
** my_strlen.c for my_strlen in /Users/laxa/Documents/Piscine/C/Jour_02/egloff_j/my_strlen
** 
** Made by EGLOFF Julien
** Login   <laxa>
** 
** Started on  Tue Mar 25 10:10:38 2014 EGLOFF Julien
** Last update Mon Nov 16 14:07:14 2015 EGLOFF Julien
*/

#include "libmy.h"

int	my_strlen(const char *str)
{
  int	i;

  for (i = 0; str[i]; i++);
  return (i);
}
