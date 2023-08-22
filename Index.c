#include<stdio.h>

int main() {
    int input, i=0;
    scanf("%d", &input);
    int M[] = {2, 20, 8, 10, 4, 6, 16, 18};
    int N[] = {1, 3, 9, 7, 11, 15, 19};
    while (input < 1 || input > 20)
    {
        scanf("%d", &input);
    }

    while (sizeof(M) != i-1)
    {
        if (input == M[i]) {
            printf("%d is in M at index [%d]", input, i);
            return 0;
        }
        i++;
    }
    int j=0;
    while (sizeof(N) != j-1) {
        if (input == N[j]) {
            printf("%d is in N at index [%d]", input, j);
            return 0;
        }
        j++;
    }
    printf("%d is not in neither M nor N", input);
    return 0;
    
    
}