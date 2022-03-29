#include "stdio.h"
int main(){
	char str[1000];
	printf(" *** ASCII string display ***\n");
	printf("Enter a string : ");
	scanf("%[^\n]",str);
	int i=0,length = 0;
	while(str[length++]!='\0');
	printf("Output : [");
	for(int i=length-2;i>=0;i--){
		if(i!=length-2) printf(",");
		if(str[i]==' ') printf("|%d %c %x|",32,32,32);
		else printf("|%d %c %x|",str[i],str[i],str[i]);
	}
	printf("]");
}