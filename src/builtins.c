/*
** builtins.c for minishell in /home/laxa/Documents/minishell
** 
** Made by EGLOFF Julien
** Login   <egloff_j@etna-alternance.net>
** 
** Started on  Fri Nov 20 12:06:15 2015 EGLOFF Julien
** Last update Fri Nov 20 13:12:09 2015 EGLOFF Julien
*/

#include <stdlib.h>
#include "builtins.h"
#include "libmy.h"
#include "exit.h"
#include "pwd.h"
#include "cd.h"

static t_builtins       *add_builtins(char *name,
                                      t_builtins *next,
                                      void(*f)(char **argv, t_shell *shell));

void            init_builtins(t_shell *shell)
{
  t_builtins    *cur;

  cur = NULL;
  cur = add_builtins("cd", cur, &builtins_cd);
  cur = add_builtins("pwd", cur, &builtins_pwd);
  cur = add_builtins("exit", cur, &builtins_exit);
  shell->builtins = cur;
}

void            free_builtins(t_shell *shell)
{
  t_builtins    *cur;
  t_builtins    *next;

  cur = shell->builtins;
  while (cur)
  {
    next = cur->next;
    free(cur);
    cur = next;
  }
  shell->builtins = NULL;
}

static t_builtins       *add_builtins(char *name,
                                      t_builtins *next,
                                      void(*f)(char **argv, t_shell *env))
{
  t_builtins            *new;

  new = xmalloc(sizeof(t_builtins));
  my_strncpy(new->name, name, BUILTINS_NAME_SIZE);
  new->f = f;
  new->next = next;
  return (new);
}