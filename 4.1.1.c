#include <stdio.h>

void main(){
    int a,b,c;
    printf("Enter three numbers \n");
    scanf("%d",&a);
    printf("\n");
    scanf("%d",&b);
    printf("\n");
    scanf("%d",&c);
    printf("\n");

    if(a>b){
        if(a>c){
            pring("%d is the largest", a);

        }
        else{
            pring("%d is the largest", c);
        }
    }
    else{
        if(b>c){
            printf("%d is the largest", b);
        }
        else{
            printf("%d is the largest", b);
        }
    }
}