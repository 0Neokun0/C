#include <stdio.h>
int main()
{
    int myAge = 27; // My age int variable
    int* pointer = &myAge; // A pointer Variable, with the pointer, that stores address of my Age

    printf("%d\n", myAge); // output my Age
    printf("%d\n", &myAge); // outputs the memory address of my Age
    printf("%d\n", pointer); // outputs memory addrss of my age with the pointer pointer
    printf("%d\n", *pointer); // outputs value in the memory address

}