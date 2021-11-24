#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
 * Complete the 'superDigit' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. STRING n
 *  2. INTEGER k
 */

int superDigitRecursive(string n){
    if(n.length() == 1){
        return (int)n[0]-48;
    }

    int sum = 0;
    for(int i=0;i<n.length();i++){
        sum += (int)n[i]-48;
    }
    string next = "";
    while(sum>0){
        next = (char)((sum%10)+48) + next;
        sum /= 10;
    }
    return superDigitRecursive(next);
}

int superDigit(string n, int k) {
    string p = "";
    for(int i=0;i<k%9;i++) p += n; // << Discrete Math Very Important!
    return superDigitRecursive(p);
}

int main(){
    string n;
    int k;
    cin >> n >> k;
    cout << superDigit(n,k);
}