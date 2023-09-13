//program to check if number is odd or even

#include <cs50.h>
#include <stdio.h>

int main() {

    int num = get_int("enter a number\n");

    if (num % 2==0) {
        printf(" number is divisible by 2\n");

    }
    else {
        printf("number is not divisible by 2\n");

    }
    return 0;

}