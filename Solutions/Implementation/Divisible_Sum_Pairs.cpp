#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
 * Complete the 'divisibleSumPairs' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER k
 *  3. INTEGER_ARRAY ar
 */

int divisibleSumPairs(int n, int k, vector<int> ar) {
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(i==j) continue;
            if(i < j && (ar[i]+ar[j])%k == 0) count++;
        }
    }
    return count;
}

int main(){
    vector<int> arr = {1,3,2,6,1,2};
    cout << divisibleSumPairs(6,3,arr);
}
