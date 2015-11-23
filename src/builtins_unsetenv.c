/*
** builtins_unsetenv.c for minishell in /home/laxa/Documents/minishell
** 
** Made by EGLOFF Julien
** Login   <egloff_j@etna-alternance.net>
** 
** Started on  Mon Nov 23 10:00:28 2015 EGLOFF Julien
** Last update Mon Nov 23 10:02:35 2015 EGLOFF Julien
*/

#include "builtins.h"
#include "libmy.h"
#include "env.h"

void    builtins_unsetenv(char **argv, t_shell *shell)
{
  int   idx;
  int   size;

  size = tab_size(argv);
  for (idx = 1; idx < size; idx++)
    unset_env_key(argv[idx], shell);
}
