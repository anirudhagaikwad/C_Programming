/* program to print A B C D E F */
#include<stdio.h>

int printA[7][5];
int printB[7][5];
int printC[7][5];
int printD[7][5];
int printE[7][5];
int printF[7][5];

void gap(FILE *fptr){

    for(int i=0;i<7;i++){
        for(int j=0;j<1;j++){
            fprintf(fptr, " ");
        }
    }

}
void printsol(){
    FILE *fptr;
    fptr = fopen("atof.txt", "w");

    for(int i=0;i<7;i++){
        gap(fptr);
        for(int j=0;j<5;j++){
            char ch=printA[i][j];
            fprintf(fptr, "%c", ch);
            //printf("%c",ch);
        }
        gap(fptr);
        for(int j=0;j<5;j++){
            char ch=printB[i][j];
            fprintf(fptr, "%c", ch);
            //printf("%c",ch);
        }
        gap(fptr);
        for(int j=0;j<5;j++){
            char ch=printC[i][j];
            fprintf(fptr, "%c", ch);
            //printf("%c",ch);
        }
        fprintf(fptr,"\n");
        //printf("\n");
    }

    fprintf(fptr,"\n");
    //printf("\n");
    for(int i=0;i<7;i++){
        gap(fptr);
        for(int j=0;j<5;j++){
            char ch=printD[i][j];
            fprintf(fptr, "%c", ch);
            //printf("%c",ch);
        }
        gap(fptr);
        for(int j=0;j<5;j++){
            char ch=printE[i][j];
            fprintf(fptr, "%c", ch);
            //printf("%c",ch);
        }
        gap(fptr);
        for(int j=0;j<5;j++){
            char ch=printF[i][j];
            fprintf(fptr, "%c", ch);
            //printf("%c",ch);
        }
        fprintf(fptr,"\n");
        //printf("\n");
    }

    fclose(fptr);
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
/* Output in 'atof.txt' file:

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

