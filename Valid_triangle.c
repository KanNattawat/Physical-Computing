#include<stdio.h>

int main() {
    int num_a, num_b, num_c;
    scanf("%d %d %d", &num_a, &num_b, &num_c);
    if (num_a + num_b > num_c && num_a + num_c > num_b && num_b + num_c > num_a) {
        printf("Triangle is valid.");
    } else {
        printf("Triangle is not valid.");
    }

    return 0;
}