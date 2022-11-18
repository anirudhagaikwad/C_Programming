/* Break Example */
#include <stdio.h>
int main()
{
   int n;
   printf("Enter the number of times you want to print your name:");
   scanf("%d", &n);
   char name[25];
   printf("\nEnter your name:");
   scanf("%s", name);
   for(int i = 1; i <= n; i++) {
        if(i % 5 == 0)
            break;
        printf("%s\n", name);
   }
   return 0;
}
