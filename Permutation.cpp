#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void PermutationRecursion(int *arr,int start,int end){
    if(start==end){
        for(int i=0;i<end;i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }
    for(int i=start;i<end;i++){
        swap(arr[i],arr[start]);
        PermutationRecursion(arr,start+1,end);
        swap(arr[i],arr[start]);
    }
}

int fac(int n){
    return n == 0 || n == 1 ? 1 : n*fac(n-1);
}

void Permutation(int *arr,int n){
    cout << "Found " << fac(n) << " Permutation(s)-------\n";
    PermutationRecursion(arr,0,n);
    cout << "---------------------------\n";
}

int main(){
    int p[] = {1,2,3};
    Permutation(p,3);
}