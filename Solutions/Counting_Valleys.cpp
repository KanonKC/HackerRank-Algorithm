#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
 * Complete the 'countingValleys' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER steps
 *  2. STRING path
 */

int countingValleys(int steps, string path) {
    int count = 0,h = 0;
    for(int i=0;i<steps;i++){
        if(path[i]=='U'){
            h++;
            if(h==0){
                count++;
            }
        }
        else{
            h--;
        }
    }
    return count;
}

int main(){
    int steps;
    string path;
    cin >> steps;
    cin >> path;
    cout << countingValleys(steps,path);

}