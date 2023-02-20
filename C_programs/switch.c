/* How to write below program using Switch Case */
#include<stdio.h>
#include<string.h>

void calGrde(){
int per;
char grade;
puts("\n Enter Your Percentage : ");
scanf("%d",&per);fflush(stdin);
if(per>90 && per<=100){grade='A';}
else if(per>80 && per<=90){grade='B';}
else if(per>70 && per<=80){grade='C';}
else if(per>60 && per<=70){grade='D';}
else if(per>50 && per<=60){grade='E';}
else if(per>1 && per<=50){grade='F';}
printf("\n Your grade is : %c ",grade);
}

void calGrade(){
int per;
char grade;
puts("\n Enter Your Percentage : ");
scanf("%d",&per);fflush(stdin);
switch(per){
case 90 ... 100 : grade='A';break;
case 80 ... 89 : grade='B';break;
case 70 ... 79 : grade='C';break;
case 60 ... 69 : grade='D';break;
case 50 ... 59 : grade='E';break;
case 1 ... 49 : grade='F';break;
default : grade='N';break;
}
printf("\n Your grade is : %c ",grade);
}
