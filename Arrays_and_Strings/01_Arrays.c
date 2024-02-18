#include <stdio.h>


/* Variables are great for storing and working with values. But what if we need to store mutiple similar values?
For example, ages of a group a people.
Instead of creating separate variables for each person, we can use an array to store all values!s*/


/* An array needs to be declared like a variable, with the type of the items it will hold.*/
/** For buildung an array there are some ways as followings :#
 *       1- specify the items one by one to create the whole array
 *       2- specfiy the items by placing them in curly braces, as follows, 
*/

// Way number 1-

/*

int main () {
    //At first, the number of the elements of the array should be defined (the size of the array).
    int ages[4];
    // Then every element must be defined one after another. 
    ages[0] = 10 ; 
    ages[1] = 14 ; 
    ages[2] = 15 ; 
    ages[3] = 18 ; 

printf("%d \n", ages[2]);

return 0;
}
*/

// Way number 2- 
// Note, in this case, we do not need to specify the size of the array in the square brackets.
int main() {
    int ages[] = {10, 14, 15, 18} ; 

    printf("%d\n", ages[2]);
    
    return 0 ;
}



