//Count characters and words and letters in a paragraph

#include <stdio.h>
#include <string.h>
void main(){
    char paragraph[300];
    printf("Enter a paragraph: ");
    gets(paragraph);

    int char_count = strlen(paragraph); //count characters
    int word_count = 0; //count words
    int letter_count = 0; //count letters 
    int line_count = 0; //count lines 
    int digit_count = 0; //count digits 

    for(int i = 0; i < char_count; i++){
        if(paragraph[i] == ' '){
            word_count++;
        }
        else if(paragraph[i] >= 'a' && paragraph[i] <= 'z'){
            letter_count++;
        }
        else if(paragraph[i] >= 'A' && paragraph[i] <= 'Z'){
            letter_count++;
        }
        else if(paragraph[i]=='.'){
            line_count++;
        }
        else if(paragraph[i]>=48 && paragraph[i]<=57){//48 and 57 are ascii codes of 0 and 9 respectively
            digit_count++;
        }
    }

    printf("Number of characters = %d\n",char_count);
    printf("Number of letters = %d\n",letter_count);
    printf("Number of digits = %d\n",digit_count);
    printf("Number of words = %d\n",word_count);
    printf("Number of lines = %d\n",line_count);
    
}