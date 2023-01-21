/*
C program to find Binary number of a Decimal number.
*/
#include <stdio.h>

void getBinary(int);

int main()
{
	int num=0;
	printf("Enter an integer number :");
	scanf("%d",&num);
	printf("\nBinary value of %d is =",num);
	getBinary(num);
	return 0;
}

/*Function definition : getBinary()*/
void getBinary(int n)
{
	int loop;
	/*loop=15 , for 16 bits value, 15th bit to 0th bit*/
	for(loop=15; loop>=0; loop--)
	{
		if( (1 << loop) & n)
			printf("1");
		else
			printf("0");
	}
}
