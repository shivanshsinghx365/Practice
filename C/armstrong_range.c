#include<stdio.h>
void main(){
    int a,b,i,n,r,sum;
    printf("Enter lower limit: ");
    scanf("%d",&a);
    printf("Enter upper limit: ");
    scanf("%d",&b);
    printf("Armstrong numbers are: ");
    for (i=a;i<=b;i++){
        n=i;
        sum=0;
        while (n>0){
            r=n%10;
            sum+=(r*r*r);
            n=n/10;
        }
        if (sum==i){
            printf("%d, ",i);
        }
    }
    printf("\n");
}