/* c program to calculate simple interest

Formula to calculate simple interest: (principal x rate x time )/100
*/
#include <stdio.h>

int main()
{
    float amount,rate,time,si;

    printf("Enter principal (Amount) :");
    scanf("%f",&amount);

    printf("Enter rate :");
    scanf("%f",&rate);

    printf("Enter time (in years) :");
    scanf("%f",&time);

    si=(amount*rate*time)/100;

    printf("\nSimple Interest is = %f",si);

    return 0;
}

