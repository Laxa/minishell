/*
** my_putstr.c for my_putstr in /Users/laxa/Documents/Piscine/C/Jour_02/egloff_j/my_putstr
** 
** Made by EGLOFF Julien
** Login   <egloff_j@etna-alternance.net>
** 
** Started on  Tue Mar 25 09:41:00 2014 EGLOFF Julien
** Last update Mon Jun 16 10:39:04 2014 Julien EGLOFF
*/

#include "libmy.h"

int	my_putstr(const char *str)
{
  int	i;

  for (i = 0; str[i]; i++)
    my_putchar(str[i]);
  return (0);
}
