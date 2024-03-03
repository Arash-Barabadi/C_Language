#include <stdio.h>
#include <string.h>

/**
 * The typedef keyword creates a type definition that simplifies code and makes a program easier to read.
 * typedef is commonly used with structures because it eliminates the need to use the keyword struct when declaring variables.
 * For example: ...
*/

typedef struct {
    int id; 
    char title[40]; 
    float hours;
} course; 

int main() {
    course cs1;
    course cs2;
    // Initialize cs1
    cs1.id = 123456;
    strcpy(cs1.title, "JavaScript Basics"); 
    cs1.hours = 12.30;
    // Initialize cs2
    cs2.id = 341281;
    strcpy(cs2.title, "Advanced C++");
    cs2.hours = 14.25;

    /* display course info*/
    printf("%d\t%s\t%4.2f\n", cs1.id, cs1.title, cs1.hours);
    printf("%d\t%s\t%4.2f\n", cs2.id, cs2.title, cs2.hours);

    return 0;
}
