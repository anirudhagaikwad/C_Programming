/*
C program to find second largest number in an array.
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void secondLargest(int *arr,int size){
    int i,firstlargest=0,secondlargest=0;
    for(i=0;i<size;i++){
        if(arr[i]>firstlargest){
            secondlargest=firstlargest;
            firstlargest=arr[i];
        }
    }
    printf("%d is second largest",secondlargest);
}
void main(){
    int size,i,*arr;
    printf("Enter number of Elements in an array n");
    scanf("%d", &size);
    arr=(int*)malloc(sizeof(int)*size);
    printf("please enter the array elements n");
    for(i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    secondLargest(arr,size);
    getch();
}
