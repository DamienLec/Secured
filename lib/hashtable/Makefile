##
## EPITECH PROJECT, 2024
## delivery_2.0
## File description:
## Makefile
##

SRC     =   del_hastable.c	\
			hash.c	\
			ht_delete.c	\
			ht_dump.c	\
			ht_insert.c	\
			ht_search.c	\
			new_hashtable.c

SRC_LIB_MY	=	../my/my_strdup.c	\
				../my/my_strlen.c	\
				../my/my_strcmp.c	\
				../my/my_putstr.c	\
				../my/my_put_nbr.c	\
				../my/my_putchar.c	\
				../my/my_isneg.c	\
				../my/power.c	\
				../my/my_nbrlen.c

OBJ     =       $(SRC:.c=.o)

CFLAGS	=	-g

OBJ_LIB_MY	=	$(SRC_LIB_MY:.c=.o)

NAME    =       libhashtable.a

all:    $(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ_LIB_MY) $(OBJ)
	cp hashtable.h ../../include/
	cp $(NAME) ../
	cp $(NAME) ../../

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:     fclean all
