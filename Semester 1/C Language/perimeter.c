//find the perimeter of a square and rectangle

#include <cs50.h>
#include <stdio.h>

int main() {
    int rectSideA, rectSideB, squareSide, rectPeri, squarePeri;
    printf("enter a value for first rectangle side\n");
    scanf("%d", &rectSideA);

    printf("enter a value for second rectangle side\n");
    scanf(" %d", &rectSideB);

    rectPeri = 2 * (rectSideA + rectSideB);
    printf("perimeter of your rectangle is %d\n", rectPeri);

    printf("enter a value of sqaure side\n");
    scanf("%d", &squareSide);

    squarePeri = 4 * squareSide;
    printf("perimeter of square is: %d", squarePeri);


    return 0;
}