//DFS on disconnected graph
#include<iostream>
#include<vector>
using namespace std;

void DFSrec(vector<int> adj[], int s, bool visited[]){

    visited[s] = true;
    cout<<s<<" ";

    for(int u : adj[s]){
        if(visited[u] == false)
            DFSrec(adj, u, visited);
    }
}

void DFS(vector<int> adj[], int V){

    bool visited[V];
    for(int i=0;i<V;i++)
        visited[i] = false;

    for(int i=0;i<V;i++){
        if(visited[i] == false)
            DFSrec(adj, i, visited);
    }
}

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

main(){

    int V = 5;
    vector<int> adj[V];

    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 2, 3);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 3, 4);

    cout<< "Following is Depth First Traversal for disconnected graph : "<<endl; 
    DFS(adj, V);

}