/* Program to print R using # Pattern */
#include<stdio.h>
int main(){
int a,b,c,count=11;
for(a=0;a<=11;a++){
    for(b=0;b<=2;b++){
        printf("*");
    }
    for(c=1;c<=5;c++){
        if(a>=0 && a<2 || a>4 && a<7 || a>=2 && a<=4 && c==5 || a>=7 && a<=11 && b==a){
            printf("**");
        }
        else{
            printf("  ");
        }
    }
    if(a>6){
        count++;
    }
    else if(count>5){
        count=1;
    }
    printf("\n");
} // end for
return 0;
}
