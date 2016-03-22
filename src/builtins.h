/*
** builtins.h for minishell in /home/laxa/Documents/minishell
** 
** Made by EGLOFF Julien
** Login   <laxa>
** 
** Started on  Fri Nov 20 12:06:57 2015 EGLOFF Julien
** Last update Mon Nov 23 10:04:17 2015 EGLOFF Julien
*/

#ifndef __BUILTINS_H__
# define __BUILTINS_H__

#include "minishell.h"

# define        PWD_BUFFER_SIZE 512
# define        CD_DASH         '-'

void    init_builtins(t_shell *shell);
void    free_builtins(t_shell *shell);
void    builtins_env(char **argv, t_shell *shell);
void    builtins_pwd(char **argv, t_shell *shell);
void    builtins_cd(char **argv, t_shell *shell);
void    builtins_exit(char **argv, t_shell *shell);
void    builtins_setenv(char **argv, t_shell *shell);
void    builtins_unsetenv(char **argv, t_shell *shell);

#endif /* !__BUILTINS_H__ */
