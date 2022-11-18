/*
suppose we want to calculate the total marks of all students in a class.
We can do it by using a matrix.
Here, the number of rows will represent the number of students and the
number of columns will represent the subjects.

So first we'll input marks for the first student in all 3 subjects,
then the second and so on. We'll sum the marks rowwise and
store it in a separate array.
*/
#include <stdio.h>
int main()
{

     float marks[2][3], total[2];

     for(int i = 0; i < 2; i++) {
         for(int j = 0; j < 3; j++){
              scanf("%f", &marks[i][j]);
         }
     }

     for(int i = 0; i < 2; i++) {
         float sum = 0;
         for(int j = 0; j < 3; j++){
              sum += marks[i][j];
         }
         total[i] = sum;
     }

     for(int i = 0; i < 2; i++)
         printf("%d : %f\n", i + 1, total[i]);

     return 0;
}
