/*
if (test expression)
{
  // run code if true
}
else {
  // run code if false
}
*/

#include <stdio.h>

int main(void) {
  int number;

  printf("Enter an Integer : ");
  scanf("%d", &number);

  if (number %2 == 0) 
  {
    printf("%d is an Even Integer.\n", number);
  }
  else 
  {
    printf("%d is an odd integer.", number);
  } 
  
  return 0;
}