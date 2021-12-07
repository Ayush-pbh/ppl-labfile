// Find if the given matrix of order (m x n) is a Sparse matrix or not. [Assume that a matrix can become a sparse matrix if more than half the total number of its elements have the value zero]


#include <stdio.h>

void main(){
   int arr[2][2] = {{10,120},{20,23}};
   int coloumn_sum = 0, row_sum = 0;
   for (int i = 0; i < 2; i++)
   {
       for (int j = 0; j < 2; j++)
       {
           row_sum+=arr[i][j];           
       }   
   }
   for (int i = 0; i < 2; i++)
   {
       for (int j = 0; j < 2; j++)
       {
           coloumn_sum+=arr[j][i];           
       }   
   }
   printf("Row Sum: %d\nColoumn Sum: %d\n",row_sum,coloumn_sum);
}
