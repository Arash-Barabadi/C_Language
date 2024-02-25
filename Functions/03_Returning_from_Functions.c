#include <stdio.h>

// There is a difference between RETURNing from the function and OUTPUTing the result from it. 
// In some case we do not need to output the result, but need to assign it to a variable to work with it in out program.


//Let's have a look at a function that takes two parameters and outputs their sum:
/*
void sum(int x, int y) {
    printf("%d \n", x+y);
}

int main () {
    sum(12, 6);

    return 0;
}
*/



/**
 * The VOID keyword in the definition specifies that the function does not retunn any value.
 * This means that our sum function won't return any value, since main() function does that.
 * 
 * Let's make changes to the funnction and specify the return type to be an int:....
 * This means that out sum function will return an integer value. 
*/ 

// The return keyword stops the function from executing. If there are any statements after return, they won't run. 
// Let's see how to use the returned value. 

int sum(int x, int y) {
    return (x+y);
}

/**
 * After we have created our function that returns a value, 
 * we can call it in our code and assign the result to a variable.
 * 
 * Returning is useful when you don't need to output the result of the function,
 * but need to use it in your code. 
 * for example, a getTotal() function in a shopping app can return the total amount of an order. 
 * */ 

int main() {
    // The fumction is being used as follows:
    int res = sum (12, 56);
    printf("%d \n", res); 

    return 0;
}
