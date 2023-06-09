#include<iostream>
#include<vector>
using namespace std;

void addEdge(vector<int> adj[], int u, int v){

    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printGraph(vector<int> adj[], int V){

    for(int i=0;i<V;i++){   
        for(int x: adj[i])
            cout<<x<<" ";
        cout<<endl;
    }
}

main(){

    int V = 4;

    //array of vectors
    vector<int> adj[V];

    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);

    printGraph(adj, V);

}