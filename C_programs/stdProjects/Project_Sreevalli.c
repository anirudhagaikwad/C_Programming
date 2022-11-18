/* Student Full Name:SREEVALLI R
    College Name: BITM
    Stream:Computer Science
    */
#include<stdio.h>
#include<stdlib.h>
  void main()
  {
  int i,j;
  for(i=1;i<=5;i++)
  {
  printf("\t");
  for(j=1;j<=5;j++)
 {
 if(i==1||i==3||i==5||(i==2&&j==1)||(i==4&&j==5))
 printf("* ");
 else
 printf("  ");
 }
 printf("  ");
 for(j=1;j<=5;j++)
 {
      if(((i==1||i==3)&&j>0)||(i==4&&(j==1||j==4))||(i==5&&(j==1||j==5))||(i==2&&(j==1||j==5)))
printf("* ");
 else
 printf("  ");
 }
 printf("  ");
 for(j=1;j<=5;j++)
 {
 if(i==1||i==3||i==5||j==1)
 printf("* ");
 else
 printf("  ");
 }
 printf("  ");
 for(j=1;j<=5;j++)
 {
 if(i==1||i==3||i==5||j==1)
 printf("* ");
 else
 printf("  ");
 }
 printf("  ");
 for(j=1;j<=5;j++)
 {
 if((j==1&&i<4)||(j==5&&i<4)||(i==4&&j==2)||(i==4&&j==4)||(i==5&&j==3))
 printf("* ");
 else
 printf("  ");
 }
 printf("  ");
 for(j=1;j<=5;j++)
 {
 if(j==1||j==5||i==1||i==3)
 printf("* ");
 else
 printf("  ");
 }
 printf("  ");
 for(j=1;j<=5;j++)
 {
 if(i==5||j==1)
 printf("* ");
 else
 printf("  ");
 }
 printf("  ");
 for(j=1;j<=5;j++)
 {
if(i==5||j==1)
 printf("* ");
 else
 printf("  ");
 }
 printf("  ");
 for(j=1;j<=5;j++)
 {
 if(i==1||i==5||j==3)
 printf("* ");
 else
 printf("  ");
 }
 printf("  ");
 printf("\n");
 }
 }
