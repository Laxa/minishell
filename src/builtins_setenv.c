/*
** builtins_setenv.c for minishell in /home/laxa/Documents/minishell
** 
** Made by EGLOFF Julien
** Login   <egloff_j@etna-alternance.net>
** 
** Started on  Mon Nov 23 09:55:53 2015 EGLOFF Julien
** Last update Mon Nov 23 10:03:50 2015 EGLOFF Julien
*/

#include "builtins.h"
#include "libmy.h"
#include "env.h"

void    builtins_setenv(char **argv, t_shell *shell)
{
  if (tab_size(argv) <= 2)
    return;
  set_env_value(argv[1], argv[2], shell);
}
