#include<stdio.h>
void main()
{
    int arr[3][4];
    int i, j, k;
    printf("Enter array elements:\n");
    for(i = 0; i < 3;i++)
    {
        for(j = 0; j < 4; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
           printf("%d", arr[i][j]);
        }
    }
}
