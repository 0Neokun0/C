/*
for ( initializationStatement; testExpression; updateStatement)
{
  // statement inside the body of loop
}
*/
#include <stdio.h>

int main(void)
{
  int i;

  for (i = 1; i <= 10; ++i)
    {
      printf("%d ", i);
    }
  return 0;
}