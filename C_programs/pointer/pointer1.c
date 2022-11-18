/*
A pointer is a variable that contains the address of a variable.
The main thing is that once you can talk about the address of a variable,
you'll then be able to goto that address and retrieve the data stored in it.
*/
#include<stdio.h>
main( )
{
    int i = 3 ;
    int *j ;
    j = &i ;
    printf ("\nAddress of i = %u",&i) ;
    printf ("\nAddress of i = %u",j) ;
    printf ("\nAddress of j = %u",&j) ;
    printf ("\nValue of j = %u",j) ;
    printf ("\nValue of i = %d",i) ;
    printf ("\nValue of i = %d",*(&i)) ;
    printf ("\nValue of i = %d",*j) ;
}
