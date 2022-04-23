#include <stdio.h>
int main(void) {
    float num1;
    double num2;

    printf("Enter two number : ");
    scanf("%f", &num1);
    scanf("%lf", num2);

    printf("num1 = %f\n", num1);
    printf("num2 = %lf", num2);

    return 0;
}