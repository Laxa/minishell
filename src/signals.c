/*
** signals.c for minishell in /home/laxa/Documents/minishell
** 
** Made by EGLOFF Julien
** Login   <egloff_j@etna-alternance.net>
** 
** Started on  Mon Nov 23 10:21:49 2015 EGLOFF Julien
** Last update Mon Nov 23 10:44:57 2015 EGLOFF Julien
*/

#include <unistd.h>
#include <signal.h>
#include "minishell.h"
#include "libmy.h"

void    init_signals(void)
{
  signal(SIGINT, SIG_IGN);
  signal(SIGQUIT, SIG_IGN);
  signal(SIGTERM, SIG_IGN);
}

void    reset_signals_state(void)
{
  signal(SIGINT, SIG_DFL);
  signal(SIGQUIT, SIG_DFL);
  signal(SIGTERM, SIG_DFL);
}
