#include <stdio.h>

int main() {
    char fnamel[40], snamel[40], person2[40], person3[40];
    scanf("%s", fnamel);
    scanf("%s", snamel);
    scanf("%[^\n]", &person2);
    scanf("%[^\n] ", &person3);

    printf("Person 1: %s %s\n", fnamel, snamel);
    printf("Person 2: %s", person2);
    printf("Person 3: %s", person3);
    
    return 0;
}
