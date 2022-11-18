/* Program to print O using # Pattern */
#include<stdio.h>
int main(){
int a,b,c,d;
for(a=0;a<=11;a++){
    for(b=0;b<=2;b++){
        if( a==0 && b<2 || a==1 && b<1 || a==11 && b<2 || a==10 && b<1){
            printf(" ");
        }
        else{
            printf("*");
        }
    }
    for(c=1;c<=6;c++){
        if(a>=0 & a<2 || a>9 && a<=11){
            printf("**");
        }
        else{
            printf("  ");
        }
    }

     for(b=0;b<=2;b++){
        if( a==0 && b>0 || a==1 && b>1 || a==11 && b>0 || a==10 && b>1){
            printf(" ");
        }
        else{
            printf("*");
        }
    }


    printf("\n");
} // end for
return 0;
}
