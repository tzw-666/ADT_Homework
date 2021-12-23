#ifndef __BTNODE_H
#define __BTNODE_H

#include "stdlib.h"
#include "stdio.h"

typedef struct bTNode {
    int data;
    struct bTNode *left, *right;
} BTNode;

int BTPreOrder(BTNode *root, int a[]);
int BTInOrder(BTNode *root, int a[]);
int BTPostOrder(BTNode *root, int a[]);
int BTLeapOrder(BTNode *root, int a[]);

int BTCountNode (BTNode *root);
int BTCountLeaf (BTNode *root);
int BTCountBranchNode (BTNode *root);
BTNode *BTEstablish (int *preOrder, int *inOrder, int len);

BTNode* BSTCreate (int a[], int num);
void BTDestruct (BTNode **BT_root);
BTNode* BSTInsert (BTNode *root, int a[], int num);
BTNode *BTImage (BTNode *root);
#endif
