/*
#include <stdio.h>
void functionName()
{
  ... .. ...
  ... .. ...
}
int main()
{
  ... .. ...
  ... .. ...
  functionName();

  ... .. ...
  ... .. ...
}
*/
#include <stdio.h>
int addNumbers(int a, int b);

int main(void)
{
  int a, b, sum;

  printf("Enter Two Numbers With A Space : ");
  scanf("%d %d", &a, &b);

  sum = addNumbers(a, b);
  printf("sum = %d", sum);

  return 0;
}

int addNumbers(int a, int b)
{
  int result;
  result = a+b;
  return result;
}