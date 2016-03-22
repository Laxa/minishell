/*
** utils.c for minishell in /Users/laxa/Documents/C/minishell/src
** 
** Made by Julien EGLOFF
** Login   <laxa>
** 
** Started on  Fri Nov 13 16:39:27 2015 Julien EGLOFF
** Last update Sun Nov 22 23:58:20 2015 EGLOFF Julien
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include "libmy.h"
#include "utils.h"

void    print_errno(const char *msg)
{
  char  *err;

  xwrite(STDERR_FILENO, "minishell: ", 11);
  xwrite(STDERR_FILENO, msg, my_strlen(msg));
  xwrite(STDERR_FILENO, ": ", 2);
  err = strerror(errno);
  xwrite(STDERR_FILENO, err, my_strlen(err));
  xwrite(STDERR_FILENO, "\n", 1);
}

void    print_errno_double_msg(const char *msg, const char *msg2)
{
  char  *err;

  xwrite(STDERR_FILENO, "minishell: ", 11);
  xwrite(STDERR_FILENO, msg, my_strlen(msg));
  xwrite(STDERR_FILENO, ": ", 2);
  xwrite(STDERR_FILENO, msg2, my_strlen(msg2));
  xwrite(STDERR_FILENO, ": ", 2);
  err = strerror(errno);
  xwrite(STDERR_FILENO, err, my_strlen(err));
  xwrite(STDERR_FILENO, "\n", 1);
}

void    print_error(const char *msg)
{
  xwrite(STDERR_FILENO, "minishell: ", 11);
  xwrite(STDERR_FILENO, msg, my_strlen(msg));
  xwrite(STDERR_FILENO, "\n", 1);
}

void    print_error_double_msg(const char *msg, const char *msg2)
{
  xwrite(STDERR_FILENO, "minishell: ", 11);
  xwrite(STDERR_FILENO, msg, my_strlen(msg));
  xwrite(STDERR_FILENO, ": ", 2);
  xwrite(STDERR_FILENO, msg2, my_strlen(msg2));
  xwrite(STDERR_FILENO, "\n", 1);
}

int             is_dir(const char *path)
{
  struct stat   buf;

  if (stat(path, &buf))
    return (0);
  return (S_ISDIR(buf.st_mode));
}
