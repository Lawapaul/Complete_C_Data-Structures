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
    void insert(int U,int V){
        l[U].push_back(V);
        l[V].push_back(U);
    }
    bool helper(int src,int par,vector<bool>& visited){
        visited[src]=true;
        for(auto& it: l[src]){
            if(!visited[it]){
                if(helper(it,src,visited)) return true;
            }else{
                if(it != par) return true;
            }
        }
        return false;
    }
    bool dfs(){
        vector<bool> visited(V,false);
        return helper(0,-1,visited);
    }
};
int main(){
    Graph graph(5);
    graph.insert(0,1);
    graph.insert(1,2);
    graph.insert(1,3);
    graph.insert(2,3);
    graph.insert(2,4);
    cout << graph.dfs();
}