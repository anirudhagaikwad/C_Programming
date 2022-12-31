/* C program to convert vowels into Uppercase in string.*/

#include<stdio.h>
#include<ctype.h>
void main()
{
    char a[100],b[100];
    int i,n=0;
    printf("enter str");
    scanf("%[^\n]s",a);
    for(i=0;a[i]!='\0';i++)
    {
        n++;
    }
    for(i=0;i<n;i++)
    {
       if(a[i]=='a' || a[i+1]=='e' || a[i+1]=='i'|| a[i+1]=='o' || a[i+1]=='u')
       {
           b[i]= toupper(a[i]);
       }
       else
       {
           b[i]=a[i];
       }
    }
     for(i=0;i<n;i++)
    {
      printf("%c",b[i]);
    }

}
