/*
explicit cast for pointer conversion.
*/
#include<stdio.h>

int main(void)
{
    double a = 1000.10;
    double b;
    // declare a pointer
    int *p1;
    // assign value to pointer with casting
    p1 = (int *) &a;

    // value of 'b' should be same as 'a', but it won't be
    b = *p1;

    printf("Value of a is: %f \n", b);

    return 0;
}
