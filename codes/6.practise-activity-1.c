#include <stdio.h>

void main(){
    int n1=0,n2=0;
    printf("Enter the numbers\n");
    scanf("%d",&n1);
    scanf("%d",&n2);

    printf("\nBetween %d & %d, %d is maximum", n1, n2, maximum(n1,n2));
}

int maximum(int a,int b){
    return (a>=b)?a:b;
}