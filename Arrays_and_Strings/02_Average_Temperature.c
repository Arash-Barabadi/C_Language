#include <stdio.h>

/**
 * The given code declares an array of tempratue. Each element is the average air temprature for the 
 * corresponding month (The array has 12 elements, the first one corresponds to january, the last one to December). 
 * Task: 
 *  Take the index number from input and output the corresponding element of the array. 
*/

int main() {
    float t[] = {10.3, 15.4, 21.8, 22.5, 25.1, 27.4, 28.8, 27.9, 20.1, 22, 19.4, 14.2} ; 
    int i;
    scanf("%d", &i);
    printf("%f", t[i]); 

    return 0; 
}