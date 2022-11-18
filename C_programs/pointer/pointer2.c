/*
An array is a block of sequential data.
*/
#include <stdio.h>
int main() {
   int x[4];
   int i;
for(i = 0; i < 4; ++i) {
printf("&x[%d] = %p\n", i, &x[i]);
   }
printf("Address of array x: %p", x);
   return 0;
}
