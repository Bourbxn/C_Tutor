#include <stdio.h>

int main() {
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("Even numbers between 1 and %d : ",num);
    if(num%2==0){
        printf("%d",num/2);
    }
    else{
        printf("%d",(num-1)/2);
    }
    
    return 0;
}
