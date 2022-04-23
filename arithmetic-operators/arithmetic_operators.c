#include <stdio.h>
int main(void)
{
    int num1, num2, result;
    printf("Input 1st and 2nd Number With Spaces.");
    scanf("%d %d", &num1, &num2);

    result = num1+num2;
    printf("num1+num2 = %d \n",result);
    result = num1-num2;
    printf("num1-num2 = %d \n",result);
    result = num1*num2;
    printf("num1*num2 = %d \n",result);
    result = num1/num2;
    printf("num1/num2 = %d \n",result);
    result = num1%num2;
    printf("Remainder when num1 divided by num2 = %d \n",result);

    return 0;
}