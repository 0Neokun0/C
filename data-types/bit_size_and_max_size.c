#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(int argc, char** argv) {

    printf("Char Type Data");
    printf("char_bit    :   %d\n", CHAR_BIT);
    printf("char_max    :   %d\n", CHAR_MAX);
    printf("char_min    :   %d\n", CHAR_MIN);
    printf("Int Type Data");
    printf("int_max     :   %d\n", INT_MAX);
    printf("int_min     :   %d\n", INT_MIN);
    printf("Long Type Data");
    printf("long_max    :   %ld\n", (long) LONG_MAX);
    printf("long_min    :   %ld\n", (long) LONG_MIN);
    printf("Short Char Type Data");
    printf("schar_max   :   %d\n", SCHAR_MAX);
    printf("schar_min   :   %d\n", SCHAR_MIN);
    printf("shrt_max    :   %d\n", SHRT_MAX);
    printf("shrt_min    :   %d\n", SHRT_MIN);
    printf("Unsigned Char Type Data");
    printf("uchar_max   :   %d\n", UCHAR_MAX);
    printf("uint_max    :   %u\n", (unsigned int) UINT_MAX);
    printf("Unsigned Long Char Type Data");
    printf("ulong_max   :   %lu\n", (unsigned long) ULONG_MAX);
    printf("Unsigned Short Char Type Data");
    printf("ushrt_max   :   %d\n", (unsigned short) USHRT_MAX);

    return 0;
}