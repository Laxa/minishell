/*
** my_strcmp.c for my_strcmp in /Users/laxa/Documents/Piscine/C/Jour_04/egloff_j/my_strcmp
** 
** Made by EGLOFF Julien
** Login   <egloff_j@etna-alternance.net>
** 
** Started on  Fri Mar 28 10:30:04 2014 EGLOFF Julien
** Last update Fri Nov 20 14:09:57 2015 EGLOFF Julien
*/

#include "libmy.h"

int	my_strcmp(const char *s1, const char *s2)
{
  for (; *s1 == *s2; s1++, s2++)
    {
      if (!(*s1))
	return (0);
    }
  return (*s1 - *s2);
}
