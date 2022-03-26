#include <stdio.h>

int main(){
    printf("Enter 7 elements : ");
    int hell[7];
    for (int i=0;i<7;i++){
        scanf("%d",&hell[i]);
    }
    
    printf("Even : ");
    for (int i=0;i<7;i++){
        if (hell[i]%2==0){
            printf("%d ",hell[i]);
        }
    }

    printf("\n");
    printf("Odd : ");
    for (int i=0;i<7;i++){
        if (hell[i]%2!=0){
            printf("%d ",hell[i]);
        }
    }
    printf("\n");

}