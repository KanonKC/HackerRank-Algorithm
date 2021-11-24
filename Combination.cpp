#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void CombinationRecursion(int *s,int *c,int index,int start,int end,int r){
    if(index==r){
        for(int i=0;i<index;i++){
            cout << c[i] << " ";
        }
        cout << "\n";
        return;
    }

    for(int i=start;i<end;i++){
        if(index > 0 && c[index-1] == s[i]) continue;
        c[index] = s[i];
        CombinationRecursion(s,c,index+1,i+1,end,r);
    }
}

int fac(int n){
    return n == 1 || n == 0 ? 1 : n * fac(n-1);
}

void Combination(int *s,int n,int r){
    int c[n];
    cout << "Found " << fac(n)/(fac(r)*fac(n-r)) << " Combination(s)--------\n";
    CombinationRecursion(s,c,0,0,n,r);
    cout << "-----------------------------\n";
}

int main(){
    int n,r;
    cout << "Size: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " Number: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Amount of Picking Number: ";
    cin >> r;
    Combination(arr,n,r);
    return 0;
}