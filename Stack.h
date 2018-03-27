#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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
void stackAdd(Stack* stackPointer, const int value);

// Remove element from stack and return it
int stackRemove(Stack* stackPointer);

// Get the top of the stack
int stackTop(const Stack stack);

// Check if stack is empty
bool stackIsEmpty(const Stack stack);

// Prints a message and scans a value to the stack
bool stackScan(Stack* stackPointer);

// Loops stackScan until exit
void stackScanLoop(Stack* stackPointer);

// Prints the content of the stack
void stackPrint(const Stack stack);

#endif // STACK_DEFINED
