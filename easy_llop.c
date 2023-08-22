#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n < 0) {
        int i;
        for (i=n; i<=0; i++) {
            printf("%d ", i);
        }
    } else {
        int i;
        for (i=n; i>=0; i--) {
            printf("%d ", i);
        }
    }

    return 0;
}