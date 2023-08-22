#include<stdio.h>

int main() {
    double old_price;
    double discount_percent, buy_cnt;
    scanf("%lf", &old_price);
    scanf("%lf", &discount_percent);
    scanf("%lf", &buy_cnt);
    double total_price = buy_cnt * (old_price - (old_price * (discount_percent / 100)));
    printf("%.2lf", total_price);

    return 0;
}
