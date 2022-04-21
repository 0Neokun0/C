#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(int argc, char** argv) {

    printf("Storage size for float : %d \n", sizeof(float));
    printf("Float max      :   %g\n", (float) FLT_MAX);
    printf("Float min      :   %g\n", (float) FLT_MIN);
    printf("-Float max     :   %g\n", (float) -FLT_MAX);
    printf("-Float min     :   %g\n", (float) -FLT_MIN);
    printf("Double max     :   %g\n", (double) DBL_MAX);
    printf("Double min     :   %g\n", (double) DBL_MIN);
    printf("-Double max    :   %g\n", (double) -DBL_MAX);
    printf("Precision value:  %d\n", FLT_DIG );

    return 0;
}