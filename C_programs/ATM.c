#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#define BUFFER_SIZE 500000
#define BALANCE 40000.52

void readFile(FILE * fPtr)
{
char ch;
do
{
ch = fgetc(fPtr);
putchar(ch);
} while (ch != EOF);

}
//Main Code
int main() {
//Local Declarations
int option;
float balance = 420000.00;
int choose;

bool again = true;



while (again) {
mainMenu();

printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
printf("Your Selection:\t");
scanf("%d", &option);

/*  switch (option) {
case 1:
system("CLS");
checkBalance(BALANCE);
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
} */



printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
printf("Would you like to do another transaction:\n");
printf("< 1 > Yes\n");
printf("< 2 > No\n");
scanf("%d", &choose);

system("CLS");

moneyDeposit(BALANCE);

/*
if (choose == 2) {
again = false;
menuExit();

}*/

}


return 0;
}//main code


//Functions
void mainMenu() {

printf("*******Hello!******\n");
printf("***Welcome to ATM Banking****\n\n");
printf("*Please choose one of the options below*\n\n");
printf("< 1 > Check Balance\n");
printf("< 2 > Deposit\n");
printf("< 3 > Withdraw\n");
printf("< 4 > Exit\n\n");

}//Main Menu

/*
void checkBalance(float balance)
{
FILE* fm;
fm = fopen("bal.txt", "r");
printf("You Choose to See your Balance\n");
printf("\n\n****Your Available Balance is: Rs%.2f\n\n", balance);
fclose(fm);

}//Check Balance
*/

void moneyDeposit(float balance)
{
/* File pointer to hold reference of input file */
FILE *fPtr;
char filePath[100];
char dataToAppend[BUFFER_SIZE];
/*  Open all file in append mode. */
fPtr = fopen("atm.txt", "a");
/* fopen() return NULL if unable to open file in given mode. */
if (fPtr == NULL)
{
/* Unable to open file hence exit */
printf("\nUnable to open '%s' file.\n", filePath);
printf("Please check whether file exists and you have write privilege.\n");
exit(EXIT_FAILURE);
}
/* Input data to append from user */
printf("\nEnter Amount to diposit: ");
fflush(stdin);          // To clear extra white space characters in stdin
fgets(dataToAppend, BUFFER_SIZE, stdin);
/* Append data to file */
fputs(dataToAppend, fPtr);
/* Reopen file in read mode to print file contents */
fPtr = freopen(filePath, "r", fPtr);
/* Print file contents after appending string */
printf("\nSuccessfully appended data to file. \n");
printf("Changed file contents:\n\n");
readFile(fPtr);
/* Done with file, hence close file. */
fclose(fPtr);

}//money deposit

/*
float moneyWithdraw(float balance)
{
FILE* fm;
fm = fopen("bal.txt", "a+");
float withdraw;
bool back = true;
printf("You choose to Withdraw a money\n");
printf("Your Balance is: Rs%.2f\n\n", balance);
while (back) {
printf("Enter your amount to withdraw:\n");
scanf("%f", &withdraw);


if (withdraw < balance)
{
back = false;
balance -= withdraw;
printf("\nYour withdrawing money is: Rs%.2f\n", withdraw);
printf("**Your New Balance is: Rs%.2f\n\n", balance);

}

else
{

printf("+++Insufficient Balance+++\n");
printf("Please contact to your Bank Customer Services\n");
printf("**Your Balance is: Rs%.2f\n\n", balance);

}
fwrite(&balance, sizeof(balance),1, fm);
fclose(fm);
}

return balance;


}//money withdraw

void menuExit() {
printf("--------------Take your receipt!!!------------------\n");
printf("-----Thank you for using ATM Banking Machine!!!-----\n");



}//exit menu

void errorMessage() {;
printf("+++!!!You selected invalid number!!!+++\n");
}//error message
*/
