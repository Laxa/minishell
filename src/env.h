/*
** env.h for minishell in /Users/laxa/Documents/C/minishell
** 
** Made by Julien EGLOFF
** Login   <laxa>
** 
** Started on  Fri Nov 13 16:10:30 2015 Julien EGLOFF
** Last update Sun Nov 22 21:11:33 2015 EGLOFF Julien
*/

#ifndef __ENV_H__
# define __ENV_H__

#include "minishell.h"

# define        ENV_HOME        "HOME"
# define        ENV_OLDPWD      "OLDPWD"
# define        ENV_PWD         "PWD"
# define        ENV_PATH        "PATH"

void    init_env(t_shell *shell, char **env);
void    free_env(t_shell *shell);
char    *get_env_value(const char *name, t_env *env);
t_env   *add_env_var(char *var, t_env *next);
t_env   *get_env_ptr(const char *key, t_env *env);
void    set_env_value(const char *key, const char *value, t_shell *shell);
void    unset_env_key(const char *key, t_shell *shell);
void    concat_env_var(char *dest, const char *key, const char *val);

#endif /* !__ENV_H__ */
