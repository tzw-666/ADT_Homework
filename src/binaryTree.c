#include "binaryTree.h"

BTNode *BSTCreate(int a[], int num) {
    return BSTInsert(NULL, a, num);
}

BTNode *BSTInsert(BTNode *root, int a[], int num) {
    BTNode *pa, *p, *pNew;
    for (int i = 0; i < num; ++i) {
        pNew = (BTNode *) malloc(sizeof(BTNode));
        pNew->left = pNew->right = NULL;
        pNew->data = a[i];
        if (root != NULL) {
            p = root;
            while (p != NULL) {
                pa = p;
                p = pNew->data < p->data ? p->left : p->right;
            }
            if (pNew->data < pa->data) {
                pa->left = pNew;
            } else {
                pa->right = pNew;
            }
        } else {
            root = pNew;
        }
    }
    return root;
}

void BTPrePrint(BTNode *root) {
    if (root != NULL) {
        printf("%5d ", root->data);
        BTPrePrint(root->left);
        BTPrePrint(root->right);
    }
}

void BTInPrint(BTNode *root) {
    if (root != NULL) {
        BTInPrint(root->left);
        printf("%5d ", root->data);
        BTInPrint(root->right);
    }
}

void BTPostPrint(BTNode *root) {
    if (root != NULL) {
        BTPostPrint(root->left);
        BTPostPrint(root->right);
        printf("%5d ", root->data);
    }
}

