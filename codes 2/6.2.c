// [Q] Function main() gets two numbers from the user and calls three functions in the given order:
//     a. “int triangle_area(int base, int height)” returns the area of the right-angled triangle to main().
//     b. “void swap(int *, int*)” swaps the two numbers using bitwise operator and displays them.
//     c. “float* remainder (int a, int b)” returns the remainder of a/b to main().

#include <stdio.h>

void main(){
    int num1=0,num2=0;
    printf("Enter the 1st number: ");
    scanf("%d",&num1);
    printf("\nEnter the 2nd number: ");
    scanf("%d",&num2);

    printf("Trangle area = %d\n", triangle_area(num1,num2));
    swap(num1,num2);
    printf("Remainder of a/b = %f\n", remainder(num1,num2));
}

int triangle_area(int base, int height){
    return (base*height)/2;
}

void swap(int n1, int n2){
    // Swapping using bitwise operator.
    n1 = n1 ^ n2;
    n2 = n1 ^ n2;
    n1 = n1 ^ n2;

    printf("\nSwapped numbers are n1 = %d and n2 = %d\n", n1, n2);
}

float remainder(int a, int b){
    return a%b;
}