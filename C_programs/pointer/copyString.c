/**
 * C program to copy one string to another string using pointer
 */

#include <stdio.h>
#define MAX_SIZE 100 // Maximum size of the string

int main()
{
char text1[MAX_SIZE], text2[MAX_SIZE];
char * str1 = text1;
char * str2 = text2;
    /* Input string from user */
printf("Enter any string: ");
gets(text1);

/* Copy text1 to text2 character by character */
while(*(str2++) = *(str1++));
{
printf("First string = %s\n", text1);
printf("Second string = %s\n", text2);
}
    return 0;
}
