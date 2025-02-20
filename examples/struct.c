#include <stdio.h>
#include <stdbool.h>
#include "../print.h"

typedef struct {
    char* name;
    int age;
    float height;
    bool is_student;
    char gender;
} Person;

int main() {
    Person person = {
        .name = "John Doe",
        .age = 25,
        .height = 1.75,
        .is_student = true,
        .gender = 'M'
    };
    
    // Print individual fields
    printf("Person details:\n");
    print("Name: ", person.name, "\n");
    print("Age: ", person.age, "\n");
    print("Height: ", person.height, "m\n");
    print("Is Student: ", person.is_student ? "true" : "false", "\n");
    print("Gender: ", person.gender, "\n");
    
    // Print multiple fields in one line
    print("Summary: ", person.name, " is ", person.age, " years old, ", 
          person.height, "m tall\n");
    
    return 0;
}
