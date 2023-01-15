#include <stdio.h>
int deposit, withdraw, amount;
int choice, pin, k=0, t, a,y;
char transaction ='y';
clrscr() ;

int view_balance();
int deposit_balance(int n);
int withdraw_balance(int n);
int pin_read();
int pin_write(int n);

int view_balance()
{
    int num;
    FILE *fp;

    fp = fopen("bal.txt","r");
    while((num = getw(fp))!=EOF)
    {
        return num;
    }
}

int deposit_balance(int n)
{
    FILE *fp;
    fp = fopen("bal.txt","w");

    putw(n,fp);
    fclose(fp);
}

int withdraw_balance(int n)
{
    FILE *fp;
    fp = fopen("bal.txt","w");

    putw(n,fp);
    fclose(fp);
}


int pin_read()
{
    int num;
    FILE *fp;

    fp = fopen("pin.txt","r");
    while((num = getw(fp))!=EOF)
    {
        return num;
    }
}

int pin_write(int n)
{
    FILE *fp;
    fp = fopen("pin.txt","w");

    //printf("Pin Updated");
    putw(n,fp);
    fclose(fp);
}



void main()
{
    while (pin != pin_read())
    {
        printf("ENTER YOUR SECRET PIN NUMBER:");
        scanf("%d", &pin);
        if (pin != pin_read())
        printf("PLEASE ENTER VALID PASSWORD\n");
    }
    do
    {
        MainMenu:
        printf("==========Welcome to ATM Service==========\n");
        printf("||1. CHECK BALANCE ||\n");
        printf("||2. WITHDRAW CASH ||\n");
        printf("||3. DEPOSIT CASH ||\n");
        printf("||4. GENERATE PIN ||\n");
        printf("||5. QUIT ||\n");
        printf("==========================================\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                amount = view_balance();
                printf("\n YOUR BALANCE IN Rs : %d ", amount);
                    break;
            case 2:
                printf("\n ENTER THE AMOUNT TO WITHDRAW: ");
                scanf("%d", &withdraw);

                if (withdraw % 100 != 0)
                {
                    printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");
                }
                else if (withdraw >(amount - 500))
                {
                    printf("\n INSUFFICENT BALANCE");
                }
                else
                {
                    amount = view_balance() - withdraw;
                    printf("\n\n PLEASE COLLECT CASH");
                    printf("\n YOUR CURRENT BALANCE IS: %d", amount);
                    withdraw_balance(amount);
                }
                    break;
            case 3:
                printf("\n ENTER THE AMOUNT TO DEPOSIT:");
                scanf("%d", &deposit);
                amount = view_balance() + deposit;
                printf("YOUR BALANCE IS : %d", amount);
                deposit_balance(amount);
                    break;
            case 4:
                printf("Your old pin is %d\n",pin_read());
                printf("Enter your new 4 digit pin- ");
                scanf("%d",&pin);
                pin_write(pin);

            case 5:
                printf("\n THANK YOU FOR USING ATM SERVICE");
                exit(1);
                    break;
            default:
                printf("\n INVALID CHOICE");
        }

        printf("\n\n\n DO U WISH TO HAVE ANOTHER TRANSCATION?(y/n): \n");
        fflush(stdin);
        scanf("%c", &transaction);
        if (transaction == 'n'|| transaction == 'N')
        {
            printf("\n\n THANK YOU FOR USING ATM SERVICE");
        }
        else if(transaction == 'y'|| transaction == 'Y')
        {
            goto MainMenu;
        }
        else
            printf("invalid choice");
                break;

    } while (!k);
}
