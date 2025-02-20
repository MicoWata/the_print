# The Print

A type-safe, variadic print function for C that automatically detects and formats different data types.

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

## Usage

```c
#include "print.h"

int main() {
    char* hello = "Hello";
    int num = 42;
    float pi = 3.14;
    
    print(hello, ", number = ", num, ", pi = ", pi, "\n");
    return 0;
}
```

## Building

```bash
gcc -o program main.c -Wall -Wextra
```

## Examples

Check the `examples/` directory for more usage examples:
- Basic types (`examples/types.md`)
- Arrays (`examples/arrays.md`)
- Structures (`examples/struct.md`)

