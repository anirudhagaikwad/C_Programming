/*
  Student Full Name:SOUPARNI.A
  College Name:BITM
  Stream:Computer Science
  */
#include<stdio.h>
#include<conio.h>
int main()
{

     system("cls");
     system("COLOR A4");

    int space=1,a[5][5],row,col;
    for(row=1;row<=5;row++){
        for(col=1;col<=5;col++){
                if(row==1||row==3||row==5||(row==2&&col==1)||(row==4&&col==5))
            printf("* ");
        else
            printf("  ");
        }
        for(space=1;space<=3;space++)
            printf(" ");
        for(col=1;col<=5;col++){
            if(col==1||col==5||row==1||row==5)
            printf("* ");
        else
            printf("  ");
        }
        for(space=1;space<=3;space++)
            printf(" ");
        for(col=1;col<=5;col++){
            if(col==1||col==5||row==5)
            printf("* ");
        else
            printf("  ");
        }
        for(space=1;space<=3;space++)
            printf(" ");
        for(col=1;col<=5;col++){
            if(col==1||row==1||row==3||(row==2&&col==5))
            printf("* ");
        else
            printf("  ");
        }
        for(space=1;space<=3;space++)
            printf(" ");
        for(col=1;col<=5;col++){
            if(col==1||col==5||row==1||row==3)
            printf("* ");
        else
            printf("  ");
        }
        for(space=1;space<=3;space++)
            printf(" ");
        for(col=1;col<=5;col++){
                if(col==1||row==1||row==3||(row==2&&col==5)||(row==4&&col==3)||(row==5&&col==5))
            printf("* ");
        else
            printf("  ");
        }
        for(space=1;space<=3;space++)
            printf(" ");
        for(col=1;col<=5;col++){
                if(col==1||col==5||(row==2&&col==2)||(row==3&&col==3)||(row==4&&col==4))
            printf("* ");
        else
            printf("  ");
        }
        for(space=1;space<=3;space++)
            printf(" ");
        for(col=1;col<=5;col++){
            if(row==1||row==5||col==3)
            printf("* ");
        else
            printf("  ");
        }
        printf("\n");
    }



}
