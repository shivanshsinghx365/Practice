#include <stdio.h>
void main(){
    int year;
    printf("Enter year: ");
    scanf("%d",&year);
    if (year%100==0){
        if (year%400==0){
            printf("Year is Leap\n");
        }
        else{
            printf("Year is Not Leap\n");
        }
    }
    else {
        if (year%4==0){
            printf("Year is Leap\n");
        }
        else{
            printf("Year is Not Leap\n");
        }
    }
}