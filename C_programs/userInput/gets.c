/*
gets() is a pre-defined function in C which is used to read a string or a text line. And store the input in a well-defined string variable. The function terminates its reading session as soon as it encounters a newline character.
*/
#include<stdio.h>
int main()
{
    char string[10];
    printf("Enter the String: ");
    gets(string);
    //printf("\n%s",string);
    puts(string);
    return 0;
}
