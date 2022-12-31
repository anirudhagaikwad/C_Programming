/* C program to calculate the addition of two complex numbers.

A complex number contains two parts real and imaginary.
Read two complex numbers from the user, and then calculate the addition of both complex numbers and print the result.
*/

#include <stdio.h>

typedef struct
    {
    int real;
    int img;
} Complex;

int main()
{
    Complex num1;
    Complex num2;
    Complex num3;

    printf("Enter a first complex number (real and imaginary): ");
    scanf("%d%d", &num1.real, &num1.img);

    printf("Enter a second complex number (real and imaginary): ");
    scanf("%d%d", &num2.real, &num2.img);

    num3.real = num1.real + num2.real;
    num3.img = num1.img + num2.img;

    if (num3.img >= 0)
        printf("Result is = %d + %di\n", num3.real, num3.img);
    else
        printf("Result is = %d %di\n", num3.real, num3.img);

    return 0;
}
