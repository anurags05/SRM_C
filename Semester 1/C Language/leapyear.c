//program to determine if a year is a leap year

#include <stdio.h>
#include <cs50.h>

int main() {
    int year = get_int("enter a year\n");

    if (year % 4 == 0) {
        printf("it is a leap year\n");

    }
    else {
        printf("it is not a leap year\n");
    }
    return 0;
}