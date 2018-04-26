# From Spanish to English

## Limits

The Spanish lib has a limit of 50 elements, this implementation is limitless.

## Changes

This version is immutable, what means that the functions are pure (never change the value of the stack, just return a new one).

## Including

```plain
#include "pila.h" -> #include "Stack.h"
```

## Type

```plain
Pila pila; -> Stack stack;
Pila pila1, pila2, pila3; -> Stack stack1, stack2, stack3;
```

## Functions

```plain
inicpila(&pila) -> stackCreate()
apilar(&pila, dato) -> stackAdd(stack, value)
desapilar(&pila) -> stackRemove(stack)
tope(&pila) -> stackTop(stack)
pilavacia(&pila) -> stack.empty
leer (&pila) -> stackScan(stack)
mostrar(&pila) -> stackPrint(stack)
```
