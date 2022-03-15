#include "stdio.h"
int main(){
	int x,y,x1,y1,d,x2,y2;
	printf("Enter x,y,x1,y1 respectively : ");
	scanf("%d %d %d %d",&x,&y,&x1,&y1);
	x2 = (x-x1)*(x-x1);
	y2 = (y-y1)*(y-y1);
	d=x2+y2;
	printf("Distance between %d,%d to %d,%d is %d",x,y,x1,y1,d);
}