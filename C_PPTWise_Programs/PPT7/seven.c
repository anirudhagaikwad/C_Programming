/*
C program to perform left rotation of array elements by two positions.
*/
#include<stdio.h>
int main()
{
    int i,size,j,k,temp;

    printf("C Program to perform two time left rotation \n");
    printf("First enter number of elements you want in array\n");
    scanf("%d", &size);
    int arr[size];
    for(i = 0; i < size; i++)
    {
        printf("Please give value for index %d : ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0; i<2; i++)
    {
        temp=arr[0];
        for(j=0; j<size-1; j++)
        {
           arr[j]=arr[j+1];
		}
        arr[size-1]=temp;
    }
    printf("Array after two time left rotation \n");
    for(i=0; i<size; i++)
    {
       printf("%d ",arr[i]);
    }
return 0;
 }
