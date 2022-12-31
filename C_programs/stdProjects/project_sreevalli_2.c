/* Student Full Name:SREEVALLI R
    College Name: BITM
    Stream:Computer Science
    */
#include<stdio.h>
#include<stdlib.h>
void prints(int i,FILE *fptr)
{
    int j;
  for(j=1;j<=5;j++)
 {
 if(i==1||i==3||i==5||(i==2&&j==1)||(i==4&&j==5))
 fprintf(fptr,"* ");
 else
 fprintf(fptr,"  ");
 }
}
void printr( int i,FILE *fptr)
{
    int j;
    for(j=1;j<=5;j++)
 {
      if(((i==1||i==3)&&j>0)||(i==4&&(j==1||j==4))||(i==5&&(j==1||j==5))||(i==2&&(j==1||j==5)))
fprintf(fptr,"* ");
 else
 fprintf(fptr,"  ");
 }
}
void printe( int i,FILE *fptr)
{
    int j;
    for(j=1;j<=5;j++)
 {
 if(i==1||i==3||i==5||j==1)
 fprintf(fptr,"* ");
 else
 fprintf(fptr,"  ");
 }
}
void printv(int i,FILE *fptr)
{
    int j;
    for(j=1;j<=5;j++)
 {
 if((j==1&&i<4)||(j==5&&i<4)||(i==4&&j==2)||(i==4&&j==4)||(i==5&&j==3))
 fprintf(fptr,"* ");
 else
 fprintf(fptr,"  ");
 }
}
void printa( int i,FILE *fptr){
    int j;
for(j=1;j<=5;j++)
 {
 if(j==1||j==5||i==1||i==3)
 fprintf(fptr,"* ");
 else
 fprintf(fptr,"  ");
 }

}
void printl(int i,FILE *fptr)
{
    int j;
    for(j=1;j<=5;j++)
 {
 if(i==5||j==1)
 fprintf(fptr,"* ");
 else
 fprintf(fptr,"  ");
 }
}
void printi( int i,FILE *fptr)
{
    int j;
    for(j=1;j<=5;j++)
 {
 if(i==1||i==5||j==3)
 fprintf(fptr,"* ");
 else
 fprintf(fptr,"  ");
 }
}
  void main()
  {
      FILE *fptr;
      fptr=fopen("sreevalli.txt","w");
  int i;
  for(i=1;i<=5;i++)
  {
  fprintf(fptr,"\t");
 prints(i,fptr);
 fprintf(fptr,"  ");
 printr(i,fptr);
 fprintf(fptr,"  ");
 printe(i,fptr);
 fprintf(fptr,"  ");
 printe(i,fptr);
 fprintf(fptr,"  ");
 printv(i,fptr);
 fprintf(fptr,"  ");
 printa(i,fptr);
 fprintf(fptr,"  ");
 printl(i,fptr);
 fprintf(fptr,"  ");
 printl(i,fptr);
 fprintf(fptr,"  ");
 printi(i,fptr);
 fprintf(fptr,"  ");
 fprintf(fptr,"\n");
 }
 }
