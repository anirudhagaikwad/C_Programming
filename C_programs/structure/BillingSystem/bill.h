#include<string.h>
typedef struct hotelItem{
char itm1[15];
char itm2[15];
char itm3[15];
char itm4[15];
char itm5[15];
int price[5];
}item;

typedef struct getOrder{
char oitm[15];
int qty;
//int price;
}order;

typedef struct billGenerator{
int price;
}bill;

void billGen(){
    //declr
    item i1;
    order o1;
    bill b1;
    // initialize
    strcpy(i1.itm1,"Cofee");
    strcpy(i1.itm2,"Tea");
    strcpy(i1.itm3,"Asam Tea");
    strcpy(i1.itm4,"Espresso Cofee");
    strcpy(i1.itm5,"Cold Cofee");
    i1.price[0]=50;
    i1.price[1]=150;
    i1.price[2]=250;
    i1.price[3]=350;
    i1.price[4]=550;
for(int x=0; ;x++){
printf("\n##### Menu Card #####");
printf("\n 1) %s \t - %d RS",i1.itm1,i1.price[0]);
printf("\n 2) %s \t - %d RS",i1.itm2,i1.price[1]);
printf("\n 3) %s \t - %d RS",i1.itm3,i1.price[2]);
printf("\n 4) %s \t - %d RS",i1.itm4,i1.price[3]);
printf("\n 5) %s \t - %d RS",i1.itm5,i1.price[4]);
printf("\n 6) Exit");
puts("\nWhats Your Order :");
int y,qty;
scanf("%d",&y);
if(y==6){
    exit(0);
}
puts("\n Whats Quantity :");
scanf("%d",&qty);
switch(y){
case 1:
    strcpy(o1.oitm,i1.itm1);
    o1.qty=qty;
    b1.price=i1.price[0] * qty;
     printf("\n ##### Your Bill ##### ");
    printf("\nYou Ordered : %s Price is : %d",o1.oitm,b1.price);
      break;
case 2:
    strcpy(o1.oitm,i1.itm2);
    o1.qty=qty;
    b1.price=i1.price[1]  * qty;
    printf("\n ##### Your Bill ##### ");
    printf("\nYou Ordered : %s Price is : %d",o1.oitm,b1.price);
      break;
case 3:
    strcpy(o1.oitm,i1.itm3);
    o1.qty=qty;
    b1.price=i1.price[2]  * qty;
    printf("\n ##### Your Bill ##### ");
    printf("\nYou Ordered : %s Price is : %d",o1.oitm,b1.price);
      break;
case 4:
    strcpy(o1.oitm,i1.itm4);
    o1.qty=qty;
    b1.price=i1.price[3]  * qty;
    printf("\n ##### Your Bill ##### ");
    printf("\nYou Ordered : %s Price is : %d",o1.oitm,b1.price);
      break;
case 5:
    strcpy(o1.oitm,i1.itm5);
    o1.qty=qty;
    b1.price=i1.price[4] * qty;
    printf("\n ##### Your Bill ##### ");
    printf("You Ordered : %s Price is : %d",o1.oitm,b1.price);
      break;
case 6:
    exit(0);
    break;


default : puts("\n Enter Valid Order");
}


} //infinite loop for menu
}

