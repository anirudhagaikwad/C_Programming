
/*C program to multiply two numbers using plus operator.*/

#include <stdio.h>

int main()
{
    int a,b;
    int mul,loop;

    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);

    mul=0;

    for(loop=1;loop<=b;loop++){
        mul += a;
    }

    printf("Multiplication of %d and %d is: %d\n",a,b,mul);

    return 0;
}
