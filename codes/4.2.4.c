#include <stdio.h>

void main(){
    char ch;
    printf("Input the character\n");
    scanf("%c",&ch);

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
        printf("Charcter is an Alphabet.");
    }
    else if(ch >= 48 && ch <= 57){
        printf("Character is a number");
    }
    else{
        printf("It is a special character");
    }
}