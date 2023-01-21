/*
Write a function in C to compare strings using pointer.

*/
#include<stdio.h>
int compare_string(char *a, char *b)
{
   while(*a==*b)
   {
      if ( *a == '\0' || *b == '\0' )
         break;

      a++;
      b++;
   }
   if( *a == '\0' && *b == '\0' )
      return 0;
   else
      return -1;
}
int main()
{
    char first[100], second[100], result;
    printf("Enter First String: ");
    gets(first);
    printf("\nEnter Second String: ");
    gets(second);
    result = compare_string(first, second);
    if (result == 0 )
       printf("\nStrings are Equal.\n");
    else
       printf("\nStrings are NOT Equal.\n");
    return 0;
}


