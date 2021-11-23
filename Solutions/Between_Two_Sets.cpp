#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
 * Complete the 'getTotalX' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER_ARRAY b
 */

bool isFactor(int n,vector<int> arr){
    for(int i=0;i<arr.size();i++){
        if(arr[i]%n != 0)
            return false;
    }
    return true;
}

bool Factorize(int n,vector<int> arr){
    for(int i=0;i<arr.size();i++){
        if(n%arr[i] != 0)
            return false;
    }
    return true;
}

int getTotalX(vector<int> a, vector<int> b) {
    int max = b[0],count = 0;
    for(int i=0;i<b.size();i++) max = max < b[i] ? b[i] : max;
    for(int i=1;i<=max;i++) if(isFactor(i,b)&&Factorize(i,a)) count++;
    return count;
}

int main(){
    int a_size,b_size,input;
    vector<int> a,b;
    cin >> a_size >> b_size;
    for(int i=0;i<a_size;i++){
        cin >> input;
        a.push_back(input);
    }
    for(int i=0;i<b_size;i++){
        cin >> input;
        b.push_back(input);
    }
    cout << getTotalX(a,b);
    return 0;
}