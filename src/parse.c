/*
** parse.c for minishell in /home/laxa/Documents/minishell
** 
** Made by EGLOFF Julien
** Login   <egloff_j@etna-alternance.net>
** 
** Started on  Mon Nov 16 18:16:59 2015 EGLOFF Julien
** Last update Mon Nov 16 21:49:23 2015 EGLOFF Julien
*/

#include <sys/stat.h>
#include <string.h>
#include <stdio.h>
#include <errno.h>
#include "libmy.h"

void            parse(char *cmd, char **env)
{
  char          **tab;
  char          *err;

  tab = my_str_to_wordtab(cmd);
  /* check builtins first */
  if (tab[0])
  {
    if (access(tab[0], F_OK | X_OK | R_OK) == 0)
      xexecve(tab[0], tab, env);
    else
    {
      my_putstr(tab[0]);
      my_putstr(": ");
      err = strerror(errno);
      my_putstr(err);
      my_putchar('\n');
    }
  }
}
