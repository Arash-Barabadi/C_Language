#include <stdio.h>

/* Task:
*  Take two numbers from input and then output the numbers between them,
*  inclusive, separated by space.
*  For example: for the input 4 9, the output should be 4 5 6 7 8 9 .
*/

int main() {
    int num1, num2;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    for (int i = num1 ; i>= num1 && i<=num2 ; i++) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}