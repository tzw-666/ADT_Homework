#ifndef __BTNODE_H
#define __BTNODE_H

#include "stdlib.h"
#include "stdio.h"

typedef struct bTNode {
    int data;
    struct bTNode *left, *right;
} BTNode;

int BTPrePrint(BTNode *root, int a[]);
int BTInPrint(BTNode *root, int a[]);
int BTPostPrint(BTNode *root, int a[]);
int BTLeapPrint(BTNode *root, int a[]);

int BTCountNode (BTNode *root);
int BTCountLeaf (BTNode *root);
int BTCountBranchNode (BTNode *root);
BTNode *BTEstablish (int *preOrder, int *inOrder, int len);

BTNode* BSTCreate (int a[], int num);
BTNode *BTDestruct (BTNode *root);
BTNode* BSTInsert (BTNode *root, int a[], int num);
BTNode *BTImage (BTNode *root);
#endif
