#ifndef __LINKLIST_H
#define __LINKLIST_H

#include "stdio.h"
#include "stdlib.h"

typedef struct node {
    int data;
    struct node* next;
} Node;

/*链表创建*/
Node* linkListCreate (int n, int a[]);

/*链表插入指定位置元素*/
Node* linkListInsert (Node *head, int key, int pos);

/*连表删除*/
void linkListDestruct (Node *head);

/*链表删除指定值元素*/
Node *linkListDeleteKeys (Node *head, int key);

/*链表倒向输出*/
void linkListPrePrint (Node *head);

/*链表输出*/
void linkListPrint (Node *head) ;

/*链表逆置*/
Node* linkListInverse(Node *head);

/*链表去重*/
void linkListRemoveRepeat (Node *head);

/*链表求交点*/
Node* linkListSearchCross (Node *head1, Node *head2);

/*递归求链表结点个数*/
int linkListLength (Node *head);

/*合并有序链表并去重*/
Node* linkListAnd (Node *head1, Node *head2);

/*递归求最大值*/
int linkListSearchMax (Node *head);

/*递归求指定值结点地址*/
Node* linkListSearchNode (Node* head, int key);

/*递归逆置*/
Node* linkListReverse (Node *head);


#endif
