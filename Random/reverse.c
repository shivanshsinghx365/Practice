#include <stdio.h>

int main(){
    printf("Enter 7 elements : ");
    int hell[7];
    for (int i=0;i<7;i++){
        scanf("%d",&hell[i]);
    }
    
    printf("Reverse : ");
    for (int i=6;i>=0;i--){
        printf("%d ",hell[i]);
    }

    printf("\n");

}