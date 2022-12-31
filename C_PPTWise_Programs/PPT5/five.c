/*
C program to check whether a number is perfect number or not.

Perfect number is a positive integer which is equal to the sum of its proper positive divisors.
For example: 6 is the first perfect number
Proper divisors of 6 are 1, 2, 3
Sum of its proper divisors = 1 + 2 + 3 = 6.
Hence 6 is a perfect number.
*/

#include <stdio.h>

int main()
{
    int i, num, sum = 0;

    /* Input a number from user */
    printf("Enter any number to check perfect number: ");
    scanf("%d", &num);

    /* Calculate sum of all proper divisors */
    for(i = 1; i <= num / 2; i++)
    {
        /* If i is a divisor of num */
        if(num%i == 0)
        {
            sum += i;
        }
    }

    /* Check whether the sum of proper divisors is equal to num */
    if(sum == num && num > 0)
    {
        printf("%d is PERFECT NUMBER", num);
    }
    else
    {
        printf("%d is NOT PERFECT NUMBER", num);
    }

    return 0;
}
