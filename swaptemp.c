//swap two numbers with a use of a temp number

#include <stdio.h>
#include <cs50.h>

int main() {
    int first, second, temp;
    printf("enter a first value\n");
    scanf("%d", &first);

    printf("enter a second value\n");
    scanf("%d", &second);

    temp = first;
    first = second;
    second = temp;

    printf("the first number is %d and the second number is %d", first, second);
    return 0;

}