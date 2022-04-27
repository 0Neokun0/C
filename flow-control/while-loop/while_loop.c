/*
while (testExpression)
{
  // the body of the loop
}
*/
#include <stdio.h>

int main(void) {
  int i = 1;
  while (i <= 10) {
    printf("%d\n", i);
    ++i;
  }
  return 0;
}