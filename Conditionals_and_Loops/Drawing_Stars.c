#include <stdio.h>

/*  Task:
    Take an inetger number from input, then output that number
    of star symbols.
*/

int main() {

    int stars;
    scanf("%d", &stars);


    while (stars+1 > 1) {
        printf("%c", '*');
        stars-- ;
    }
    printf("\n");

    return 0;
}