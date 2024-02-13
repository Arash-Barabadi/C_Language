#include <stdio.h>

// Another variation of the while loop is do-while

int main() {
    int num = 0 ; 
    do {
        printf("%d \n", num);
        num += 3;
    }
    while (num < 10);

/*  The difference with a while loop is that the condition
*   is checked after the code, meaning the code in the do is 
*   excuted at least once, even if the condition is not satisfied.  
*   The do-while loop is similar to a while loop, but it is 
*   guaranteed to run at least once. 
*/
    return 0;
}