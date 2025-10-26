#include <iostream>
#include <list>
#include <stack>
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
    void helper(int src,vector<bool>& visited,stack<int>& s){
        visited[src]=true;
        for(auto& it: l[src]){
            if(!visited[it]) helper(it,visited,s);
        }
        s.push(src);
    }
    void dfs(){
        vector<bool> visited(V,false);
        stack<int> s;
        for(int i=0;i<V;i++){
            if(!visited[i]) helper(i,visited,s);
        }
        while(!s.empty()){
            cout << s.top() << " ";
            s.pop();
        }
    }
};
int main(){
    Graph graph(6);
    graph.insert(5,0);
    graph.insert(5,2);
    graph.insert(4,0);
    graph.insert(4,1);
    graph.insert(2,3);
    graph.insert(3,1);
    graph.dfs();
}