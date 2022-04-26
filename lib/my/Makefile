##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRC	=	my_strcmp.c \
		my_compute_power_rec.c \
		my_strcpy.c \
		my_compute_square_root.c \
		my_str_isalpha.c \
		my_find_prime_sup.c \
		my_str_islower.c \
		my_getnbr.c \
		my_str_isnum.c \
		my_isneg.c \
		my_str_isprintable.c \
		my_is_prime.c \
		my_str_isupper.c \
		my_putchar.c \
		my_strlen.c \
		my_put_nbr.c \
		my_strlowcase.c \
		my_putstr.c \
		my_strncat.c \
		my_revstr.c \
		my_strncmp.c \
		my_showmem.c \
		my_strncpy.c \
		my_showstr.c \
		my_strstr.c \
		my_sort_int_array.c \
		my_strupcase.c \
		my_strcapitalize.c \
		my_swap.c \
		my_strcat.c \
		my_strdup.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc libmy.a *.o
	mv libmy.a ../
	rm *.o
clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
