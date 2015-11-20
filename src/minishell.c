/*
** minishell.c for minishell in /Users/laxa/Documents/C/minishell
** 
** Made by Julien EGLOFF
** Login   <egloff_j@etna-alternance.net>
** 
** Started on  Fri Nov 13 15:52:09 2015 Julien EGLOFF
** Last update Fri Nov 20 13:57:44 2015 EGLOFF Julien
*/

#include <stdlib.h>
#include "minishell.h"
#include "builtins.h"
#include "parse.h"
#include "libmy.h"
#include "env.h"

static void     init_minishell(char **env);
static void     clean_and_exit_minishell(void);
static void     main_loop(void);

static t_shell  *shell;

int     main(UNUSED int argc, UNUSED char **argv, char **env)
{
  init_minishell(env);
  main_loop();
  clean_and_exit_minishell();
  return (EXIT_SUCCESS);
}

static void     init_minishell(char **env)
{
  shell = xmalloc(sizeof(t_shell));
  shell->quit = 0;
  init_builtins(shell);
  init_env(shell, env);
}

static void     clean_and_exit_minishell(void)
{
  free_builtins(shell);
  free_env(shell);
  free(shell);
  shell = NULL;
}

static void     main_loop(void)
{
  char          buffer[BUFFER_SIZE];
  ssize_t       ret;

  ret = 42;
  while (ret && !shell->quit)
  {
    xwrite(STDOUT_FILENO, "$> ", 3);
    ret = xread(STDIN_FILENO, buffer, BUFFER_SIZE);
    if (ret)
    {
      buffer[ret - 1] = 0;
      parse(buffer, shell);
    }
  }
  my_putstr("exit\n");
}
