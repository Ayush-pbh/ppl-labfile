#include <stdio.h>

void main(){
    int num;
    printf("Enter the number");
    scanf("%d",num);

    if(num % 2==0){
        printf("Number is Even");
    }
    else{

        printf("Number is not Even i.e it is Odd.");
    }
}