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
    void bfs(){
        queue<int> q;
        vector<bool> visited(V,false);
        q.push(0);
        visited[0]=true;
        while(q.size() > 0){
            int u = q.front();
            q.pop();
            cout << u << " ";
            for(auto& it: l[u]){
                if(!visited[it]){
                    visited[it]=true;
                    q.push(it);
                }
            }
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
    graph.bfs();
}