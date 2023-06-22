#include <stdio.h>

int main()
{
    int a = 10;
    int *p;
    p = &a;

    // Pointer arithmetic
    printf("Address p is %d\n", p);
    printf("Value at Address p is %d\n", *p);
    printf("Size of Integer is %d bytes\n", sizeof(int));
    printf("%d\n", p+1);
    printf("Value at Address p+1 is %d\n", *(p+1));
}