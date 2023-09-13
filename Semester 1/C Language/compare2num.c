//write a program for comparing of two numbers

#include <cs50.h>
#include <stdio.h>

int main() {

    int num1 = get_int("enter a number?\n");
    int num2 = get_int("enter another number.\n");

    if (num1 < num2) {
        printf("the first number is smaller than the second.");

    }
    else if (num1 > num2) {
        printf("the second number is bigger than the second number.");
    }
    else {
        printf("first number is equal to the second number");

    }
    return 0;
}