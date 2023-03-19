/**********************************************************
 Statement - Use structure within union
 Alter this program to calculate percentage of 5 students
 **********************************************************/
#include<stdio.h>
#include<conio.h>
void main() {
struct student {
   char name[30];
   char sex;
    int rollno;
    int total_marks;
    };
union details {
   struct student st;
    };
union details set;
printf("Enter details:");
printf("\nEnter name : ");
scanf("%s", set.st.name);
printf("\nEnter roll no : ");
scanf("%d", &set.st.rollno);
printf("\nEnter sex : ");
scanf("%c", &set.st.sex);
printf("\nEnter percentage :");
scanf("%d", &set.st.total_marks);
printf("\nThe student details are : \n");
printf("\name : %s", set.st.name);
printf("\nRollno : %d", set.st.rollno);
printf("\nSex : %c", set.st.sex);
printf("\nPercentage : %d", set.st.total_marks);
}
