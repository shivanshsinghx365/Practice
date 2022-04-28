#include <stdio.h>
void main(){
    int i;
    do{
        printf("Enter a number divisible by 7: ");
        scanf("%d",&i);
    }
    while (i%7!=0);
}