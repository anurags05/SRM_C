//program to find day name of the week

#include <cs50.h>
#include <stdio.h>

int main() {
    int x = get_int("enter a number\n");

    if (x == 1) {
        printf("its monday\n");

    }
    else if (x == 2) {
        printf("its tuesday\n");

    }
    else if (x == 3) {
        printf("its wednesday\n");

    }
    else if (x == 4) {
        printf("its thursday\n");

    }
    else if (x == 5) {
        printf("its friday\n");

    }
    else if (x == 6) {
        printf("its saturday\n");

    }
    else if (x == 7) {
        printf("its sunday\n");

    }
    else {
        printf("day does not exist\n");
    }
    return 0;
}