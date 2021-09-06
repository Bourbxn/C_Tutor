#include "stdio.h"
int main(){
  printf("Enter number : ");
  int num,fac=2;
  scanf("%d",&num);
  while(num!=1){
    if(num%fac==0){
      printf("%d ", fac);
      num/=fac;
    }
    else fac++;
  }
  return 0;
}
