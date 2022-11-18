/*Statement - Multilevel Pointer
A pointer is pointer to another pointer which can be pointer to others pointers
and so on is known as multilevel pointers.
We can have any level of pointers.
 **********************************************************/


#include<stdio.h>
#include<conio.h>

void main(){
int s=2,*r=&s;
int **q=&r,***p=&q;
printf("%d",p[0][0][0]);
getch();
}
