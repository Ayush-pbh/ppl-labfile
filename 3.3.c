#include <stdio.h>

void main(){
    float cels;
    printf("Enter tempurature in celcius...");
    scanf("%f",cels);
    float fahr = (cels * 9.0/5.0) + 32.0;
    float kelvin = cels + 273.15;

    printf("In Faranhiet %f", fahr);
    printf("In Kelvin %f", kelvin);
}