/* size and range of C datatypes */
#include<stdio.h>
#include<limits.h>
#include<float.h>
int main(){
// Let's Get the size of all datatypes using the 'sizeof' operator
    printf("\n----- Size of all Datatypes of C Language -----------\n");
    printf("sizeof(char)        = %lu \n",sizeof(char));    // Sizeof expects unsigned long integer, so 'ul' Format specifier
    printf("sizeof(short)       = %lu \n",sizeof(short));
    printf("sizeof(int)         = %lu \n",sizeof(int));
    printf("sizeof(long)        = %lu \n",sizeof(long));
    printf("sizeof(float)       = %lu \n",sizeof(float));
    printf("sizeof(double)      = %lu \n",sizeof(double));
    printf("sizeof(long double) = %lu \n",sizeof(long double));

    printf("\n------ Limits of All Datatypes ----------------------\n");
    printf("Character Minimum value - SCHAR_MIN = %d \n", SCHAR_MIN);
    printf("Character Maximum value - SCHAR_MAX = %d \n", SCHAR_MAX);
    printf("Unsigned Character Max value - UCHAR_MAX = %d \n", UCHAR_MAX);

    printf("Short Int Minimum value - SHRT_MIN = %d \n", SHRT_MIN);
    printf("Short Int Maximum value - SHRT_MAX = %d \n", SHRT_MAX);
    printf("Unsigned Short Int Maximum value - USHRT_MAX = %u \n", USHRT_MAX);

    printf("Int Minimum value - INT_MIN = %d \n", INT_MIN);
    printf("Int Maximum value - INT_MAX = %d \n", INT_MAX);
    printf("Unsigned Int Maximum value - UINT_MAX = %u \n", UINT_MAX);

    printf("Long Int Minimum value - LONG_MIN = %ld \n", LONG_MIN);
    printf("Long Int Maximum value - LONG_MAX = %ld \n", LONG_MAX);
    printf("Unsigned Long Int Maximum value - ULONG_MAX = %lu \n", ULONG_MAX);

    // We can also use '%f' format specifier
    printf("Float Minimum value - FLT_MIN = %e \n", FLT_MIN);
    printf("Float Maximum value - FLT_MAX = %e \n", FLT_MAX);

    // We can also use '%lf' format specifier
    printf("Double Minimum value - DBL_MIN = %e \n", DBL_MIN);
    printf("Double Maximum value - DBL_MAX = %e \n", DBL_MAX);

    printf("Long Double Minimum value - LDBL_MIN = %Le \n", LDBL_MIN);
    printf("Long Double Maximum value - LDBL_MAX = %Le \n", LDBL_MAX);

    // Number of digits of precision after decimal point.
    printf("\n------ Precision of Floating Point data -------------\n");
    printf("Float Precision - FLT_DIG = %d \n", FLT_DIG);
     printf("Double Precision - DBL_DIG = %d \n", DBL_DIG);
    printf("Long Double Precision - LDBL_DIG = %d \n", LDBL_DIG);
}
