##
## EPITECH PROJECT,M 2019
## MAKEFILE
## File description:
## MAKEFILE for fonction
##

SRC =		text.c		\
		rand_number.c	\
		hunter.c	\
		my_hunter.c


OBJ	=	$(SRC:.c=.o)


NAME	=	my_hunter

CFLAGS 	= -lcsfml-graphics -lcsfml-system -lcsfml-window 	

all: 	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS) 
clean:
	rm -rf *.o

fclean: clean
	rm -f $(NAME)

re:	fclean all

