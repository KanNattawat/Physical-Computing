#include<stdio.h>

int main() {
    int n, i, j, k, cc=0, nk;
    scanf("%d", &n);
    nk = n;
    for (i=0; i<n; i++) {
        for (k=0; k<nk-1; k++) {
            printf(" ");
        }
        nk--;
        for (j=0; j<=cc; j++) {
            printf("*");
        }
        cc+=2;
        printf("\n");
    }
}
