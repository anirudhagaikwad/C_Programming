/*STUDENT NAME: POOJA KANDARI
  COLLEGE NAME: BITM
  STREAM: CSE*/
#include<stdio.h>
#include<conio.h>
void printP(int i,FILE *fptr)
{
    int j;
        printf("\t");
        for(j=0;j<5;j++)
        {
            if((j==0&&i>=0)||((i==0||i==3)&&j>0)||(j==4&&(i==0||i<4)))
                fprintf(fptr,"* ");
            else
                fprintf(fptr,"  ");
        }
}
void printO(int i,FILE *fptr)
{
    int j;
 for(j=0;j<5;j++)
        {
            if(((i==0||i==6)&&j>0)||((j==0||j==4)&&i>=0))
                fprintf(fptr,"* ");
            else
                fprintf(fptr,"  ");
        }
}
void printJ(int i,FILE *fptr)
{
    int j;
 for(j=0;j<5;j++)
        {
            if((i==0&&j>=0)||(j==2&&i>=0)||(j==0&&(i>=4&&i<=6))||(i==6&&(j>=0&&j<=2)))
                fprintf(fptr,"* ");
            else
                fprintf(fptr,"  ");
        }
}
void printA(int i,FILE *fptr)
{
    int j;
  for(j=0;j<5;j++)
        {
            if((i==0&&j==2)||(i==1&&(j==1||j==3))||(i==2&&(j==0||j==4))||(i==3&&j>0)||(j==0&&(i>=3&&i<=6))||(j==4&&(i>=3&&i<=6)))
                fprintf(fptr,"* ");
            else
                fprintf(fptr,"  ");
        }
}
void main()
{
    FILE *fptr;
    fptr=fopen("projectpooja.txt","w");
    int i;
    for(i=0;i<7;i++)
    {
     fprintf(fptr,"\t");
     printP(i,fptr);
     fprintf(fptr,"  ");
     printO(i,fptr);
     fprintf(fptr,"  ");
     printO(i,fptr);
     fprintf(fptr,"  ");
     printJ(i,fptr);
     fprintf(fptr," ");
     printA(i,fptr);
     fprintf(fptr,"  ");
     fprintf(fptr,"\n");
    }

}
