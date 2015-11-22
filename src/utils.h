/*
** utils.h for minishell in /Users/laxa/Documents/C/minishell/src
** 
** Made by Julien EGLOFF
** Login   <egloff_j@etna-alternance.net>
** 
** Started on  Fri Nov 13 16:39:40 2015 Julien EGLOFF
** Last update Mon Nov 23 00:07:03 2015 EGLOFF Julien
*/

#ifndef __UTILS_H__
# define __UTILS_H__

void    print_errno(const char *msg);
void    print_errno_double_msg(const char *msg, const char *msg2);
void    print_error(const char *msg);
void    print_error_double_msg(const char *msg, const char *msg2);
void    print_double_msg(const char *msg, const char *msg2);
int     is_dir(const char *path);

#endif /* !_UTILS_H__ */
