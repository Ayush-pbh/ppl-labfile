#include <stdio.h>

void main(){
    int num;
    printf("Enter a number to check divisblity\n");
    scanf("%d",num);

    if(num%2==0){
        printf("Number divisble by 2");
    }
    if(num%3==0){
        printf("Number divisble by 3");
    }
    if(num%2==0&&num%3==0){
        printf("Number divisble by both 2 and 3");
    }
}