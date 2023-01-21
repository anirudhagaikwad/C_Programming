/*
C program to perform the ATM Transactions.

Here, we will implement an ATM transactions program that will perform the operations like check the balance, withdraw the amount, and deposit the amount to the bank

*/
#include <stdio.h>
#include <stdlib.h>

int pin = 0;

void readPin()
{
    while (1) {
        printf("Enter PIN: ");
        scanf("%d", &pin);

        if (pin == 1234)
            break;
        printf("Please enter valid PIN number\n");
    }
}

int main()
{
    int option = 0;

    char flag = 'y';

    unsigned long amount = 15000;
    unsigned long deposit = 0;
    unsigned long withdraw = 0;

    readPin();

    do {
        printf("\n\n********Welcome to ATM Service**************\n");
        printf("\t1. Balance Enquiry\n");
        printf("\t2. Cash Withdrawal\n");
        printf("\t3. Deposit Amount\n");
        printf("\t4. Exit\n");
        printf("******************?**************************?*\n\n");

        printf("Enter your choice: ");
        scanf("%d", &option);

        switch (option) {
        case 1:
            printf("\nYour current balance is: %lu rs", amount);
            break;

        case 2:
            printf("\nEnter Amount: ");
            scanf("%lu", &withdraw);

            if (withdraw % 100 != 0) {
                printf("\nEnter amount in muliple of 100");
            }
            else if (withdraw > amount) {
                printf("\nInsufficent balance");
            }
            else {
                amount = amount - withdraw;
                printf("\n\nPlease collect your cash");
                printf("\nYour current balance is: %lu", amount);
            }
            break;

        case 3:
            printf("\nEnter amount to deposit: ");
            scanf("%lu", &deposit);

            amount = amount + deposit;

            printf("Your balance is: %lu", amount);
            break;

        case 4:
            printf("\nThank you for using ATM");
            exit(0);
            break;

        default:
            printf("\nSelect correct option");
        }
    } while (1);

    return 0;
}
