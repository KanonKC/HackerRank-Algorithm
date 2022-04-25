#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
 * Complete the 'minimumAbsoluteDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int Min(int a,int b){
    return a < b ? a : b;
}

int minimumAbsoluteDifference(vector<int> arr) {
    sort(arr.begin(),arr.end());
    int minDiff = INT_MAX;
    for(int i=0;i<arr.size()-1;i++){
        minDiff = Min(minDiff,abs(arr[i]-arr[i+1]));
    }
    return minDiff;
}

int main(){
    int N,input;
    vector<int> arr;

    cin >> N;
    for(int i=0;i<N;i++){
        cin >> input;
        arr.push_back(input);
    }

    cout << minimumAbsoluteDifference(arr);
}