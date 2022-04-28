//Experiment 8.1
//Write a program to read an array of elements and print the same in reverse order along with their address.

#include <stdio.h>
void main()
{
    int a;
    printf("Enter the size of array : ");
    scanf("%d",&a);
    int arr[a];
    printf("Enter elements : \n");
    for (int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=a-1;i>=0;i--){
        printf("%d at %p\n",arr[i],&arr[i]);
    }
}  