#include <stdio.h>
void main(){
    int i,j,k,l;
    printf("Enter number of rows: ");
    scanf("%d",&i);
    printf("Enter number of coloumns: ");
    scanf("%d",&j);
    int a[i][j];
    for (k=0;k<i;k++){
        for (l=0;l<j;l++){
            printf("Enter number at [%d][%d] : ",k+1,l+1);
            scanf("%d",&a[k][l]);
        }
    }
    printf("=====Matrix=====\n");
    for (k=0;k<i;k++){
        for (l=0;l<j;l++){
            printf("%d ",a[k][l]);
        }
        printf("\n");
    }
}