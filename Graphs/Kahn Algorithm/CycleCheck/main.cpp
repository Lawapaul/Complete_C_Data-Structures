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
    void indegree(vector<int>& indeg){
        for(int i=0;i<V;i++){
            for(auto& it: l[i]) indeg[it]++;
        }
    }
    void topologicalSort(){
        queue<int> q;
        vector<int> indeg(V,0);
        indegree(indeg);
        for(int i=0;i<V;i++){
            if(indeg[i]==0) q.push(i);
        }
        while(q.size() > 0){
            int curr = q.front();
            q.pop();
            cout << curr << " ";
            for(auto& it: l[curr]){
                indeg[it]--;
                if(indeg[it]==0){
                    q.push(it);
                }
            }
        }
        for(int i=0;i<V;i++){
            if(indeg[i] != 0){
                cout << "Cycle Exists"; 
                return;
            }
        }
        cout << "No cycle";
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
    graph.topologicalSort();
}