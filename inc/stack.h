//
// Created by tzw on 2021/12/3.
//

#ifndef __STACK_H
#define __STACK_H

#include "stdio.h"
#include "stdlib.h"

typedef struct {
    int data;
    int top;
} Stack;

Stack* stackCreate (int len);

#endif