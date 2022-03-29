#include "stdio.h"
int main(){
	int num,numRun=1;
	printf("input : ");
	scanf("%d",&num);
	printf("\n");
	for(int i=0;i<num;i++){
		for(int j=0;j<num;j++){
			printf(" ");
			if(num*num<10) printf("%1d",numRun);
			else if(num*num>=10 && num*num<100) printf("%2d",numRun);
			else if(num*num>=100 && num*num<1000) printf("%3d",numRun);
			numRun++;
		}
		printf("\n");
	}
}