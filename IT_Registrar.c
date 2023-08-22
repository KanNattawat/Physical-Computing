#include<stdio.h>

int main() {
    char name[30];
    char surname[30];
    int student_id;
    int dd, mm, yy;
    float gpa;

    scanf("%s\n", name);
    scanf("%s\n", surname);
    scanf("%d\n", &student_id);
    scanf("%d/%d/%d", &dd, &mm, &yy);
    scanf("%f", &gpa);

    printf("Fullname: %s %s\n", name, surname);
    printf("ID: %8d\n", student_id);
    printf("DOB: %02d-%02d-%04d\n", dd, mm, yy);
    printf("GPA: %0.2f\n", gpa);

    return 0;
}