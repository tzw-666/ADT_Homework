#ifndef __QUEUE_H
#define __QUEUE_H

#include "stdlib.h"
#include "stdio.h"

typedef struct Queue {
    int *data;
    int len;
    int front, rear;
} Queue;

/*创建队列*/
Queue* queueCreate (int len);

/*删除队列*/
void queueDestruct (Queue *queue);

/*队列的长度*/
int queueSize (Queue *queue);

/*入队操作*/
void queueIn (Queue *queue, int data);

/*出队操作*/
int queueOut (Queue *queue);

/*约瑟夫环*/
void josephusProblem (int len, int subLen);

#endif
