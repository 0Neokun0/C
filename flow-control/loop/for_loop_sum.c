// Program to calculate the sum of first n natural numbers
#include <stdio.h>
int main(void)
{
  int number, count, sum = 0;

  printf("Enter a positive Integer : ");
  scanf("%d", &number);

  for (count = 1; count <= number; ++count)
  {
    sum += count;
  }
  printf("Sum = %d", sum);

  return 0;
}