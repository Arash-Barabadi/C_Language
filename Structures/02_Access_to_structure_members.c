#include <stdio.h>
#include <string.h>

/**
struct student {
    int age;
    int grade; 
    char name[40];
};
*/

/**
 * 
int main() {
    struct student s1 = {19, 9, "Jason"};
    struct student s2; 
    printf("Assigning, s2 = s1\n");
    s2 = s1;
    //One can access the members of a structure by using the .(dot operator) between the variable name and the member name.
    printf("Results, Name: %s, Age: %d, Grade: %d\n", s2.name, s2.age, s2.grade); 

    return 0;
}
*/

struct course {
  int id;
  char title[40];
  float hours; 
};

int main() {
  struct course cs1 = {341279, "Intro to C++", 12.5};
  struct course cs2;

  /* initialize cs2 */
  cs2.id = 341281;
  strcpy(cs2.title, "Advanced C++");
  cs2.hours = 14.25;
   
  /* display course info */
  printf("%d\t%s\t%4.2f\n", cs1.id, cs1.title, cs1.hours);
  printf("%d\t%s\t%4.2f\n", cs2.id, cs2.title, cs2.hours);
  
  return 0;
}

