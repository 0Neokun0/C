/*
if (test expression1)
{
  // statement
}
else if (test expression2)
{
  // statement
}
else if (test expression3)
{
  // statement
}
else {
  // statement
}
*/
# include <stdio.h>
int main(void)
{
  int number1, number2;
  printf("Enter Two Integers with A Spaces: ");
  scanf("%d %d", &number1, &number2);

  // Check if the two integers are equal.
  if ( number1 == number2 )
  {
    printf("Result : %d = %d", number1, number2);
  }
  // Check if number 1 is greater than number 2.
  else if ( number1 > number2 )
  {
    printf("Result : %d > %d", number1, number2);
  }
  else
  {
    printf("Result : %d < %d", number1, number2);
  }
  return 0;
}