/*
array of union type values
*/
#include <stdio.h>
union item
{
    int a;
    float b;
    char ch;
};

int main( )
{
union item it[10];
int n;
printf("Enter the number of records:");
scanf("%d", &n);
for(int i = 0; i < n; i++) {
printf("Enter record %d: ", i + 1);
scanf("%d %f %c", &it[i].a, &it[i].b, &it[i].ch);
}
for(int i = 0; i < n; i++) {
printf("\nRecord no. %d:\n", i + 1);
printf("%d %f %c", it[i].a, it[i].b, it[i].ch);
}

    return 0;
}

/*
As you can see here,
the values of int and float get corrupted and only
char variable prints the expected result.
This is because in union,
the memory is shared among different data types.

In the above example,
value of the char variable was stored at last,
hence the value of other variables is lost.
*/
