//program to check if a number is divisible by 5 or 11

#include <cs50.h>
#include <stdio.h>

int main() {
    int num = get_int("enter a number\n");

    if (num % 5==0 && num % 11==0) {
        printf("number is divisible by 5 and 11\n");

    }
    else if (num % 5==0 || num % 11 == 0 ) {
        printf("number is divisible by 5 or 11\n");

    }
    else {
        printf("number is not divisible 5 or 11\n");

    }
     return 0;
}