#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

//Functions
void mainMenu();
void checkBalance(float balance);
float moneyDeposit(float balance);
float moneyWithdraw(float balance);
void menuExit();
void errorMessage();


float view_balance();
float deposit_balance(float n);
float withdraw_balance(float n);

float view_balance()
{
    int num;
    FILE *fp;

    fp = fopen("bal.txt","r");
    while((num = getw(fp))!=EOF)
    {
        return num;
    }
}

float deposit_balance(float n)
{
    FILE *fp;
    fp = fopen("bal.txt","w");

    putw(n,fp);
    printf("Deposited Successfully");
    fclose(fp);
}

float withdraw_balance(float n)
{
    FILE *fp;
    fp = fopen("bal.txt","w");

    putw(n,fp);
    fclose(fp);
}



//Main Code
int main() {
    //Local Declarations
    int option;
    float balance;
    int choose;

    bool again = true;



    while (again) {
    mainMenu();

    printf("\t\t\t\t\t=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("\t\t\t\t\tYour Selection:\n\t\t\t\t\t");
    scanf("%d", &option);


        switch (option) {
            case 1:
            system("CLS");
                checkBalance(balance);
                break;
            case 2:
            system("CLS");
                balance = moneyDeposit(balance);
                break;
            case 3:
            system("CLS");
                balance = moneyWithdraw(balance);
                break;

            case 4:
            system("CLS");
                menuExit();
                return 0;

            default:
                errorMessage();
                break;
        }

        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("\t\t\t\t\tWould you like to do another transaction:\n");
        printf("\t\t\t\t\t< 1 > Yes\n");
        printf("\t\t\t\t\t< 2 > No\n\t\t\t\t\t");
        scanf("%d", &choose);

        system("CLS");



        if (choose == 2) {
            again = false;
            menuExit();

        }

}


    return 0;
}//main code


//Functions
void mainMenu() {

    printf("\t\t\t\t\t*******Hello!******\n\n");
    printf("\t\t\t\t\t***Welcome to ATM Banking****\n\n");
    printf("\t\t\t\t\t*Please choose one of the options below*\n\n");
    printf("\t\t\t\t\t< 1 >  Check Balance\n");
    printf("\t\t\t\t\t< 2 >  Deposit\n");
    printf("\t\t\t\t\t< 3 >  Withdraw\n");
    printf("\t\t\t\t\t< 4 >  Exit\n\n");

}//Main Menu

void checkBalance(float balance)
{
    printf("\t\t\t\t\tYou Choose to See your Balance\n");
    printf("\t\t\t\t\t****Your Available Balance is:   Rs%.2f\n\n", view_balance());


}//Check Balance

float moneyDeposit(float balance)
{
    float deposit;


    printf("\t\t\t\t\tYou choose to Deposit a money\n\t\t\t\t\t");
    printf("Your Balance is: Rs%.2f\n\n", view_balance());
    printf("\t\t\t\t\t**Enter your amount to Deposit\n\t\t\t\t\t");
    scanf("%f", &deposit);

    balance= view_balance() + deposit;
    printf("\n\t\t\t\t\t****Your New Balance is:   Rs%.2f\n\n\t\t\t\t\t", balance);
    deposit_balance(balance);


    return balance;

}//money deposit

float moneyWithdraw(float balance)
{

    float withdraw;
    bool back = true;
    printf("\t\t\t\t\tYou choose to Withdraw a money\n\t\t\t\t\t");
    printf("Your Balance is: Rs%.2f\n\n\t\t\t\t\t", view_balance());
    while (back) {
    printf("Enter your amount to withdraw:\n\t\t\t\t\t");
    scanf("%f", &withdraw);


    if (withdraw < view_balance())
    {
        back = false;
        balance -= withdraw;
        printf("\n\t\t\t\t\tYour withdrawing money is:  Rs%.2f\n\t\t\t\t\t", withdraw);
        printf("**Your New Balance is:   Rs%.2f\n\n\t\t\t\t\t", balance);
        withdraw_balance(balance);

    }

        else
    {

        printf("\t\t\t\t\t+++Insufficient Balance+++\n\t\t\t\t\t");
        printf("Please contact to your Bank Customer Services\n\t\t\t\t\t");
        printf("**Your Balance is:  Rs%.2f\n\n\t\t\t\t\t", view_balance());

    }

    }

    return balance;


}//money withdraw

void menuExit() {
    printf("\t\t\t\t\t--------------Take your receipt!!!------------------\n\t\t\t\t\t");
    printf("-----Thank you for using ATM Banking Machine!!!-----\n\t\t\t\t\t");



}//exit menu

void errorMessage() {;
    printf("\t\t\t\t\t+++!!!You selected invalid number!!!+++\n");
}//error message
