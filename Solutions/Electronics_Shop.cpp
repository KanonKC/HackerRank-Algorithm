#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
 * Complete the getMoneySpent function below.
 */

int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    int max = 0,sum;
    bool canBuy = false;
    for(int k=0;k<keyboards.size();k++){
        for(int d=0;d<drives.size();d++){
            sum = keyboards[k] + drives[d];
            if(sum <= b){
                canBuy = true;
                max = sum > max ? sum : max;
            }
        }
    }
    return canBuy ? max : -1;
}

int main(){
    int b,k,d,input;
    vector<int> keyboard,drive;
    cin >> b >> k >> d;
    for(int i=0;i<k;i++){
        cin >> input;
        keyboard.push_back(input);
    }
    for(int i=0;i<d;i++){
        cin >> input;
        drive.push_back(input);
    }
    cout << getMoneySpent(keyboard,drive,b);
    return 0;
}