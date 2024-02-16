#include <stdio.h>

/*
int main() {
    int position = 2;

    if (position == 1) {
        printf("Gold");
    } 
    else if (position ==2) {
        printf("Silver");
    } 
    else if (position ==3) {
        printf("Bronze");
    } 
    else {
        printf("No medal");
    }

    return 0;
}

*/

/*
int main() {
    int position = 2 ; 
    
    switch(position) {
        case 1:
        printf("Gold");
        break;
        case 2:
        printf("Silver");
        break;
        case 3:
        printf("Bronze");
        break;
        default:
        printf ("No medal");
    }

    return 0;
}
*/


/*
int main() {
    int x = 2;

    switch(x) {
        case 1:
            x = 4;
        case 2:
            x = 8;
        case 3:
            x = 7;
            break;
        case 4:
            x = 3;
        default:
            x = 10;
    }
    printf("%d", x);

    return 0;
}
*/


int main() {
    char dir;
    scanf("%c", &dir);

    switch (dir) {
        case 'w':
            printf("Up");
            break;
        case 's':
            printf("Down");
            break;
        case 'a':
            printf("Left");
            break;
        case 'd':
            printf("Right");
            break;
        default:
            printf("Wrong");

    }

    return 0;
}