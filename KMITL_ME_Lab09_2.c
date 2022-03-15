#include "stdio.h"
void swap_jutsu(int *my_wallet,int *friend_wallet){
	int temp;
   	temp = *my_wallet;
   	*my_wallet = *friend_wallet; 
   	*friend_wallet = temp;
  
}

int main()
{
    int my_wallet, friend_wallet;
    printf("Enter my money, friend money : ");
    scanf("%d %d", &my_wallet, &friend_wallet);
    printf("Me : %4d | Friend : %4d", my_wallet, friend_wallet);
    swap_jutsu(&my_wallet, &friend_wallet);
    printf("\n\n====== Booooom! ======\n\n");
    printf("Me : %4d | Friend : %4d", my_wallet, friend_wallet);
}