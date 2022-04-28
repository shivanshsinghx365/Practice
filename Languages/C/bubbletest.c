#include <stdio.h>
void main(){
    int i,j,n,temp;
    printf("Enter len : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements: ");
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++){
        for (j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for (i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
}