/*
** pwd.c for minishell.c in /home/laxa/Documents/minishell
** 
** Made by EGLOFF Julien
** Login   <egloff_j@etna-alternance.net>
** 
** Started on  Fri Nov 20 12:35:19 2015 EGLOFF Julien
** Last update Fri Nov 20 16:44:50 2015 EGLOFF Julien
*/

#include <unistd.h>
#include "builtins.h"
#include "utils.h"
#include "libmy.h"

void    builtins_pwd(UNUSED char **argv, UNUSED t_shell *shell)
{
  char  buf[PWD_BUFFER_SIZE];

  if (getcwd(buf, PWD_BUFFER_SIZE) != NULL)
  {
    my_putstr(buf);
    my_putchar('\n');
  }
  else
    print_errno("pwd");
}
