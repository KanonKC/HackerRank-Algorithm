#include <stdio.h>
#include <stdlib.h>

int* breakingRecords(int scores_count, int* scores, int* result_count) {
    *result_count = scores_count;
    int *break_record = malloc(sizeof(int)*2);
    break_record[0] = 0;
    break_record[1] = 0;
    int min=scores[0],max=scores[0];
    for(int i=1;i<scores_count;i++){
        if(scores[i]<min){
            min = scores[i];
            break_record[1]++;
        }
        else if(scores[i]>max){
            max = scores[i];
            break_record[0]++;
        }
    }
    return break_record;
}

int main(){
    int x[] = {10, 5, 20, 20, 4, 5, 2, 25, 1};
    int *break_record = breakingRecords(9,x,NULL);
    printf("%d %d\n",break_record[0],break_record[1]);
}