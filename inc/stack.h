#ifndef __STACK_H
#define __STACK_H

#include "stdio.h"
#include "stdlib.h"

typedef struct {
    int data;
    int top;
} Stack;

Stack* stackCreate (int len);
void stackPop (Stack *stack);
void stackPush (Stack *stack, int data);
int signMatch(char *express, int len);

#endif