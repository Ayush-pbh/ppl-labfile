#include <stdio.h>

void main(){
    int total;
    printf("Enter no. days to convert.....[assumption that 1 month = 30 days]\n");
    scanf("%d", &total);

    int years=0,months=0,days=0;
    while(total!=0){
        if(total == 0){
            break;
        }
        if(total >= 356){
            years++;
            total-=365;
        }
        if(total >= 30 && total < 365){
            months++;
            total-=30;
        }
        if(total < 30){
            days+=total;
            total=0;
        }
    }
    printf("No. of years %d",years);
    printf("No. of months %d",months);
    printf("No. of days %d",days);
    
}
