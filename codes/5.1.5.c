#include <stdio.h>

void main(){
    int ch;
    printf("Input 1 for first pattern or any other number 2nd pattern.\n");
    scanf("%d",&ch);
    
    switch(ch){
        case 1:{
            int i, space, rows, k = 0;
            rows=5;
            for (i = 1; i <= rows; ++i, k = 0) {
                for (space = 1; space <= rows - i; ++space) {
                    printf("  ");
                }
                while (k != 2 * i - 1) {
                    printf("* ");
                    ++k;
                }
                printf("\n");
            }
        }
        break;
        default:{
            for(int i=1;i<=5;i++){
                for(int j=1;j<=i;j++){
                    printf("%d",j);
                }
                printf("\n");
            }
        }
        break;
    }
}