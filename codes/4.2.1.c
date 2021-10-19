#include <stdio.h>
#include <math.h>

void main(){
    int A,B,C;
    double root1,root2;
    printf("Enter the value of A , B & C in Ax^2 + Bx + C.\n");
    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);

    int disc = (B*B)-4*A*C;
    if(disc>0){
        root1 = (-B + sqrt(disc))/(2*A);
        root2 = (-B - sqrt(disc))/(2*A);
    }
    else{
        printf("No real roots possible");
    }
}