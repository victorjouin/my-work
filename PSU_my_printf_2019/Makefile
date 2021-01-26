##
## EPITECH PROJECT, 2019
## MAKEFILE
## File description:
## MAKEFILE for fonction
##

NAME = 	libmy.a

SRC =	lib/my/my_putchar.c              \
	lib/my/my_putstr.c               \
	lib/my/my_strlen.c		 \
	lib/my/my_revstr.c		 \
	lib/my/my_getnbr.c		 \
	lib/my/my_putnbr.c		 \
	lib/my/my_putnbr_no_sign.c       \
	lib/my/binary.c		 	 \
	lib/my/hexa_maj.c	 	 \
	lib/my/hexa_min.c		 \
	my_printf.c 			 



OBJ	=	$(SRC:.c=.o)


NAME	=	libmy.a

all: 	$(NAME)

$(NAME):	$(OBJ)
	ar -rc $(NAME) $(OBJ)
	rm -f $(OBJ)
clean:
	rm -rf *.o

fclean: clean
	rm -f $(NAME)

re:	fclean all

