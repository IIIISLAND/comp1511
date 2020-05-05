// Implementation of a stack

// Lecture demo by Marc Chee (cs1511@cse.unsw.edu.au)
// April 2020

#include "stack.h"
#include <stdlib.h>
#include <stdio.h>

#define MAX_STACK 100

struct stackInternals {
    int stack[MAX_STACK];
    int top;
};

// Create a new stack and return it
Stack stackCreate() {
    struct stackInternals *newStack = malloc(sizeof(struct stackInternals));
    newStack->top = 0;
    return newStack;
}

// Add a new item to the top of the stack
void stackPush(Stack s, int item) {
    if (s->top >= MAX_STACK) {
        // array holding the stack items is full
        printf("Maximum stack size reached, cannot push.\n");
        exit(1);
    }
    s->stack[s->top] = item;
    s->top++;
}

// return current top element of the stack then remove it
int stackPop(Stack s) {
    if (s->top <= 0) {
        // no elements in stack
        printf("There are no elements to pop from the stack.\n");
        exit(1);
    }
    s->top--;
    return s->stack[s->top];
}





