#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
 * Complete the 'kFactorization' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER_ARRAY A
 */

int **record;
int r_index = 0;

void Combination(vector<int> arr,int *crt,int index,int start,int end,int r,int req){
    if(index == r){
        for(int i=0;i<index;i++){
                cout << crt[i] << " ";
            }
            cout << "\n";
        return;
    }
    for(int i=start;i<end;i++){
        crt[index] = arr[i];
        Combination(arr,crt,index+1,start,end,r,req);
    }
}

vector<int> kFactorization(int n, vector<int> A) {
    int current[A.size()];
    for(int i=1;i<=A.size();i++){
        Combination(A,current,0,0,A.size(),i,n);
    }
}

int main(){
    vector<int> c = {2,3,4};
    kFactorization(12,c);
}