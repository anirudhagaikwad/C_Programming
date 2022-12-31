/*
C program to find sum of all numbers from 0 to N without using loop.

To find the sum of numbers from 0 to N, we use a mathematical formula: N(N+1)/2

*/
#include <stdio.h>

int main(void) {

	int n, sum;

	//input value of n
	printf("Enter the value of n: ");
	scanf("%d", &n);

	//initialize sum with 0
	sum =0;

	//use formula to get the sum from 0 to n
	sum = n*(n+1)/2;

	//print sum
	printf("sum = %d\n", sum);

	return 0;
}
