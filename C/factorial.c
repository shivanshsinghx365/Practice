#include <stdio.h>
void main(){
    int i,n,fact=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        fact*=i;
    }
    printf("%d! = %d\n",n,fact);
}