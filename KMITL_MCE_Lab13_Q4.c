#include <stdio.h>

int main() {
    printf("* first minimum number value and position *\n");
    printf("Enter number : ");
    int arr[10];
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    int index = 0;
    for (int i = 1; i < 10; ++i) {
        if (arr[0] > arr[i]) {
        arr[0] = arr[i];
         index = i;
        }
    }
    
    printf("first minimum is %d at the %d number",arr[0],index+1);

    
    return 0;
}
