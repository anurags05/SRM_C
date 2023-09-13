//program to find the highest of 3 numbers

#include <stdio.h>
#include <cs50.h>

int main() {
    int x = get_int("enter first number\n");
    int y = get_int("enter second number\n");
    int z = get_int("enter third number\n");

    if (x > y && x > z) {
        printf("%d is the largest number\n", x);
    }
    else if (y > x && y > z) {
        printf("%d is the largest number\n", y);
    }
    else {
        printf("%d is the  largest number\n", z);

    }
    return 0;

}