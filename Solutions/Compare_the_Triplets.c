#include <stdio.h>
#include <stdlib.h>

int* compareTriplets(int a_count, int* a, int b_count, int* b, int* result_count) {
    *result_count = 2;
    int a_win = 0,b_win = 0;
    int *rtn = malloc(sizeof(int)*3);

    if(a[0]>b[0]){
        a_win++;
    }
    else if(a[0]<b[0]){
        b_win++;
    }

    if(a[1]>b[1]){
        a_win++;
    }
    else if(a[1]<b[1]){
        b_win++;
    }

    if(a[2]>b[2]){
        a_win++;
    }
    else if(a[2]<b[2]){
        b_win++;
    }

    rtn[0] = a_win;
    rtn[1] = b_win;
    return rtn;
}

int main(){}