/* Program to print J using # Pattern */
#include<stdio.h>
int main(){
int a,b;
for(a=0;a<=11;a++){
    for(b=0;b<=6;b++){
        if(a>=0 && a<2 || a>=2 && a<=9 && b==3 || a>=7 && a<=9 && b==0 || a>9 && a<=11 && b<=3){
            printf("***");
        }
        else{
            printf("   ");
        }
    }

    printf("\n");
} // end for end for
return 0;
}
