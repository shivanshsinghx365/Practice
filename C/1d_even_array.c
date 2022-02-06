#include <stdio.h>
void main(){
    int i,j,k;
    printf("Enter how many even elements to enter: ");
    scanf("%d",&i);
    int a[i];
    printf("Enter only even numbers: \n");
    for (j=0;j<i;j++){
        scanf("%d",&k);
        if (k%2==0){
            a[j]=k;
        }
        else{//Without this other elements which didn't get value will be made 0 by default
            j--;
        }
    }
    printf("Array is : ");
    for (j=0;j<i;j++){
        printf("%d ",a[j]);
    }
    printf("\n");
}