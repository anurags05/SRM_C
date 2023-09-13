//program to find days in month

#include <stdio.h>
#include <cs50.h>

int main() {
    int x = get_int("enter a month's number\n");

    if (x == 1) {
        printf("january has 31 days\n");

    }
    else if (x == 2) {
        printf("feb has 28 days\n");
    }
    else if (x == 3) {
        printf("mar has 31 days\n");
    }
    else if (x == 4) {
        printf("april has 30 days\n");
    }
    else if (x == 5) {
        printf("may has 31 days\n");
    }
    else if (x == 6) {
        printf("june has 30 days\n");
    }
    else if (x == 7) {
        printf("july has 31 days\n");
    }
    else if (x == 8) {
        printf("august has 31 days\n");
    }
    else if (x == 9) {
        printf("september has 30 days\n");
    }
    else if (x == 10) {
        printf("october has 31 days\n");
    }
    else if (x == 11) {
        printf("november has 30 days\n");
    }
    else if (x == 12) {
        printf("december has 31 days\n");
    }
    else {
        printf("month does not exist\n");
    }
    return 0;
}