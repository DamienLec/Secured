/*
** EPITECH PROJECT, 2024
** B-CPE-110-LIL-1-1-secured-damien.lecoeur
** File description:
** hash
*/

#ifndef MY_H_
    #define MY_H_
    #include <stdlib.h>
    #include <unistd.h>

int my_strcmp(char const *s1, char const *s2);
int my_putstr(char const *str, int p);
char *my_strdup(char const *src);
int my_strlen(char *str);
void my_putchar(char c);
int my_put_nbr(int nbr);
int nbr_len(int nbr);
int my_isneg(int n);
int power(int i);

#endif
