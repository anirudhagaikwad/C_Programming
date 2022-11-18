/* Program to print A using # Pattern */
#include<stdio.h>
int main(){
int a,b,c,d;
for(a=0;a<=11;a++){
    for(b=10;b>=a;b--){
        printf(" ");
    }
    for(c=0;c<=2;c++){
        printf("#");
    }
    for(d=1;d<=a;d++){
        if((a>4)&&(a<7)){
            printf("##");
        }
        else{printf("  ");}
    }

    for(c=0;c<=2;c++){
        printf("#");
    }

  
    printf("\n");
} // end for
}
