#include "stdio.h"
int main(){
	char str[1000];
	printf(" *** ASCII string display ***\n");
	printf("Enter a string : ");
	scanf("%[^\n]",str);
	int i=0,length = 0;
	while(str[length++]!='\0');
	printf("Output :");
	for(int i=0;i<length-1;i++){
		if(str[i]==' ') printf(" |%d,%c|",32,32);
		else printf(" |%d,%c|",str[i],str[i]);
	}
}