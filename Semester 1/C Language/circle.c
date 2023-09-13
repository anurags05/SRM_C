//make a program to find the area of a circle

#include <cs50.h>
#include <math.h>
#include <stdio.h>
#define PI 3.14

int main() {
    int radius, circum;

    printf("enter a radius value\n");
    scanf("%d", &radius);

    circum = PI * radius * 2;
    printf("circum of the circle is: %d", circum);
    return 0;

}