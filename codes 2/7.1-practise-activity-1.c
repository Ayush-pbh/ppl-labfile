#include <stdio.h>

void main(){
    int size;
    printf("Enter the Array limit: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of array:\n");

    for (int i = 0; i < size; i++)
    {
        printf("%d-",i);
        scanf("%d",&arr[i]);
    }
    
    printf("Done with taking input!\n");

    int copy_arr[size];

    for (int  i = 0; i < size; i++)
    {
        copy_arr[i] = arr[i];
    }
    
    printf("Now printing the new array!\n");
    for (int  i = 0; i < size; i++)
    {
        printf("%d\n",copy_arr[i]);
    }

    printf("Now Merging the arrays!\n");
    int merged_arr[2*size];
    int fl = 0; 
    for (int i = 0; i < size; i++)
    {
        merged_arr[fl] = arr[i];
        fl++;
        merged_arr[fl] = copy_arr[i];

    }

    for (int i = 0; i < 2*size; i++)
    {
        printf("%d\n", merged_arr[i]);
    }
    
    
       
}