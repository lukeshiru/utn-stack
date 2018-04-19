#include "Stack.h"

Stack stackCreate() {
	Stack stack;

	stack.empty = true;
	stack.length = 0;
	stack.values = calloc(stack.length, sizeof(int));

	return stack;
}

Stack stackAdd(Stack stack, const int value) {
	const newLength = stack.length + 1;

	stack.values = realloc(stack.values, sizeof(int) * newLength);
	stack.values[stack.length] = value;
	stack.length = newLength;
	stack.empty = false;

	return stack;
}

Stack stackRemove(Stack stack) {
	stack.length -= stack.empty ? 0 : 1;
	stack.empty = (stack.length <= 0);

	return stack;
}

int stackTop(const Stack stack) {
	return stack.values[stack.length - 1];
}

Stack stackScan(Stack stack) {
	int value = 0;

	fputs("Input an integer value: ", stdout);
	fflush(stdin);
	scanf(" %d", &value);
	stack = stackAdd(stack, value);

	return stack;
}

Stack stackLoad(Stack stack) {
	char answer = 'y';

	while (answer == 'y' || answer == '\n') {
		stack = stackScan(stack);
		fputs("Continue? [y/n] ", stdout);
		fseek(stdin, 0, SEEK_END);
		answer = getchar();
	}

	return stack;
}

void stackPrint(const Stack stack) {
	int index = 0;
	if (stack.empty) {
		puts("\nStack is empty.\n");
	} else {
		printf("\nStack elements (%d):\n| ", stack.length);
		while (index < stack.length) {
			printf("%d | ", stack.values[index++]);
		}
		puts("\n");
	}
}
