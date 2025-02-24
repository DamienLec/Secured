/*
** EPITECH PROJECT, 2024
** delivery_2.0
** File description:
** my_putchar
*/

#include "my.h"

/*
Prints a char
@param c character
*/
void my_putchar(char c)
{
    write(1, &c, 1);
}
