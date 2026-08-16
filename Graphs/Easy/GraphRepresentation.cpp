// Storing undirected Graphs in Adjacency Matrix.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int adj[n+1][m+1];
    // vector<vector<int>> adj(n + 1, vector<int>(n + 1, 0));
    for(int i =0;i<m;i++){
        int u,v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }
    return 0;
}

//Storing undirected Graphs in Adjacency List.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    vector<int>adj[n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    return 0;
}

//Storing directed Graphs in Adjacency List.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    vector<int>adj[n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    return 0;
}

// for weighted graphs we store it using pairs -> vector< pair <int,int> > adjList[n+1];