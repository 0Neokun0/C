#include <stdio.h>
int main()
{
    int B[2][3] = {
        {2, 3, 6},
        {4, 5, 8}
    };

    int C[3][2][2] = {
        {2, 5, 7, 9},
        {3, 4, 6, 1},
        {0, 8, 11, 13}
    };

    printf("%d\n", B[0][0]); 
    printf("%d\n", *B);
    printf("%d\n", B[0]);
    printf("%d\n", &B[0][0]);



    printf("%d\n", C[0][0]); 
    printf("%d\n", *C);
    printf("%d\n", C[0]);
    printf("%d\n", &C[0][0]);

   

    return 0;
}

/*
The code includes the necessary header file stdio.h for input/output operations.

The main function is defined as the entry point of the program.

Two multi-dimensional arrays are declared and initialized:

Array B is a 2x3 array with elements {2, 3, 6} in the first row and {4, 5, 8} in the second row.
Array C is a 3x2x2 array with elements {{2, 5}, {7, 9}} in the first "block," {{3, 4}, {6, 1}} in the second "block," and {{0, 8}, {11, 13}} in the third "block."
Several printf statements are used to print the elements of the arrays:

printf("%d\n", B[0][0]); prints the element at index [0][0] of array B, which is 2.
printf("%d\n", *B); prints the value pointed to by B, which is the first element of the array B. In this case, it is also 2.
printf("%d\n", B[0]); prints the address of the first element of the array B. It is the same as &B[0][0] and is a memory address.
printf("%d\n", &B[0][0]); prints the address of the first element of the array B. It is the same as B[0] and is also a memory address.
Similar printf statements are used to print the elements and addresses of the multi-dimensional array C.


*/