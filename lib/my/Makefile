##
## EPITECH PROJECT, 2024
## delivery_2.0
## File description:
## Makefile
##

SRC     =       my_strdup.c	\
				my_strlen.c	\
				my_strcmp.c	\
				my_putstr.c	\
				my_put_nbr.c	\
				my_putchar.c	\
				my_isneg.c	\
				power.c	\
				my_nbrlen.c

OBJ     =       $(SRC:.c=.o)

NAME    =       libmy.a

all:    $(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp my.h ../../include/
	cp $(NAME) ../

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:     fclean all
