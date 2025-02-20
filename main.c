#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>
#include "print.h"

int main() {
  char* hello = "hello";
  char coma = ',';
  char world[] = { 119, 111, 114, 108, 100 };

  print(hello, coma, world);
}
