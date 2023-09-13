//find gross salary

#include <stdio.h>
#include <cs50.h>

int main() {
    float baseSal, grossSal, bonus, overtimePay;

    printf("what is your base salary?\n");
    scanf("%f", &baseSal);

    printf("what is your bonus salary?\n");
    scanf("%f", &bonus);

    printf("what is your overtime pay?\n");
    scanf("%f", &overtimePay);

    grossSal = baseSal + bonus + overtimePay;

    printf("your gross salary is: %.2f$", grossSal);

    return 0;
}