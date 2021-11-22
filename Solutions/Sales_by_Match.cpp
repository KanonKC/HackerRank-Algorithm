#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
 * Complete the 'sockMerchant' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER_ARRAY ar
 */

int sockMerchant(int n, vector<int> ar) {
    int count = 0;
    vector<int> picked;
    for(int i=0;i<n;i++){
        picked.push_back(0);
    }
    for(int i=0;i<n;i++){
        if(picked[i]) continue;
        picked[i] = 1;
        for(int j=i;j<n;j++){
            if(ar[i]==ar[j] && i != j){
                count++;
                picked[j] = 1;
                break;
            }
        }
    }
    return count;
}

int main(){
    vector<int> sock = {10, 20, 20, 10, 10, 30, 50, 10, 20};
    cout << sockMerchant(9,sock);
}