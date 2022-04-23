/* This program takes age input from the user
It stores it in the age variable
And, print the value using printf() */

#include <stdio.h>
int main() {
    int age;
    double height;

    printf("Enter the age : "); // int type
    scanf("%d", &age);
    printf("Enter the height: "); // double type
    scanf("%lf", &height);

    printf("\nAge = %d\n", age);
    printf("\nHeight = %.1lf\n", height);

    return 0;
}