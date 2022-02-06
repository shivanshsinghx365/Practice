#include <stdio.h>
#include <math.h>
void main(){
    int a,b,i,d;
    float e;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter last number: ");
    scanf("%d",&b);
    for (i=a;i<=b;i++){
        d= (int) (sqrt(i));
        e= (float) (sqrt(i));
        if (d==e){
            printf("root of %d = %.0f\n",i,e);
        }
    }
}