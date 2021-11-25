#include <stdio.h>
#include <stdlib.h>

int nextMul5(int number){
    int res = number;
    while(res % 5 != 0)
        res++;
    return res;
}

int* gradingStudents(int grades_count, int* grades, int* result_count) {
    *result_count = grades_count;
    int *rounded_grade = malloc(sizeof(int)*grades_count);
    for(int i=0;i<grades_count;i++){
        if(nextMul5(grades[i])-grades[i] < 3 && grades[i] >= 38){
            rounded_grade[i] = nextMul5(grades[i]);
        }
        else{
            rounded_grade[i] = grades[i];
        }
    }
    return rounded_grade;
}

int main(){}