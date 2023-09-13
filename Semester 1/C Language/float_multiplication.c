//multiply two floating points

#include <cs50.h>
#include <stdio.h>

int main() {
    float num1, num2, prod;
    printf("enter first number\n");
    scanf("%f", &num1);

    printf("enter a second number\n");
    scanf("%f", &num2);

    prod = num1 * num2;

    printf("product of your two numbers is: %.2f", prod);
    return 0;
}