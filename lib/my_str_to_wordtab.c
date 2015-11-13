/*
** my_str_to_wordtab.c for my_str_to_word_tab in /Users/laxa/Documents/Piscine/C/Jour_06
** 
** Made by EGLOFF Julien
** Login   <egloff_j@etna-alternance.net>
** 
** Started on  Mon Mar 31 18:49:41 2014 EGLOFF Julien
** Last update Fri Nov 13 16:22:36 2015 Julien EGLOFF
*/

#include <stdlib.h>
#include "libmy.h"

int	size_next_word(char *str, int i);
int	number_of_word(char *str);
char	**my_str_to_wordtab(char *str);

char	**my_str_to_wordtab(char *str)
{
  char	**tab;
  int	i;
  int	ii;
  int	iii;
  int	size;

  ii = 0;
  tab = malloc(number_of_word(str) * sizeof(*tab) + 1);
  for (i = 0; str[i]; i++)
    {
      if ((size = size_next_word(str, i)))
	tab[ii] = malloc(size_next_word(str, i) * sizeof(**tab) + 1);
      for (iii = 0; str[i] && iii < size; iii++, i++)
	tab[ii][iii] = str[i];
      if (size)
	{
	  tab[ii][iii] = '\0';
	  ii++;
	  i--;
	}
    }
  tab[ii] = 0;
  return (tab);
}

int	size_next_word(char *str, int i)
{
  int	size;

  size = 0;
  while ((str[i] >= 'a' && str[i] <= 'z') ||
	 (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))
    {
      size++;
      i++;
    }
  return (size);
}

int	number_of_word(char *str)
{
  int	i;
  int	word;

  word = 0;
  for (i = 0; i < my_strlen(str); i++)
    {
      if ((str[i] >= 'a' && str[i] <= 'z') ||
	  (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))
	{
	  word++;
	  while (i < my_strlen(str) && ((str[i] >= 'A' && str[i] <= 'Z') ||
			    (str[i] >= '0' && str[i] <= '9') ||
			    (str[i] >= 'a' && str[i] <= 'z')))
	    i++;
	}
    }
  return (word);
}
