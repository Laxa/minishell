##
## Makefile for Makefile for libmy in /Users/laxa/Documents/Piscine/C/Jour_08/egloff_j/Makefile
## 
## Made by EGLOFF Julien
## Login   <egloff_j@etna-alternance.net>
## 
## Started on  Thu Apr  3 09:04:32 2014 EGLOFF Julien
## Last update Fri Nov 13 16:36:35 2015 Julien EGLOFF
##

CC	= 	gcc

NAME	=	minishell

SRCDIR	=	src
BDIR	=	obj

SRC 	:= 	$(shell find $(SRCDIR) -name '*.c')
OBJ 	:= 	$(addprefix $(BDIR)/,$(SRC:%.c=%.o))

RM	= 	rm -f

CFLAGS	= 	-W -Wall -Werror -ansi -pedantic

LDFLAGS = 	-I ./lib -L. ./lib/libmy.a

MKDIR	=	mkdir -p


.PHONY:		all minishell makelib clean fclean re

all:		makelib minishell


minishell:	makelib $(OBJ)
		$(CC) -o $(NAME) $(LDFLAGS) $(OBJ)


$(BDIR)/%.o: 	%.c
		$(MKDIR) $(dir $@)
		$(CC) $(CFLAGS) -I$(HEADERDIR) -I$(dir $<) -c $< -o $@

makelib:
		$(MAKE) -C ./lib/

clean:
		$(RM) $(OBJ)
		$(MAKE) -C ./lib/ clean

fclean:		clean
		$(RM) $(NAME).so
		$(RM) $(NAME).a
		$(MAKE) -C ./lib/ fclean

re:		fclean all
