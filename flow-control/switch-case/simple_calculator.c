/*
switch (expression)
{
case constant1:
  // statements
  break;
case constant2:
  // statements
  break;
default:
  // default statements
}
*/
#include <stdio.h>

int main() {
  char operation;
  double n1, n2;

  printf("Enter two numbers and operator('+''-''*''/') in the middle: ");
  scanf("%lf%c%lf", &n1, &operation, &n2);

  switch(operation)
    {
      case '+':
        printf("%.1lf + %.1lf = %.1lf",n1, n2, n1+n2);
        break;

      case '-':
        printf("%.1lf - %.1lf = %.1lf",n1, n2, n1-n2);
        break;

      case '*':
        printf("%.1lf * %.1lf = %.1lf",n1, n2, n1*n2);
        break;

      case '/':
        printf("%.1lf / %.1lf = %.1lf",n1, n2, n1/n2);
        break;

      default:
        printf("Error! Operator is not correct");
    }
  return 0;
}