#include <stdio.h>
void main(){
    int i,j,s,k=0;
    printf("Enter length: ");
    scanf("%d",&i);
    int a[i];
    printf("Enter elements:\n");
    for (j=0;j<i;j++){
        scanf("%d",&a[j]);
    }
    printf("Number to search: ");
    scanf("%d",&s);
    for (j=0;j<i;j++){
        if (a[j]==s){
            printf("%d found at index %d\n",s,j);
            k=1;
            break;
        }
    }
    if (k==0){
        printf("Element %d not found in the array \n",s);
    }
}