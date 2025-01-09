#include <stdio.h>

int main(void) {

    // switch = A more efficient alternative to using many "else if" statements
    // allows a value to be tested for equality against many cases

    char grade;

    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    switch(grade){
        case 'A':
            printf("perfect!\n");
            break;
        case 'B':
            printf("you did good!\n");
            break;
    
    }

    return 0;
}