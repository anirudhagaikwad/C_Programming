/* Program to print X using # Pattern */
#include<stdio.h>
int main(){
int a,b,count1=1,count2=10;
for(a=0;a<=11;a++){
    for(b=0;b<=11;b++){
        if(b==count1 || b==count2){
            printf("***");
        }
        else{
            printf("  ");
        }
    }

    if(a<=4){
        count1++;
        count2--;
    }
    else if(a<=11){
        count1--;
        count2++;
    }

    printf("\n");
} // end for
return 0;
}
