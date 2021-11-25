#include<stdio.h>

int insertSorted(int arr[], int n,
                 int key,
                 int capacity)
{
 
    // Cannot insert more elements if n is
    // already more than or equal to capacity
    if (n >= capacity)
       return n;
 
    arr[n] = key;
 
    return (n + 1);
}
 
// To search a key to be deleted
int findElement(int arr[], int n,
                int key);
 
// Function to delete an element
int deleteElement(int arr[], int n,
                  int key)
{
    // Find position of element to be deleted
    int pos = findElement(arr, n, key);
 
    if (pos == - 1)
    {
        printf("Element not found");
        return n;
    }
 
    // Deleting element
    int i;
    for (i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];
 
    return n - 1;
}
 
// Function to implement search operation
int findElement(int arr[], int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == key)
            return i;
 
    return - 1;
}
 

// Driver Code
int main()
{
    int arr[20] = {12, 16, 20, 40, 50, 70};
    int capacity = sizeof(arr) / sizeof(arr[0]);
    int n = 6;
    int i, key = 26;
 
    printf("\n Before Insertion: ");
    for (i = 0; i < n; i++)
        printf("%d  ", arr[i]);
 
    // Inserting key
    n = insertSorted(arr, n, key, capacity);
 
    printf("\n After Insertion: ");
    for (i = 0; i < n; i++)
        printf("%d  ",arr[i]);
    
    printf("Array before deletion\n");
    for (i = 0; i < n; i++)
      printf("%d  ", arr[i]);
 
    n = deleteElement(arr, n, key);
 
    printf("\nArray after deletion\n");
    for (i = 0; i < n; i++)
      printf("%d  ", arr[i]);
       
    return 0;
}