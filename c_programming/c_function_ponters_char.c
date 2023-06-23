#include <stdio.h>
void PrintHello(char *name)
{
    printf("Hello %s\n", name);
}
int Add(int a, int b)
{
    return a + b;
}
int main()
{
    void (*ptr)(char *);
    ptr = PrintHello;
    ptr("Tom san");
}

/*
This code demonstrates the usage of function pointers in C. Here's a step-by-step explanation of the code:

The code includes the necessary header file stdio.h for input/output operations.

The code defines two functions:

The function PrintHello takes a pointer to a character array (char*) as an argument and prints a greeting message using printf. The %s format specifier is used to print the string argument passed to the function.
The function Add takes two integer arguments a and b and returns their sum.
In the main function:

A function pointer ptr is declared using the syntax void (*ptr)(char*). This declares ptr as a pointer to a function that takes a char* parameter and returns void.
The function pointer ptr is assigned the address of the PrintHello function.
The function pointer ptr is called as a regular function by passing the argument "Tom san". This invokes the function PrintHello indirectly through the function pointer.
The greeting message "Hello Tom san" is printed to the console.
*/