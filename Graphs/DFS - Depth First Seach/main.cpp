#include <iostream>
#include <list>
#include <queue>
using namespace std;


class Graph{
    int V;
    list<int>* l;
    vector<bool> visited;
    public:
    Graph(int V){
        this->V=V;
        l=new list<int> [V];
        visited = vector<bool> (V,false);
    }
    void insert(int U,int V){
        l[U].push_back(V);
        l[V].push_back(U);
    }
    void print(){
        for(int i=0;i<V;i++){
            list<int>& each = l[i];
            cout << " : ";
            for(int v: each){
                cout << v << " ";
            }
            cout << endl;
        }
    }void dfs(int src){
        visited[src]=true;
        cout << src << " ";
        for(auto& it: l[src]){
            if(!visited[it]) dfs(it);
        }
    }
};
int main(){
    Graph graph(5);
    graph.insert(0,1);
    graph.insert(1,2);
    graph.insert(1,3);
    graph.insert(2,3);
    graph.insert(2,4);
    graph.dfs(0);
}