#include <stdio.h>

void main(){
    int array[] = {12,14,75,34,55,109,4,235};

    int sizeArray = sizeof(array)/sizeof(array[0]);

    int sum = addUp(array, 0, 0);

    printf("Sum -> %d", sum);
}

int addUp(int array[], int index, int sum){
    sum += array[index++];
    if(index==8){
        return sum;
    }
    return addUp(array, index, sum);
}