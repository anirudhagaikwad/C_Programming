/*
C program to print character pyramid as given below:
A
B C
D E F
G H I J
K L M N O
*/

#include <stdio.h>

int main()
{
    int i,j;
    char ch;

    for(i=1;i<=5;i++)
    {
        ch='A';
        for(j=1;j<=i;j++)
        {
            printf("%c ",ch++);
        }
        printf("\n");
    }

    return 0;
}
