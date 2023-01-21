/*
C Program to replace space of String with user given character.
*/

#include<stdio.h>
#include<ctype.h>
void replaceSpace(char * str, char charToReplace){
    char c;
    int i;
    int len = strlen(str);
    for(i=0; i<len; i++)
    {
        if(str[i] == ' ')
        {
            str[i] = charToReplace;

        }
    }
}

void main(){
	 char str[100],ch,c;
	 int i,j,len;
	 printf("enter the string : \n");
	 scanf("%[^\n]%c",str,&c);
	 printf("enter a char you want to replace with space : ");
	 scanf("%c",&ch);
	 replaceSpace(str,ch);
	 printf("String after removing ' ': %s", str);
	 return 0;
 }
