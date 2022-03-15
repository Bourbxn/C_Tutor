#include "stdio.h"
#define SIZE 10
int main(){
	struct student {
        char id[9];
        char name[40];
        int marking;
    } st[SIZE];

    int i,i_max,i_min,n_max_index;
    int n_max[SIZE];
    float average=0,sum=0;
    printf(" *** Structure Array 2 ***\n");
    printf("Enter data : ");
    for(i=0;i<SIZE;i++) {
        scanf("%s %s %d",st[i].id,st[i].name,&st[i].marking);
    }

    // find max marking
     
    i_max=0;
    int max = st[0].marking;

    for(i=1; i<SIZE; i++)
    {
        if(st[i].marking>max)
        {
            max = st[i].marking;
            i_max = i;
        }
    }


    // find amout max

    n_max_index = 0;
    for(int i=0;i<SIZE;i++){
        if(st[i].marking==st[i_max].marking){
            n_max[n_max_index] = i;
            n_max_index++;
        }
    }

   	printf("\n\n *** Analyzing Data ***\n");
    printf("Max marking   = %d points, %d students.\n",st[i_max].marking,n_max_index);
    for(int i=0;i<n_max_index;i++){
        printf("%d. %s %s %d\n",i+1,st[n_max[i]].id,st[n_max[i]].name,st[n_max[i]].marking);
    }
    return 0;
}
