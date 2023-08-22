#include<stdio.h>

int main() {
    int sec, min, hour, day;
    scanf("%d", &sec);
    int sec_start = sec;
    day = sec / 86400;
    sec -= 86400 * day;
    hour = sec / 3600;
    sec -= 3600 * hour;
    min = sec / 60;
    sec -= 60 * min;
    printf("%d s = %d d %d h %d m %d s", sec_start, day, hour, min, sec);

    return 0;

}
