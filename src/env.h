/*
** env.h for minishell in /Users/laxa/Documents/C/minishell
** 
** Made by Julien EGLOFF
** Login   <egloff_j@etna-alternance.net>
** 
** Started on  Fri Nov 13 16:10:30 2015 Julien EGLOFF
** Last update Fri Nov 20 14:10:59 2015 EGLOFF Julien
*/

#ifndef __ENV_H__
# define __ENV_H__

#include "minishell.h"

void    init_env(t_shell *shell, char **env);
void    free_env(t_shell *shell);
char    *get_env_value(const char *name, t_env *env);

#endif /* !__ENV_H__ */
