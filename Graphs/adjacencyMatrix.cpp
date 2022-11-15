#include<iostream>
using namespace std;

class graph{
    int vertices;
    int **adjMat;

    public:
        graph(int ver){     //constructor
            this->vertices = ver;   
            adjMat = new int*[ver];     

            for(int i=0; i<ver; i++){       //initializing the adjacency matrix
                adjMat[i] = new int[ver];   

                for(int j=0; j<ver; j++){
                    adjMat[i][j] = 0;
                }
            }
        }

        void addEdge(int src, int dest){
            adjMat[src][dest] = 1;
            adjMat[dest][src] = 1;
        }

        void printGraph(){
            for(int i=0; i<vertices; i++){
                for(int j=0; j<vertices; j++){
                    cout<<adjMat[i][j]<<" ";
                }
                cout<<endl;
            }
        }
};

int main(){
    graph g(4);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.printGraph();

    return 0;
}