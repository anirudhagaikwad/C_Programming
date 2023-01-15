/*
The standard C library also provides us with yet another function, the fgets() function. The function reads a text line or a string from the specified file or console. And then stores it to the respective string variable.

Similar to the gets() function, fgets also terminates reading whenever it encounters a newline character. But furthermore, unlike gets(), the function also stops when EOF is reached or even if the string length exceeds the specified limit, n-1.

Syntax,

fgets(char *str, int n, FILE *stream)

    str - It is the variable in which the string is going to be stored
    n - It is the maximum length of the string that should be read
    stream - It is the filehandle, from where the string is to be read.

*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    char string[20];
    printf("Enter the string: ");
    fgets(string,20,stdin);         //input from stdin stream
    printf("\nThe string is: %s",string);
    return 0;
}
