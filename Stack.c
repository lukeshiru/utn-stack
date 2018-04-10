#include "Stack.h"

Stack stackCreate(const int limit) {
	Stack stack;

	stack.empty = true;
	stack.length = 0;
	stack.limit = limit <= 0 ? 1 : limit;
	stack.values = calloc(limit, sizeof(int));

	return stack;
}

Stack stackAdd(Stack stack, const int value) {
	stack.values[stack.length] = value;
	stack.length = stack.length + 1;
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
	bool success = true;

	if (stack.length < stack.limit) {
		fputs("Input an integer value: ", stdout);
		fflush(stdin);
		scanf(" %d", &value);
		stack = stackAdd(stack, value);
		success = true;
	}

	return stack;
}

Stack stackLoad(Stack stack) {
	char answer = 'y';
	while ((answer == 'y' || answer == '\n') && stack.length < stack.limit) {
		stack = stackScan(stack);
		fputs("Continue? [y/n] ", stdout);
		fseek(stdin, 0, SEEK_END);
		answer = getchar();
	}
	if (stack.length >= stack.limit) {
		fputs("Error: Stack is full.", stdout);
	}

	return stack;
}

void stackPrint(const Stack stack) {
	int index = 0;
	if (stack.empty) {
		puts("\nStack is empty.\n");
	} else {
		printf("\nStack elements (%d/%d):\n| ", stack.length, stack.limit);
		while (index < stack.length) {
			printf("%d | ", stack.values[index++]);
		}
		puts("\n");
	}
}
