#include <stdio.h>
#include <stdlib.h>

void plusMinus(int arr_count, int* arr) {
    double pos_count = 0,neg_count = 0,zer_count = 0;
    for(int i=0;i<arr_count;i++){
        if(arr[i] < 0)
            neg_count++;
        else if(arr[i] > 0)
            pos_count++;
        else
            zer_count++;
    }
    printf("%.6f\n%.6f\n%.6f",pos_count/arr_count,neg_count/arr_count,zer_count/arr_count);
}

int main()
{}