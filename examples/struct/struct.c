#include <stdio.h>
#include <stdbool.h>
#include "../../print.h"

/*
Person details:
Name: Mico Wata
Age: 37 
Height: 1.55 m
Is Student: true
Gender: M 
Summary: Mico Wata is 37 years old, and 1.55 m tall
*/

typedef struct {
    char* name;
    int age;
    float height;
    bool is_student;
    char gender;
} Person;

int main() {
    Person person = {
        .name = "Mico Wata",
        .age = 37,
        .height = 1.55,
        .is_student = true,
        .gender = 'M'
    };
    
    print(
      "Person details:\n",
      "Name: ", person.name, "\n",
      "Age: ", person.age, "\n",
      "Height: ", person.height, "m\n",
      "Is Student: ", person.is_student ? "true" : "false", "\n",
      "Gender: ", person.gender, "\n");
    
    print(
      "Summary: ", 
      person.name, " is ",
      person.age, "years old, and ", 
      person.height, "m tall\n");
    
    return 0;
}
