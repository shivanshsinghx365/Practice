//string functions
#include<stdio.h>
#include<string.h>
void main()
{
    char str1[30],str2[30],cop[30];
    int l1,l2;
    printf("Enter str1: ");
    gets(str1);
    printf("Enter str2: ");
    gets(str2);
    l1=strlen(str1);
    l2=strlen(str2);
    printf("Length of str1: %d\nLength of str2: %d\n",l1,l2);
    strcpy(cop,str1);
    printf("Copy of str1: %s\n",cop);
    if (strcmp(str1,str2)==0){
        printf("They are equal!!\n");
    }
    else{
        printf("They are not equal!!\n");
    }
    printf("\nConcatenate: %s\n",strcat(str1,str2));
    printf("Reverse of str1: %s\n",strrev(str1));
    printf("Reverse of str2: %s\n",strrev(str2));
    return 0;
}