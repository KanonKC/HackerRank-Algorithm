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
    cout << b-(sum/2);
}

int main(){
    int 
}