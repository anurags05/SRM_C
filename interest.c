//find simple interest

#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main() {
    float compInterest, finalAmount, principle, intRate, nTime, timeElapse;

    printf("enter the principle amount\n");
    scanf("%f", &principle);

    printf("enter the number of times interest calculated in a year\n");
    scanf("%f", &principle);

    printf("enter the time period\n");
    scanf("%f", &timeElapse);

    printf("enter the rate of interest\n");
    scanf("%f", &intRate);

    finalAmount = principle * ((pow((1 + intRate / 100), timeElapse)));

    compInterest = finalAmount - principle;

    printf("compound interset if: %.2f", compInterest);

    return 0;


}