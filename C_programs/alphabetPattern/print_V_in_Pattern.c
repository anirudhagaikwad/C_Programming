/* Program to print V using # Pattern */
#include<stdio.h>
int main(){
int a,b,c,d;
for(a=0;a<=11;a++){
    for(b=1;b<=a;b++){
        printf(" ");
    }
    for(c=0;c<=2;c++){
        printf("*");
    }
    for(b=10;b>=a;b--){
        printf("  ");
    }
    for(d=0;d<=2;d++){
        printf("*");
    }
    printf("\n");
} // end for
return 0;
}
