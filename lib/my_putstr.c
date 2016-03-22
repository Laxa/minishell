/*
** my_putstr.c for my_putstr in /Users/laxa/Documents/Piscine/C/Jour_02/egloff_j/my_putstr
** 
** Made by EGLOFF Julien
** Login   <laxa>
** 
** Started on  Tue Mar 25 09:41:00 2014 EGLOFF Julien
** Last update Fri Nov 20 13:52:35 2015 EGLOFF Julien
*/

#include "libmy.h"

int	my_putstr(const char *str)
{
  xwrite(STDOUT_FILENO, str, my_strlen(str));
  return (0);
}
