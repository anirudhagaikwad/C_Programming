#include<stdio.h>
void main(){
int x=30;
int* ptr1=&x;
int **ptr2;
int ***ptr3;
ptr2=&ptr1;
ptr3=&ptr2;
printf("\n Address of x= %p",&x);
printf("\nAddress of ptr1= %p",&ptr1);
printf("\nAddress of ptr2= %p",&ptr2);
printf("\nAddress of ptr3= %p",&ptr3);
printf("\n value hold by ptr3 = %p ",ptr3);
printf("\n value hold by ptr2= %p",ptr2);
printf("\n value hold by ptr1= %p",ptr1);
printf("\n value of X = %d",***ptr3);
}
