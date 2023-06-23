#include <stdio.h>
int Add(int a, int b)
{
    return a + b;
}
int main()
{
    // pointer to function that should take
    // (int, int) as argument/parameter and retun int
    int c;
    int (*p)(int, int);
    p = &Add;
    c = (*p)(2, 3); // de-referencing and executing the function.
    printf("%d", c);
}