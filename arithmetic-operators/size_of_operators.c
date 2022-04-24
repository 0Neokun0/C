#include <stdio.h>

int main(void) {

  int num1;
  float num2;
  double num3;
  char character;

  printf("Size of int    = %lu bytes \n", sizeof(num1));
  printf("Size of float  = %lu bytes \n", sizeof(num2));
  printf("Size of double = %lu bytes \n", sizeof(num3));
  printf("Size of char   = %lu bytes \n", sizeof(character));
  
  return 0;
}