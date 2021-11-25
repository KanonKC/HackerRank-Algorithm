#include <stdio.h>
#include <stdlib.h>

int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    int sum = 0;
    for(int i=0;i<arr_rows;i++){
        sum += arr[i][i];
    }
    for(int i=0;i<arr_rows;i++){
        sum -= arr[i][arr_rows-1-i];
    }
    return abs(sum);
}

int main(){}