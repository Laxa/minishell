/*
** utils.c for minishell in /Users/laxa/Documents/C/minishell/src
** 
** Made by Julien EGLOFF
** Login   <egloff_j@etna-alternance.net>
** 
** Started on  Fri Nov 13 16:39:27 2015 Julien EGLOFF
** Last update Fri Nov 20 11:26:13 2015 EGLOFF Julien
*/

#include <string.h>
#include <errno.h>
#include "libmy.h"
#include "utils.h"

char    *get_next_line(void)
{
  return ("LOL");
}

void    print_errno(const char *msg)
{
  char  *err;

  my_putstr(msg);
  my_putstr(": ");
  err = strerror(errno);
  my_putstr(err);
  my_putchar('\n');
}
