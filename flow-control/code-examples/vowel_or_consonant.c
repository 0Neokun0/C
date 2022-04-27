#include <stdio.h>

int main(void) {
  
    char c;
    int lowercase_vowel, uppercase_vowel;
    printf("Enter an alphabet : ");
    scanf("%c", &c);

    // evaluates to 1 if variable c is lowercase
    lowercase_vowel = ( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' );
    // evaluated to 1 if variable c is uppercase
    uppercase_vowel = ( c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' );

    // evaluates to 1 (true) if c is a vowel
    if (lowercase_vowel || uppercase_vowel)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
}