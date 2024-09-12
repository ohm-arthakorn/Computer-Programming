#include <stdio.h>
#define SIZE 10 
int main(){
    int num[SIZE],i,max_diff=-1,diff;
    printf(" *** Maximum diference of adjacent number ***\n");
    printf("Enter %d integers : ",SIZE);
    for(i=0;i<SIZE;i++){
        scanf("%d",&num[i]);
    }

    for(i=0;i<SIZE-1;i++){
        diff=num[i]-num[i+1];
        if(diff<0){
            diff = (-1)*diff;
        }
        if(max_diff<diff){
            max_diff=diff;
        }
    }

    printf("Maximum differnce is %d\n",max_diff);
    return 0;
}