/*
** EPITECH PROJECT, 2024
** B-CPE-110-LIL-1-1-secured-damien.lecoeur
** File description:
** ht_dump
*/

#include "../../include/my.h"
#include "../../include/hashtable.h"

void ht_dump(hashtable_t *ht)
{
    node_t *tmp = NULL;

    if (!ht || !ht->table)
        return;
    for (int i = 0; i < ht->size; i++) {
        my_putchar('[');
        my_put_nbr(i);
        my_putstr("]:\n", 3);
        tmp = ht->table[i];
        while (tmp != NULL) {
            my_putstr("> ", 2);
            my_put_nbr(tmp->key);
            my_putstr(" - ", 3);
            my_putstr(tmp->path_finding, my_strlen(tmp->path_finding));
            my_putchar('\n');
            tmp = tmp->next;
        }
    }
}
