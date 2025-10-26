#include <iostream>
#include <list>
using namespace std;

class Graph{
    int V;
    list<int>* l;
    public:
    Graph(int V){
        this->V=V;
        l=new list<int> [V];
    }
    void insert(int u,int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }
    void dfsHelper(int src,vector<bool>& visited){
        visited[src]=true;
        cout << src << " ";
        for(auto& it: l[src]){
            if(!visited[it]) dfsHelper(it,visited);
        }
    }
    void dfs(){
        vector<bool> visited(V,false);
        for(int i=0;i<V;i++){
            if(!visited[i]) dfsHelper(i,visited);
            
        }
    }
};
int main(){
    Graph graph(10);
    graph.insert(2,0);
    graph.insert(2,5);
    graph.insert(1,6);
    graph.insert(6,4);
    graph.insert(4,9);
    graph.insert(4,3);
    graph.insert(3,8);
    graph.insert(3,7);
    graph.dfs();
}