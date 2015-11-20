/*
** minishell.c for minishell in /Users/laxa/Documents/C/minishell
** 
** Made by Julien EGLOFF
** Login   <egloff_j@etna-alternance.net>
** 
** Started on  Fri Nov 13 15:52:09 2015 Julien EGLOFF
** Last update Fri Nov 20 11:29:56 2015 EGLOFF Julien
*/

#include <stdlib.h>
#include "minishell.h"
#include "parse.h"
#include "libmy.h"

static void     init_minishell(UNUSED char **env);
static void     clean_and_exit_minishell(void);
static void     main_loop(void);

static t_shell  *shell;

int     main(UNUSED int argc, UNUSED char **argv, UNUSED char **env)
{
  init_minishell(env);
  main_loop();
  clean_and_exit_minishell();
  return (0);
}

static void     init_minishell(UNUSED char **env)
{
  shell = xmalloc(sizeof(t_shell));
  /* init_builtins */
  /* init_env */
}

static void     clean_and_exit_minishell(void)
{
  free(shell);
  /* clean env */
}

static void     main_loop(void)
{
  char          buffer[BUFFER_SIZE];
  ssize_t       ret;

  ret = 42;
  while (ret)
  {
    xwrite(STDIN_FILENO, "$> ", 3);
    ret = xread(STDIN_FILENO, buffer, BUFFER_SIZE);
    if (ret)
      parse(buffer, NULL);
  }
  my_putstr("exit\n");
}
