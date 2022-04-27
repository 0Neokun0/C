/*
for (init; testExpression; update) {
  // codes
  if (testExpression) {
    continue;
  //codes
  }
}
*/

#include <stdio.h>

int main(void) {
  int i;
  double number, sum = 0.0;

  for (i = 1; i < 10; ++i) {
    printf("Enter number %d : ", i);
    scanf("%lf", &number);

    if (number < 0.0) { //if the user enters a negative number, it won't be added to the sum
      continue;
    }
    sum += number;
  }
  printf("Sum = %.2lf", sum);
  
  return 0;
}