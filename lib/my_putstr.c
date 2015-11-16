/*
** my_putstr.c for my_putstr in /Users/laxa/Documents/Piscine/C/Jour_02/egloff_j/my_putstr
** 
** Made by EGLOFF Julien
** Login   <egloff_j@etna-alternance.net>
** 
** Started on  Tue Mar 25 09:41:00 2014 EGLOFF Julien
** Last update Mon Nov 16 14:07:00 2015 EGLOFF Julien
*/

#include "libmy.h"

int	my_putstr(const char *str)
{
  xwrite(STDIN_FILENO, str, my_strlen(str));
  return (0);
}
