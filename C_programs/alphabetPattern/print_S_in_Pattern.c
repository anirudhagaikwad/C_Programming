/* Program to print S using # Pattern */
#include<stdio.h>
int main(){
int a,b;
for(a=0;a<=11;a++){
    for(b=1;b<=8;b++){
        if(a>=0 && a<2 || a>4 && a<7 || a>=2 && a<=4 && b==1 || a>6 && a<=9 && b==8 || a>9 && a<=11){
            printf("**");
        }
        else{
            printf("  ");
        }
    }
    printf("\n");
} // end for
return 0;
}
