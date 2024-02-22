#include <stdio.h>

/**
 * You are making a baggage fee calculator. It should take the weight of a bag as an input, and output the fee. 
 * Here are the rules:
 * A bag weighing up to 23kg is free. After that, each kg is billed at $12.
 * So, for example, a bag weighing 28kg will cost 5*12 = 60 
 * The given code calls a function called baggage() in main(). 
 * 
 * Task : Define the baggage() function, so that it takes a whole number representing the weight from input and output the fee. 
 * Example input : 30
 * Output : 84
 * in case the weight is below or equal to 23, the out output should be 0. 
*/

void baggage() {
    // take the input as an integer
    int weight;
    printf("Type in the weight value in integer format: ");
    scanf("%d", &weight);

    //calculation
    if (weight <= 23 ) {
        printf("0 \n");
    }
    else if (weight > 23) {
        int fee = (weight - 23) * 12 ;
        printf("%d \n", fee) ;
    }
    else {
        printf("your input is incorrect.");
    }

}

int main() {
    baggage() ; 

    return 0; 
}