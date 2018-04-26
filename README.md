# UTN Stack

Integer stack functions to practice stack in UTN (Universidad Tecnológica Nacional). For details about the transition from Spanish to English, checkout the file [TRANSITION.md](./TRANSITION.md).

## Download

To download you can clone the repository, or you can [click here](https://github.com/lukeshiru/utn-stack/archive/master.zip) for the zip version.

## Type

**Stack** is a stack of integer with unlimited size.

```c
Stack stackVariableName; // This creates the new Stack.
```

## Functions

### stackInit(&stackPointer)

Initialize a Stack type variable.

```c
Stack stack;
stackInit(&stack); // Initialize stack variable of type Stack.
```

### stackAdd(&stackPointer, value)

Add a value to the stack.

```c
Stack stack;
stackInit(&stack); // Initialize stack variable of type Stack.
stackAdd(&stack, 10); // The value 10 is added to the stack.
```

### stackRemove(&stackPointer)

Remove an element from the top of the stack.

```c
Stack stack;
int removedValue = 0;
stackInit(&stack); // Initialize stack variable of type Stack.
stackAdd(&stack, 10); // The value 10 is added to the stack.
removedValue = stackRemove(&stack); // The top is removed and returned to removedValue.
```

### stackTop(stack)

Return the current top of the stack.

```c
Stack stack;
int top = 0;
stackInit(&stack); // Initialize stack variable of type Stack.
stackAdd(&stack, 10); // The value 10 is added to the stack.
top = stackTop(stack); // The current top (10) is assigned to top.
```

### stackIsEmpty(stack)

Return false if is full and true if is empty.

```c
Stack stack;
bool isEmpty = false;
stackInit(&stack); // Initialize stack variable of type Stack.
isEmpty = stackIsEmpty(stack); // isEmpty receives 1 because stack has no values.
```

### stackScan(&stackPointer)

Scan for stack (input values).

```c
Stack stack;
stackInit(&stack); // Initialize stack variable of type Stack.
stackScan(&stack); // Displays an input message and stores the given value with stackAdd.
```

### stackScanLoop(&stackPointer)

Scan for stack (input values) with a loop asking to continue or not.

```c
Stack stack;
stackInit(&stack); // Initialize stack variable of type Stack.
stackScanLoop(&stack); // Loops stackScan until user exit.
```

### stackPrint(stack)

Print all the values of the stack, and a message if is empty.

```c
Stack stack;
stackInit(&stack); // Initialize stack variable of type Stack.
stackScan(&stack); // Displays an input message and stores the given value with stackAdd.
stackPrint(stack); // Display all the values of the stack.
```

## Immutable version

This has an immutable implementation. Check the `immutable` branch!
