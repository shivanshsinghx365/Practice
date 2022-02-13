#include <stdio.h>
void main(){
    int i,j,n,temp,position;
    printf("Enter len : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements: ");
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n-1;i++){
        position=i;
        for (j=0;j<n;j++){
            if (arr[i]>arr[j]){
                position = j;
            }
        }
        if (position!=i){
            temp=arr[position];
            arr[position]=arr[i];
            arr[i]=temp;
        }
    }
    printf("Sorted list : ");
    for (i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
}