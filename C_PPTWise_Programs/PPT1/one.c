/* Program to get ASCII of a character in C
Input:
Enter character: a
Output:
ASCII is: 97
*/
#include <stdio.h>

int main()
{
	char ch;

	//input character
	printf("Enter the character: ");
	scanf("%c",&ch);

	printf("ASCII is = %d\n", ch);
	return 0;
}
