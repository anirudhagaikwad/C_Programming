/*
C program to print all non repeating character in string.
*/

#include <stdio.h>
int main()
{
    //Initializing variables.
    char str[100];
    int i;
    int freq[256] = {0};
    printf("C Program to find all non repeating character\n");
    printf("Enter the string: ");
    scanf("%[^\n]",str);
    //Here we are calculating the frequency of all characters
    for(i = 0; str[i] != '\0'; i++)
    {
        freq[str[i]]++;
    }
    printf("Character which has no repetitions are \n");
    for(i = 0; i < 256; i++)
    {
        //Here is the check to print only character
        //which has came only once
        if(freq[i] == 1)
        {
            printf("%c ", i);
        }
    }
    return 0;
}
