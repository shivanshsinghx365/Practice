//Experiment 9.2
//What will the difference if above program is going to be implemented through union. Implement the same
//program through union and differentiate the output as well as memory allocation.

#include <stdio.h>
union personal
{
 char name[20];
 char doj[10];
 float salary;
};
int main(void) 
{
 int i=0;
 int j;
 union personal data[5]; 
 for(i=0;i<5;i++)
 {
  printf("\n Enter Person Name : ");
  scanf("%s",data[i].name);
  printf("\n Enter Person Date of Joining (dd-mm-yyyy) : ");
  scanf("%s",data[i].doj);
  printf("\n Enter Person Salary : ");
  scanf("%f",&data[i].salary);
 }
 printf("Enter the person number to be displayed : ");
scanf("%d",&j);
 if (j<=5 && j>=1)
 {
  printf("\n Person %d Detail",j);
  printf("\n Name   = %s",data[j-1].name);
  printf("\n DOJ    = %s",data[j-1].doj);
  printf("\n Salary = %.2f\n",data[j-1].salary);
 }
 return 0;
}