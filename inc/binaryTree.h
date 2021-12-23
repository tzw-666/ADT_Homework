#ifndef __BTNODE_H
#define __BTNODE_H

#include "stdlib.h"
#include "stdio.h"

typedef struct bTNode {
    int data;
    struct bTNode *left, *right;
} BTNode;

/*二叉树前序遍历（先根遍历）*/
int BTPreOrder(BTNode *root, int a[]);

/*二叉树中序遍历（中根遍历）*/
int BTInOrder(BTNode *root, int a[]);

/*二叉树后序遍历（后根遍历）*/
int BTPostOrder(BTNode *root, int a[]);

/*二叉树层序遍历*/
int BTLeapOrder(BTNode *root, int a[]);

/*算二叉树的结点数*/
int BTCountNode (BTNode *root);

/*算二叉树的叶子结点数*/
int BTCountLeaf (BTNode *root);

/*算二叉树的双分支结点个数*/
int BTCountBranchNode (BTNode *root);

/*从前序遍历和中序遍历还原一棵树*/
BTNode *BTEstablish (int *preOrder, int *inOrder, int len);

/*二叉查找树创建*/
BTNode* BSTCreate (int a[], int num);

/*二叉树删除*/
void BTDestruct (BTNode *root);

/*二叉查找树插入结点*/
BTNode* BSTInsert (BTNode *root, int a[], int num);

/*得到一颗镜像树*/
BTNode *BTImage (BTNode *root);
#endif
