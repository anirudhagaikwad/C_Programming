/*
Write a 'C' program to swap the values of two variables by using call by reference.
*/
#include<stdio.h>
void swap(int*n1,int*n2)
{
      int temp;
      temp=*n1;
      *n1=*n2;
      *n2=temp;
}
int main()
{
      int a,b;
      printf("Enter Two Numbers: \n");
      scanf("%d%d",&a,&b);
      printf("\nNumbers Before Swapping: \n");
      printf("\n a=%d b=%d\n",a,b);
      swap(&a,&b);
      printf("\nNumbers After Swapping: \n");
      printf("\n a=%d b=%d",a,b);
      return 0;
}
