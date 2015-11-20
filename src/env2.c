/*
** env2.c for minishell in /home/laxa/Documents/minishell
** 
** Made by EGLOFF Julien
** Login   <egloff_j@etna-alternance.net>
** 
** Started on  Fri Nov 20 21:08:40 2015 EGLOFF Julien
** Last update Fri Nov 20 21:12:41 2015 EGLOFF Julien
*/

#include "libmy.h"
#include "env.h"

void            set_env_value(const char *key, const char *value, t_env *env)
{
  size_t        size;
  t_env         *cur;
  char          *var;

  size = my_strlen(key) + my_strlen(value) + 2;
  cur = get_env_ptr(key, env);
  if (cur == NULL)
  {
    var = xmalloc(size);
    my_strcpy(var, key);
    my_strcat(var, "=");
    my_strcat(var, value);
    add_env_var(var, env);
  }
  else
  {
    /* if size > dest_size */
    /* else */
  }
}

t_env   *get_env_ptr(const char *key, t_env *env)
{
  int   length;

  length = my_strlen(key);
  while (env)
  {
    if (!my_strncmp(key, env->var, length
                    && env->var[length] && env->var[length] == '='))
      return (env);
    env = env->next;
  }
  return (NULL);
}
