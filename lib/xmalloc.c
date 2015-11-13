/*
** xmalloc.c for xmalloc in /Users/laxa/Documents/C/minishell/lib
** 
** Made by Julien EGLOFF
** Login   <egloff_j@etna-alternance.net>
** 
** Started on  Fri Nov 13 16:43:24 2015 Julien EGLOFF
** Last update Fri Nov 13 16:46:57 2015 Julien EGLOFF
*/

#include <stdlib.h>
#include "libmy.h"

void    *xmalloc(size_t size)
{
  void  *p;

  p = malloc(size);
  if (p == NULL)
  {
    my_putstr("malloc failed\n");
    exit(EXIT_FAILURE);
  }
  return (p);
}
