#include<stdio.h>
#include<stdlib.h>
int main()
{
  char c;

   printf("Enter character: ");
   c = getc(stdin);
   printf("Character entered: ");
   putc(c, stdout);
   
   return(0);
}
