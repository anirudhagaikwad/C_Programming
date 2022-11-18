#include <stdio.h>

int fibonacci(int i){

if(i == 0){
return 0;
}

if(i == 1){
return 1;
}
return fibonacci(i-1) + fibonacci(i-2);
}

int  main(){

int i;

for (i = 0; i < 12; i++){
printf("%d,\t", fibonacci(i));
}

printf("...");
return 0;
}
