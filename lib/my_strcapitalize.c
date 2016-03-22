/*
** my_strcapitalize.c for my_strcapitalize in /Users/laxa/Documents/Piscine/C/Jour_04/egloff_j/my_strcapitalize
** 
** Made by EGLOFF Julien
** Login   <laxa>
** 
** Started on  Fri Mar 28 11:56:30 2014 EGLOFF Julien
** Last update Sat Mar 29 13:52:14 2014 EGLOFF Julien
*/

#include "libmy.h"

int	is_this_start_word(char *str, int i)
{
  if (str[i] >= 'a' && str[i] <= 'z' && i == 0)
    return (1);
  if (str[i - 1] && str[i - 1] == ' ' && str[i] >= 'a' && str[i] <= 'z')
    return (1);
  if (str[i - 1] && str[i - 1] == ' ' && str[i] >= 'A' && str[i] <= 'Z')
    return (1);
  return (0);
}

char	*my_strcapitalize(char *str)
{
  int	i;

  for (i = 0; str[i]; i++)
    {
      if (is_this_start_word(str, i) == 1 && str[i] >= 'a' && str[i] <= 'z')
	str[i] -= 32;
      if (is_this_start_word(str, i) == 0 && str[i] >= 'A' && str[i] <= 'Z' && i != 0)
	str[i] += 32;
    }
  return (str);
}
