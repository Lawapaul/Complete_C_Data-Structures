#include <iostream>
using namespace std;

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
    }
    bool dfs(int src,int des){
        visited[src]=true;
        if(src==des){
            return true;
        }
        for(auto& it: l[src]){
            if(!visited[it]){
                if(dfs(src,des)){
                    return true;
                }
            }
        }
        return false;
    }
};
int main(){
    Graph graph(5);
    graph.insert(1,2);
    graph.insert(1,3);
    graph.insert(3,2);
    graph.insert(4,0);
    if(graph.dfs(1,4)){
        cout << "Yes";
    }else{
        cout << "No";
    }
}