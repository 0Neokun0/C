#include <stdio.h>
int main(void)
{
    char character;
    printf("Enter a Character : ");
    scanf("%c", &character);

    printf("You entered %c.\n", character);
    printf("ASCII value is %d.", character);
    return 0;
}