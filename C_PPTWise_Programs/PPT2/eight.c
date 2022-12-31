/*
C program to find the roots of a quadratic equation.

*/

//C program to roots of a quadratic equation

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calculateRoot(float a, float b, float c)
{
    float rootA = 0;
    float rootB = 0;

    float realp = 0;
    float imagp = 0;
    float disc = 0;

    if (a == 0 || b == 0 || c == 0) {
        printf("Error: Unable to determine roots\n");
        return;
    }
    else {
        disc = b * b - 4.0 * a * c;
        if (disc < 0) {
            printf("Imaginary Roots\n");
            realp = -b / (2.0 * a);
            imagp = sqrt(abs(disc)) / (2.0 * a);
            printf("Root1 = %f  +i %f\n", realp, imagp);
            printf("Root2 = %f  -i %f\n", realp, imagp);
        }
        else if (disc > 0) {
            printf("Roots are real and distinct \n");
            rootA = (-b + sqrt(disc)) / (2.0 * a);
            rootB = (-b - sqrt(disc)) / (2.0 * a);
            printf("Root1 = %f  \n", rootA);
            printf("Root2 = %f  \n", rootB);
        }
        else if (disc == 0) {
            printf("Roots are real and equal\n");
            rootA = -b / (2.0 * a);
            rootB = rootA;
            printf("Root1 = %f\n", rootA);
            printf("Root2 = %f\n", rootB);
        }
    }
}

int main()
{
    float a = 0;
    float b = 0;
    float c = 0;

    printf("Enter the values of a: ");
    scanf("%f", &a);

    printf("Enter the values of b: ");
    scanf("%f", &b);

    printf("Enter the values of c: ");
    scanf("%f", &c);

    calculateRoot(a, b, c);

    return 0;
}
