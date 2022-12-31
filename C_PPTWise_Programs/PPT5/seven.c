/*
C program to print ASCII values of all characters.

ASCII stands for American Standard Code for Information Interchange. It is a set of integer values that represents different printable and non-printable characters.
*/

#include <stdio.h>

int main()
{
    int i;

    /* Print ASCII values from 0 to 255 */
    for(i=0; i<=255; i++)
    {
        printf("ASCII value of character %c = %d\n", i, i);
    }

    return 0;
}
