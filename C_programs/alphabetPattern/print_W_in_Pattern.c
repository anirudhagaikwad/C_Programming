/* Program to print W using # Pattern */
#include<stdio.h>
int main(){
int a,b,c,d;
for(a=0;a<=11;a++){
    for(b=0;b<=2;b++){
        printf("*");
    }
    for(c=10;c>=a;c--){
        printf(" ");
    }

    for(b=0;b<=2;b++){
        printf("*");
    }
    for(c=1;c<=a;c++){
        printf("  ");
    }
    for(b=0;b<=2;b++){
        printf("*");
    }
    for(d=10;d>=a;d--){
        printf(" ");
    }
    for(b=0;b<=2;b++){
        printf("*");
    }

    printf("\n");
} // end for
return 0;
}
