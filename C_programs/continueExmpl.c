/* Continue Example  */
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
        if(i % 2 == 0)
            continue;
        printf("%d : %s\n",i,name);
   }
   return 0;
}
