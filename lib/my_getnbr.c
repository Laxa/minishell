/*
** my_getnbr.c for my_getnbr in /Users/laxa/Documents/Piscine/C/Jour_02/egloff_j/my_getnbr
** 
** Made by EGLOFF Julien
** Login   <egloff_j@etna-alternance.net>
** 
** Started on  Tue Mar 25 11:09:32 2014 EGLOFF Julien
** Last update Sat Mar 29 13:49:24 2014 EGLOFF Julien
*/

#include "libmy.h"

int	my_getnbr(char *str)
{
  int	nb;
  int	i;

  nb = 0;
  for (i = 0; str[i]; i++)
    {
      if (str[i] == '-')
	return (-my_getnbr(str + 1));
      else
	{
	  if ((str[i] < '0') || (str[i] > '9'))
	    return (nb);
	  nb += str[i] - '0';
	  if (str[i + 1] && str[i + 1] >= '0' && str[i + 1] <= '9')
	    nb *= 10;
	}
    }
  return (nb);
}
