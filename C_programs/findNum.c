#include<stdio.h>
void findNumber(int arr[] , int key) {
		int i;
		int foundIt=0;
		for(i=0;i<sizeof(arr);i++) {
			if(arr[i]==key) {
				foundIt=1;
				break			}// if
		} //for
		if(foundIt) {
			printf(" \n %d Found at array index %d ",key,i);
		}else {
			printf("\n %d Not-Found in array",key);
		}
	}//findNumber(int[] arr , int key)

	void main(){
	    int x[5]={1,2,3,4,5};
	findNumber(x,8);
	}
