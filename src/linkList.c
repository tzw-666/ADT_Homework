#include "linkList.h"

/*链表创建*/
Node* linkListCreate (int n, int a[]) {
    Node *head = NULL, *p, *tail;
    for (int i = 0; i < n; ++i) {
        p = (Node*)malloc(sizeof(Node));
        p->data = a[i];
        p->next = NULL;
        if (head == NULL) {
            tail = head = p;
        } else {
            tail = tail->next = p;
        }
    }
    return head;
}

Node* linkListPreCreate (int a[], int n) {
    Node *head = NULL, *p;
    for (int i = n; i-- > 0;) {
        p = (Node*)malloc(sizeof(Node));
        p->data = a[i];
        p->next = head;
        head = p;
    }
}

/*链表插入指定位置元素*/
Node* linkListInsert(Node *head, int key, int pos) {
    Node *curr = head, *prev, *p;
    int i = 0;
    for (; i < pos && curr != NULL; ++i, prev = curr, curr = curr->next);
    if (i == pos) {
        p = (Node *) malloc(sizeof(Node));
        p->data = key;
        p->next = NULL;
        if (curr == head) {
            p->next = head;
            head = p;
        } else if (i < pos) {
            p->next = curr;
            prev->next = p;
        }
    }
    return head;
}

/*链表删除指定值元素*/
Node *linkListDeleteKeys (Node *head, int key) {
    Node *curr, *prev;
    for (curr = head; curr != NULL; prev = curr, curr = curr->next) {
        if (curr->data == key) {
            if (curr == head) {
                head = head->next;
                free(curr);
                curr = head;
            } else {
                prev->next = curr->next;
                free(curr);
                curr = prev->next;
            }
        }
    }
    return head;
}

/*链表倒向输出*/
void linkListPrePrint (Node *head) {
    for (Node *tail = NULL, *p; tail != head; tail = p) {
        for (p = head; p != tail; p = p->next);
        printf("%5d", p->data);
    }
}

/*链表输出*/
void linkListPrint (Node *head) {
    for (Node *p = head; p != NULL; p = p->next) {
        printf("%5d", p->data);
    }
}

/*链表逆置*/
Node* linkListInverse(Node *head) {
    Node *h1, *h2, *p;
    for (h1 = h2 = head, p = NULL; h2 != NULL;) {
        h2 = h2->next;
        h1->next = p;
        p = h1;
        h1 = h2;
    }
    return p;
}

/*链表去重*/
void linkListRemoveRepeat (Node *head) {
    static int temp[20] = {0};
    int n = 0;
    int start, end, mid;
    for (Node *p = head, *prev; p != NULL; prev = p, p = p->next) {
        /*查找插入位置*/
        for (start = 0, end = n - 1, mid = (n - 1) / 2; temp[mid] != p->data && start < end; mid = (start + end) / 2) {
            if (p->data > temp[mid]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        /*去重*/
        if (temp[mid] != p->data) {
            int i;
            for (i = n; i > mid; --i) {
                temp[i] = temp[i - 1];
            }
            temp[mid] = p->data;
        } else {
            prev->next = p->next;
            free(p);
            p = prev;
        }
    }
}

/*链表求交点*/
Node* linkListSearchCross (Node *head1, Node *head2) {
    static Node *head[2];
    static Node *stack[2][256];
    int top[2] = {-1, -1};
    head[0] = head1, head[1] = head2;
    for (int i = 0, stackTop; i < 2; ++i) {
        stackTop = -1;
        for (Node *p = head1; p != NULL; p = p->next) {
            stack[i][++top[i]] = p;
        }
        top[i] = stackTop;
    }
    while (stack[0][top[0]--]->data == stack[1][top[1]--]->data);
    return stack[0][top[0] + 1];
}

/*递归求链表结点个数*/
int linkListLength (Node *head) {
    if (head == NULL) {
        return 0;
    } else {
        return 1 + linkListLength(head->next);
    }
}

/*合并有序链表并去重*/
Node* linkListAnd (Node *head1, Node *head2) {
    Node *p1 = head1, *p2 = head2;
    Node *newArr[2], *new;
    Node *head = NULL, *curr, *node;
    for (int i = 0; p1 || p2; ) {
        for (newArr[0] = p1; p1 != NULL && p1->data == newArr[0]->data; p1 = p1->next);
        for (newArr[1] = p2; p2 != NULL && p2->data == newArr[1]->data; p2 = p2->next);
        if (!newArr[0] || !newArr[1] || newArr[0]->data == newArr[1]->data) {
            node = (Node*)malloc(sizeof(Node));
            node->next = NULL;
            i = newArr[0] ? 0 : 1;
            node->data = newArr[i]->data;
        } else {
            node = (Node*)malloc(sizeof(Node));
            node->next = (Node*)malloc(sizeof(Node));
            node->next->next = NULL;
            i = newArr[0] < newArr[1] ? 0 : 1;
            node->data = newArr[i]->data;
            node->next->data = newArr[1 - i]->data;
        }
        head == NULL ? (head = node) : (curr->next = node);
        curr = node->next ? node->next : node;
    }
    return head;
}

/*链表递归求最大值*/
int linkListSearchMax (Node *head) {
    int max;
    if (head->next == NULL) {
        max = head->data;
    } else {
        max = linkListSearchMax(head->next);
        max = max > head->data ? max : head->data;
    }
    return max;
}

/*链表递归求指定值结点地址*/
Node* linkListSearchNode (Node* head, int key) {
    if (head == NULL || head->data == key) {
        return head;
    } else {
        return linkListSearchNode(head->next, key);
    }
}

/*链表递归逆置*/
Node* linkListReverse (Node *head) {
    static Node *newHead, *newTail;
    if (head && head->next) {
        linkListReverse(head->next);
        newTail->next = head;
        head->next = NULL;
    } else {
        newHead = newTail = head;
    }
    return newHead;
}

/*带表头结点链表的创建*/
Node* LLHCreate (int n, int a[]) {
    Node *head = NULL, *p, *tail;
    for (int i = -1; i < n; ++i) {
        p = (Node*)malloc(sizeof(Node));
        if (head) {
            p->data = a[i];
            p->next = NULL;
            tail = tail->next = p;
        } else {
            tail = head = p;
        }
    }
    return head;
}

/*带表头结点链表在指定位置插入元素*/
Node* LLHInsert (Node *head, int key, int pos) {
    Node *prev = head, *p;
    int i;
    for (i = -1; i < pos && prev->next != NULL; ++i, prev = prev->next);
    if (i == pos) {
        p = (Node*)malloc(sizeof(Node));
        p->next = prev->next;
        prev->next = p;
    }
    return head;
}


/*带表头结点链表删除指定值元素*/
Node* LLHDeleteKeys (Node *head, int key) {
    Node *prev = head, *p;
    for (prev = head; prev->next; prev = prev->next) {
        if (prev->next->data == key) {
            p = prev->next;
            prev->next = p->next;
            free(p);
        }
    }
    return head;
}