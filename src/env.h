/*
** env.h for minishell in /Users/laxa/Documents/C/minishell
** 
** Made by Julien EGLOFF
** Login   <egloff_j@etna-alternance.net>
** 
** Started on  Fri Nov 13 16:10:30 2015 Julien EGLOFF
** Last update Fri Nov 13 16:40:12 2015 Julien EGLOFF
*/

#ifndef __ENV_H__
# define __ENV_H__

typedef struct s_env t_env;

void    init_env(char **env);
void    free_env(void);

struct  s_env
{
  t_env *next;
  char  *key;
  char  *value;
};

#endif /* !__ENV_H__ */
