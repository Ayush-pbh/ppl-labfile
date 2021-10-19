#include <stdio.h>

void main(){
    int m;
    printf("Enter the limit");
    scanf("%d", &m);

    for(int i=1;i<=m;i++){
        if(i%5==0&&i%3==0){
            printf("%d is divisble by both 3 & 5", i);
        }
    }
}