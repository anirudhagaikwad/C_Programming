/*factorial value */
#include<stdio.h>
int rec(int);
main()
{
    int a, fact ;
    printf("\nEnter any number ");
    scanf ("%d", &a);
    fact = rec(a);
    printf ("\nFactorial value = %d", fact);
}
int rec (int x)
{
    int f;
    if (x == 1)
        return (1);
    else
        f = x * rec (x - 1) ;
    return (f) ;
}
/*
Enter any number 5
Factorial value = 120
What happen here....
rec(5) returns(5 * rec(4),
 which returns (4 * rec(3),
  which returns (3 * rec(2),
   which returns (2 * rec(1),
    which returns (1)))))
*/
