#include "stdio.h"
int main(){
	int numLst[3],sum=0;
	printf("Enter 3 Number : ");
	for(int i=0;i<3;i++){
		scanf("%d",&numLst[i]);
		sum+=numLst[i];
	}
	printf("ANSWER = %d\n",sum);
	sum/=10;
	sum%=10;
	if(sum%2==0)printf("EVEN");
	else printf("ODD");
}
