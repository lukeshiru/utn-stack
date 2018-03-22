#include "Stack.h"

void stackInit(StackPointer stackPointer) {
	int* values;
	values = (int*)malloc(STACK_LIMIT * sizeof(int));
	stackPointer->values = values;
	stackPointer->top = STACK_INITIAL_TOP;
}

void stackAdd(StackPointer stackPointer, int value) {
	int index = (*stackPointer).top;
	(*stackPointer).values[index] = value;
	(*stackPointer).top = (*stackPointer).top + STACK_ITEM_SIZE;
}

int stackRemove(StackPointer stackPointer) {
	int removedValue = stackPointer->values[stackPointer->top - STACK_ITEM_SIZE];
	stackPointer->top -= STACK_ITEM_SIZE;
	return removedValue;
}

int stackTop(Stack stack) {
	return stack.values[stack.top - STACK_ITEM_SIZE];
}

int stackIsEmpty(Stack stack) {
	return (stack.top == STACK_INITIAL_TOP);
}

void stackScan(StackPointer stackPointer) {
	int value = 0;
	if (stackPointer->top < STACK_LIMIT) {
		printf("Input an integer value: ");
		scanf(" %d", &value);
		stackAdd(stackPointer, value);
	} else {
		printf("Error: The Stack is full, limit is set to %d.", STACK_LIMIT);
	}
}

void stackPrint(Stack stack) {
	int index = STACK_INITIAL_TOP;
	if (stackIsEmpty(stack)) {
		printf("\n\nStack is empty.\n\n");
	} else {
		printf("\n\nStack elements (%d/%d):\n\n| ", stack.top, STACK_LIMIT);
		while (index < stack.top) {
			printf("%d | ", stack.values[index++]);
		}
		printf("\n\n");
	}
}
