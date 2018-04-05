#include "Stack.h"

Stack* stackInit(Stack* stackPointer) {
	stackPointer->values = (int*)malloc(STACK_LIMIT * sizeof(int));
	stackPointer->top = STACK_INITIAL_TOP;

	return stackPointer;
}

Stack* stackAdd(Stack* stackPointer, const int value) {
	(*stackPointer).values[(*stackPointer).top] = value;
	(*stackPointer).top = (*stackPointer).top + STACK_ITEM_SIZE;

	return stackPointer;
}

int stackRemove(Stack* stackPointer) {
	int value = stackPointer->values[stackPointer->top - STACK_ITEM_SIZE];
	stackPointer->top -= STACK_ITEM_SIZE;

	return value;
}

int stackTop(const Stack stack) {
	return stack.values[stack.top - STACK_ITEM_SIZE];
}

bool stackIsEmpty(const Stack stack) {
	return (stack.top == STACK_INITIAL_TOP) ? true : false;
}

bool stackScan(Stack* stackPointer) {
	int value = 0;
	bool success = true;
	if (stackPointer->top < STACK_LIMIT) {
		fputs("Input an integer value: ", stdout);
		fflush(stdin);
		scanf(" %d", &value);
		stackAdd(stackPointer, value);
		success = true;
	} else {
		printf("\nError: The Stack is full, limit is set to %d.\n", STACK_LIMIT);
		success = false;
	}

	return success;
}

Stack* stackScanLoop(Stack* stackPointer) {
	char answer = 'y';
	bool success = true;
	while ((answer == 'y' || answer == '\n') && success) {
		success = stackScan(stackPointer);
		if (success) {
			fputs("Continue? [y/n] ", stdout);
			fseek(stdin, 0, SEEK_END);
			answer = getchar();
		}
	}

	return stackPointer;
}

void stackPrint(const Stack stack) {
	int index = STACK_INITIAL_TOP;
	if (stackIsEmpty(stack)) {
		puts("\n\nStack is empty.\n");
	} else {
		printf("\n\nStack elements (%d/%d):\n| ", stack.top, STACK_LIMIT);
		while (index < stack.top) {
			printf("%d | ", stack.values[index++]);
		}
		puts("\n");
	}
}
