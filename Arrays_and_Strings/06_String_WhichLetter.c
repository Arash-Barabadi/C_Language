#include <stdio.h>

/**
 * We are making a program that works with text. 
 * It needs to take a word and an index number from input, and output the letter with that index in the word.
 * Task : Take a string and a number from input, then output the letter in the string, which corresponds to that number.   
*/

int main() {
    
    char word[50]; // Declaration of character array.
    int position; // Declaration of an integer variable. 
    
    // Input
    fgets(word, 50, stdin);
    scanf("%d", &position);
    
    // Output
    printf("%c", word[position]);

    return 0; 
}