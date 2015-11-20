/*
** my_strncmp.c for my_strncmp in /Users/laxa/Documents/Piscine/C/Jour_04/egloff_j/my_strncmp
** 
** Made by EGLOFF Julien
** Login   <egloff_j@etna-alternance.net>
** 
** Started on  Fri Mar 28 10:54:21 2014 EGLOFF Julien
** Last update Fri Nov 20 14:09:45 2015 EGLOFF Julien
*/

#include "libmy.h"

int	my_strncmp(const char *s1, const char *s2, int n)
{
  for (; n > 0; s1++, s2++, n--)
    {
      if (*s1 != *s2)
	return (*s1 - *s2);
      else if (!(*s1))
	return (0);
    }
  return (0);
}
