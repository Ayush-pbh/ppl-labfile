#include <stdio.h>

void main(){
    int num,r,i;
    printf("Enter number.");
    scanf("%d",&num);

    do {

        r=r*10;
        r=r+ i%10;
        i=i/10;

    }
    while(i!=0);

    if(num==r){printf("NUmber is Pallindrome!");}
}