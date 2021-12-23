#include "main.h"
#include "time.h"

int main(void) {
    int a[10], b[10], c[10];
    int num = sizeof(a) / sizeof(*a);
    srand(time(NULL));
    for (int i = 0; i < num ; ++i) {
        a[i] = rand() % 1000;
        b[i] = rand() % 100;
    }
    BTNode *root = BSTCreate(a, num);
    BTInOrder(root, a);
    for (int i = 0; i < num; ++i) {
        printf("%5d", a[i]);
    }
    printf("\n");
    BTDestruct(&root);
    printf("len:%d", BTInOrder(root, a));
    return 0;
}
