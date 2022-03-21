#include<stdio.h>

char roman[200];
void number2roman(int number) {
    int index = 0;
    while(number != 0)
    {

        if (number >= 1000)       // 1000 - m
        {
           roman[index++]='m';
           number -= 1000;
        }

        else if (number >= 900)   // 900 -  cm
        {
           roman[index++]='c';
           roman[index++]='m';
           number -= 900;
        }        

        else if (number >= 500)   // 500 - d
        {           
           roman[index++]='d';
           number -= 500;
        }

        else if (number >= 400)   // 400 -  cd
        {
           roman[index++]='c';
           roman[index++]='d';
           number -= 400;
        }

        else if (number >= 100)   // 100 - c
        {
           roman[index++]='c';
           number -= 100;                       
        }
        else if (number >= 90)    // 90 - xc
        {
           roman[index++]='x';
           roman[index++]='c';
           number -= 90;                                              
        }

        else if (number >= 50)    // 50 - l
        {
           roman[index++]='l';
           number -= 50;                                                                     
        }

        else if (number >= 40)    // 40 - xl
        {
           roman[index++]='x';
           roman[index++]='l';     
           number -= 40;
        }

        else if (number >= 10)    // 10 - x
        {
           roman[index++]='x';
           number -= 10;           
        }

        else if (number >= 9)     // 9 - ix
        {
           roman[index++]='i';
           roman[index++]='x';  
           number -= 9;                         
        }
        else if (number >= 5)     // 5 - v
        {
           roman[index++]='v';
           number -= 5;                                     
        }

        else if (number >= 4)     // 4 - iv
        {
           roman[index++]='i';
           roman[index++]='v';  
           number -= 4;                                                            
        }

        else if (number >= 1)     // 1 - i
        {
           roman[index++]='i';
           number -= 1;                                                                                   
        }

    }
    roman[index] = '\0';

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