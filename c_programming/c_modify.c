#include <stdio.h>
int main()
{
    int number = 10; 
    int *pointer = &number; // address of number

    printf("Addresss of pointer is %d\n", pointer);
    printf("Value of pointer is %d\n", *pointer);

    int number_2 = 20;
    *pointer = number_2;

    printf("Addresss of pointer is %d\n", pointer);
    printf("Value of pointer is %d\n", *pointer);
}