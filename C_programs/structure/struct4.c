#include<stdio.h>
/* Structure as Function Argument
We can pass a structure as a function argument
just like we pass any other variable or an array as a function argument.
*/
struct Student
{
    char name[10];
    int roll;
};

void show(struct Student st)
{
    printf("\nstudent name is %s", st.name);
    printf("\nroll is %d", st.roll);
}

void main()
{
    struct Student std;
    printf("\nEnter Student record:\n");
    printf("\nStudent name:\t");
    scanf("%s", std.name);
    printf("\nEnter Student rollno.:\t");
    scanf("%d", &std.roll);
    show(std);
}


