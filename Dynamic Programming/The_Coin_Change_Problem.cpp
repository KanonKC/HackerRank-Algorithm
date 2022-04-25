#include <iostream>
#include <vector>
using namespace std;

/*
 * Complete the 'getWays' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. LONG_INTEGER_ARRAY c
 */

long getWays(int n, vector<long> c){
    vector<long> optimal(n+1);
    optimal[0] = 1;
    for(int i=0;i < c.size();i++){
        for(int j=1;j<=n;j++){
            if(j >= c[i]){
                optimal[j] += optimal[j-c[i]];
            }
        }
    }
    return optimal[n];
}

int main(){
    int N,M;
    long input;
    vector<long> c;

    cin >> N >> M;
    for(int i=0;i<M;i++){
        cin >> input;
        c.push_back(input);
    }

    cout << getWays(N,c);

}