#include <stdio.h>
#include <string.h>
void print(char* C)
{
    // 'i' is declared and initialized to 0.
    int i = 0; 
    /*'while' loop is used to
     iterate through the characters of
     the string until the null character '\0'
     */
    while(C[i] != '\0')
    {
        /*
        C[i] refers to the character at index 'i' in the string
        , after printing each character, the variable 'i' is incremented
        to move to the next character in the stirng.
        */
        printf("%c", C[i]); 
        i++;
    }
    printf("\n");
}
int main()
{
    char C[20] = "Hello";
    print(C);
}