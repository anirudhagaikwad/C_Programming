/* C program to find the surface Area and volume of the cylinder.

Cylinder volume formula: PIr^2h
Cylinder surface area formula: 2PIrh+2PIr^2
 */

#include <stdio.h>

float calcuateVolumeOfCylinder(float radius, float height)
{
    float result = 0.0F;

    result = 3.14F * radius * radius * height;

    return result;
}

float calcuateAreaOfCylinder(float radius, float height)
{
    float result = 0.0F;

    result = 2 * 3.14F * radius * (radius + height);

    return result;
}

int main()
{
    float radius = 0;
    float height = 0;
    float volume = 0;
    float area = 0;

    printf("Enter the radius: ");
    scanf("%f", &radius);

    printf("Enter the height: ");
    scanf("%f", &height);

    volume = calcuateVolumeOfCylinder(radius, height);
    area = calcuateAreaOfCylinder(radius, height);

    printf("Volume of Cylinder is: %f\n", volume);
    printf("Surface area of Cylinder is: %f\n", area);

    return 0;
}
