#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
 * Complete the 'migratoryBirds' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */


int migratoryBirds(vector<int> arr) {
    int len = arr.size(),index = 0;
    int *key = new int(len);
    int *val = new int(len);
    
}

int main(){
    vector<int> bird = {1 ,2 ,3 ,4 ,5 ,4 ,3 ,2 ,1 ,3 ,4};
    cout << migratoryBirds(bird);
    return 0;
}