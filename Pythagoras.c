#include<stdio.h>
#include<math.h>

int main() {
    double line1, line2;
    scanf("%lf", &line1);
    scanf("%lf", &line2);
    double ans = sqrt(pow(line1, 2) + pow(line2, 2));
    printf("%.2lf", ans);

    return 0;
}
