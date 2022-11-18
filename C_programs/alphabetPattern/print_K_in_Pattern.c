/* Program to print K using # Pattern */
#include<stdio.h>
int main(){
int a,b,c,count=6;
for(a=0;a<=11;a++){
    for(b=0;b<2;b++){
        printf("*");
    }
    for(c=0;c<=6;c++){
        if(c==count){
            printf("***");
        }
        else{
            printf("  ");
        }
    }
    if(a<=5){
        count--;
    }
    else if(a<=11){
        count++;
    }

    printf("\n");
} // end for
return 0;
}
