#include "stdio.h"
int main(){
	int num;
	printf("input : ");
	scanf("%d",&num);
	printf("\n");
	for(int i=0;i<num;i++){
		for(int j=0;j<num-i;j++){
			printf("%d",i+1);
		}
		printf("\n");
	}
}