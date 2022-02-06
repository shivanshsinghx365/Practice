#include <stdio.h>
void main()
{
    char str1[20], str2[20], cop[20];
    int a = 0, b = 0, i, j, k = 0, sw;
    printf("Enter str1:");
    scanf("%s", &str1);
    printf("Enter str2:");
    scanf("%s", &str2);
    printf("Enter your choice:");
    scanf("%d", &sw);
    switch (sw)
    {
    case 1:
        printf("Length of str1: "); //length
        for (i = 0; i <= 20; i++){
            if (str1[i] == '\0'){
                break;
            }
            else{
                a = a + 1;
            }
        }
        printf("%d\n", a);
        printf("Length of str2: "); //length
        for (i = 0; i <= 20; i++){
            if (str2[i] == '\0'){
                break;
            }
            else{
                b = b + 1;
            }
        }
        printf("%d\n", b);
        break;
    case 2:
        while (str1[i] != '\0'){
            if (str1[i] != str2[i]){
                k = 1;
                break;
            }
        }
        if (k == 0){
            printf("Compare str1 and str2: Same\n");
        }
        else{
            printf("Compare str1 and str2: Different\n");
        }
        printf("\n");
        break;
    case 3:
        printf("Concatenate str1 and str2: "); //Concatenate
        for (i = 0; i <= 20; i++){
            if (str1[i] == '\0'){
                for (j = 0; j <= 20; j++){
                    str1[i + j] = str2[j];
                }
                break;
            }
        }
        str1[i + j] = '\0';
        printf("%s\n", str1);
        break;
    case 4:
        printf("Copy of str2 (cop):"); //copy
        for (i = 0; i <= 20; i++){
            cop[i] = str2[i];
        }
        printf("%s\n", cop);
        break;
    case 5:
        for (i = 0; i <= 20; i++){
            if (str1[i] == '\0'){
                break;
            }
            else{
                a = a + 1;
            }
        }
        printf("Reverse of string1 : "); //Reverse
        for (j = a; j >= 0; j--){
            printf("%c", str1[j]);
        }
        printf("\n");
        for (i = 0; i <= 20; i++){
            if (str2[i] == '\0'){
                break;
            }
            else{
                b = b + 1;
            }
        }
        printf("Reverse of string2 : "); //Reverse
        for (j = b; j >= 0; j--){
            printf("%c", str2[j]);
        }
        break;
    default:
    printf("Entered data is invalid!!");
    
    }
}