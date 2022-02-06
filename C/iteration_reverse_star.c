#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter number of lines: ");
    scanf("%d",&n);
    for (i=n;i>=1;i--){
        for (j=i;j>=1;j--){
            printf("*");
        }
        printf("\n");
    }
}