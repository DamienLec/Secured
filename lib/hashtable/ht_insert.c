/*
** EPITECH PROJECT, 2024
** B-CPE-110-LIL-1-1-secured-damien.lecoeur
** File description:
** ht_insert
*/

#include "../../include/my.h"
#include "../../include/hashtable.h"

node_t *init_node(hashtable_t *ht, char *key, char *value)
{
    node_t *node = malloc(sizeof(node_t));

    if (node == NULL)
        return NULL;
    node->key = ht->hash(key, ht->size);
    node->path_finding = my_strdup(value);
    node->next = NULL;
    return node;
}

int ht_insert(hashtable_t *ht, char *key, char *value)
{
    node_t *new_head = NULL;
    int pos = 0;

    if (!ht || !key || !value || key[0] == '\0' || value[0] == '\0')
        return 0;
    pos = ht->hash(key, ht->size) % ht->size;
    new_head = init_node(ht, key, value);
    new_head->next = ht->table[pos];
    ht->table[pos] = new_head;
    return 0;
}
