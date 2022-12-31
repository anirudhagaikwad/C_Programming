
/*C program to read and print name, where memory for variable should be declared at run time*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char* name;
    int limit;

    printf("Enter maximum length of name: ");
    scanf("%d", &limit);

    //allocate memory dynamically
    name = (char*)malloc(limit * sizeof(char));

    printf("Enter name: ");
    getchar(); //get extra character to clear input buffer
    gets(name);

    printf("Hi! %s, How are you?\n", name);

    //free dynamically allocated memory
    free(name); // <-- don't forget.

    return 0;
}
