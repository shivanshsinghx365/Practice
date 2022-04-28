#include <stdio.h>
void main(){
    int y,m;
    printf("Enter year: ");
    scanf("%d",&y);
    printf("Enter month number: ");
    scanf("%d",&m);
    if (m==6 || m==11 || m==4 || m==9){
        printf("Number of days = 30\n");
    }
    else if (m!=2){
        printf("Number of days = 31\n");
    }
    else{
        if (y%400==0){
            printf("Number of days = 29\n");
        }   
        else if (y%100){
            printf("Number of days = 28\n");
        }
        else if (y%4){
            printf("Number of days = 29\n");
        }
        else {
            printf("Number of days = 28\n");
        }
    }
}