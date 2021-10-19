#include <stdio.h>

void main(){
    char c;
    printf("Enter character");
    scanf("%c", &c);
    switch(c){
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        printf("Character is a Vowel");
        break;
        default:
        printf("No not a vowel");
        break;
    }
}