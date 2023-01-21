/*
C program to extract last two digits from a given year
*/
#include <stdio.h>

int main()
{
    int year = 0;
    int res = 0;

    printf("Enter year: ");
    scanf("%d", &year);

    res = year % 100;

    printf("Result is: %02d", res);

    return 0;
}
