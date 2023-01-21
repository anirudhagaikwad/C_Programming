
/*
C program to calculate the mean, variance, and standard deviation of real numbers.

>>Mean of the real numbers:

The mean is the average of the numbers. It is easy to calculate the mean of the numbers: add up all the numbers, then divide by the total number of elements.

>>Variance of the real numbers:

The variance of the numbers is defined as: "The average of the squared differences from the Mean".

>>Standard deviation of the real numbers:
To find the standard deviation, we take the square root of the variance.

*/

#include <stdio.h>
#include <math.h>

int main()
{
    float arr[5] = { 12.5, 14.5, 13.2, 8.95, 17.89 };

    float sum;
    float mean;
    float variance;
    float deviation;

    int i = 0;

    for (i = 0; i < 5; i++)
        sum = sum + arr[i];

    mean = sum / 5;

    sum = 0;
    for (i = 0; i < 5; i++) {
        sum = sum + pow((arr[i] - mean), 2);
    }
    variance = sum / 5;

    deviation = sqrt(variance);

    printf("Mean of elements    : %.2f\n", mean);
    printf("variance of elements: %.2f\n", variance);
    printf("Standard deviation  : %.2f\n", deviation);

    return 0;
}
