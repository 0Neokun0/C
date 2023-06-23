#include <stdio.h>
#include <stdlib.h>

int main()
{
    int initialSize = 5;
    int *numbers;

    // Allocate memory for an array of integers
    numbers = (int *)malloc(initialSize * sizeof(int));

    if (numbers == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Use the allocated memory
    for (int i = 0; i < initialSize; i++)
    {
        numbers[i] = i + 1;
        printf("%d ", numbers[i]);
    }
    printf("\n");

    int newSize = 10;

    // Resize the allocated memory block to accommodate more integers
    numbers = (int *)realloc(numbers, newSize * sizeof(int));

    if (numbers == NULL)
    {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    // Use the reallocated memory
    for (int i = initialSize; i < newSize; i++)
    {
        numbers[i] = i + 1;
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(numbers);

    return 0;
}

/*
There are three possible scenarios when using realloc:

If ptr is a NULL pointer, then realloc behaves like malloc and simply allocates a new memory block of the specified size.

If ptr is a valid pointer obtained from a previous memory allocation (malloc, calloc, or realloc), then realloc tries to resize the memory block pointed to by ptr to the new size. If there is enough space at the current location, the memory block is resized in place. Otherwise, realloc will allocate a new memory block of the specified size, copy the contents from the old block to the new block, and free the old block.

If size is 0 and ptr is not a NULL pointer, then realloc behaves like free and frees the memory block.
*/
