/*
for (init; testExpression; update) {
  // codes
  if (condition to break) {
    break;
  }
  // codes
}
*/
#include <stdio.h>

int main(void) {
  int i;
  double number , sum = 0.0;

  for ( i = 1; i <= 10; ++i) {
    printf("Enter number %d : ", i);
    scanf("%lf", &number);

    if (number == 0.0) {
      break; // if the user enters 0.0, break the loop
    }
    sum += number;
  }
  printf("Sum = %.2lf", sum); // sum = sum + number
  return 0;
}