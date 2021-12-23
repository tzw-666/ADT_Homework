#include "hash.h"

/*开放定址法生成散列*/
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

/*删除一个散列*/
void hashDestruct (Hash *hash) {
    if (hash) {
        for(int i = 0; i < hash->len; free(hash->table[i++]));
        free(hash->table);
    }
}

/*删除一个散列*/
void hashTableDestruct (HashTable *hash) {
    if (hash) {
        Node *p, *next;
        for (int i = 0; i < hash->len; ++i) {
            for(p = hash->table; p; p = next) {
                next = p->next;
                free(p);
            }
        }
        free(hash->table);
    }
}

/*开放定址法散列查找*/
int hashSearch (Hash *hash, int key) {
    int pos = key % hash->len;
    for (; pos < hash->len && hash->table[pos] && *hash->table[pos] != key; ++pos);
    if (pos == hash->len) {
        pos = -1;
    }
    return pos;
}

/*链地址法创建建散列*/
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

/*链地址法散列查找*/
Node* hashTableSearch (HashTable *hash, int key) {
    Node *p = hash->table[key % hash->len];
    for (; p && p->data != key; p = p->next);
    return p;
}


