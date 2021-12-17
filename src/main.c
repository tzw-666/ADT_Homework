#include "main.h"
#include "time.h"

int main(void) {
    int a[10];
    HashTable *hash;
    srand(time(NULL));
    for (int i = 0; i < 10; ++i) {
        a[i] = rand() % 1000;
    }
    hash = hashTableCreate(a, 10, 17);
    for (int i = 0; i < 10; ++i) {
        Node *node = hashTableSearch(hash, a[i]);
        printf("%d:%d\n", a[i], node->data);
    }
    return 0;
}
