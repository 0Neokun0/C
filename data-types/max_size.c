#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(int argc, char** argv) {

    printf("char bit    :   %d\n", CHAR_BIT);
    printf("char max    :   %d\n", CHAR_MAX);
    printf("char min    :   %d\n", CHAR_MIN);
    printf("int max     :   %d\n", INT_MAX);
    printf("int min     :   %d\n", INT_MIN);
    printf("long max    :   %ld\n", (long) LONG_MAX);
    printf("long min    :   %ld\n", (long) LONG_MIN);
    printf("schar max   :   %d\n", SCHAR_MAX);
    printf("schar min   :   %d\n", SCHAR_MIN);
    printf("shrt max    :   %d\n", SHRT_MAX);
    printf("shrt min    :   %d\n", SHRT_MIN);
    printf("uchar max   :   %d\n", UCHAR_MAX);
    printf("uint max    :   %u\n", (unsigned int) UINT_MAX);
    printf("ulong max   :   %lu\n", (unsigned long) ULONG_MAX);
    printf("ushrt max   :   %d\n", (unsigned short) USHRT_MAX);

    return 0;
}