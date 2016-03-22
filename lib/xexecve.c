/*
** xexecve.c for libmy in /home/laxa/Documents/minishell/lib
** 
** Made by EGLOFF Julien
** Login   <laxa>
** 
** Started on  Mon Nov 16 17:54:39 2015 EGLOFF Julien
** Last update Mon Nov 16 18:01:08 2015 EGLOFF Julien
*/

#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#include "libmy.h"

# define        ERR_MSG "execve failed: "

int     xexecve(const char *filename, char *const argv[], char *const envp[])
{
  int   ret;
  char  *err;

  ret = execve(filename, argv, envp);
  if (ret == -1)
  {
    err = strerror(errno);
    xwrite(STDERR_FILENO, ERR_MSG, sizeof(ERR_MSG));
    xwrite(STDERR_FILENO, err, my_strlen(err));
    xwrite(STDERR_FILENO, "\n", 1);
  }
  return (ret);
}
