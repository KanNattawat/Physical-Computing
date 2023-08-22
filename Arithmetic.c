#include<stdio.h>
#include<math.h>

int main() {
    double num1, num2;
    scanf("%lf,%lf", &num1, &num2);
    double sum = num1 + num2;
    printf("The sum of the given numbers : %lf\n", sum);
    double difference = abs(num1 - num2);
    printf("The difference of the given numbers : %lf\n", difference);
    double product = num1 * num2;
    printf( "The product of the given numbers : %lf\n", product);
    double quotient = num1 / num2;
    printf("The quotient of the given numbers : %lf", quotient);

    return 0;
}
