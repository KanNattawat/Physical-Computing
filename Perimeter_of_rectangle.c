#include<stdio.h>

int main() {
    double width, length;
    scanf("%lf", &width);
    scanf("%lf", &length);
    width += width;
    length += length;
    double ans = width + length;
    printf("Perimeter of rectangle = %.4lf units", ans);

    return 0;
}
