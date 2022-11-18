/**********************************************************
 Statement - Find the size of a union
******************************************************/

#include <stdio.h>
#include <conio.h>

void main()
{
union sample
{
  int   m;
  float n;
  char  ch;
    };

union sample u;
printf("The size of union =%d\n", sizeof(u));
 /*initialization */
u.m = 25;
printf("%d %f %c\n", u.m, u.n,u.ch);
u.n = 0.2;
printf("%d %f %c\n", u.m, u.n,u.ch);
u.ch = 'p';
printf("%d %f %c\n", u.m, u.n,u.ch);
    getch();
}    	/*End of main() */
