/*
** my_showstr.c for my_showstr in /Users/laxa/Documents/Piscine/C/Jour_04/egloff_j/my_showstr
** 
** Made by EGLOFF Julien
** Login   <laxa>
** 
** Started on  Fri Mar 28 16:08:16 2014 EGLOFF Julien
** Last update Sat Mar 29 13:48:11 2014 EGLOFF Julien
*/

#include "libmy.h"

int	my_showstr(char *str)
{
  int	i;

  for (i = 0; str[i]; i++)
    {
      if (str[i] < 32 || str[i] > 126)
	{
	  my_putchar('\\');
	  if (str[i] <= 16)
	    my_putchar('0');
	  my_putnbr_base(str[i], "0123456789abcdef");
	}
      else
	my_putchar(str[i]);
    }
  return (0);
}
