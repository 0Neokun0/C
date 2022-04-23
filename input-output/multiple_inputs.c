#include <stdio.h>
int main(void)
{
    int a;
    float b;

    printf("Enter Integer And The A Float With A Space: ");
    scanf("%d %f", &a, &b);

    printf("You Entered %d and %f", a, b);
    return 0;
}