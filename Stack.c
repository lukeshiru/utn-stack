#include "Stack.h"

Stack* stackInit(Stack* stackPointer) {
	stackPointer->top = STACK_INITIAL_TOP;
	stackPointer->values = calloc(stackPointer->top, sizeof(int));

	return stackPointer;
}

Stack* stackAdd(Stack* stackPointer, const int value) {
	const int newTop = (*stackPointer).top + STACK_ITEM_SIZE;

	(*stackPointer).values = realloc((*stackPointer).values, sizeof(int) * newTop);
	(*stackPointer).values[(*stackPointer).top] = value;
	(*stackPointer).top = newTop;

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

void stackScan(Stack* stackPointer) {
	int value = 0;

	fputs("Input an integer value: ", stdout);
	fflush(stdin);
	scanf(" %d", &value);
	stackAdd(stackPointer, value);
}

Stack* stackScanLoop(Stack* stackPointer) {
	char answer = 'y';
	bool success = true;

	while (answer == 'y' || answer == '\n') {
		stackScan(stackPointer);
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
		printf("\n\nStack elements (%d):\n| ", stack.top);
		while (index < stack.top) {
			printf("%d | ", stack.values[index++]);
		}
		puts("\n");
	}
}
