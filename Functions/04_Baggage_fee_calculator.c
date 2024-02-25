/**
 * Baggage Fees Calculator
 * 
 * Return values are fun! Let's modify our program, so that our baggage() function returns the total fee, and the output is done in main().

Task: Modify the function, so that the given code works as expected.
 *  */ 


#include <stdio.h>

int baggage(int weight) {
    
    int total;
    if(weight <= 23) {
        total = 0;
    }
    else {
        total = (weight-23)*12;
    }

    return(total);  
}
int main() {
    int weight;
    scanf("%d", &weight);

    int total = baggage(weight);
    printf("Total: $%d", total);

    return 0;
}