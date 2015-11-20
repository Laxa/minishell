/*
** exit.c for minishell in /home/laxa/Documents/minishell/src
** 
** Made by EGLOFF Julien
** Login   <egloff_j@etna-alternance.net>
** 
** Started on  Fri Nov 20 13:10:21 2015 EGLOFF Julien
** Last update Fri Nov 20 13:13:06 2015 EGLOFF Julien
*/

#include "exit.h"

void    builtins_exit(UNUSED char **argv, t_shell *shell)
{
  shell->quit = 1;
}
