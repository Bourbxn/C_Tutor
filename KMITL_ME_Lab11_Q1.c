#include "stdio.h"
int main(){
	float baht;
	printf(" *** Baht to us dollar converter ***\n");
	printf("Input Baht : ");
	scanf("%f",&baht);
	printf("Output USD : $%.2f",baht/30.65);
}