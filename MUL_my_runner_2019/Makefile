##
## EPITECH PROJECT,M 2019
## MAKEFILE
## File description:
## MAKEFILE for fonction
##

SRC =		object.c	 	\
		text.c		 	\
		event.c		 	\
		hitbox.c	 	\
		sprite_creator.c 	\
		the_window.c


OBJ	=	$(SRC:.c=.o)


NAME	=	my_runner

CFLAGS 	= -lcsfml-graphics -lcsfml-system -lcsfml-window 	

all: 	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS) -g 
clean:
	rm -rf *.o

fclean: clean
	rm -f $(NAME)

re:	fclean all

