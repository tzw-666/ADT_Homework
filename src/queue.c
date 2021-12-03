//
// Created by tzw on 2021/12/3.
//

#include "queue.h"


Queue* queueCreate (int len) {
    Queue *queue = (Queue*)malloc(sizeof(Queue));
    queue->data = (int *)malloc(sizeof(int) * (len));
    queue->data = queue->front = 0;
    queue->len = len;
    return queue;
}

int queueSize (Queue *queue) {
    return (queue->rear - queue->front + queue->len) % queue->len;
}

int queueIn (Queue *queue, int data) {
    int out = 0;
    if (queue != NULL && (queue->rear + 1) % queue->len != queue->front) {
        queue->rear = (queue->rear + 1) % queue->len;
        queue->data[queue->rear] = data;
        out = 1;
    }
    return out;
}

int queueOut (Queue *queue) {
    int out = 0;
    if (queue != NULL && queue->rear != queue->front) {
        queue->front = (queue->front + 1) % queue->len;
        out = 1;
    }
    return out;
}

void josephusProblem (int len, int subLen) {
    int *queue = (int *)malloc(sizeof(int) * len + 1) ;
    for (int i = 1; i <= len; ++i) {
        queue[i] = i;
    }
    for (int i = 0; i < 2) {

    }
}


