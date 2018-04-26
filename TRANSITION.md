# From Spanish to English

## Limits

The Spanish lib has a limit of 50 elements, this implementation is limitless.

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
inicpila(&pila) -> stackInit(&stackPointer)
apilar(&pila, dato) -> stackAdd(&stackPointer, value)
desapilar(&pila) -> stackRemove(&stackPointer)
tope(&pila) -> stackTop(stack)
pilavacia(&pila) -> stackIsEmpty(stack)
leer (&pila) -> stackScan(&stackPointer)
mostrar(&pila) -> stackPrint(stack)
```
