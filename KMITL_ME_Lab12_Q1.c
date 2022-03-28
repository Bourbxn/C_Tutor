#include "stdio.h"
int main(){
	int numList[3];
	printf("Enter first,second,third numbers : ");
	scanf("%d,%d,%d",&numList[0],&numList[1],&numList[2]);
	int minNum = numList[0];
    for (int i = 0; i < 3; i++) {       
       if(numList[i] < minNum)    
           minNum = numList[i];    
    }      
	printf("\nThe minimum number is %d",minNum);
}
   
        
   
   