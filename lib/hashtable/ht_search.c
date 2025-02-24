/*
** EPITECH PROJECT, 2024
** B-CPE-110-LIL-1-1-secured-damien.lecoeur
** File description:
** ht_search
*/

#include "../../include/my.h"
#include "../../include/hashtable.h"

char *finding_key(hashtable_t *ht, int hash_key, int pos)
{
    node_t *tmp = ht->table[pos];

    while (tmp != NULL) {
        if (tmp->key == hash_key)
            return my_strdup(tmp->path_finding);
        tmp = tmp->next;
    }
    return NULL;
}

char *ht_search(hashtable_t *ht, char *key)
{
    int hash_key = 0;
    int pos = 0;

    if (!ht || !ht->table || !key) {
        write(2, "Error: invalid parameters\n", 26);
        return NULL;
    }
    hash_key = ht->hash(key, ht->size);
    pos = hash_key % ht->size;
    return finding_key(ht, hash_key, pos);
}
