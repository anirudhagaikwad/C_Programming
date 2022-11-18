/* program to print A B C D E F */
#include<stdio.h>

int printA[7][5];
int printB[7][5];
int printC[7][5];
int printD[7][5];
int printE[7][5];
int printF[7][5];


void gap(){
    for(int i=0;i<7;i++){
        for(int j=0;j<1;j++){
            printf(" ");
        }
    }

}

void printsol(){
    for(int i=0;i<7;i++){
        gap();
        for(int j=0;j<5;j++){
            char ch=printA[i][j];
            printf("%c",ch);
        }
        gap();
        for(int j=0;j<5;j++){
            char ch=printB[i][j];
            printf("%c",ch);
        }
        gap();
        for(int j=0;j<5;j++){
            char ch=printC[i][j];
            printf("%c",ch);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<7;i++){
        gap();
        for(int j=0;j<5;j++){
            char ch=printD[i][j];
            printf("%c",ch);
        }
        gap();
        for(int j=0;j<5;j++){
            char ch=printE[i][j];
            printf("%c",ch);
        }
        gap();
        for(int j=0;j<5;j++){
            char ch=printF[i][j];
            printf("%c",ch);
        }
        printf("\n");
    }
}


void A(){

    for(int i=0;i<7;i++){
        for(int j=0;j<5;j++){
            if( ((j==0 || j==4) && i!=0) || ((i==0 || i==3)) && (j>0 && j<4)  ){
                printA[i][j]=42;
            }
            else{
                printA[i][j]=32;
            }
        }
    }
}

void B(){
    for(int i=0;i<7;i++){
        for(int j=0;j<5;j++){
            if( ((j==0) || (j==4 && (i!=0 && i!=3 && i!=6) )) || ((i==0 || i==3 || i==6)) && (j>0 && j<4)  ){
                printB[i][j]=42;
            }
            else{
                printB[i][j]=32;
            }
        }
    }
}

void C(){
      for(int i=0;i<7;i++){
        for(int j=0;j<5;j++){
            if( (j==0 && (i!=0 && i!=6)) || ((i==0 || i==6 ) && j>0)){
                printC[i][j]=42;
            }
            else{
                printC[i][j]=32;
            }
        }
    }
}

void D(){
      for(int i=0;i<7;i++){
        for(int j=0;j<5;j++){
            if( (j==0) || (j==4 && (i!=0 && i!=6)) || ((i==0 || i==6) && (j>0 && j<4)) ){
                printD[i][j]=42;
            }
            else{
                printD[i][j]=32;
            }
        }
    }
}

void E(){
     for(int i=0;i<7;i++){
        for(int j=0;j<5;j++){
            if( j==0 || ((i==0 || i==3 || i==6) && j>0) ){
                printE[i][j]=42;
            }
            else{
                printE[i][j]=32;
            }
        }
    }
}

void F(){
     for(int i=0;i<7;i++){
        for(int j=0;j<5;j++){
            if( j==0 || ((i==0 || i==3) && j>0) ){
                printF[i][j]=42;
            }
            else{
                printF[i][j]=32;
            }
        }
    }
}

int main(){

    A();
    B();
    C();
    D();
    E();
    F();

    printsol();

    return 0;
}
/* Output:

        ***        ****         ****
       *   *       *   *       *
       *   *       *   *       *
       *****       ****        *
       *   *       *   *       *
       *   *       *   *       *
       *   *       ****         ****

       ****        *****       *****
       *   *       *           *
       *   *       *           *
       *   *       *****       *****
       *   *       *           *
       *   *       *           *
       ****        *****       *



*/
