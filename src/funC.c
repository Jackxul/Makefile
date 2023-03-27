/*funC.c*/
#include"funC.h"
extern float _main_base;
extern float _main_total;
static struct _discount{
	int Tag;
	float Total;
	float Seed[20];
	void(*set_Tag)();
	void(*set_Total)();
	pthread_mutex_t mutex;	

} Discount = {
	19,
	0.0,
	{0.1,0.5,0.5,0.6,0.6,0.6,0.7,0.7,0.7,0.7,0.8,0.8,0.8,0.8,0.8,0.9,0.9,0.9,0.9,0.9},
	set_Tag,
	set_Total,
	PTHREAD_MUTEX_INITIALIZER
};
void set_Tag(){
	pthread_mutex_lock(&Discount.mutex);
	srand(time(NULL));
	Discount.Tag = (rand()%20);
	pthread_mutex_unlock(&Discount.mutex);
}	
void set_Total(){
	pthread_mutex_lock(&Discount.mutex);

	_main_total *= Discount.Seed[Discount.Tag];

	pthread_mutex_lock(&Discount.mutex);

}
       
void funC(){
	printf("funC\n");	
	printf("-------------Disount-------------\n");
	Discount.set_Tag();
	printf("Congrates you get a %.0f %%",(1.00 - Discount.Seed[Discount.Tag])*100);
	printf(" OFF\n");
	_main_total *= Discount.Seed[Discount.Tag];	
	printf("Consumption ===>>> \t   %.2f$\n",_main_total);
	printf("=================================\n");

	if((_main_base - _main_total) >= 0.00)
		printf("Acount Remain : \t");
	else
		printf("Acount Still Need : \t");
	printf(" %.2f$\n",_main_base-_main_total);
}
