#include<stdio.h>
/*
Array of Structure
We can also declare an array of structure variables.
in which each element of the array will represent a structure variable.
*/
struct Employee
{
char ename[10];
int sal;
};

struct Employee emp[5];
int i, j;

void ask()
{
for(i = 0; i < 3; i++)
{
printf("\nEnter %dst Employee record:\n", i+1);
printf("\nEmployee name:\t");
scanf("%s", emp[i].ename);
printf("\nEnter Salary:\t");
scanf("%d", &emp[i].sal);
}
printf("\nDisplaying Employee record:\n");
for(i = 0; i < 3; i++)
{
printf("\nEmployee name is %s", emp[i].ename);
printf("\nSlary is %d", emp[i].sal);
}
}
void main()
{
    ask();
}
