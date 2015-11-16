/*
** xwrite.c for libmy in /home/laxa/Documents/minishell/lib
** 
** Made by EGLOFF Julien
** Login   <egloff_j@etna-alternance.net>
** 
** Started on  Mon Nov 16 13:12:08 2015 EGLOFF Julien
** Last update Mon Nov 16 14:17:34 2015 EGLOFF Julien
*/

#include <unistd.h>
#include <string.h>
#include <errno.h>
#include "libmy.h"

# define        ERR_MSG "write failed: "

ssize_t         xwrite(int fd, const void *buf, size_t count)
{
  ssize_t       ret;
  char          *err;

  ret = write(fd, buf, count);
  if (ret == -1)
  {
    err = strerror(errno);
    write(STDERR_FILENO, ERR_MSG, sizeof(ERR_MSG));
    write(STDERR_FILENO, err, my_strlen(err));
    write(STDERR_FILENO, "\n", 1);
  }
  return (ret);
}
