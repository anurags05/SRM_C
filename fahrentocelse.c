//program to convert a temp from fahrenheit into celsius

#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main() {
    float fahren, cels;

    printf("enter a celsius temp\n");
    scanf("%f", &cels);

    fahren = (cels * 9 /5) - 32;

    printf("temp in fahrenheit is: %.2f", fahren);

    return 0;
}