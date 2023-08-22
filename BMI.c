#include<stdio.h>
#include<math.h>

int main() {
    float height, weight;
    scanf("%f", &height);
    scanf("%f", &weight);
    height /= 100;
    height = pow(height, 2);
    float ans = weight / height;
    printf("%f", ans);

    return 0;
}
