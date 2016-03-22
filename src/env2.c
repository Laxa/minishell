/*
** env2.c for minishell in /home/laxa/Documents/minishell
** 
** Made by EGLOFF Julien
** Login   <laxa>
** 
** Started on  Fri Nov 20 21:08:40 2015 EGLOFF Julien
** Last update Mon Nov 23 10:08:26 2015 EGLOFF Julien
*/

#include <stdlib.h>
#include "libmy.h"
#include "env.h"

void    set_env_value(const char *key, const char *value, t_shell *shell)
{
  int   size;
  t_env *cur;
  char  *var;

  size = my_strlen(key) + my_strlen(value) + 2;
  cur = get_env_ptr(key, shell->env);
  if (cur == NULL)
  {
    var = xmalloc(size);
    concat_env_var(var, key, value);
    shell->env = add_env_var(var, shell->env);
  }
  else
  {
    if (size > my_strlen(cur->var))
    {
      var = xmalloc(size);
      concat_env_var(var, key, value);
      if (cur->var != NULL)
        free(cur->var);
      cur->var = var;
    }
    else
      concat_env_var(cur->var, key, value);
  }
}

void    concat_env_var(char *dest, const char *key, const char *val)
{
  my_strcpy(dest, key);
  my_strcat(dest, "=");
  my_strcat(dest, val);
}

void    unset_env_key(const char *key, t_shell *shell)
{
  t_env *prev;
  t_env *cur;
  int   length;

  prev = NULL;
  cur = shell->env;
  length = my_strlen(key);
  while (cur)
  {
    if (!my_strncmp(key, cur->var, length)
        && cur->var[length] && cur->var[length] == '=')
    {
      if (cur->var != NULL)
        free(cur->var);
      if (prev != NULL)
        prev->next = cur->next;
      else
        shell->env = cur->next;
      free(cur);
      return;
    }
    prev = cur;
    cur = cur->next;
  }
}

t_env   *get_env_ptr(const char *key, t_env *env)
{
  int   length;

  length = my_strlen(key);
  while (env)
  {
    if (!my_strncmp(key, env->var, length)
        && env->var[length] && env->var[length] == '=')
      return (env);
    env = env->next;
  }
  return (NULL);
}
