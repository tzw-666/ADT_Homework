#include "main.h"
#include "time.h"

int main(void) {
    int a[30], b[30], c[10];
    int ac, bc, cc;
    int num = sizeof(a) / sizeof(*a);
    srand(time(NULL));
    for (int i = 0; i < num ; ++i) {
        a[i] = rand() % 1000;
        b[i] = rand() % 100;
    }
    BTNode *root = BSTCreate(a, num);
    BTDestruct(&root);
    printf("%d", (int)root);
    return 0;
}
