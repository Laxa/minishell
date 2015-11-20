/*
** builtins.h for minishell in /home/laxa/Documents/minishell
** 
** Made by EGLOFF Julien
** Login   <egloff_j@etna-alternance.net>
** 
** Started on  Fri Nov 20 12:06:57 2015 EGLOFF Julien
** Last update Fri Nov 20 14:14:48 2015 EGLOFF Julien
*/

#ifndef __BUILTINS_H__
# define __BUILTINS_H__

#include "minishell.h"

void    init_builtins(t_shell *shell);
void    free_builtins(t_shell *shell);
void    builtins_env(char **argv, t_shell *shell);
void    builtins_pwd(char **argv, t_shell *shell);
void    builtins_cd(char **argv, t_shell *shell);
void    builtins_exit(char **argv, t_shell *shell);

#endif /* !__BUILTINS_H__ */
