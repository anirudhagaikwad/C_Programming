/*
Write a 'C' Program to calculate sum of non-diagonal elements of m X n matrix using dynamic memory allocation.
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
      int **a, row,col,i,j,s=0;
      printf("Enter Limit for Rows : ");
      scanf("%d",&row);
      printf("\nEnter Limit for Columns : ");
      scanf("%d",&col);
      a=(int **)malloc(row*sizeof(int*));
      for(i=0;i<row;i++)
      {
            a[i]=(int *)malloc(col*sizeof(int));
      }
      printf("\nEnter Elements for Matrix of Size %d*%d:\n\n",row,col);
      for(i=0;i<row;i++)
      {
            for(j=0;j<col;j++)
            {
                  scanf("%d",&a[i][j]);
            }
      }
      printf("\n%d*%d Matrix : \n\n",row,col);
      for(i=0;i<row;i++)
      {
            for(j=0;j<col;j++)
            {
                  printf("%3d ",a[i][j]);
            }
            printf("\n");
      }
      printf("\nNon-Diagonal Elements are: ");
      for(i=0;i<row;i++)
      {
            for(j=0;j<col;j++)
            {
                  if(i!=j)
                  {
                        printf("%d ",a[i][j]); //Minor diagonal not considered here
                        s=s+a[i][j];
                  }
            }
      }
      printf("\n\nSum of Non-Diagonal Elements in Matrix = %d",s);
      return 0;
}
