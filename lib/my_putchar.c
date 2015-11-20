/*
** my_putchar.c for my_putchar in /Users/laxa/Documents/Piscine/C/Jour_05/egloff_j/libmy
** 
** Made by EGLOFF Julien
** Login   <egloff_j@etna-alternance.net>
** 
** Started on  Sat Mar 29 09:29:18 2014 EGLOFF Julien
** Last update Fri Nov 20 13:51:25 2015 EGLOFF Julien
*/

#include <unistd.h>
#include "libmy.h"

void	my_putchar(char c)
{
  xwrite(STDOUT_FILENO, &c, 1);
}
