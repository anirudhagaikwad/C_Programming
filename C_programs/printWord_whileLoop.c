/*  while looop to print a word a given number of time  */

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of times you want to print your name:");
    scanf("%d", &n);
    char name[30];
    printf("Enter your name:");
    scanf("%s", name);
    while(n) {
        //here we are checking if n is non-zero
        printf("%s\n", name);
        n--;    //decrementing n
    }
    return 0;
}
