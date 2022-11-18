/*STUDENT NAME: POOJA KANDARI
  COLLEGE NAME: BITM
  STREAM: CSE*/
#include<stdio.h>
#include<conio.h>
void printP(int i)
{
    int j;
        printf("\t");
        for(j=0;j<5;j++)
        {
            if((j==0&&i>=0)||((i==0||i==3)&&j>0)||(j==4&&(i==0||i<4)))
                printf("* ");
            else
                printf("  ");
        }
}
void printO(int i)
{
    int j;
 for(j=0;j<5;j++)
        {
            if(((i==0||i==6)&&j>0)||((j==0||j==4)&&i>=0))
                printf("* ");
            else
                printf("  ");
        }
}
void printJ(int i)
{
    int j;
 for(j=0;j<5;j++)
        {
            if((i==0&&j>=0)||(j==2&&i>=0)||(j==0&&(i>=4&&i<=6))||(i==6&&(j>=0&&j<=2)))
                printf("* ");
            else
                printf("  ");
        }
}
void printA(int i)
{
    int j;
  for(j=0;j<5;j++)
        {
            if((i==0&&j==2)||(i==1&&(j==1||j==3))||(i==2&&(j==0||j==4))||(i==3&&j>0)||(j==0&&(i>=3&&i<=6))||(j==4&&(i>=3&&i<=6)))
                printf("* ");
            else
                printf("  ");
        }
}
void main()
{
    int i;
    for(i=0;i<7;i++)
    {
     printf("\t");
     printP(i);
     printf("  ");
     printO(i);
     printf("  ");
     printO(i);
     printf("  ");
     printJ(i);
     printf(" ");
     printA(i);
     printf("  ");
     printf("\n");
    }

}
