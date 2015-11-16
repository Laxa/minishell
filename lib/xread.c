/*
** xread.c for libmy in /home/laxa/Documents/minishell/lib
** 
** Made by EGLOFF Julien
** Login   <egloff_j@etna-alternance.net>
** 
** Started on  Mon Nov 16 14:11:18 2015 EGLOFF Julien
** Last update Mon Nov 16 14:18:03 2015 EGLOFF Julien
*/

#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include "libmy.h"

# define        ERR_MSG "xread failed: "

ssize_t         xread(int fd, void *buf, size_t count)
{
  ssize_t       ret;
  char          *err;

  ret = read(fd, buf, count);
  if (ret == -1)
  {
    err = strerror(errno);
    xwrite(STDERR_FILENO, ERR_MSG, sizeof(ERR_MSG));
    xwrite(STDERR_FILENO, err, my_strlen(err));
    xwrite(STDERR_FILENO, "\n", 1);
    exit(EXIT_FAILURE);
  }
  return (ret);
}
