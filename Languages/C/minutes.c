//Write a C program that takes hours and minutes as input, and calculates the total number of minutes.

#include<stdio.h>
void main(){
    int hours,minutes,total_minutes;
    printf("Enter the number of hours : ");
    scanf("%d",&hours);
    printf("Enter the number of minutes : ");
    scanf("%d",&minutes);
    total_minutes = (hours*60) + minutes;
    printf("Total minutes : %d minutes\n",total_minutes);
}