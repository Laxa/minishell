/*
** utils.c for minishell in /Users/laxa/Documents/C/minishell/src
** 
** Made by Julien EGLOFF
** Login   <egloff_j@etna-alternance.net>
** 
** Started on  Fri Nov 13 16:39:27 2015 Julien EGLOFF
** Last update Fri Nov 20 13:56:01 2015 EGLOFF Julien
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

  xwrite(STDERR_FILENO, msg, my_strlen(msg));
  xwrite(STDERR_FILENO, ": ", 2);
  err = strerror(errno);
  xwrite(STDERR_FILENO, err, my_strlen(err));
  xwrite(STDERR_FILENO, "\n", 1);
}
