#include "stdio.h"
int main(){
	char input[5];
	printf("Input 5 characters of string : ");
	scanf("%s",input);
	printf("   \n  %c\n%c\n   %c\n %c\n    %c",input[2],input[0],input[3],input[1],input[4]);
	return 0;
}