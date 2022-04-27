/*
do {
  // the body of the loop
}
while (testExpression);
*/
#include <stdio.h>

int main(void) {
  int a = 10;
  do {
    printf("%d\n", a*2);
    a = a + 1;
  }
    while(a < 20);
  return 0;
}