#include<stdio.h>

char roman[200];
void number2roman(int number) {
    //this function is to convert number num
    // to roman string as global variable


}
int main() {
    int count_i=0, count_v=0, count_x=0, count_l=0, count_c=0, i, num_test;
    int num; // to get input from user
    char ch;
    
  	printf(" *** Count Roman Characters ***\n");
    printf("Enter last number (1..x) : ");
  	scanf("%d",&num);
    //printf("input -> %d\n",num);
    //number2roman(num);

    for(num_test=1;num_test<=num;num_test++) {
        number2roman(num_test);
        for(i=0; roman[i]!='\0';i++) {
            ch = roman[i];
            switch(ch) {
                case 'i' :
                    count_i++;
                    break;
                case 'v' :
                    count_v++;
                    break;
                case 'x' :
                    count_x++;
                    break;
                case 'l' :
                    count_l++;
                    break;
                case 'c' :
                    count_c++;
                    break;
            } // switch
        } //for

    } // for

    printf("The number of \'i\' = %d\n",count_i);
  	printf("The number of \'v\' = %d\n",count_v);
  	printf("The number of \'x\' = %d\n",count_x);
  	printf("The number of \'l\' = %d\n",count_l);
  	printf("The number of \'c\' = %d\n",count_c);
  	//printf("%d %d %d %d %d\n",count_i,count_v,count_x,count_l,count_c);

    return 0;
}