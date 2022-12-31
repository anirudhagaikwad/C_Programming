/* C program to calculate profit or loss
I purchased a house in Rs. 3000000 after that I sold that house after 2 years in Rs. 4000000. The sold price is higher than its purchased price, thus it will be a profit of 1000000.
 */


#include <stdio.h>

int main()
{
    /*declare the variables*/
    int cp;
    int sp;
    int amount;

    /*enter the cost price*/
    printf("Enter the cost price: ");
    scanf("%d", &cp);

    /*enter the selling price*/
    printf("Enter the selling price: ");
    scanf("%d", &sp);

    /*if condition*/
    if (sp > cp) {
        /*formula to find profit*/
        amount = sp - cp;
        printf("profit = %d", amount);
    }
    /*else if condition*/
    else if (cp > sp) {
        /*formula to find loss*/
        amount = cp - sp;
        printf("loss = %d", amount);
    }
    /*else condition*/
    else {
        printf("No profit no loss\n");
    }
    return 0;
}
