#include<stdio.h>
#include<stdio.h>
#include<math.h>

float sampoo(float remain,float price){
	remain -= price;
	return remain;
}
int funB(){		
	float account = 155.99 , price = 4.99;
	printf("---------sampoo---------");
	printf("\nsampoo's price is %.2f$\n",price);
	printf("Account still remain %.2f$\n",sampoo(account,price));
	printf("===================================\n");


return 0;
}
