/*
** parse.c for minishell in /home/laxa/Documents/minishell
** 
** Made by EGLOFF Julien
** Login   <egloff_j@etna-alternance.net>
** 
** Started on  Mon Nov 16 18:16:59 2015 EGLOFF Julien
** Last update Mon Nov 23 10:44:18 2015 EGLOFF Julien
*/

#include <sys/stat.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#include "builtins.h"
#include "parse.h"
#include "libmy.h"
#include "utils.h"
#include "env.h"

static int      check_builtins(char **tab, t_shell *shell);
static void     exec(char **tab, char **env, const char *full_path);
static void     get_sub_path(const char *path, char *buffer, int *index);
static int      check_path(char **tab, t_shell *shell);

void            parse(char *cmd, t_shell *shell)
{
  char          **tab;

  tab = my_str_to_wordtab(cmd);
  if (tab[0])
  {
    if (check_builtins(tab, shell));
    else if (is_dir(tab[0]))
      print_double_msg(tab[0], "Is a directory");
    else if (tab[0][0] != '/' && check_path(tab, shell));
    else if (access(tab[0], F_OK | X_OK | R_OK) == 0)
      exec(tab, NULL, NULL);
    else
    {
      if (errno == ENOENT && tab[0][0] != '/')
        print_error_double_msg(tab[0], "command not found");
      else
        print_errno(tab[0]);
    }
  }
  free_tab(tab);
}

static int      check_path(char **tab, t_shell *shell)
{
  char          *path;
  char          sub_path[PWD_BUFFER_SIZE];
  int           index;

  path = get_env_value(ENV_PATH, shell->env);
  if (!path || !my_strlen(path))
    return (0);
  index = 0;
  do
  {
    get_sub_path(path, sub_path, &index);
    my_strncat(sub_path, tab[0], PWD_BUFFER_SIZE);
    if (access(sub_path, F_OK | X_OK | R_OK) == 0)
    {
      exec(tab, NULL, sub_path);
      return (1);
    }
    else if (errno != ENOENT)
    {
      print_errno(sub_path);
      return (1);
    }
  } while (index < my_strlen(path));
  return (0);
}

static void     get_sub_path(const char *path, char *buffer, int *index)
{
  int           idx;
  int           size;

  size = my_strlen(path);
  for (idx = 0; *index < size && path[*index] != ':'; *index += 1, idx++)
    buffer[idx] = path[*index];
  *index += 1;
  if (buffer[idx - 1] != '/')
  {
    buffer[idx] = '/';
    idx++;
  }
  buffer[idx] = 0;
}

static void     exec(char **tab, char **env, const char *full_path)
{
  pid_t         pid;

  pid = fork();
  if (pid == 0)
  {
    reset_signals_state();
    if (full_path != NULL)
      xexecve(full_path, tab, env);
    else
      xexecve(tab[0], tab, env);
    exit(EXIT_FAILURE);
  }
  else if (pid > 0)
    wait(NULL);
  else
    print_errno(tab[0]);
}

static int      check_builtins(char **tab, t_shell *shell)
{
  t_builtins    *cur;
  int           flag;

  flag = 0;
  cur = shell->builtins;
  while (cur)
  {
    if (!my_strcmp(tab[0], cur->name))
    {
      cur->f(tab, shell);
      flag = 1;
    }
    cur = cur->next;
  }
  return (flag);
}
