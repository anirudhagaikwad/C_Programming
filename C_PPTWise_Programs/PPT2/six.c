/*
C program to find remainder of two numbers without using modulus (%) operator.

*/
#include <stdio.h>
int main()
{
    int a,b,rem;
    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);

    rem=a-(a/b)*b;

    printf("Remainder is = %d\n",rem);
    return 0;
}
