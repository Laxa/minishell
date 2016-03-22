/*
** minishell.h for minishell in /Users/laxa/Documents/C/minishell
** 
** Made by Julien EGLOFF
** Login   <laxa>
** 
** Started on  Fri Nov 13 15:51:45 2015 Julien EGLOFF
** Last update Mon Nov 23 10:45:16 2015 EGLOFF Julien
*/

#ifndef __MINISHELL_H__
# define __MINISHELL_H__

# define        UNUSED __attribute__ ((unused))
# define        BUFFER_SIZE             1024
# define        BUILTINS_NAME_SIZE      12

typedef struct s_builtins       t_builtins;
typedef struct s_shell          t_shell;
typedef struct s_env            t_env;

struct  s_builtins
{
  char          name[BUILTINS_NAME_SIZE];
  void          (*f)(char ** argv, t_shell *shell);
  t_builtins    *next;
};

struct  s_shell
{
  t_env         *env;
  t_builtins    *builtins;
  char          quit;
};

struct  s_env
{
  t_env *next;
  char  *var;
};

void    init_signals(void);
void    reset_signals_state(void);

#endif /* !__MINISHELL_H__ */
