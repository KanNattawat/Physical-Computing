#include<stdio.h>

int main() {
    int num, i;
    scanf("%d", &num);
    for (i=0; i<num;i++) {
        printf("%d ", i+1);
    }

    return 0;
}