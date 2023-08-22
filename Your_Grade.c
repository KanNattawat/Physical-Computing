#include<stdio.h>
#include<ctype.h>

int main() {
    char my_input;
    scanf("%c", &my_input);
    my_input = toupper(my_input);
    switch (my_input) {
    case 'A':
        printf("Genius");
        break;
    
    case 'B':
        printf("Good");
        break;

    case 'C':
        printf("Try Harder");
        break;

    case 'D':
        printf("Very Bad");
        break;
    
    case 'F':
        printf("Fail");
        break;

    default:
        printf("Invalid Input");
        break;
    }

    return 0;
}