#include <iostream>
#include <list>
#include <queue>
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
    void print(){
        for(int i=0;i<V;i++){
            list<int>& each = l[i];
            cout << " : ";
            for(int v: each){
                cout << v << " ";
            }
            cout << endl;
        }
    }
    bool bfs(int src,int des){
        queue<int> q;
        vector<bool> visited(V,false);
        q.push(src);
        visited[src]=true;
        while(q.size() > 0){
            int u = q.front();
            q.pop();
            if(u == des){
                return true;
            }
            for(auto& it: l[u]){
                if(!visited[it]){
                    visited[it]=true;
                    q.push(it);
                }
            }
        }
        return false;
    }
};
int main(){
    Graph graph(5);
    graph.insert(0,1);
    graph.insert(1,2);
    graph.insert(1,3);
    graph.insert(2,3);
    graph.insert(2,4);
    if(graph.bfs(1,4)){
        cout << "Yes";
    }else{
        cout << "No";
    }
}