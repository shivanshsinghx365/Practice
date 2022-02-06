//WAP to find all perfect square numbers in a given range of numbers, 
//and also print their square root (e.g.: 4^(1/2)=2)
#include <stdio.h>
#include <math.h>
void main(){
    int a;
    printf("Enter last number : ");
    scanf("%d",&a);
    for (int i=1;i<=a;i++){
        if((float)sqrt(i)==(int)sqrt(i)){
            printf("sqrt of %d is %d\n",i,(int)sqrt(i));
        }
    }
}