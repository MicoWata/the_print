# The Print

A print function that prints up to 32 arguments of any primitive type, all in a single tiny C header.

## Features

- Type-safe printing using C11's `_Generic` feature
- Support for up to 32 arguments
- Automatic format string selection based on type
- Supports common C data types:
  - Integers (short, int, long, etc.)
  - Floating point (float, double, long double)
  - Characters and strings
  - Booleans
  - Pointers
  - Size types
  - And many more, see examples directory

## Usage

```c
#include "print.h"

int main() {
  char* hello = "hello";
  char coma = ',';
  char world[] = { 119, 111, 114, 108, 100 };

  print(hello, coma, world);
  // hello, world
}

```

## Examples

Check the `examples/` directory for more usage examples:
- Exotic primitives (`examples/types.md`)
- Arrays (`examples/arrays.md`)
- Structures (`examples/struct.md`)

