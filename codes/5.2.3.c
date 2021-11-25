#include <stdio.h>

void main(){
    int n;
    printf("Enter n>");
    scanf("%d",&n);
    while(n==0){
        int r,sum=0,temp;    
        temp=n;    
        while(n>0){    
            r=n%10;    
            sum=sum+(r*r*r);    
            n=n/10;    
        }    
        if(temp==sum)    
            printf("armstrong  number ");    
        else    
            printf("not armstrong number");    
        n--;
    }
        printf("not armstrong number");    
}