/* Program to print E using # Pattern */
#include<stdio.h>
int main(){
int a,b,c;
for(a=0;a<=11;a++){

    for(b=0;b<2;b++){
        printf("*");
    }
    for(c=1;c<=5;c++){
        if(a>=0 && a<2 || a>4 && a<7 || a>9 && a<=11){
            printf("**");
        }
        else{
            printf("  ");
        }
    }


    printf("\n");
} // end for/ end for
return 0;
}
