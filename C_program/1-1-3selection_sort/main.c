#include <stdio.h>
#include <stdlib.h>

int main(){
    int array[5] = {3,6,9,-8,1};
    int i,j,k,l;

    printf("Before: ");

    for (l=0 ; l<5 ; l++){
        printf("%d ",array[l]);
    }

    printf("\n--Selection_Sort--");

    for (i=0; i < 5 ; i++){   // min_index 從最右方開始

        int min_index = i;
        for (j=i+1 ; j <5 ;j++){
            if (array[j] < array[min_index]){
                    min_index = j;
            }
        }

        int temp;
        temp = array[i];
        array[i] = array[min_index];
        array[min_index] = temp;
    }

    printf("\nAfter: ");

    for (k=0 ; k<5 ; k++){
        printf("%d ",array[k]);
    }


    return 0;
}
