#include "stdio.h"
void isPalindrome(char* str)
{
    char *ptr, *rev;
  
    ptr = str;
  
    while (*ptr != '\0') {
        ++ptr;
    }
    --ptr;
  
    for (rev = str; ptr >= rev;) {
    	if(*ptr >= 'A' && *ptr <='Z'){
    		if (*ptr == *rev-32) {
              	--ptr;
            	rev++;
        	}
        	else if (*ptr == *rev) {
            	--ptr;
            	rev++;
        	}        	
        	else
            	break;
    	}
    	else if(*ptr >= 'a' && *ptr <='z'){
    		if (*ptr == *rev+32) {
            	--ptr;
            	rev++;
        	}
        	else if (*ptr == *rev) {
            	--ptr;
            	rev++;
        	}        	
        	else
            	break;
    	}
    	else if(*ptr >= '0' && *ptr <='9'){
    		if (*ptr == *rev) {
            	--ptr;
            	rev++;
        	}
        	else
            	break;
    	}
    	else{
    		--ptr;
            rev++;
    	}
    }
  
    if (rev > ptr)
        printf("%s is PALINDROME.",str);
    else
        printf("%s is NOT palindrome.",str);
}


int main(){
	char str[100];
	printf(" *** Palindrome Verification ***\n");
	printf("Enter a sentence : ");
	scanf("%s",str);
	isPalindrome(str);
}
