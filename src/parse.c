/*
** parse.c for minishell in /home/laxa/Documents/minishell
** 
** Made by EGLOFF Julien
** Login   <egloff_j@etna-alternance.net>
** 
** Started on  Mon Nov 16 18:16:59 2015 EGLOFF Julien
** Last update Fri Nov 20 20:57:29 2015 EGLOFF Julien
*/

#include <sys/stat.h>
#include <sys/wait.h>
#include <unistd.h>
#include <errno.h>
#include "parse.h"
#include "libmy.h"
#include "utils.h"

static int      check_builtins(char **tab, t_shell *shell);
static void     exec(char **tab, char **env);

void            parse(char *cmd, t_shell *shell)
{
  char          **tab;

  tab = my_str_to_wordtab(cmd);
  /* check $PATH after */
  if (tab[0])
  {
    if (check_builtins(tab, shell));
    else if (access(tab[0], F_OK | X_OK | R_OK) == 0)
      exec(tab, NULL);
    else
    {
      if (errno == ENOENT)
        print_error_double_msg(tab[0], "command not found");
      else
        print_errno(tab[0]);
    }
  }
  free_tab(tab);
}

static void     exec(char **tab, char **env)
{
  pid_t         pid;

  pid = fork();
  if (pid == 0)
    xexecve(tab[0], tab, env);
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
