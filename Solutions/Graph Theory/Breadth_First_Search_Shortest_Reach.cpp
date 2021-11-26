#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Queue{
    public:
        vector<int> data;
        int first;
        int size;
        Queue(int x){
            first = 0;
            size = 0;
        }

    void enqueue(int value){
        data.push_back(value);
        size++;
    }

    int dequeue(){
        int rtn = data[first];
        first++;
        size--;
        return rtn;
    }
};

/*
 * Complete the 'bfs' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER m
 *  3. 2D_INTEGER_ARRAY edges
 *  4. INTEGER s
 */

vector<int> bfs(int n, int m, vector<vector<int>> edges, int s) {
    n += 1;
    
    // Create Adjacentcy Matrix
    int adj[n][n];
    int visit[n];
    for(int i=0;i<n;i++){
        visit[i] = i == 0 ? 1 : 0;
        for(int j=0;j<n;j++){
            adj[i][j] = 0;
        }
    }

    // Plot Graph
    for(int i=0;i<edges.size();i++){
        adj[edges[i][0]][edges[i][1]] = 1;
        adj[edges[i][1]][edges[i][0]] = 1;
    }

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout << adj[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    // Running Queue (BFS)

    vector<int> distance;
    for(int i=0;i<n;i++){
        distance.push_back(0);
    }

    Queue q(0);
    q.enqueue(s);
    visit[s] = 1;
    while(q.size > 0){
        int deq = q.dequeue();
        for(int i=0;i<n;i++){
            if(adj[deq][i] && !visit[i]){
                q.enqueue(i);
                visit[i] = 1;
                distance[i] = distance[deq] + 6;
            }
        }
    }

    // Return Distance
    vector<int> rtn;
    for(int i=0;i<n;i++){
        if(i==0 || i==s) continue;
        else if(distance[i] == 0){
            rtn.push_back(-1);
        }
        else{
            rtn.push_back(distance[i]);
        }
    }
    return rtn;
}

int main(){
    int n,m,q,s,v1,v2;
    cin >> q;
    for(int i=0;i<q;i++){
        vector<vector<int>> edges;
        cin >> n >> m;
        for(int j=0;j<m;j++){
            cin >> v1 >> v2;
            edges.push_back({v1,v2});
        }
        cin >> s;
        vector<int> distance = bfs(n,m,edges,s);
        for(int j=0;j<distance.size();j++){
            cout << distance[j] << " ";
        }
        cout << "\n";
    }
    return 0;
}