/*
** libmy.h for libmy.h in /Users/laxa/Documents/Piscine/C/Jour_05/egloff_j/libmy
** 
** Made by EGLOFF Julien
** Login   <egloff_j@etna-alternance.net>
** 
** Started on  Sat Mar 29 11:52:44 2014 EGLOFF Julien
** Last update Mon Nov 16 21:48:39 2015 EGLOFF Julien
*/

#ifndef __LIBMY_A__
# define __LIBMY_A__

#include <unistd.h>

void    my_putchar(char c);
int     my_isneg(int n);
int     my_put_nbr(int nb);
int     my_swap(int *a, int *b);
int     my_putstr(const char *str);
int     my_strlen(const char *str);
int     my_getnbr(char *str);
void    my_sort_int_tab(int *tab, int size);
int     my_power_rec(int nb, int power);
int     my_square_root(int nb);
int     my_is_prime(int nombre);
int     my_find_prime_sup(int nb);
char    *my_strcpy(char *dest, char *src);
char    *my_strncpy(char *dest, char *src, int n);
char    *my_revstr(char *str);
char    *my_strstr(char *str, char *to_find);
int     my_strcmp(char *s1, char *s2);
int     my_strncmp(char *s1, char *s2, int n);
char    *my_strupcase(char *str);
char    *my_strlowcase(char *str);
char    *my_strcapitalize(char *str);
int     my_str_isalpha(char *str);
int     my_str_isnum(char *str);
int     my_str_islower(char *str);
int     my_str_isupper(char *str);
int     my_str_isprintable(char *str);
int     my_showstr(char *str);
char    *my_strcat(char *str1, char *str2);
char    *my_strncat(char *str1, char *str2, int n);
int     my_strlcat(char *str1, char *str2, int n);
int	my_putnbr_base(int nbr, char *base);
int	my_getnbr_base(char *str, char *base);
int	find_pos(char c, char *str);
char	*my_strdup(char *str);
char	**my_str_to_wordtab(char *str);
int     tab_size(char **tab);
void    free_tab(char **tab);

/* x functions */

void            *xmalloc(size_t size);
ssize_t         xwrite(int fd, const void *buf, size_t count);
ssize_t         xread(int fd, void *buf, size_t count);
int             xexecve(const char *filename, char *const argv[], char *const envp[]);
int             xaccess(const char *pathname, int mode);

#endif /* __LIBMY_A__ */
