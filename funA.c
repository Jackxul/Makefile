#include<stdio.h>
#include<stdio.h>
#include<math.h>

float set_account(float dollar){
	printf("==============================\n");
	printf("Set Account money to %.2f$\n",dollar);
	printf("==============================\n");
	return dollar;
}
int funA(){
	float price;
	printf("(FunA)Set Account money:");
	//scanf("%f",&price);	
	price = set_account(price);
	//printf("\n");		
return price;
}

