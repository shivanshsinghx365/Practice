//NOTE : USE ONLY ONE METHOD AT A TIME !
//WAP to take number from user until its divisible by 5
//4 methods have been used in this program to do the same, you can chose any one
//every method is seperated by comments as obvious

#include <stdio.h>

//Method 2 -- Recursion if-else
void func(){                                            //2
    int n;                                              //2
    printf("Enter a number divisible by 5 : ");         //2
    scanf("%d",&n);                                     //2
    if (n%5!=0){                                        //2
        func();                                         //2
    }                                                   //2
    else{                                               //2
        printf("%d is divisible by 5\n",n);             //2
    }                                                   //2
}                                                       //2


void main(){
    //Method 1  -- do while
    int n;                                              //1
    do{                                                 //1
        printf("Enter a number divisible by 5 : ");     //1
        scanf("%d",&n);                                 //1
    }                                                   //1
    while(n%5!=0);                                      //1
    printf("%d is divisible by 5\n",n);                 //1
    //Method 2
    func();                                             //2
    //Method 3 -- while
    int n=1;                                            //3
    while(n%5!=0){                                      //3
        printf("Enter a number divisible by 5 : ");     //3
        scanf("%d",&n);                                 //3
    }                                                   //3
    printf("%d is divisible by 5\n",n);                 //3
    //Method 4 -- For
    int n;                                              //4                         
    for(n=1;n%5!=0;n+=0){                               //4
        printf("Enter a number divisible by 5 : ");     //4
        scanf("%d",&n);                                 //4
    }                                                   //4
    printf("%d is divisible by 5\n",n);                 //4
}