//undirected graph
#include<iostream>
using namespace std;

class graph{

    bool** adjMatrix;
    int numVertices;

    public:

    //initialize matrix to zero
    graph(int numVertices){
        this -> numVertices = numVertices;

        adjMatrix = new bool* [numVertices];
        for(int i=0;i<numVertices;i++){
            adjMatrix[i] = new bool[numVertices];
            for(int j=0;j<numVertices;j++)
            adjMatrix[i][j] = false;
        }
    }

    //add edges
    void addEdges(int i, int j){
        adjMatrix[i][j] = true;
        adjMatrix[j][i] = true;
    }

    //remove edges
    void removeEdges(int i, int j){
        adjMatrix[i][j] = false;
        adjMatrix[j][i] = false;
    }

    //print matrix
    void getGraph(){

        for(int i=0;i<numVertices;i++){
            cout<<i<<" : ";
            for(int j=0;j<numVertices;j++)
                cout<<adjMatrix[i][j]<<" ";
            cout<<endl;
        }
    }

};

main(){

    graph g(4);

    g.addEdges(0,1);
    g.addEdges(0,2);
    g.addEdges(1,2);
    g.addEdges(2,0);
    g.addEdges(2,3);

    g.getGraph();
    
}