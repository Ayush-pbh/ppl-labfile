#include <stdio.h>

void main(){
    int n;
    printf("Input the number 'n'");
    scanf("%d",&n);
    float sum=0;
    for (int i=1;i<=n;i++){
        sum+=(1/i);
    }
    printf("Your Sum is %d", sum);
}