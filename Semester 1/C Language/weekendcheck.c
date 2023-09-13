//program to check if today is a weekend day
/*
#include <stdio.h>
#include <cs50.h>

int main() {
    char day = get_char("what day is it today?\n");

    if (day == 'sunday' || day == 'Sunday' || day == 'saturday' || day == 'Saturday') {
        printf("its the weekend\n");
    }
    else {
        printf("its a weekday\n");
    }
    return 0;
}*/

#include <stdio.h>
#include <cs50.h>

int main() {
    char day;

    printf("what day is it today?\n");
    scanf("%c", &day);

    if (day == 'sunday' || day == 'saturday') {
        printf("its the weekend");

    }
    else {
        printf("its a weekday");

    }
    return 0;
}