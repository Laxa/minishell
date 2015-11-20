/*
** my_str_to_wordtab.c for my_str_to_word_tab in /Users/laxa/Documents/Piscine/C/Jour_06
** 
** Made by EGLOFF Julien
** Login   <egloff_j@etna-alternance.net>
** 
** Started on  Mon Mar 31 18:49:41 2014 EGLOFF Julien
** Last update Fri Nov 20 11:18:23 2015 EGLOFF Julien
*/

#include <stdlib.h>
#include "libmy.h"

static int      size_next_word(char *str, int i);
static int      number_of_word(char *str);

char	**my_str_to_wordtab(char *str)
{
  char	**tab;
  int	i;
  int	ii;
  int	iii;
  int	size;

  ii = 0;
  tab = xmalloc(number_of_word(str) * sizeof(*tab) + 1);
  for (i = 0; str[i]; i++)
  {
    if ((size = size_next_word(str, i)))
      tab[ii] = xmalloc(size_next_word(str, i) * sizeof(**tab) + 1);
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

int     tab_size(char **tab)
{
  int   count;

  for (count = 0; tab[count]; count++);
  return (count);
}

void    free_tab(char **tab)
{
  int   idx;

  for (idx = 0; tab[idx]; tab++)
    free(tab[idx]);
}

static int      size_next_word(char *str, int i)
{
  int	size;

  size = 0;
  while (str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
  {
    size++;
    i++;
  }
  return (size);
}

static int      number_of_word(char *str)
{
  int	i;
  int	word;
  int   length;

  word = 0;
  length = my_strlen(str);
  for (i = 0; i < length; i++)
  {
    if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
    {
      word++;
      while (i < length && str[i] != ' '
             && str[i] != '\n' && str[i] != '\t')
        i++;
    }
  }
  return (word);
}
