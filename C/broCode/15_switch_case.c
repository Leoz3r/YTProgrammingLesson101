#include <stdio.h>

int main(void) {

    // switch = A more efficient alternative to using many "else if" statements
    // allows a value to be tested for equality against many cases

    char grade;

    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    switch(grade){
        case 'A':
            printf("Perfect!\n");
            break;
        case 'B':
            printf("You did good!\n");
            break;
        case 'C':
            printf("You did okay!\n");
            break;
        case 'D':
            printf("At least it's not an F!");
            break;
        case 'F':
            printf("YOU FAILED!");
            break;
        default:
            printf("Please enter only valid grades\n");
    }

    return 0;
}