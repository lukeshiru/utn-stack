#include <stdio.h>
#include <stdlib.h>

// Include guard
#ifndef STACK_DEFINED
#define STACK_DEFINED

// Upper length limit of a stack
#define STACK_LIMIT 50

// Size of every stack item (for increment/decrement)
#define STACK_ITEM_SIZE 1

// Starting point of the stack
#define STACK_INITIAL_TOP 0

// Stack struct
typedef struct Stack {
	int* values;
	int top;
} Stack;

// Stack initialization
void stackInit(Stack* stackPointer);

// Add element to stack
void stackAdd(Stack* stackPointer, int value);

// Remove element from stack and return it
int stackRemove(Stack* stackPointer);

// Get the top of the stack
int stackTop(Stack stack);

// Check if stack is empty
int stackIsEmpty(Stack stack);

// Prints a message and scans a value to the stack
void stackScan(Stack* stackPointer);

// Prints the content of the stack
void stackPrint(Stack stack);

#endif // STACK_DEFINED