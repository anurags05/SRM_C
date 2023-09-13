//write a program to find ascii value of a character

#include <stdio.h>
#include <cs50.h>

int main() {
    char c;

    printf("enter a character\n");
    scanf("%c", &c);

    printf("ascii value of %c = %d\n", c, c);

    return 0;
}