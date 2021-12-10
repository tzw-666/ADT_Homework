#include "queue.h"

/*创建队列*/
Queue* queueCreate (int len) {
    Queue *queue = (Queue*)malloc(sizeof(Queue));
    queue->data = (int *)malloc(sizeof(int) * (len));
    queue->data = queue->front = 0;
    queue->len = len;
    return queue;
}

/*队列的长度*/
int queueSize (Queue *queue) {
    return (queue->rear - queue->front + queue->len) % queue->len;
}

/*入队操作*/
void queueIn (Queue *queue, int data) {
    if (queue != NULL && (queue->rear + 1) % queue->len != queue->front) {
        queue->rear = (queue->rear + 1) % queue->len;
        queue->data[queue->rear] = data;
    }
}

/*出队操作*/
int queueOut (Queue *queue) {
    if (queue != NULL && queue->rear != queue->front) {
        queue->front = (queue->front + 1) % queue->len;
    }
    return queue->data[queue->front];
}

/*约瑟夫环*/
void josephusProblem (int len, int subLen) {
    int front = 0, rear = len;
    int out;
    ++len;
    int *queue = (int *)malloc(sizeof(int) * len);
    for (int i = 1; i < len; ++i) {
        queue[i] = i;
    }
    while (front != rear) {
        for (int i = 0; i < subLen - 1;) {
            front = (front + 1) % len;
            out = queue[front];
            rear = (rear + 1) % len;
            queue[rear] = out;
        }
        front = (front + 1) % len;
        printf("%5d ", queue[front]);
    }
}
