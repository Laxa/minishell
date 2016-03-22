/*
** builtins_setenv.c for minishell in /home/laxa/Documents/minishell
** 
** Made by EGLOFF Julien
** Login   <laxa>
** 
** Started on  Mon Nov 23 09:55:53 2015 EGLOFF Julien
** Last update Tue Dec  1 19:28:29 2015 EGLOFF Julien
*/

#include "builtins.h"
#include "libmy.h"
#include "env.h"

void    builtins_setenv(char **argv, t_shell *shell)
{
  if (tab_size(argv) <= 2)
  {
    builtins_env(argv, shell);
    return;
  }
  set_env_value(argv[1], argv[2], shell);
}
