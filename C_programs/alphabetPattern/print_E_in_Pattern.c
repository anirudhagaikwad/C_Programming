/* Program to print E using # Pattern */
#include<stdio.h>
int main(){
int a,b,c;
for(a=0;a<=11;a++){ // what purpose how it will execute

    for(b=0;b<2;b++){ // what purpose how it will execute        
        printf("*");                                         
    }
    for(c=1;c<=5;c++){ // what purpose how it will execute
        if(a>=0 && a<2 || a>4 && a<7 || a>9 && a<=11){ // profram flow
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
