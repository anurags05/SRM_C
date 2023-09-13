//program to check if vowel or consonant

#include <stdio.h>
#include <cs50.h>

int main() {
    char x = get_char("enter a letter\n");

    if ( x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') {
        printf("letter is a vowel\n");
    }
     else {
        printf("letter is a consonant\n");
     }
      return 0;
}