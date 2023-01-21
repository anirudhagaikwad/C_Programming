
/*
Calculate the distance between two cities from kilometers to meters, centimeters, feet and inches using C program.

Here are the formulas:

    Meter       = km * 1000
    Feet        = km * 3280.84
    Inches      = km * 39370.1
    Centimeter  = km * 100000
*/

#include <stdio.h>

int main()
{
    /*Declare the variables*/
    int distance;
    float meter;
    float feet;
    float inches;
    float centimeter;

    /*input the value of distance through the keyboard*/
    printf("Enter the distance between Gwalior and Delhi (in KM): ");
    scanf("%d", &distance);

    /*  converting the distance into meters, feet,
        inches, and, centimeter
    */
    meter = distance * 1000;
    feet = distance * 3280.84;
    inches = distance * 39370.1;
    centimeter = distance * 100000;

    /*printing the results*/
    printf("Meter = %f\n", meter);
    printf("Feet = %f\n", feet);
    printf("Inches = %f\n", inches);
    printf("Centimeters = %f\n", centimeter);

    return 0;
}
