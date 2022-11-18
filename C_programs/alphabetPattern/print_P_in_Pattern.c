/* Program to print P using # Pattern */
#include<stdio.h>
int main(){
int a,b,c,d;
for(a=0;a<=11;a++){
    for(b=0;b<=2;b++){
        printf("*");
    }
    for(c=0;c<=5;c++){
        if(a>=0 && a<2 || a>4 && a<7 || a>=2 && a<=4 && c==5){
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
