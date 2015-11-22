##
## Makefile for Makefile for libmy in /Users/laxa/Documents/Piscine/C/Jour_08/egloff_j/Makefile
## 
## Made by EGLOFF Julien
## Login   <egloff_j@etna-alternance.net>
## 
## Started on  Thu Apr  3 09:04:32 2014 EGLOFF Julien
## Last update Sun Nov 22 20:36:12 2015 EGLOFF Julien
##

CC	= gcc

NAME	= libmy.a

SRC	= my_find_prime_sup.c	\
	  my_getnbr.c		\
	  my_getnbr_base.c	\
	  my_is_prime.c		\
	  my_isneg.c		\
	  my_power_rec.c	\
	  my_put_nbr.c		\
	  my_putchar.c		\
	  my_putnbr_base.c	\
	  my_putstr.c		\
	  my_revstr.c		\
	  my_showstr.c		\
	  my_sort_int_tab.c	\
	  my_square_root.c	\
	  my_str_isalpha.c	\
	  my_str_islower.c	\
	  my_str_isnum.c	\
	  my_str_isprintable.c	\
          my_str_to_wordtab.c	\
	  my_str_isupper.c	\
	  my_strcapitalize.c	\
	  my_strcat.c		\
	  my_strcmp.c		\
	  my_strcpy.c		\
	  my_strlcat.c		\
	  my_strlen.c		\
	  my_strlowcase.c	\
	  my_strncat.c		\
	  my_strncmp.c		\
	  my_strncpy.c		\
	  my_strstr.c		\
	  my_strupcase.c	\
	  my_swap.c		\
	  my_strdup.c		\
	  xmalloc.c		\
	  xexecve.c		\
	  xaccess.c		\
	  xwrite.c		\
	  xread.c


OBJ	= $(SRC:%.c=%.o)

RM	= rm -f

CFLAGS	= -W -Wall -Werror -ansi -pedantic -g

LDFLAGS = -I.



$(NAME):	$(OBJ)
		ar r $(NAME) $(OBJ)
		ranlib $(NAME)

all:		$(NAME)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all
