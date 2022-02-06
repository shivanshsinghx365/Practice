#include<stdio.h>
void main(){
    float a,b,c;
    printf("Enter a: ");
    scanf("%f",&a);
    printf("Enter b: ");
    scanf("%f",&b);
    printf("Enter c: ");
    scanf("%f",&c);
    if (a+b>c && b+c>a){
        if (a+c >b){
            printf("Triangle is possible\n");
        }
        else if (a+c < b){
            printf("Triangle is not possible\n");
        }
    }
    else{
        printf("Triangle is not possible\n");
    }
}