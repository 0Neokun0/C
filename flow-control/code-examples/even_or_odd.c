#include <stdio.h>

int main(void) {
  int num;
  printf("Enter an Integer : ");
  scanf("%d", &num);

  // if the number is perfectly divisible by 2
  if(num % 2 == 0)
    printf("Even");
  else
    printf("Odd");
  return 0;
}