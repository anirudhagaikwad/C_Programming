/*Write a C program to accept details of 'n' employee(eno, ename, salary) and display the details of employee having highest salary. Use array of structure.
*/
#include<stdio.h>
struct employee
{
     int eno;
     char ename[20];
     int salary;
}emp[10];
int main()
{
     int i,high,n;
     printf("/*How many employee info\nyou want to accept : ");
     printf("Enter Limit: ");
     scanf("%d",&n);
     printf("-----------------------------\n");
     printf("Enter details for %d employees:",n);
     printf("\n-----------------------------\n");
     for(i=0;i<n;i++)
     {
          printf("Employee Number: ");
          scanf("%d",&emp[i].eno);
          printf("Name           : ");
          scanf("%s",emp[i].ename);
          printf("Salary         : ");
          scanf("\n %d",&emp[i].salary);
          printf("-----------------------------\n");
     }
     high=emp[0].salary;
     for(i=0;i<n;i++)
     {
          if(emp[i].salary>high)
          high=emp[i].salary;
     }
     printf("Highest salary employee details:");
     printf("\n-----------------------------\n");
     printf("EMPNO    NAME  SALARY\n");
     for(i=0;i<n;i++)
     {
          if(emp[i].salary==high)
          printf("\n %d\t%s\t%d",emp[i].eno,emp[i].ename,emp[i].salary);
     }
     return 0;
}
