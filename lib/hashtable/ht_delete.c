/*
** EPITECH PROJECT, 2024
** B-CPE-110-LIL-1-1-secured-damien.lecoeur
** File description:
** ht_delete
*/

#include "../../include/hashtable.h"

void del_node(node_t **head, int key)
{
    node_t *current = *head;
    node_t *prev = NULL;

    if (current && current->key == key) {
        *head = current->next;
        free(current->path_finding);
        free(current);
        return;
    }
    while (current && current->key != key) {
        prev = current;
        current = current->next;
    }
    if (!current)
        return;
    prev->next = current->next;
    free(current->path_finding);
    free(current);
}

int ht_delete(hashtable_t *ht, char *key)
{
    int hash_key = 0;
    int pos = 0;

    if (!ht || !key || !ht->table)
        return 0;
    hash_key = ht->hash(key, ht->size);
    pos = hash_key % ht->size;
    del_node(&ht->table[pos], hash_key);
    return 0;
}
