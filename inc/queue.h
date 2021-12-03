//
// Created by tzw on 2021/12/3.
//

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



#endif
