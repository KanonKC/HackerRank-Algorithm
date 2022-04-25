#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
 * Complete the 'bonAppetit' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY bill
 *  2. INTEGER k
 *  3. INTEGER b
 */

void bonAppetit(vector<int> bill, int k, int b) {
    int sum = 0;
    for(int i=0;i<bill.size();i++){
        if(i!=k) sum += bill[i];
    }
    int charge = b-(sum/2);
    if(charge==0)
        cout << "Bon Appetit";
    else
        cout << charge;
}

int main(){
    int n,k,b,input;
    vector<int> bill;
    cin >> n >> k;
    for(int i=0;i<n;i++){
        cin >> input;
        bill.push_back(input);
    }
    cin >> b;
    bonAppetit(bill,k,b);
}