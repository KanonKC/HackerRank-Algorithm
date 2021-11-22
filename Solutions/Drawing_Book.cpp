#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
 * Complete the 'pageCount' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER p
 */

int min(int a,int b){
    return a < b ? a : b;
}

int pageCount(int n, int p) {
    int front = p/2;
    int add_back = n%2==0?1:0;
    int back = (n-p+add_back)/2;
    return min(front,back);
}

int main(){
    int n,p;
    cin >> n;
    cin >> p;
    cout << pageCount(n,p);
}