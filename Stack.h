#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#ifndef STACK_H  // Include guard
#define STACK_H

/* Types **********************************************************************/

/**
 * @brief Base Stack structure and type definition.
 */
typedef struct {
	bool empty;
	int length;
	int limit;
	int* values;
} Stack;

/* Functions ******************************************************************/

/**
 * @brief Stack creation.
 *
 * @param limit Limit of the stack.
 * @return Stack New stack.
 */
Stack stackCreate(const int limit);

/**
 * @brief Add element to stack.
 *
 * @param stack Target Stack.
 * @param value Value to be added.
 * @return Stack Stack with new value.
 */
Stack stackAdd(Stack stack, const int value);

/**
 * @brief Remove element from stack and return it.
 *
 * @param stack Target Stack.
 * @return Stack Stack with one less value.
 */
Stack stackRemove(Stack stack);

/**
 * @brief Get the top of the stack.
 *
 * @param stack Target Stack.
 * @return int Value in top of the stack.
 */
int stackTop(const Stack stack);

/**
 * @brief Prints a message and scans a value to the stack.
 *
 * @param Stack Target stack.
 * @return Stack Stack with new value.
 */
Stack stackScan(Stack stack);

/**
 * @brief Loops stackScan until exit.
 *
 * @param stackPointer Target Stack.
 * @return Stack* Target Stack.
 */
Stack stackLoad(Stack stack);

/**
 * @brief Prints the content of the stack
 *
 * @param stack Target Stack.
 */
void stackPrint(const Stack stack);

#endif  // STACK_H
