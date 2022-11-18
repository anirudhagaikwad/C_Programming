//credit by sushmalekha
#include<stdio.h>
#include<conio.h>
struct employee
{
int id;
char name[20];
int january;
int february;
int march;
int april;
int may;
int june;
int july;
int august;
int september;
int october;
int november;
int december;
}e[10];
void main()
{
for(int i=0;i<2;i++)
{
printf("\nenter employee %d ID:",i+1);
scanf("%d",&e[i].id);
printf("\nnter employee name:");
scanf("%s",e[i].name);
printf("\nenter attendance for each month");
printf("\nJANUARY:");

scanf("%d",&e[i].january);
printf("\nFEBRUARY:");
scanf("%d",&e[i].february);

printf("\nMARCH:");
scanf("%d",&e[i].march);
printf("\nAPRIL:");
scanf("%d",&e[i].april);
printf("\nMAY:");
scanf("%d",&e[i].may);
printf("\nJUNE:");
scanf("%d",&e[i].june);
printf("\nJULY:");
scanf("%d",&e[i].july);
printf("\nAUGUST:");
scanf("%d",&e[i].august);
printf("\nSEPTEMBER:");
scanf("%d",&e[i].september);
printf("\nOCTOBER:");
scanf("%d",&e[i].october);
printf("\nNOVEMBER:");
scanf("%d",&e[i].november);
printf("\nDECEMBER:");
scanf("%d",&e[i].december);


}

system("cls");
printf("\n*****************************************************************************************************************************");
printf("\n                                                  EMPLOYEE MONTHLY ATTENDANCE                                                ");
printf("\n*****************************************************************************************************************************");
for(int i=0;i<2;i++)
{
printf("\n*****************************************************************************************************************************");
printf("\n                      ID: %d                                                              NAME: %s                            ",e[i].id,e[i].name);
printf("\n*****************************************************************************************************************************");
printf("\n                      MONTHS            TOTAL WORKING DAYS                  PRESENT                         ABSENT                             ");
printf("\n                     JANUARY                     26                           %d                              %d             ",e[i].january,26-e[i].january);
printf("\n                     FEBRUARY                    26                           %d                              %d             ",e[i].february,26-e[i].february);
printf("\n                     MARCH                       26                           %d                              %d             ",e[i].march,26-e[i].march);
printf("\n                     APRIL                       26                           %d                              %d             ",e[i].april,26-e[i].april);
printf("\n                     MAY                         26                           %d                              %d             ",e[i].may,26-e[i].may);
printf("\n                     JUNE                        26                           %d                              %d             ",e[i].june,26-e[i].june);
printf("\n                     JULY                        26                           %d                              %d             ",e[i].july,26-e[i].july);
printf("\n                     AUGUST                      26                           %d                              %d             ",e[i].august,26-e[i].august);
printf("\n                     SEPTEMBER                   26                           %d                              %d             ",e[i].september,26-e[i].september);
printf("\n                     OCTOBER                     26                           %d                              %d             ",e[i].october,26-e[i].october);
printf("\n                     NOVEMBER                    26                           %d                              %d             ",e[i].november,26-e[i].november);
printf("\n                     DECEMBER                    26                           %d                              %d             ",e[i].december,26-e[i].december);


}
}
