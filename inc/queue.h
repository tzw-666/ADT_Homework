#ifndef __QUEUE_H
#define __QUEUE_H

#include "stdlib.h"
#include "stdio.h"

typedef struct Queue {
    int *data;
    int len;
    int front, rear;
} Queue;

Queue* queueCreate (int len);
void queueDestruct (Queue **queue);
int queueSize (Queue *queue);
void queueIn (Queue *queue, int data);
int queueOut (Queue *queue);
void josephusProblem (int len, int subLen);


#endif
