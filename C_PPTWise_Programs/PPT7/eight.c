/*
C program to print duplicate elements with frequency in array.
*/

#include<stdio.h>
#include<conio.h>
void main(){
	 int i,n=1;
	 printf("enter the size of an array : ");
	 scanf("%d",&n);
	 int arr[n];
	 int occur[100] = {0};
	 printf("please give value to insert in array: n");
	 for(i=1;i<=n;i++){
	     scanf("%d",&arr[i]);
	     occur[arr[i]]++;
	 }
	 printf("repeated number is : ");
	 for(i=1;i<=n;i++){
	        printf("%d is repeated %d times n",i,occur[i]);
	 }
	 getch();
}
