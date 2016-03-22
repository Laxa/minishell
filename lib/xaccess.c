/*
** xaccess.c for libmy in /home/laxa/Documents/minishell/lib
** 
** Made by EGLOFF Julien
** Login   <laxa>
** 
** Started on  Mon Nov 16 21:10:30 2015 EGLOFF Julien
** Last update Mon Nov 16 21:11:18 2015 EGLOFF Julien
*/

#include <unistd.h>

int     xaccess(const char *pathname, int mode)
{
  int   ret;

  ret = access(pathname, mode);
  return (ret);
}
