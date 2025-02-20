#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>
#include "../print.h"

void print_array_int(const int arr[], size_t size) {
    print("[");
    for (size_t i = 0; i < size; i++) {
        print(arr[i]);
        if (i < size - 1) print(", ");
    }
    print("]\n");
}

void print_array_float(const float arr[], size_t size) {
    print("[");
    for (size_t i = 0; i < size; i++) {
        print(arr[i]);
        if (i < size - 1) print(", ");
    }
    print("]\n");
}

void print_array_bool(const bool arr[], size_t size) {
    print("[");
    for (size_t i = 0; i < size; i++) {
        print(arr[i]);
        if (i < size - 1) print(", ");
    }
    print("]\n");
}

int main() {
    // Integer array
    int numbers[] = {1, 2, 3, 4, 5};
    
    // Float array
    float decimals[] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};
    
    // Boolean array
    bool flags[] = {true, false, true, true, false};
    
    // Character array (string)
    char str[] = "Hello";
    
    // 2D array
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    print("Integer array: ");
    print_array_int(numbers, 5);
    
    print("Float array: ");
    print_array_float(decimals, 5);
    
    print("Boolean array: ");
    print_array_bool(flags, 5);
    
    print("String: ", str, "\n");
    
    // Print 2D array
    print("Matrix:\n");
    for (int i = 0; i < 3; i++) {
        print("[");
        for (int j = 0; j < 3; j++) {
            print(matrix[i][j]);
            if (j < 2) print(", ");
        }
        print("]\n");
    }
    
    return 0;
}

/*Integer array: [1, 2, 3, 4, 5]*/
/*Float array: [1.1, 2.2, 3.3, 4.4, 5.5]*/
/*Boolean array: [1, 0, 1, 1, 0]*/
/*String: Hello*/
/*Matrix:*/
/*[1, 2, 3]*/
/*[4, 5, 6]*/
/*[7, 8, 9]*/
