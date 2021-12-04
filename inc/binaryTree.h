#ifndef __BTNODE_H
#define __BTNODE_H

#include "stdlib.h"

#include "stdio.h"

typedef struct bTNode {
    int data;
    struct bTNode *left, *right;
} BTNode;

void BTPrePrint(BTNode *root);
void BTInPrint(BTNode *root);
void BTPostPrint(BTNode *root);
BTNode* BSTCreate (int a[], int num);
BTNode* BSTInsert (BTNode *root, int a[], int num);

#endif
