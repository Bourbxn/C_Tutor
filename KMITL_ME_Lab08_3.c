#include "stdio.h"
int main(){
	int num,totalRow=0;
	printf("Enter positive number : ");
	scanf("%d",&num);
	int total = num;
	while(total>0){
		total-=++totalRow;
	}

	int sum=0;
	int totalColumn=1;
	while(sum<num){
		sum+=totalColumn++;
	}
	if(sum>num){
		totalColumn-=2;
	}
	else if(sum==num){
		totalColumn-=1;
	}
	totalColumn+=(totalColumn-2);

	int countChar = 65;
	for(int i=1;i<=totalRow;i++){
		if(i%2!=0){
			for(int k=1;k<=totalColumn/2;k++) printf(".");
			for(int k=1;k<=i;k++) {
				if(countChar>90) countChar=65;
				printf("%c",countChar++);
			}
			for(int k=1;k<=((totalColumn-2)/2)-(2*((i-1)/2));k++) printf(".");
		}
		else{
			for(int k=1;k<=((totalColumn-2)/2)-(2*(i/2))+2;k++) printf(".");
			countChar += i-1;
			for(int k=1;k<=i;k++){
				if(countChar>90) {
					countChar=65+(countChar-90)-i+1;
				}
				else if(countChar<65) {
					countChar = 90-(65-countChar)-i;
				}
				printf("%c", countChar--);
			}
			countChar+=i+1;
			for(int k=1;k<=(totalColumn/2)-1;k++) printf(".");
		}
		printf("\n");
			
	}
}





/*
Enter positive number : 21
.....A....
....CB....
.....DEF..
..JIHG....
.....KLMNO
UTSRQP....*/