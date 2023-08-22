#include<stdio.h>
#include<math.h>

int main() {
    double price, diameter, height;
    scanf("%lf", &price);
    scanf("%lf", &diameter);
    scanf("%lf", &height);
    double volume = height * 3.14159265359 * pow(diameter/2, 2);
    double price_p_ml = price / volume;
    printf("Volume : %.2lfml\n", volume);
    printf("Baht/ml : %.4lf", price_p_ml);

    return 0;
}
