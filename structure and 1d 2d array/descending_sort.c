#include <stdio.h>
#include <string.h>

int main(){
    
    int a[10],i,j,temp;
    printf(" *** Descending sort *** \n");
    printf("Enter %d whole numbers : ", 10);
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(j=0;j<10-1;j++){
        for(i=0;i<10-1;i++){
            if(a[i]<a[i+1]){
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    }
    printf("Output : ");
    for(i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}