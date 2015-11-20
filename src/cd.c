/*
** cd.h for minishell in /home/laxa/Documents/minishell
** 
** Made by EGLOFF Julien
** Login   <egloff_j@etna-alternance.net>
** 
** Started on  Fri Nov 20 12:33:14 2015 EGLOFF Julien
** Last update Fri Nov 20 20:47:53 2015 EGLOFF Julien
*/

#include "builtins.h"
#include "utils.h"
#include "libmy.h"
#include "env.h"

static int      is_home_path(const char *path);
static void     cd_home(char *cwd, t_shell *shell);
static void     cd_dash(char *cwd, t_shell *shell);
static void     cd_other(char *cwd, const char *path, t_shell *shell);

void    builtins_cd(UNUSED char **argv, UNUSED t_shell *shell)
{
  char  cwd[PWD_BUFFER_SIZE];

  if (!getcwd(cwd, PWD_BUFFER_SIZE))
    cwd[0] = 0;
  if (!argv[1] || is_home_path(argv[1]))
    cd_home(cwd, shell);
  else if (argv[1][0] == '-')
    cd_dash(cwd, shell);
  else
    cd_other(cwd, argv[1], shell);
}

static void     cd_home(char *cwd, t_shell *shell)
{
  char          *home;

  home = get_env_value("HOME", shell->env);
  if (!my_strlen(home))
    print_error("cd: HOME not set");
  else if (chdir(home))
    print_errno_double_msg("cd", home);
  else
  {
    set_env_value("OLDPWD", cwd, shell->env);
    getcwd(cwd, PWD_BUFFER_SIZE);
    set_env_value("PWD", cwd, shell->env);
  }
}

static void     cd_dash(char *cwd, t_shell *shell)
{
  char          *opwd;

  opwd = get_env_value("OLDPWD", shell->env);
  if (!my_strlen(opwd))
    print_error("cd: OLDPWD not set");
  else if (chdir(opwd))
    print_errno_double_msg("cd", opwd);
  else
  {
    set_env_value("OLDPWD", cwd, shell->env);
    getcwd(cwd, PWD_BUFFER_SIZE);
    set_env_value("PWD", cwd, shell->env);
  }
}

static void     cd_other(char *cwd, const char *path, t_shell *shell)
{
  if (chdir(path))
    print_errno_double_msg("cd", path);
  else
  {
    set_env_value("OLDPWD", cwd, shell->env);
    getcwd(cwd, PWD_BUFFER_SIZE);
    set_env_value("PWD", cwd, shell->env);
  }
}

static int      is_home_path(const char *path)
{
  int   idx;

  if (!path)
    return (1);
  if (path && path[0] != '~')
    return (0);
  for (idx = 1; path[idx]; ++idx)
  {
    if (path[idx] != '/')
      return (0);
  }
  return (1);
}
