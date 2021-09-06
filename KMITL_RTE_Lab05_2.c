#include "stdio.h"
int main(){
  char sentc[10000];
  scanf("%[^\n]",&sentc);
  int i=0;
  while(sentc[++i]!='\0');
  for(int j=i-1;j>=0;j--){
    printf("%c", sentc[j]);
  }
  return 0;
}
