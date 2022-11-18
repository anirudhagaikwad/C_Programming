#include<stdio.h>

int main(void)
{
    int x = 99;
    // declare a pointer
    int *ptr;
    // assign value to pointer
    ptr = &x;

    printf("Value at ptr is: %d \n", *ptr);

    printf("Address pointed by ptr is: %p \n", ptr);

    return 0;
}
