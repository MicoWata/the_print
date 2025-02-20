#include "../../print.h"

/*
hello, world
*/

int main() {
  char* hello = "hello";
  char coma = ',';
  char world[] = { 119, 111, 114, 108, 100 };

  print(hello, coma, world);
}
