#include<stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    if (m > n) {
        while (m != n-1) {
            printf("%d ", m);
            m -= 1;
        }
        
    } else if (n > m) {
        while (m != n+1) {
            printf("%d ", m);
            m += 1;
        }
    }

    return 0;
}