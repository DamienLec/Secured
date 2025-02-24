/*
** EPITECH PROJECT, 2024
** B-CPE-110-LIL-1-1-secured-damien.lecoeur
** File description:
** hash
*/

#include "../../include/my.h"
#include "../../include/hashtable.h"

int del_l_list(node_t *head)
{
    node_t *temp = NULL;
    node_t *current = head;

    while (current) {
        temp = current;
        current = current->next;
        free(temp->path_finding);
        free(temp);
    }
    return 0;
}

void delete_hashtable(hashtable_t *ht)
{
    if (!ht)
        return;
    if (!ht->table) {
        free(ht);
        return;
    }
    for (int i = 0; i < ht->size; i++)
        del_l_list(ht->table[i]);
    free(ht->table);
    free(ht);
}
