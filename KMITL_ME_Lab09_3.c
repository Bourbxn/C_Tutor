#include "stdio.h"
void isPalindrome(char* string)
{
	char *p1, *p2;

	int i=0,length = 0;
	while(string[i++]!='\0') length++;
	char newStr[100];
	int index = 0;
	for(int i=0;i<length;i++){
		if(string[i]>='A' && string[i]<='Z'){
			newStr[index++] = string[i];
		}
		else if(string[i]>='a' && string[i]<='z'){
			newStr[index++] = string[i] - ('a'-'A');
		}
		else if(string[i]>='0' && string[i]<='9'){
			newStr[index++] = string[i];
		}
		else{
			continue;
		}
	}
	newStr[index] = '\0';

	p1 = newStr;
	while (*p1 != '\0') {
		++p1;
	}
	--p1;

	for (p2 = newStr; p1 >= p2;) {
		if (*p1 == *p2) {
			--p1;
			p2++;
		}
		else
			break;
	}

	if (p2 > p1)
		printf("\"%s\" is PALINDROME.",string);
	else
		printf("\"%s\" is NOT palindrom.",string);
}

int main()
{
	char str[100];
	printf(" *** Palindrome Verification ***\n");
	printf("Enter a sentence : ");
	scanf("%[^\n]",str);
	isPalindrome(str);
	return 0;
}
