#include <iostream>
using namespace std;

class Edge{
    public:
    int u,v,w;
    Edge(int u,int v,int w){
        this->u=u;
        this->v=v;
        this->w=w;
    }
};
class Graph{
    int V;
    vector<Edge> edges;
    vector<int> par;
    vector<int> rank;
    public:
    Graph(int V){
        this->V=V;
        for(int i=0;i<V;i++){
            par.push_back(i);
            rank.push_back(0);
        }
    }
    void add(int u,int v,int w){
        edges.push_back(Edge(u,v,w));
    }
    int find(int x){
        if(par[x]==x) return x;
        return par[x]=find(par[x]);
    }
    void unionRank(int a,int b){
        int parA = find(a);
        int parB = find(b);
        if(rank[parA]==rank[parB]){
            par[parB] = parA;
            rank[parA]++;
        }else if(rank[parA] > rank[parB]){
            par[parB] = parA;
        }else{
            par[parA] = parB;
        }
    }
    int kruskals(){
        sort(edges.begin(),edges.end(),[](Edge &a,Edge &b){
            return a.w < b.w;
        });
        int min=0;
        for(int i=0;i<edges.size();i++){
            Edge top = edges[i];
            int parU = find(top.u);
            int parB = find(top.v);
            if(parU!=parB){
                unionRank(parU,parB);
                min+=top.w;
            }
        }
        return min;
    }
};
int main(){
    Graph graph(4);
    graph.add(0,1,10);
    graph.add(0,2,15);
    graph.add(0,3,30);
    graph.add(1,3,40);
    graph.add(2,3,50);
    cout << graph.kruskals();
}