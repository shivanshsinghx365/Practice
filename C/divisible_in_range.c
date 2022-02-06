#include <stdio.h>
void main(){
    int lower,upper,i,n;
    printf("Enter 1st number of range: ");
    scanf("%d",&lower);
    printf("Enter 2nd number of range: ");
    scanf("%d",&upper);
    printf("Enter test number: ");
    scanf("%d",&n);
    printf("Divisible numbers are -> ");
    for (i=lower;i<=upper;++i){
        if (i%n==0){
            printf("%d, ",i);
        }
        }
    printf("\n");
}