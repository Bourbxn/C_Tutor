#include "stdio.h"
int main(){
	int num1,num2;
	printf(" *** Display Summation (skip 2 number)***\n");
	printf("Enter 2 whole numbers : ");
	scanf("%d %d",&num1,&num2);
	int sum = 0;
	printf("Summation = ");
	for(int i=num1;i<=num2;i+=2){
		if(i!=num1) printf(" + ");
		sum+=i;
		printf("%d",i);
	}
	printf(" = %d",sum);
}