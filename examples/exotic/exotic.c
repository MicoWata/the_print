#include <stdbool.h>
#include <stddef.h>
#include <limits.h>
#include <stdint.h>
#include <limits.h>
#include "../../print.h"

/*
Different types demonstration:
Booleans - valid: 1  empty: 0 
Size_t max: 18446744073709551615 
Ptrdiff_t max: 9223372036854775807 
Unsigned char: � 
Unsigned long long: 18446744073709551615 
Null pointer: (nil) 
Void pointer: 0x7fff4db7bb10 
Double pointer: (nil) 
Long double: 123.457 
Mixed types: 1  18446744073709551615  (nil)  123.457 
*/

int main() {
    // Boolean values
    bool is_valid = true;
    bool is_empty = false;
    
    // Size types
    size_t buffer_size = SIZE_MAX;
    ptrdiff_t ptr_diff = PTRDIFF_MAX;
    
    // Unsigned types
    unsigned char byte = 255;
    unsigned long long big_num = ULLONG_MAX;
    
    // Pointer types
    int* ptr = NULL;
    void* generic_ptr = &big_num;
    char** str_ptr;
    
    // Long double
    long double precise = 123.456789L;
    
    print("Different types demonstration:\n");
    
    // Booleans
    print("Booleans - valid: ", is_valid, " empty: ", is_empty, "\n");
    
    // Size types
    print("Size_t max: ", buffer_size, "\n");
    print("Ptrdiff_t max: ", ptr_diff, "\n");
    
    // Unsigned types
    print("Unsigned char: ", byte, "\n");
    print("Unsigned long long: ", big_num, "\n");
    
    // Pointers
    print("Null pointer: ", ptr, "\n");
    print("Void pointer: ", generic_ptr, "\n");
    print("Double pointer: ", str_ptr, "\n");
    
    // Long double
    print("Long double: ", precise, "\n");
    
    // Mixed types in one print
    print("Mixed types: ", 
          is_valid, " ", 
          buffer_size, " ", 
          ptr, " ", 
          precise, "\n");
    
    return 0;
}
