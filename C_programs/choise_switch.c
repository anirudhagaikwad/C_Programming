/* */
#include<stdio.h>
void main( )
{
    int a, b, c, choice;
    while(choice != 3)
    {
        /* Printing the available options */
        printf("\n 1. Press 1 for addition");
        printf("\n 2. Press 2 for subtraction");
        printf("\n Enter your choice");
        /* Taking users input */
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter 2 numbers");
                scanf("%d%d", &a, &b);
                c = a + b;
                printf("%d", c);
                break;
            case 2:
                printf("Enter 2 numbers");
                scanf("%d%d", &a, &b);
                c = a - b;
                printf("%d", c);
                break;
            default:
                printf("you have passed a wrong key");
                printf("\n press any key to continue");
        }
    }
}
