/*NAME:SUSHMALEKHA.M
COLLEGE:BALLARI INSTITUTE OF TECHNOLOGY AND MANAGEMENT
BRANCH:COMPUTER SCIENCE AND ENGINEERING*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>

int printAS[5][5];
int printAU[5][5];
int printAS1[5][5];
int printAH[5][5];
int printAM[5][5];
int printAA[5][5];

void gap()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<1;j++)
        {
            printf(" ");
        }

    }
}




void printconsole()
{
    int k=1;
    do
    {



    for(int i=0;i<5;i++)
    {
        gap();
        for(int j=0;j<5;j++)
        {

            char ch=printAS[i][j];



            printf("%c",ch);
        }



        gap();
        for(int j=0;j<5;j++)
        {
            char ch=printAU[i][j];

            printf("%c",ch);

        }


        gap();
        for(int j=0;j<5;j++)
        {
            char ch=printAS1[i][j];

            printf("%c",ch);

        }

        gap();
        for(int j=0;j<5;j++)
        {
            char ch=printAH[i][j];

            printf("%c",ch);

        }

        gap();
        for(int j=0;j<5;j++)
        {
            char ch=printAM[i][j];

            printf("%c",ch);
        }
        gap();
        for(int j=0;j<5;j++)
        {
            char ch=printAA[i][j];

            printf("%c",ch);
        }
        printf("\n");

    }
    sleep(0);
    system("cls");
    sleep(0);

    printf("\n\n\n");

 k++;
    }while(k!=0);

}




void s()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if((i==0)||(i==1&&j==0)||(i==2)||(i==3&&j==4)||(i==4))
            {
                printAS[i][j]=42;
            }
            else
            {
                printAS[i][j]=32;
            }
        }

    }
}





void u()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if((i>=0&&i<=3&&(j==0||j==4)||(i==4)))
            {
                printAU[i][j]=42;
            }
            else
            {
                printAU[i][j]=32;
            }
        }

    }
}
void s1()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if((i==0)||(i==1&&j==0)||(i==2)||(i==3&&j==4)||(i==4))
            {
                printAS1[i][j]=42;
            }
            else
            {
                printAS1[i][j]=32;
            }
        }

    }
}

void h()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if((i>=0&&i<=1&&j!=1&&j!=2&&j!=3)||(i==2)||(i>=3&&i<=4&&j!=1&&j!=2&&j!=3))
            {
                printAH[i][j]=42;
            }
            else
            {
                printAH[i][j]=32;
            }
        }

    }
}



void m()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if((i==0&&j==0||j==4)||(i==1&&j!=2)||(i==2&&j!=1&&j!=3)||(i>=3&&i<=4&&j==0||j==4))
            {
                printAM[i][j]=42;
            }
            else
            {
                printAM[i][j]=32;
            }
        }

    }
}


void a()
{

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if((i==0)||(i==1&&j==0||j==4)||(i==2)||(i>=3&&i<=4&&j==0||j==4))
            {
                printAA[i][j]=42;
            }
            else
            {
                printAA[i][j]=32;

            }
    }
}
}



int main()
{

system("color 3f");


    s();
    u();
    s1();
    h();
    m();
    a();
    printconsole();

}
