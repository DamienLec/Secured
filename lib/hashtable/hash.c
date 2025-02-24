/*
** EPITECH PROJECT, 2024
** B-CPE-110-LIL-1-1-secured-damien.lecoeur
** File description:
** hash
*/

#include "../../include/my.h"
#include "../../include/hashtable.h"

int hash(char *key, int len)
{
    int value = 0;
    int len_key = my_strlen(key);

    if (!key || len <= 0)
        return 0;
    for (int i = 0; key[i]; i++) {
        len_key *= key[i];
        value += key[i] * len_key / 4 + key[i];
    }
    if (value <= 0)
        value *= -1;
    return value;
}
