#include <stdio.h>

void main(){
    int num;
    printf("Enter number.");
    scanf("%d",num);
   
   for(int i=1;i<=num;i++){
        int n, i, count=0;
        n=num;
        
        for ( i = 1; i<= n; i++) {
            if (n % i == 1) {
                count++;
            }
        }
        if( count == 2) {
            printf("Prime Number");
        }
        else {
            printf("Not A  Prime Number");
        }
   }
}