/*
** minishell.h for minishell in /Users/laxa/Documents/C/minishell
** 
** Made by Julien EGLOFF
** Login   <egloff_j@etna-alternance.net>
** 
** Started on  Fri Nov 13 15:51:45 2015 Julien EGLOFF
** Last update Mon Nov 16 18:06:53 2015 EGLOFF Julien
*/

#ifndef __MINISHELL_H__
# define __MINISHELL_H__

#include "env.h"

# define        UNUSED __attribute__ ((unused))
# define        BUILTINS_NAME_SIZE      12
# define        BUFFER_SIZE             1024

/* define global list of builtins */
typedef struct s_shell          t_shell;
typedef struct s_builtins       t_builtins;

struct  s_builtins
{
  char  name[BUILTINS_NAME_SIZE];
  void  (*f)(int argc, char ** argv, char ** env);
};

struct  s_shell
{
  t_env         *env;
  t_builtins    *builtins;
};

#endif /* !__MINISHELL_H__ */
