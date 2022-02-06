//Experiment 9.1
// Define a structure type, personal, that would contain person name, date of joining and salary. Using this
//structure, write a program to read this information for one person from the key board and print the same on
//the screen

#include <stdio.h>

struct personal
{
 char name[20];
 char doj[10];
 float salary;
}p[5];

int main(void) 
{
 int i=0;
 int j;
 
 for(i=0;i<5;i++)
 {
  printf("\n Enter Person Name : ");
  scanf("%s",p[i].name);
  printf("\n Enter Person Date of Joining (dd-mm-yyyy) : ");
  scanf("%s",p[i].doj);
  printf("\n Enter Person Salary : ");
  scanf("%f",&p[i].salary);
 }
 printf("Enter the person number to be displayed : ");
scanf("%d",&j);
 if (j<=5 && j>=1)
 {
  printf("\n Person %d Detail",j);
  printf("\n Name   = %s",p[j-1].name);
  printf("\n DOJ    = %s",p[j-1].doj);
  printf("\n Salary = %.2f\n",p[j-1].salary);
 }
 return 0;
}