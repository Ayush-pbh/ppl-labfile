#include <iostd.h>

void main(){
    int num,sum=0,r,temp;
    printf("Enter the number:\n ");  
    scanf("%d",&num);
    temp=num;           
    while(temp!=0)
    {
        r=temp%10;
        sum=sum+r;
        temp=temp/10;
    }
    printf("\nGiven number = %d",num);
    printf("\nSum of the digits = %d",sum);
}