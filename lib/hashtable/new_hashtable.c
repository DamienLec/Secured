/*
** EPITECH PROJECT, 2024
** B-CPE-110-LIL-1-1-secured-damien.lecoeur
** File description:
** hash
*/

#include "../../include/my.h"
#include "../../include/hashtable.h"

hashtable_t *new_hashtable(int (*hash)(char *, int), int len)
{
    hashtable_t *new_ht = NULL;
    int i = 0;

    if (len <= 0)
        return NULL;
    new_ht = malloc(sizeof(hashtable_t));
    if (new_ht == NULL)
        return NULL;
    new_ht->table = malloc(sizeof(node_t *) * len);
    if (!new_ht->table) {
        free(new_ht);
        return NULL;
    }
    new_ht->size = len;
    new_ht->hash = hash;
    for (; i < len; i++) {
        new_ht->table[i] = NULL;
    }
    return new_ht;
}
