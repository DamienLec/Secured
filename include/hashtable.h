/*
** EPITECH PROJECT, 2024
** B-CPE-110-LIL-1-1-secured-damien.lecoeur
** File description:
** hashtable
*/

#ifndef HASHTABLE_H
    #define HASHTABLE_H

    #include <stdlib.h>

typedef struct node {
    int key;
    char *path_finding;
    struct node *next;
} node_t;

typedef struct hashtable_s {
    int size;
    node_t **table;
    int (*hash)(char *key, int size);
} hashtable_t;

int hash(char *key, int len);
hashtable_t *new_hashtable(int (*hash)(char *, int), int len);
void delete_hashtable(hashtable_t *ht);
int ht_insert(hashtable_t *ht, char *key, char *value);
int ht_delete(hashtable_t *ht, char *key);
char *ht_search(hashtable_t *ht, char *key);
void ht_dump(hashtable_t *ht);

#endif
