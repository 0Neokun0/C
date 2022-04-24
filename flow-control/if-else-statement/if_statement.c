/*
if (test expression)
{
  // code
}
*/

#include <stdio.h>

int main(void) {
  int number;

  printf("Enter an Integer : ");
  scanf("%d", &number);

  if (number <= 10) {
    printf("You Entered %d.\n", number);
  }

  printf("The number is not less than or equal to 10.");
  
  return 0;
}