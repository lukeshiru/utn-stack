#include "Stack.h"

void stackInit(Stack* stackPointer) {
	stackPointer->top = STACK_INITIAL_TOP;
	stackPointer->values = calloc(stackPointer->top, sizeof(int));
}

void stackAdd(Stack* stackPointer, const int value) {
	const int newTop = stackPointer->top + STACK_ITEM_SIZE;

	stackPointer->values = realloc(stackPointer->values, sizeof(int) * newTop);
	stackPointer->values[stackPointer->top] = value;
	stackPointer->top = newTop;
}

int stackRemove(Stack* stackPointer) {
	int value = stackPointer->values[stackPointer->top - STACK_ITEM_SIZE];
	stackPointer->top -= STACK_ITEM_SIZE;
	stackPointer->values = realloc(stackPointer->values, sizeof(int) * stackPointer->top);

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

void stackScanLoop(Stack* stackPointer) {
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
}

void stackPrint(const Stack stack) {
	int index = STACK_INITIAL_TOP;
	if (stackIsEmpty(stack)) {
		puts("\nStack is empty.\n");
	} else {
		printf("\nStack elements (%d):\n| ", stack.top);
		while (index < stack.top) {
			printf("%d | ", stack.values[index++]);
		}
		puts("\n");
	}
}
