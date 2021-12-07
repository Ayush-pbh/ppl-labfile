#include <stdio.h>
int main()
{
    int a[1000],i,n,sum;
   
    printf("Enter size of the array : ");
    scanf("%d", &n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    // Now searching for the largest number in the array.
    int largest = a[0];
    for(i=0; i<n; i++)
    {
        if(a[i]>largest){
            largest=a[i];
        }
    }
    printf("Largest Number in the array is : %d\n", largest); 
}