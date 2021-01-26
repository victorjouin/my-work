##
## EPITECH PROJECT, 2019
## MAKEFILE
## File description:
## MAKEFILE
##

NAME = libmy.a
SRC =	my_compute_square_root.c  \
	my_find_prime_sup.c       \
	my_getnbr.c my_is_prime.c \
	my_putchar.c              \
	my_getnbr.c               \
	my_is_prime.c             \
	my_putchar.c              \
	my_putstr.c               \
	my_revstr.c               \
	my_showstr.c              \
	my_sort_int_array.c       \
	my_strcapitalize.c        \
	my_strcat.c               \
	my_strcmp.c               \
	my_strcpy.c               \
	my_str_isalpha.c          \
	my_str_islower.c          \
	my_str_isprintable.c      \
	my_str_isnum.c            \
	my_str_isupper.c          \
	my_strlen.c               \
	my_strlowcase.c           \
	my_strncat.c              \
	my_strncmp.c              \
	my_strncpy.c              \
	my_strstr.c               \
	my_swap.c		  \
	infinadd.c

OBJ	=	$(SRC:.c=.o)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp my.h ../../
	cp libmy.a ../

make: $(OBJ)
	$(CC) -o $(SRC)

clean:
	rm -rf *.o

fclean: clean
	rm -f $(NAME)

fclean: fclean all
