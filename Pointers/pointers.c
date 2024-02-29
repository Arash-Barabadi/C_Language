#include <stdio.h>

/**
 * Passing pointers to functions is a great way to solve some challenging tasks. 
 * One example is swapping value. 
 * You have two variable values, which are taken from input, and you need to swap the values. 
 * The given code declares two variables, takes them from input and passes them to a swap() function, as pointers. 
 * The swap() function needs to swap their values.
 * 
 * Task: Define the swap() function so that given code works as expected. 
 * 
 * Hint: In the swap() function, create a third variable and use it to store swap values of x and y. Do not forget to assign the new values to the actual
 * variables, using the pointers, so that they are changed in main()
*/

//create the swap() function here
void swap(int* x, int* y) {
    int z;
    z = *x;
    *x = *y;
    *y = z;

} 

int main() {
    int x, y;

    scanf("%d %d", &x, &y);

    printf("x is %d, y is %d\n", x, y); 
    swap(&x, &y);
    printf("x is %d, y is %d\n", x, y); 

    return 0;
}