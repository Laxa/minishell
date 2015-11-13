/*
** my_putchar.c for my_putchar in /Users/laxa/Documents/Piscine/C/Jour_05/egloff_j/libmy
** 
** Made by EGLOFF Julien
** Login   <egloff_j@etna-alternance.net>
** 
** Started on  Sat Mar 29 09:29:18 2014 EGLOFF Julien
** Last update Sat Mar 29 13:48:46 2014 EGLOFF Julien
*/

#include <unistd.h>
#include "libmy.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}
