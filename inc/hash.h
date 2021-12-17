#ifndef __HASH_H
#define __HASH_H

#include "string.h"
#include "stdlib.h"
#include "linkList.h"


typedef struct hash {
    int **table;
    int len;
} Hash;

typedef struct hashTable {
    Node **table;
    int len;
} HashTable;

Hash* hashCreate (int a[], int n, int len);
int hashSearch (Hash *hash, int key);
HashTable * hashTableCreate (int a[], int n, int len);
Node* HashTableSearch (HashTable *hash, int key);


#endif
