#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numElements = 5;
    int* numbers;

    /*Dynamically allocate memory for an 
    array of integeres and intialize it to zero*/
    numbers = (int*)calloc(numElements, sizeof(int));

    if (numbers == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // User the allocated memory
    for (int i = 0; i < numElements; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(numbers);

    return 0;
}