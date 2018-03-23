#ifndef INCLUDED_STACK_H
#define INCLUDED_STACK_H

#include <stdlib.h>
#include <stdio.h>

#define STACK_LIMIT 50
#define STACK_ITEM_SIZE 1
#define STACK_INITIAL_TOP 0

#define Stack struct _Stack
#define StackPointer struct _Stack*

struct _Stack {
	int* values;
	int top;
};

void stackInit(StackPointer stackPointer);
void stackAdd(StackPointer stackPointer, int value);
int stackRemove(StackPointer stackPointer);
int stackTop(Stack stack);
int stackIsEmpty(Stack stack);
void stackScan(StackPointer stackPointer);
void stackPrint(Stack stack);

#endif // INCLUDED_STACK_H