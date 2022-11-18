#include<stdio.h>
main()
{
    int avg, i, sum=0;
    int marks[30] ; /*array declaration */
    for ( i = 0 ; i <= 29 ; i++ )
    {
        printf ( "\nEnter marks " ) ;
        scanf ( "%d", &marks[i] ) ; /* store data in array */
    }
    for ( i = 0 ; i <= 29 ; i++ )
        sum = sum + marks[i] ; /* read data from an array*/
    avg = sum / 30 ;
    printf ( "\nAverage marks = %d", avg ) ;
}
