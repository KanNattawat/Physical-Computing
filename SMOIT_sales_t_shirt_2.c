#include<stdio.h>
#include<math.h>

int main() {
    int buy_count;
    float discount_percent, old_price;
    scanf("%f %f %d", &old_price, &discount_percent, &buy_count);
    float new_percent_price = (old_price * buy_count) * ((100 - discount_percent) / 100);
    float new_free_price = 2 * (floor(buy_count / 3) * old_price) + (old_price*(buy_count%3));
    if (new_free_price < new_percent_price) {
        printf("Buy 2 Get 1\n%.2f", new_free_price);
    } else {
        printf("Discount %.0f%%\n%.2f", discount_percent, new_percent_price);
    }

    return 0;
}