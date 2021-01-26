##
## EPITECH PROJECT, 2019
## MAKEFILE
## File description:
## MAKEFILE for fonction
##

NAME = 	libmy.a

SRC =	lib/my/my_putchar.c              \
	lib/my/my_putstr.c                   \
	lib/my/my_strlen.c		 			 \
	lib/my/my_revstr.c		 	    	 \
	101pong.c


OBJ	=	$(SRC:.c=.o)


NAME	=	101pong

all: 	$(NAME)

$(NAME):	$(OBJ)
	gcc -lm -o $(NAME) $(OBJ)

clean:
	rm -rf *.o

fclean: clean
	rm -f $(NAME)

re:	fclean all

auteur:
	echo $(USER) > auteur
