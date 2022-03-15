#include "stdio.h"
int main(){
	int numList[10];
	printf(" *** Descending sort ***\n");
	printf("Enter 10 whole numbers : ");
	for(int i=0;i<10;i++){
		scanf("%d",&numList[i]);
	}

	int a;
	for (int i = 0; i < 10; ++i) 
       {
           for (int j = i + 1; j < 10; ++j) 
           {
               if (numList[i] < numList[j]) 
               {
                   a = numList[i];
                   numList[i] = numList[j];
                   numList[j] = a;
               }
           }
       }

    printf("Output : ");
	for(int i=0;i<10;i++){
		printf("%d ",numList[i]);
	}
}
