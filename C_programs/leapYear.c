/* find leap year */
#include <stdio.h>
//#include <conio.h>

int main()
{
    int year;
   system("clear");
    printf("Enter the year : ");
    scanf("%d",&year);
    int temp=year/100;
    if(year%100==0)
    {
        if(temp%4==0)
        {
            printf("%d is leap year.",year);
        }
        else
        {
            printf("%d is ordinary year.",year);
        }
    }
    else
    {
        if(year%4==0)
        {
            printf("%d is leap year.",year);
        }
        else
        {
            printf("%d is ordinary year.",year);
        }
    }

    getch();
}
