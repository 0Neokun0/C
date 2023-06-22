#include <stdio.h>
void Increment(int *p)
{
    *p = (*p) + 1;
}
int main()
{
    int a;
    a = 10;
    Increment(&a); // a = a+1;
    printf("a = %d", a);
}