// [Q]  1. Function main() gets a number and calls the following three functions
//      a. “void armstrong(int)” checks if the given number is a Armstrong number or not.  
//      b. “void coprime(int) reverses the given number and checks if the given number and reversed number are coprime.
//      c. “int factorial(int) computes the factorial of the given number using recursion and returns to main().

#include <stdio.h>

void main(){
    int ab = 0;
    printf("Enter the number.");
    scanf("%d",&ab);
    armstrong(ab);
    coprime(ab);
    printf("\nFactorial of given number is %d\n",factorial(ab));

}

void armstrong(int n){
    int sum=0,r,cp=n;
    while(n!=0){
        r=n%10;
        n=n/10;
        sum+=(r*r*r);
    }
    
    printf("\nThe Given number is");
    printf((sum==cp)?"":" not ");
    printf(" Armstrong\n");
}

void coprime(int nio){
    int cp=nio,r;
    int n, reverse=0, rem;    
    n=nio;
    while(n!=0)    
    {    
        rem=n%10;    
        reverse=reverse*10+rem;    
        n/=10;    
    }    
    printf("\nReversed Number: %d\n",reverse);    
    
    int num1, num2, hcf, i;
    num1 = nio;
    num2 = reverse;
    for(i=1;i<=((num1>=num2)?num1:num2);i++){
        if(num1%i==0 && num2%i==0){
            hcf=i;
        }
    }
    if(hcf==1){
        printf("The numbers are coprime\n");
    }
    else{
        printf("The numbers are not coprime\n");
    }
}

int factorial(int n){
    int facto=1;
    for(int i=1;i<=n;i++){
        facto*=i;
    }
    return facto;
}