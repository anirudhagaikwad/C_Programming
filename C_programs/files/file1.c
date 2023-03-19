#include <stdio.h>
int main()
{
    char filename[80];
    FILE *fp;
    printf("File to be opened? ");
    scanf("%79s", filename);
    fp = fopen(filename,"r");
if (fp == NULL)
{
fprintf(stderr, "Unable to open file %s\n", filename);
return 1; /* Exit to operating system */
}
    //code that accesses the contents of the file
    return 0;
}
