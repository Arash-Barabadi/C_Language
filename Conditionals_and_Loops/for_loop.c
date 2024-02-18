#include <stdio.h>

/*

int main() {


    for(int i=1 ; i<10 ; i++) {
        // The for loop has 3 components in the parentheses:
        //  - The 1st part runs once when we enter the loop and initializes the variable.
        //  - The 2nd part is the condition of the loop.
        //  - The 3rd part runs every time the loop runs.
        printf("%d \n", i);
    }

    return 0;
}
*/

// you can have any type of condition and any type of increment statements in the for-loop.


int main() {
    for(int i=2; i<=100; i+=2) {
    // The "continue" statement can be used to skip the current iteration of the loop and jump to the next one.
        if (i==10 || i==12) {
            continue;
        }
    // The "break" statement can be used to stop a loop.
        if (i == 50){
            break;
        }
        printf("%d \n", i);
    }

    return 0;

}


