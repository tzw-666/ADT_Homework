#include "hash.h"

Hash* hashCreate (int a[], int n, int len) {
    int pos;
    Hash *hash = (Hash*)malloc(sizeof(Hash));
    hash->table = (int**)malloc(sizeof(int*) * len);
    memset(hash->table, 0, sizeof(int*) * len);
    hash->len = len;
    for (int i = 0; i < n; ++i) {
        for (pos = a[i] % len; hash->table[pos] && pos < len; ++pos);
        hash->table[pos] = (int*)malloc(sizeof(int));
        *hash->table[pos] = a[i];
    }
    return hash;
}

int hashSearch (Hash *hash, int key) {
    int pos;
    for (pos = key % hash->len; pos < hash->len && hash->len; ++pos);
    if (pos == hash->len) {
        pos = -1;
    }
    return pos;
}

HashTable * hashTableCreate (int a[], int n, int len) {
    int pos;
    Node *p, *prev, *node;
    HashTable *hash = (HashTable *)malloc(sizeof(HashTable));
    hash->table = (Node**)malloc(sizeof(Node*) * len);
    memset(hash->table, 0, sizeof(Node*) * len);
    hash->len = len;
    for (int i = 0; i < n; ++i) {
        pos = a[i] % len;
        node = (Node*)malloc(sizeof(Node));
        node->next = NULL;
        node->data = a[i];
        p = hash->table[pos];
        if (p) {
            for (; p != NULL; prev = p, p = p->next);
            prev->next = node;
        } else {
            hash->table[pos] = node;
        }
    }
    return hash;
}

Node* HashTableSearch (HashTable *hash, int key) {
    Node *p = hash->table[key % hash->len];
    for (; p && p->data != key; p = p->next);
    return p;
}


