#include <stdio.h>

void main(){
    int num;
    printf("ENter the number \n");
    scanf("%d",num);

    if(num>0){
        printf("Number is +ve");
    }
    else if(num==0){
        printf("Number is zero(0)");
    }
    else{

        printf("Number is -ve)");
    }
}