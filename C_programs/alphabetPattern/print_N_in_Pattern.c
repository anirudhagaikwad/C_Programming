/* Program to print N using # Pattern */
#include<stdio.h>
int main(){
int a,b,c,d,e;
for(a=0;a<=11;a++){
    for(b=0;b<=2;b++){
        printf("*");
    }
    for(c=1;c<=a;c++){
        printf(" ");
    }
    for(b=0;b<=2;b++){
        printf("*");
    }
    for(d=10;d>=a;d--){
        printf(" ");
    }
    for(b=0;b<=2;b++){ //line
        printf("*");
    }

    printf("\n");
} // end for end for
return 0;
}
