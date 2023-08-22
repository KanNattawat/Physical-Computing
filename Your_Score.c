#include<stdio.h>

int main() {
    float num;
    scanf("%f", &num);
    // if (num <= 100 && num >= 80) {
    //     printf("A");
    // } else if (num <= 79.99 && num >= 70) {
    //     printf("B");
    // } else if (num <= 69.99 && num >= 60) {
    //     printf("C");
    // } else if (num <= 59.99 && num >= 50) {
    //     printf("D");
    // } else if (num <= 49.99 && num >= 0) {
    //     printf("F");
    // } else {
    //     printf("Out of Range");
    

    if (num < 0 || num > 100) {
        printf("Out of Range");
    } else if (num >= 80) {
        printf("A");
    } else if (num >= 70) {
        printf("B");
    } else if (num >= 60) {
        printf("C");
    } else if (num >= 50) {
        printf("D");
     } else if (num >= 0) {
        printf("F");
     }


    return 0;
}