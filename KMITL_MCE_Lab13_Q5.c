#include <stdio.h>

int main() {
    int num,m;
    int sum = 0;
    printf(" *** Summation of each digit ***\n");
    printf("Enter a position number : ");
    scanf("%d",&num);
    while(num>0){    
        m=num%10;    
        sum=sum+m;    
        num=num/10;    
    }    
    
    printf("\n\nSummation of each digit = %d",sum);    
    
    return 0;
}
