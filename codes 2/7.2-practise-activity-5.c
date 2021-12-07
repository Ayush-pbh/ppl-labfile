#include <stdio.h>
int * SortMe(int* arr){
   
   int n=10;
   int i, j, position, swap;
   for (i = 0; i < (n - 1); i++) {
      position = i;
      for (j = i + 1; j < n; j++) {
         if ( arr[position] > arr[j] )
            position = j;
      }
      if ( position != i ) {
         swap = arr[i];
         arr[i] = arr[position];
         arr[position] = swap;
      }
   }
    return arr;
}

int main() {
    int arr[10]={6,12,0,18,11,99,55,45,34,2};
    printf("Unsorted!\n[ ");

    for (int i = 0; i < 10; i++){
        printf("%d ,", arr[i]);
    }
    int* sorted = SortMe(arr);
    printf(" ]\nSorted!\n[ ");
    for (int i = 0; i < 10; i++){
        printf("%d ,", sorted[i] );
    }
    printf(" ]\n");
   return 0;
}
