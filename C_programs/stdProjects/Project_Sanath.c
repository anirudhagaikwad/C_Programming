/*
STUDENT FULL NAME : SANATH YERGOL
COLLEGE NAME : BALLARI INSTITUTE OF TECHNOLOGY AND MANAGEMENT
STREAM : COMPUTER SCIENCE
*/
#include <stdio.h>
int printA[7][5];
int printB[7][5];
int printT[7][5];
int printH[7][5];
int printA1[7][5];
int printS[7][5];
int printN[7][7];

void gap(){
for(int i=0;i<7;i++){
    for(int j=0;j<1;j++)
    {
        printf(" ");
    }
}
} //end gap()

void printConsole(){
for(int i=0;i<7;i++){
        gap();
    for(int j=0;j<5;j++){
     char ch=printS[i][j];
     printf("%c",ch);
    }
    gap();
    for(int j=0;j<5;j++){
        char ch=printA[i][j];
        printf("%c",ch);
    }
    gap();
    for(int j=0;j<7;j++){
     char ch=printN[i][j];
     printf("%c",ch);
    }
 gap();
    for(int j=0;j<5;j++){
     char ch=printA1[i][j];
     printf("%c",ch);
    }
    gap();
    for(int j=0;j<5;j++){
        char ch=printT[i][j];
        printf("%c",ch);
    }


    gap();
    for(int j=0;j<5;j++){
        char ch=printH[i][j];
        printf("%c",ch);
    }

    printf("\n");
} // end top most for

} // end printConsole()
void S(){
    system("color \9");
for(int i=0;i<7;i++){
    for(int j=0;j<5;j++){
        if(i==0 || j==0&&i<3 || i==3|| j==4&&i>2|| i==6){
            printS[i][j]=83;
        }
        else{
            printS[i][j]=32;
        }
    }
}
}

void A(){
for(int i=0;i<7;i++){
    for(int j=0;j<5;j++){
        if(((j==0 || j==4)&&(i!=0)) || ((i==0 || i==3)&&(j>0 && j<4))){
            printA[i][j]=65;
        }
        else{
            printA[i][j]=32;
        }
    }
}
}
void A1(){
for(int i=0;i<7;i++){
    for(int j=0;j<5;j++){
        if(((j==0 || j==4)&&(i!=0)) || ((i==0 || i==3)&&(j>0 && j<4))){
            printA1[i][j]=65;
        }
        else{
            printA1[i][j]=32;
        }
    }
}
}



void T(){
for(int i=0;i<7;i++){
    for(int j=0;j<5;j++){
        if(i==0 || j==2){
            printT[i][j]=84;
        }
        else{
            printT[i][j]=32;
        }
    }
}
}
void H(){
for(int i=0;i<7;i++){
    for(int j=0;j<5;j++){
        if(j==0 || i==3 || j==4){
            printH[i][j]=72;
        }
        else{
            printH[i][j]=32;
        }
    }
}
}
void N(){
for(int i=0;i<7;i++){
    for(int j=0;j<7;j++){
        if(j==0 || j==6 || i==1&&j==1 || i==2&&j==2 || i==3&&j==3 || i==4&&j==4 || i==5&&j==5 ){
            printN[i][j]=78;
        }
        else{
            printN[i][j]=32;
        }
    }
}
}




void main(){
S();
A();
N();
A1();
T();
H();

printConsole();
}
