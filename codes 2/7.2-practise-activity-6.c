// Find if the given matrix of order (m x n) is a Sparse matrix or not. [Assume that a matrix can become a sparse matrix if more than half the total number of its elements have the value zero]


#include <stdio.h>

void main(){
    int m=0,n=0;
    printf("Please provide order of matrix. MxN. Enter M N. ");
    scanf("%d %d", &m,&n);
    printf("M : %d, N : %d\n",m,n);
    int matrix[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    int zeros = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(matrix[i][j]==0){
                zeros++;
            }
        }
    }
    printf("Number of zeros : %d\n", zeros);
    if(zeros>((m*n)/2)){
        printf("The matrix is sparsh.\n");
    }
    else{
        printf("The matrix is not sparsh.\n");
    }
}