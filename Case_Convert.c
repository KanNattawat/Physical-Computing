#include<stdio.h>

int main() {
    char cha;
    scanf("%c", &cha);
    if (cha <= 90 && cha >= 65) {
        printf("%c", cha+32);
    } else if (cha <= 122 && cha >= 97) {
        printf("%c", cha-32);
    } else {
        printf("error");
    }

    return 0;
}