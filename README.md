# UTN Stack

Integer stack functions to practice stack in UTN (Universidad Tecnológica Nacional). For details about the transition from Spanish to English, checkout the file [TRANSITION.md](./TRANSITION.md).

## Download

To download you can clone the repository, or you can [click here](https://github.com/lukeshiru/utn-stack/archive/immutable.zip) for the zip version.

## Type

**Stack** is a stack of integer without a limit.

```c
Stack stackVariableName; // This creates the new Stack.
```

## Properties

### stack.empty

Return false if it has elements and true if is empty.

```c
Stack stack = stackCreate(); // Initialize stack variable of type Stack.
bool isEmpty = false;
isEmpty = stack.empty; // isEmpty receives true because stack has no values.
```

### stack.length

Current length of the array.

```c
Stack stack = stackCreate(); // Initialize stack variable of type Stack.
int stackLength = 0;
stackLength = stack.length; // stackLength receives 0 because default length.
```

## Functions

### stackCreate()

Initialize a Stack type variable.

```c
Stack stack = stackCreate(); // Initialize stack variable of type Stack.
```

### stackAdd(stack, value)

Add a value to the stack.

```c
Stack stack = stackCreate(); // Initialize stack variable of type Stack.
stack = stackAdd(stack, 10); // The value 10 is added to the stack.
```

### stackRemove(stack)

Remove an element from the top of the stack.

```c
Stack stack = stackCreate(); // Initialize stack variable of type Stack.
int removedValue = 0;
stack = stackAdd(stack, 10); // The value 10 is added to the stack.
stack = stackRemove(stack); // The top is removed and returned to removedValue.
```

### stackTop(stack)

Return the current top of the stack.

```c
Stack stack = stackCreate(); // Initialize stack variable of type Stack.
int top = 0;
stack = stackAdd(stack, 10); // The value 10 is added to the stack.
top = stackTop(stack); // The current top (10) is assigned to top.
```

### stackScan(stack)

Scan for stack (input values).

```c
Stack stack = stackCreate(); // Initialize stack variable of type Stack.
stack = stackScan(stack); // Displays an input message and stores the given value with stackAdd.
```

### stackLoad(stack)

Scan for stack (input values) with a loop asking to continue or not.

```c
Stack stack = stackCreate(); // Initialize stack variable of type Stack.
stack = stackLoad(stack); // Loops stackScan until user exit.
```

### stackPrint(stack)

Print all the values of the stack, and a message if is empty.

```c
Stack stack = stackCreate(); // Initialize stack variable of type Stack.
stack = stackScan(stack); // Displays an input message and stores the given value with stackAdd.
stackPrint(stack); // Display all the values of the stack.
```
