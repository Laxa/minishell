/*
** env.c for minishell in /Users/laxa/Documents/C/minishell
** 
** Made by Julien EGLOFF
** Login   <egloff_j@etna-alternance.net>
** 
** Started on  Fri Nov 13 16:09:23 2015 Julien EGLOFF
** Last update Fri Nov 20 12:32:30 2015 EGLOFF Julien
*/

#include <stdlib.h>
#include "minishell.h"
#include "libmy.h"
#include "env.h"

static t_env    *add_env_var(char *var, t_env *next);

void    init_env(t_shell *shell, char **env)
{
  t_env *cur;
  int   idx;

  cur = NULL;
  for (idx = 0; env[idx]; ++idx)
    cur = add_env_var(env[idx], cur);
  shell->env = cur;
}

void    free_env(t_shell *shell)
{
  t_env *cur;
  t_env *next;

  cur = shell->env;
  while (cur)
  {
    next = cur->next;
    if (cur->var != NULL)
      free(cur->var);
    free(cur);
    cur = next;
  }
  shell->env = NULL;
}

static t_env    *add_env_var(char *var, t_env *next)
{
  t_env         *new;

  new = xmalloc(sizeof(t_env));
  new->var = my_strdup(var);
  new->next = next;
  return (new);
}
