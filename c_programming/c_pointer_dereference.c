#include <stdio.h>

int main()
{
    int myAge = 27; // Variable declaration
    int* pointer = &myAge; // Pointer declaration

    printf("%p\n", pointer);
    printf("%d\n", *pointer);


}