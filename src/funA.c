/*funA.c*/
#include"funA.h"
extern float _main_base;
static struct _account{
	float base;
	pthread_mutex_t mutex;
	void(*set_account_base)(float);
	float(*get_account_base)();
} Account = {
	0.0,
	PTHREAD_MUTEX_INITIALIZER,
	set_account_base,
	get_account_base
};
void set_account_base(float value){
	pthread_mutex_lock(&Account.mutex);
	Account.base = value;
	pthread_mutex_unlock(&Account.mutex);
}
float get_account_base(){
	return Account.base;
}
void funA(){
	float account_money =99.99;//init
	printf("(funA)Set Account money:");
	scanf("%f",&account_money);
	printf("=================================\n");
	Account.set_account_base(account_money);	
	_main_base  = Account.get_account_base(account_money);	
	printf("Set account money to %.2f\n",_main_base);	
	printf("=================================\n");		
	
}
