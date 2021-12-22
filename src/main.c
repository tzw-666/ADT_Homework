#include "main.h"
#include "time.h"

int main(void) {
    int a[10], b[10], c[10];
    int ac, bc, cc;
    int num = sizeof(a) / sizeof(*a);
    HashTable *hash;
    srand(time(NULL));
    for (int i = 0; i < num ; ++i) {
        a[i] = rand() % 1000;
    }
    BTNode *tree = BSTCreate(a, num);
    BTNode *tree1;
    BTInPrint(tree, a);
    for (int i = 0; i < num; ++i) {
        printf("%5d", a[i]);
    }
    printf("\n");
    BTPrePrint(tree, b);
    BTInPrint(tree, c);
    tree1 = BTEstablish(b, c, num);
    BTInPrint(tree1, a);
    printf("\n");
    for (int i = 0; i < num; ++i) {
        printf("%5d", a[i]);
    }
    printf("\n");
    printf("BranchNode:%d\n", BTCountBranchNode(tree));
    printf("Leaf:%d\n", BTCountLeaf(tree));
    printf("Node:%d\n", BTCountNode(tree));
    tree = BTImage(tree);
    BTDestruct(tree);
    return 0;
}
