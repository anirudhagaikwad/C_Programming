/* Pascal's Triangle 
One of the most interesting Number Patterns is Pascal's Triangle (named after Blaise Pascal, a famous French Mathematician and Philosopher).
To build the triangle, start with "1" at the top, then continue placing numbers below it in a triangular pattern.
Each number is the numbers directly above it added together.

Patterns Within the Triangle
The first diagonal is, of course, just "1"s

The next diagonal has the Counting Numbers (1,2,3, etc).

The third diagonal has the triangular numbers

(The fourth diagonal, not highlighted, has the tetrahedral numbers.)*/

#include <stdio.h>
int main() {
//ceof= 
   int rows, coef = 1, space, i, j;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 0; i < rows; i++) {
      for (space = 1; space <= rows - i; space++)
         printf("  ");
      for (j = 0; j <= i; j++) {
         if (j == 0 || i == 0)
            coef = 1;
         else
            coef = coef * (i - j + 1) / j;
         printf("%4d", coef);
      }
      printf("\n");
   }
   return 0;
}
