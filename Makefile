##
## EPITECH PROJECT, 2024
## B-CPE-110-LIL-1-1-settingup-damien.lecoeur
## File description:
## Makefile
##

all:
		make -C lib/my
		make -C lib/hashtable

clean:
		make clean -C lib/my
		make clean -C lib/hashtable
		rm -f $(OBJ)

fclean: clean
		make fclean -C lib/my
		make fclean -C lib/hashtable
		rm lib/*.a
		rm *.a

re: fclean all
		make re -C lib/my
		make re -C lib/hashtable
