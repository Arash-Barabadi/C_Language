#include <stdio.h>


/**
 * The given below statement declares an array, that corresponds to game results of a basketball team. 
 * float results[] = {0, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 1, 1, 0, 1};
 * 1 represents a win, while 0 represents a loss. The team has played a total of 28 games.

Task:
Create a program that calculates and outputs the number of win for the given team.
*/

int main() {
    
    float results[] = {0, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 1, 1, 0, 1};
    //Let's introduce a counter, namely i, and, a variable which stores the results in itself which is z.
    int numGames = sizeof(results);
    int wins = 0 ;

    for(int i = 0; i< numGames ; i++) {

        if (results[i]==1) {
            wins++ ;
        }
        else {
            continue;
        }
        
    }

    printf("Number of wins: %d \n", wins);
    return 0 ; 
 }