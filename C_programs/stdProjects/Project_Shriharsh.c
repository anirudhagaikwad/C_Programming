/*
STUDENT FULL NAME : SHRIHARSH JOSHI
COLLEGE NAME : BALLARI INSTITUTE OF TECHNOLOGY AND MANAGEMENT
STREAM : COMPUTER SCIENCE
*/
#include <stdio.h>
int printS[7][5];
int printS1[7][5];
int printH[7][5];
int printR[7][5];
int printI[7][5];
int printH1[7][5];
int printA[7][5];
int printR1[7][5];
int printH2[7][5];

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
     char ch=printH[i][j];
     printf("%c",ch);
    }
       gap();
    for(int j=0;j<5;j++){
     char ch=printR[i][j];
     printf("%c",ch);
    }
    gap();
    for(int j=0;j<5;j++){
     char ch=printI[i][j];
     printf("%c",ch);
    }
    gap();
    for(int j=0;j<5;j++){
     char ch=printH1[i][j];
     printf("%c",ch);
    }
    gap();
    for(int j=0;j<5;j++){
     char ch=printA[i][j];
     printf("%c",ch);
    }
    gap();
    for(int j=0;j<5;j++){
     char ch=printR1[i][j];
     printf("%c",ch);
    }
    gap();
    for(int j=0;j<5;j++){
     char ch=printS1[i][j];
     printf("%c",ch);
    }
    gap();
    for(int j=0;j<5;j++){
     char ch=printH2[i][j];
     printf("%c",ch);
    }
    printf("\n");
} // end top most for

} // end printConsole()

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
void H1(){
for(int i=0;i<7;i++){
    for(int j=0;j<5;j++){
        if(j==0 || i==3 || j==4){
            printH1[i][j]=72;
        }
        else{
            printH1[i][j]=32;
        }
    }
}
}
void H2(){
for(int i=0;i<7;i++){
    for(int j=0;j<5;j++){
        if(j==0 || i==3 || j==4){
            printH2[i][j]=72;
        }
        else{
            printH2[i][j]=32;
        }
    }
}
}
void R()
{
    for(int i=0;i<7;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(j==0 || i==0 || j==4 && i<4 || i==3 || i==4 && j==1 || i==5 && j==2 || i==6 && j==3 ){
            //if(j==0 || i==0 || j==4 && i<4 || i==3 || i==4 && j==1 || i==5 && j==2 || i==6 && j==3 ){
                printR[i][j]=82;
            }
            else{
                printR[i][j]=32;
            }
        }
    }
}
void R1()
{
    for(int i=0;i<7;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(j==0 || i==0 || j==4 && i<4 || i==3 || i==4 && j==1 || i==5 && j==2 || i==6 && j==3 ){

                printR1[i][j]=82;
            }
            else{
                printR1[i][j]=32;
            }
        }
    }
}
void I()
{
    for(int i=0;i<7;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(i==0 || j==2 || i==6){
                printI[i][j]=73;
            }
            else{
                printI[i][j]=32;
            }
        }
    }
}
void S1(){
    system("color \A");
for(int i=0;i<7;i++){
    for(int j=0;j<5;j++){
        if(i==0 || j==0&&i<3 || i==3|| j==4&&i>2|| i==6){
            printS1[i][j]=83;
        }
        else{
            printS1[i][j]=32;
        }
    }
}
}






void main(){
S();
H();
R();
I();
H1();
A();
R1();
S1();
H2();
printConsole();
}
