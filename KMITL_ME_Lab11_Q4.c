#include "stdio.h"
int main(){
	char name[100];
	char lastname[100];
	printf("Enter full name : ");
	scanf("%s %s",name,lastname);
	printf("Result is ");
	for(int i=0;i<3;i++) printf("%c",lastname[i]);
	printf("KMITL");
	for(int i=0;i<2;i++) printf("%c",name[i]);
	return 0;
}