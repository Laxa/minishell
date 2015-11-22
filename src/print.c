/*
** print.c for minishell in /home/laxa/Documents/minishell
** 
** Made by EGLOFF Julien
** Login   <egloff_j@etna-alternance.net>
** 
** Started on  Mon Nov 23 00:06:30 2015 EGLOFF Julien
** Last update Mon Nov 23 00:07:55 2015 EGLOFF Julien
*/

#include <unistd.h>
#include "libmy.h"
#include "utils.h"

void    print_double_msg(const char *msg, const char *msg2)
{
  xwrite(STDOUT_FILENO, "minishell: ", 11);
  xwrite(STDOUT_FILENO, msg, my_strlen(msg));
  xwrite(STDOUT_FILENO, ": ", 2);
  xwrite(STDOUT_FILENO, msg2, my_strlen(msg2));
  xwrite(STDOUT_FILENO, "\n", 1);
}
