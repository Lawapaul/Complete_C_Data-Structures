#include <iostream>
#include <list>
using namespace std;

class Graph{
    int V;
    list<int>*l;
    public:
    Graph(int V){
        this->V=V;
        l=new list<int> [V];
    }
    void insert(int u,int v){
        l[u].push_back(v);
    }
    bool helper(int src,vector<bool>& visited,vector<bool>& path){
        visited[src]=true;
        path[src]=true;
        for(auto& it: l[src]){
            if(!visited[it]){
                if(helper(it,visited,path)) return true;
            }else{
                if(path[it]) return true;
            }
        }
        path[src]=false;
        return false;
    }
    bool cycle(){
        vector<bool> visited(V,false);
        vector<bool> path(V,false);
        for(int i=0;i<V;i++){
            if(!visited[i]){
                if(helper(i,visited,path)) return true;
            }
        }
        return false;
    }
};
int main(){
    Graph graph(4);
    graph.insert(1,0);
    graph.insert(0,2);
    graph.insert(2,3);
    graph.insert(3,0);
    cout << graph.cycle();

}