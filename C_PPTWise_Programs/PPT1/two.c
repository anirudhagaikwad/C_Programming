/*C program to find HCF of two numbers.

HCF or Highest Common Factor is the greatest number which divides each of the two or more numbers.
*/

#include <stdio.h>

//function to find HCF of two numbers
int findHcf(int a,int b)
{
    int temp;

    if(a==0 || b==0)
    return 0;
    while(b!=0)
    {
        temp = a%b;
        a    = b;
        b    = temp;
    }
    return a;
}
int main()
{
    int a,b;
    int hcf;

    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);

    hcf=findHcf(a,b);
    printf("HCF (Highest Common Factor) of %d,%d is: %d\n",a,b,hcf);

    return 0;
}
