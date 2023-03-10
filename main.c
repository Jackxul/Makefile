#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
#include"funA.c"
#include"funB.c"

int main(){
	

	float account = 0.00;//initial value
	printf("Set Account money:");
	/*from funA*/
	scanf("%f",&account);
	account = set_account(account);
	/*from funB*/
	account = sampoo(account,5.99);
	printf("Buy a sampoo for %.2f$.\nStill remain %.2f$.\n",5.99,account);
	/*from funC*/

	/*from funD*/

	/*from funE*/



return 0;
}
