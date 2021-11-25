#include <stdio.h>

void main(){
    int a,b,c;
    printf("Before Swapping \n");
    a = 10;
    b = 20;
    printf("Swapping using 1 variable\n");
    c = a;
    a = b;
    b = c;
    printf("Done With swaping now refreshing the values.\n");
    a = 10;
    b = 20;
    a = a+b;
    b = a - b;
    a = a - b;
    printf("Done with swapping, using no other variables.");
    
}