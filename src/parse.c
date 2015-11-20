/*
** parse.c for minishell in /home/laxa/Documents/minishell
** 
** Made by EGLOFF Julien
** Login   <egloff_j@etna-alternance.net>
** 
** Started on  Mon Nov 16 18:16:59 2015 EGLOFF Julien
** Last update Fri Nov 20 11:56:28 2015 EGLOFF Julien
*/

#include <sys/stat.h>
#include <sys/wait.h>
#include <unistd.h>
#include "libmy.h"
#include "utils.h"

static void     exec(char **tab, char **env);

void            parse(char *cmd, char **env)
{
  char          **tab;

  tab = my_str_to_wordtab(cmd);
  /* check builtins first */
  /* check $PATH after */
  if (tab[0])
  {
    if (access(tab[0], F_OK | X_OK | R_OK) == 0)
      exec(tab, env);
    else
      print_errno(tab[0]);
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
