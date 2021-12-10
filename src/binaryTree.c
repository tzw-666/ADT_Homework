#include "binaryTree.h"


/*二叉查找树创建*/
BTNode *BSTCreate(int a[], int num) {
    return BSTInsert(NULL, a, num);
}


/*二叉查找树插入结点*/
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


/*前序遍历（先根遍历）输出*/
void BTPrePrint(BTNode *root) {
    if (root != NULL) {
        printf("%5d ", root->data);
        BTPrePrint(root->left);
        BTPrePrint(root->right);
    }
}


/*中序遍历（中根遍历）输出*/
void BTInPrint(BTNode *root) {
    if (root != NULL) {
        BTInPrint(root->left);
        printf("%5d ", root->data);
        BTInPrint(root->right);
    }
}

/*后序遍历（后根遍历）输出*/
void BTPostPrint(BTNode *root) {
    if (root != NULL) {
        BTPostPrint(root->left);
        BTPostPrint(root->right);
        printf("%5d ", root->data);
    }
}

/*层序遍历输出*/
void BTLeapPrint(BTNode *root) {
    BTNode *p, **queue, *pp;
    int front = 0, rear = 0;
    int qLen = 128;
    int temp;
    queue = (BTNode**)malloc(sizeof(BTNode*) * qLen);
    for (p = root; rear - front || p; front = (front + 1) % qLen) {
        printf("%5d ", queue[front]->data);
        for (pp = p->left, temp = 0; temp < 2; pp = p->right) {
            if (pp) {
                rear = (rear + 1) % qLen;
                queue[rear] = pp;
            }
        }
    }
}


/*算二叉树的结点数*/
int BTCountNode (BTNode *root) {
    return root ? BTCountNode(root->left) + BTCountNode(root->right) + 1 : 0;
}


/*算二叉树的叶子结点数*/
int BTCountLeaf (BTNode *root) {
    return root ? BTCountLeaf(root->left) + BTCountLeaf(root->right) + !root->left && !root->right + 1 : 0;
}


/*从前序遍历和中序遍历还原一棵树*/
BTNode *BTEstablish (int *preOrder, int *inOrder, int len) {
    BTNode *root = NULL;
    int leftSize = 0, rootInIndex = 0;
    int i;
    if (len > 0) {
        root = (BTNode *)malloc(sizeof(BTNode));
        root->data = preOrder[0];
        while (inOrder[rootInIndex] != root->data && rootInIndex++ < len);
        if (i == len) {
            printf("error:no match binary tree\n");
            len = rootInIndex = 0;
        }
        leftSize = rootInIndex;
        root->left = BTEstablish(preOrder + 1, inOrder, leftSize);
        root->right = BTEstablish(
                preOrder + 1 + leftSize,
                inOrder + rootInIndex + 1,
                len - 1 - leftSize);
    }
    return root;
}

/*得到一颗镜像树*/
BTNode *BTImage (BTNode *root) {
    BTNode *image;
    if (root) {
        image = (BTNode*) malloc(sizeof(BTNode));
        image->data = root->data;
        image->right = BTImage(root->left);
        image->left = BTImage(root->right);
    }
    return image;
}

