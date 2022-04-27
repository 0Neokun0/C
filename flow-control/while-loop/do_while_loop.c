/*
do {
  // the body of the loop
}
while (testExpression);
*/
#include <stdio.h>

int main(void) {
  double number, sum = 0;

  do{
    printf("Enter a number and enter '0' to sum up all the entered numbers : ");
    scanf("%lf", &number);
    sum += number;
  }
    while ( number != 0.0);
  
  printf("Sum = %.2lf", sum);
  return 0;
}