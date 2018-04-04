#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#ifndef STACK_H  // Include guard
#define STACK_H

/* Settings *******************************************************************/

#define STACK_LIMIT 50       // Upper length limit of a stack
#define STACK_ITEM_SIZE 1    // Size of every stack item (for increment/decrement)
#define STACK_INITIAL_TOP 0  // Starting point of the stack

/* Types **********************************************************************/

/**
 * @brief Base Stack structure and type definition.
 */
typedef struct {
	int* values;
	int top;
} Stack;

/* Functions ******************************************************************/

/**
 * @brief Stack initialization.
 *
 * @param stackPointer Stack to be initialized.
 */
void stackInit(Stack* stackPointer);

/**
 * @brief Add element to stack.
 *
 * @param stackPointer Target Stack.
 * @param value Value to be added.
 */
void stackAdd(Stack* stackPointer, const int value);

/**
 * @brief Remove element from stack and return it.
 *
 * @param stackPointer Target Stack.
 * @return int Removed value.
 */
int stackRemove(Stack* stackPointer);

/**
 * @brief Get the top of the stack.
 *
 * @param stack Target Stack.
 * @return int Value in top of the stack.
 */
int stackTop(const Stack stack);

/**
 * @brief Check if stack is empty.
 *
 * @param stack Stack to be checked.
 * @return true Stack is empty.
 * @return false Stack has items.
 */
bool stackIsEmpty(const Stack stack);

/**
 * @brief Prints a message and scans a value to the stack.
 *
 * @param stackPointer Target Stack.
 * @return true Stack has space.
 * @return false Stack is full.
 */
bool stackScan(Stack* stackPointer);

/**
 * @brief Loops stackScan until exit
 *
 * @param stackPointer Target Stack.
 */
void stackScanLoop(Stack* stackPointer);

/**
 * @brief Prints the content of the stack
 *
 * @param stack Target Stack.
 */
void stackPrint(const Stack stack);

#endif  // STACK_H
