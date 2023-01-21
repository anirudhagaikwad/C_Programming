/*
C program to read the height of a person and the print person is taller, dwarf, or average height person.
*/

#include <stdio.h>

int main()
{
    double height = 0;

    printf("Enter Height (in centimetres): ");
    scanf("%lf", &height);

    if ((height >= 150.0) && (height <= 170.0)) {
        printf("Person is average height person");
    }
    else if ((height > 170.0) && (height <= 195.0)) {
        printf("Person is taller");
    }
    else if (height < 150.0) {
        printf("Person is dwarf");
    }
    else
        printf("Abnormal height \n");

    return 0;
}
