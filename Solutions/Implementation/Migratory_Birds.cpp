#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
 * Complete the 'migratoryBirds' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int isIn(int n,int *arr,int len){
    for(int i=0;i<len;i++){
        if(n == arr[i])
            return i;
    }
    return -1;
}

int migratoryBirds(vector<int> arr) {
    int len = arr.size(),index = 0;
    int *key = new int(len);
    int *val = new int(len);
    for(int i=0;i<arr.size();i++){
        int found = isIn(arr[i],key,index);
        if(found != -1){ // Found in Key
            val[found]++;
        }
        else{ // Create New
            key[index] = arr[i];
            val[index] = 1;
            index++;
        }
    }
    int max_key = -1,max_val = -1;
    for(int i=0;i<index;i++){
        if(val[i] > max_val || val[i] == max_val && key[i] < max_key){
            max_val = val[i];
            max_key = key[i];
        }
    }
    return max_key;
}

int main(){
    vector<int> bird = {1 ,2 ,3 ,4 ,5 ,4 ,3 ,2 ,1 ,3 ,4};
    cout << migratoryBirds(bird);
    return 0;
}