//Take 2 arrays of roll no and marks and print marks of that roll no

#include <stdio.h>
int main(){

    int f;
    int roll[10]={1,12,47,31,25,16,17,4,9,11};
    int marks[10]={100,50,70,45,13,34,56,78,60,67};
    printf("Enter roll no : ");
    scanf("%d",&f);
    int k=-1;
    for (int i=0;i<10;i++){
        if (roll[i]==f){
            k=i;
        }
    }
    if (k==-1){
        printf("Element not found\n");
    }
    else{
        printf("Marks are = %d\n",marks[k]);
    }
}