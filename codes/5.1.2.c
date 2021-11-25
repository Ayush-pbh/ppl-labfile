#include <stdio.h>

void main(){
    int a,b;
    printf("Enter number a & b.");
    scanf("%d",&a);
    scanf("%d",&b);
    int mult = 0;
    for(int i=1;i<=b;i++){
        mult+=a;
    }
    printf("Answer %d",mult);
}