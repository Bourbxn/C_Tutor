#include "stdio.h"
int main(){
	float num1,num2;
	int oprt;
	printf("Enter numbers: ");
	scanf("%f %f %d",&num1,&num2,&oprt);
	if(oprt==1){
		printf(" Result = %.0f + %.0f = %.2f",num1,num2,num1+num2);
	}
	else if(oprt==2){
		printf(" Result = %.0f - %.0f = %.2f",num1,num2,num1-num2);
	}
	else if(oprt==3){
		printf(" Result = %.0f * %.0f = %.2f",num1,num2,num1*num2);
	}
	else if(oprt==4){
		printf(" Result = %.0f / %.0f = ",num1,num2);
		if((int)num1%(int)num2==0) printf("%.2f",num1/num2);
		else printf("%.2f",num1/num2);
	}
	else{
		printf("Bye....");
	}
}
