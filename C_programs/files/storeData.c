/**********************************************************
 Statement - Illustrate as to how the data stored on the disk is read
 ******************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main()
{
    FILE *fptr;
    char filename[15];
    char ch;
printf("Enter the filename to be opened\n");
gets(filename);
fptr = fopen (filename, "r");  /*open for reading*/

if (fptr == NULL)
{
  printf("Cannot open file\n");
  exit(0);
    }

ch = fgetc(fptr);

while (ch != EOF)
{
  printf ("%c", ch);
   ch = fgetc(fptr);
    }

fclose(fptr);
    getch();
}
