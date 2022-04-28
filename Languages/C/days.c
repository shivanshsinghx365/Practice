//WAP to print number of days in a given month, take month number and year number from the user

#include <stdio.h>
void main()
{
    int m,y;
    printf("Enter year : ");
    scanf("%d",&y);
    printf("Enter month : ");
    scanf("%d",&m);
    if (m==4||m==6||m==11||m==9){
        printf("Month has 30 days\n");
    }
    else if (m==1||m==3||m==5||m==7||m==8||m==10||m==12){
        printf("Month has 31 days\n");
    }
    else{
        if (y%400==0){
            printf("Month has 29 days\n");
        }
        else if(y%100==0){
            printf("Month has 28 days\n");
        }
        else if(y%4==0){
            printf("Month has 29 days\n");
        }
        else{
            printf("Month has 28 days\n");
        }
    }
}