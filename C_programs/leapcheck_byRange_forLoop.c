/* Check leap year in a range give by user */
#include <stdio.h>
#include <conio.h>

void main(){
    int year;
    int min_year,max_year;
 //   clrscr();

    printf("Enter the lowest year: ");
    scanf("%d",&min_year);

    printf("Enter the heighest year: ");
    scanf("%d",&max_year);

    printf("Leap years in given range are: ");
    for(year = min_year;year <= max_year; year++){
         if(((year%4==0)&&(year%100!=0))||(year%400==0))
             printf("%d ",year);
    }

    getch();
}
