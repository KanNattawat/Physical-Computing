#include<stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    i = n;
    while (i!=0) {
        printf("%d ", i);
        i -= 1;
    }
    
return 0;
}