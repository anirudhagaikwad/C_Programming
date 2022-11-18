/* Program to print Z using # Pattern */
#include<stdio.h>
int main(){
int a,b,count=11;
for(a=0;a<=11;a++){
    for(b=0;b<=11;b++){
        if(a>=0 && a<2 || a>9 && a<=11 || a>=2 && a<=9 && b==count){
            printf("**");
        }
        else{
            printf("  ");
        }
    }
    count=count-1;

    printf("\n");
} // end for
return 0;
}
