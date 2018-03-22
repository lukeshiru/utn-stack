#include <stdlib.h>
#include <stdio.h>

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
