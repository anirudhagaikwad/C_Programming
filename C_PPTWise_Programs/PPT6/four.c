/*
C Program to implement Tower Of Hanoi using Recursion.
*/

#include <stdio.h>
#include <conio.h>

void hanoi(char,char,char,int);
int main()
{
        int num;

        printf("Enter No. of Disks u want :: ");
        scanf("%d",&num);
        printf("\nTower of Hanoi for %d number of disks are :: \n", num);
        hanoi('A','B','C',num);

        return 0;
}

void hanoi(char from,char to,char other,int n)
{
        if(n<=0)
                printf("\nPlease Provide at least one disk !!!!\n ");

        if(n==1)
                printf("\nMove Disk from %c to %c\n",from,other);

        if(n>1)
        {
                hanoi(from,other,to,n-1);
                hanoi(from,to,other,1);
                hanoi(to,from,other,n-1);
        }
}
