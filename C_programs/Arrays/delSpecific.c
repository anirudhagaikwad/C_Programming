/*******************************************************
 Statement - Delete the specified integer from the list.
 *******************************************************/

#include <stdio.h>
#include <conio.h>

void main()
{
   	int  vectx[10];
    int  i=0, n=0, pos=0, element=0, found = 0;
    clrscr();

    printf("Enter how many elements\n");
   	scanf("%d", &n);

    printf("Enter the elements\n");
  	 for(i=0; i<n; i++)
     {
         scanf("%d", &vectx[i]);
     }

   	printf("Input array elements are\n");
    for(i=0; i<n; i++)
    {
        printf("%d\n", vectx[i]);
    }

    printf("Enter the element to be deleted\n");
   	scanf("%d",&element);

    for(i=0; i<n; i++)
   	{
        if ( vectx[i] == element)
        {
            found = 1;
            pos = i;
            break;
        }
    }

    if (found == 1)
    {
        for(i=pos; i< n-1; i++)
        {
            vectx[i] = vectx[i+1];
        }

        printf("The resultant vector is \n");
        for(i=0; i<n-1; i++)
        {
            printf("%d\n",vectx[i]);
        }
    }
    else
    {
        printf("Element %d is not found in the vector\n", element);
    }
    getch();

}
