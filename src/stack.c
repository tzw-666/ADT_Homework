#include "stack.h"


/*创建一个栈*/
Stack* stackCreate (int len) {
    Stack *stack = malloc(sizeof(Stack));
    stack->top = -1;
    stack->data = (int *)malloc(sizeof(int) * len);
    return stack;
}


/*出栈操作*/
void stackPop (Stack *stack) {
    if (stack != NULL && stack->top >= 0) {
        --stack->top;
    }
}


/*入栈操作*/
void stackPush (Stack *stack, int data) {
    if (stack != NULL) {
        stack->data[++stack->top] = data;
    }
}


/*表达式符号匹配*/
int signMatch(char *express, int len) {
    static char stdSign[6] = {'(', '[', '{', ')', ']', '}'};
    static char stack[64] = {0};
    int top = -1;
    for (int i = 0, match; i < len && top >= -1; ++i) {
        for (match = 0; express[i] != stdSign[match] && match < 6; ++match);
        if (match < 3) {
            stack[++top] = express[i];
        } else if (match < 6) {
            if (stack[top] != stdSign[match - 3]) {
                top = -1;
            }
            --top;
        }
    }
    return top == -1;
}
