/* Program to print U using # Pattern */
#include<stdio.h>
int main(){
int a,b,c;
for(a=0;a<=11;a++){
    for(b=0;b<=2;b++){
        printf("*");
    }
    for(c=1;c<=6;c++){
        if(a>9 && a<=11){
            printf("**");
        }
        else{printf("  ");}
    }
    for(b=0;b<=2;b++){
        printf("*");
    }
    printf("\n");
} // end for
return 0;
}