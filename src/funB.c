/*funB.c*/
#include<stdio.h>
#include"funB.h"
extern float _main_base;
float _main_total;
static struct _item{
	float _shopping_cart;
	pthread_mutex_t mutex;
	void(*set_item_price)(float);
	float(*get_item_price)();
} Item = {
	45.99,
	PTHREAD_MUTEX_INITIALIZER,
	set_item_price,
	get_item_price
};
void set_item_price(float price){
	pthread_mutex_lock(&Item.mutex);
	Item._shopping_cart = price;
	pthread_mutex_unlock(&Item.mutex);
}

float get_item_price(){
	return Item._shopping_cart;
}
void funB(){	
	float item_1 = 0.00;//init
	float item_2 = 0.00;//init
	float item_3 = 0.00;//init
	printf("\n-----------Buy 3 Items-----------\n");
	printf("\nSet Item_1 price :");
	scanf("%f",&item_1);
	printf("\nSet Item_2 price :");
	scanf("%f",&item_2);
	printf("\nSet Item_3 price :");
	scanf("%f",&item_3);
	
	Item.set_item_price((item_1 + item_2 + item_3));

	printf("\n----------Shopping Cart----------\n");
	printf("\nSet Item_1 price => %.2f\n",item_1);
	printf("\nSet Item_2 price => %.2f\n",item_2);
	printf("\nSet Item_3 price => %.2f\n",item_3);
	printf("=================================\n");
	printf("Total => \t\t %.2f$\n",Item.get_item_price());
	_main_total = get_item_price();
	//printf("Bought 3 items...Still remain %.2f\n",_main_base);
}
