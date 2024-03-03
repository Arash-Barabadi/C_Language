#include <stdio.h>

/**
 * A structure is a user-defined data type that groups related variables of different data types. 
 * A structure declaration includes the keyword struct, a structure tag for referencing the structure, and curly braces {}
 * with a list of variable declaration called members.  
*/

//For example : ...
/**

struct course
{
    int id ; 
    char title[40]; 
    float hours; 
};

* This struct statement defines a new data type named course that has three members. 
* Structure members can be of any data type, including basic types, strings, arrays, pointers
* , and even other structures.
*
* A structure is also called a composite or aggregate data type. Some languages refer to structures as records. 
*/

struct student {
    int age;
    int grade; 
    char name[40];
};
/** 
 * 
int main() {
    //declare two variables.
    struct student s1;
    struct student s2;

    // The 1st structure, s1, his gonna be defined as follows...
    s1.age = 19;
    s1.grade = 9; 
    sprintf(s1.name, "John Bighimer");

    // The 2nd structure, s2, is gonna be defined as follows...
    s2.age = 22;
    s2.grade = 10;
    sprintf(s2.name, "Batman Jokerson"); 

    printf("Student: %s, %d\n", s1.name, s1.age); 
    printf("Student: %s, %d\n", s2.name, s2.age);

    return 0;
}
*/

//A structure variable can also be initialized in the declaration by listing initial values in order inside curly brackets:
/**
 * 
int main() {
    // declare two variables and initialize them
    struct student s1 = {19, 9, "John Birghimer"};
    struct student s2 = {22, 10, "Batman Jokerson"}; 

    printf("Student: %s, %d\n", s1.name, s1.age);
    printf("Student: %s, %d\n", s2.name, s2.age); 

    return 0; 
}
*/

//If you want to initialize a structure using curly braces after declaration, you will also need to type cast, as in the statements: 
/**
 *
int main() {
    // declaring
    struct student s1;
    //Initialization
    s1 = (struct student){19, 9, "John Birghimer"};
    
    printf("Student: %s, %d\n", s1.name, s1.age);

    return 0;
} 
*/
// One can use named member initialization when initializing a structure to initialize corresponding members :
int main() {
    struct student s1 = {.grade=9, .age= 19, .name="John Birghimer"};

    printf("Name: %s, Age: %d, Grade: %d \n", s1.name, s1.age, s1.grade);

    return 0;

}

