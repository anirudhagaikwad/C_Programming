#include<stdio.h>

int main()
{

int a,b,c;


for(a=0;a<=11;a++)
{

for(b=0;b<=2;b++)
{
printf("*");
}

for(c=1;c <=5;c++)
{
 //maddle body of B
 if(((a>=0) && (a<2)) || ((a>4) && (a<7)) || ((a>9) && (a<=11)))
 {
  printf("**");
 }
 else
 {
  printf("  ");//two Space
 }

}

//last lane of B
//copy the b loop


for(b=0;b<=2;b++)
{
//delete & copy the af else of c loop
if(((a>=0) && (a< 2)) || ((a>4) && (a<7)) || ((a>9) && (a<=11)))
 {
  printf(" ");//one space
 }
 else
 {
  printf("*");
 }
}

printf("\n");
}

}
