#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int birthday(vector<int> s, int d, int m) {
    int sum = 0;
    for(int i=0;i<m;i++){
        sum += s[i];
    }
    int count = sum == d ? 1 : 0;
    for(int i=m;i<s.size();i++){
        sum -= s[i-m];
        sum += s[i];
        if(sum == d){
            count++;
        }
    }
    return count;
}

int main(){
    vector<int> chocolate = {1,2,1,3,2};
    cout << birthday(chocolate,3,2);
}