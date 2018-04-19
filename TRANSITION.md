# From Spanish to English

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
