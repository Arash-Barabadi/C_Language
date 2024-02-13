#include <stdio.h>

int main() {

    int num = 1;

    while (num < 10) {
        printf("%d \n", num);
        // the statement num = num +1 increase the value of num by 1 each time the loop runs. 
        // This is important, as without it the loop would run forever. 
        // The loop stops as soon as the value of num reaches the value 10
        num = num + 1;
        /* Another form of increment is as below: 
        num++;
           Similarly, num-- will decrease the value of num by 1:
        num--;
        If the value if increment or decrement was a value rather than 1, 
        then it should be written in the following format; 

        num = num + 3 ==== num += 3
         */ 
    }

    return 0;
}
