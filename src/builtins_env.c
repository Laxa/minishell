/*
** builtins_env.c for minishell in /home/laxa/Documents/minishell
** 
** Made by EGLOFF Julien
** Login   <egloff_j@etna-alternance.net>
** 
** Started on  Fri Nov 20 14:13:19 2015 EGLOFF Julien
** Last update Fri Nov 20 14:17:53 2015 EGLOFF Julien
*/

#include "builtins.h"
#include "libmy.h"

void    builtins_env(UNUSED char **argv, t_shell *shell)
{
  t_env *cur;

  cur = shell->env;
  while (cur)
  {
    my_putstr(cur->var);
    my_putchar('\n');
    cur = cur->next;
  }
}
