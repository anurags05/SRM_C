//program to check if number is positive or negative or zero

#include <cs50.h>
#include <stdio.h>

int main() {
    int x = get_int("enter a number\n");

    if (x > 0) {
        printf("number is positive\n");

    }
    else if (x == 0) {
        printf("number is zero\n");

    }
    else {
        printf("number is negative\n");
    }
    return 0;
}