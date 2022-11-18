/**
 * C program to access two dimensional array using pointer.
 */

#include <stdio.h>
#define ROWS 3
#define COLS 3

void inputMatrix(int matrix[][COLS], int rows, int cols)
{
int i, j;
for(i = 0; i < rows; i++)
{
for(j = 0; j < cols; j++)
{
// (*(matrix + i) + j is equivalent to &matrix[i][j]
scanf("%d", (*(matrix + i) + j));
}
}
}

void printMatrix(int (*matrix)[COLS], int rows, int cols)
{
int i, j;
for (i = 0; i < rows; i++)
{
for (j = 0; j < cols; j++)
{
// *(*(matrix + i) + j) is equivalent to matrix[i][j]
printf("%d ", *(*(matrix + i) + j));
}
printf("\n");
    }
}

int main()
{
int matrix[ROWS][COLS];
int i, j;
/* Input elements in matrix */
printf("Enter elements in %dx%d matrix.\n", ROWS, COLS);
inputMatrix(matrix, ROWS, COLS);
/* Print elements in matrix */
printf("Elements of %dx%d matrix.\n", ROWS, COLS);
printMatrix(matrix, ROWS, COLS);
    return 0;
}
