##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

NAME	=	my_ls

SRC	=	source/my_putchar.c \
		source/show_number.c \
		source/show_string.c \
		source/my_strlen.c \
		source/ls.c \
		source/lsa.c \
		source/ls1.c \
		source/lsl.c \
		source/concat_strings.c \
		source/my_put_nbr.c \
		source/my_putstr.c \
		source/to_number.c \
		source/my_put_nbrbase.c \
		source/my_put_nbrbin.c \
		source/my_put_nbrhex.c \
		source/my_put_nbroct.c \
		source/my_put_nbruns.c \
		source/pointeur.c \
		source/printf.c \
		source/mem_alloc.c \


OBJ	=	$(SRC:.c=.o)

CFLAGS = -g3

all:	$(NAME)

$(NAME):	$(OBJ) $(SRC)
		gcc -o $(NAME) $(OBJ) $(CFLAGS)
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all


