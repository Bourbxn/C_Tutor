#include <stdio.h>

int main() {
    int num;
    printf("Enter number : ");
    scanf("%d",&num);
    printf("\n");
    
    for(int i=0;i<2*num+1;i++){
        if(i%2==0 && i<num){
            for(int j=0;j<i/2;j++) printf("* ");
            for(int j=0;j<(num*2+1)-(2*i);j++) printf("*");
            for(int j=0;j<i/2;j++) printf(" *");
            printf("\n");
        }
        else if(i%2==0 && i>num){
            for(int j=0;j<(2*num-i)/2;j++) printf("* ");
            for(int j=0;j<(num*2+1)-(2*(2*num-i));j++) printf("*");
            for(int j=0;j<(2*num-i)/2;j++) printf(" *");
            printf("\n");
        }
        else if(i==num){
            for(int j=0;j<num;j++) printf("* ");
            printf("*\n");            
        }
        else if(i%2!=0 && i<num){
            for(int j=0;j<(i+1)/2;j++)printf("* ");
            for(int j=0;j<(num*2+1)-(((i+1)/2)*4);j++)printf(" ");
            for(int j=0;j<(i+1)/2;j++)printf(" *");
            printf("\n");
        }
        else if(i%2!=0 && i>num){
            for(int j=0;j<((num*2+1)-i)/2;j++)printf("* ");
            for(int j=0;j<i-((num*2+1)-i);j++)printf(" ");
            for(int j=0;j<((num*2+1)-i)/2;j++)printf(" *");
             printf("\n");
        }
        
    }
    return 0;
}


