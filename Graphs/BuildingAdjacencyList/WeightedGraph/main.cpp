#include <iostream>
#include <list>
using namespace std;

class Graph{
    int V;
    list<pair<int,int>>* l;
    public:
    Graph(int V){
        this->V=V;
        l=new list<pair<int,int>> [V];
    }
    void insert(int U,int V,int Weight){
        l[U].push_back(make_pair(V,Weight));
        l[V].push_back(make_pair(U,Weight));
    }
    void print(){
        for(int i=0;i<V;i++){
            list<pair<int,int>>& each = l[i];
            cout << " : ";
            for(auto& j: each){
                cout << "(" << j.first << "," << j.second <<")" << " ";
            }
            cout << endl;
        }
    }
};

int main(){
    Graph graph(5);
    graph.insert(0,1,5);
    graph.insert(1,2,1);
    graph.insert(1,3,3);
    graph.insert(2,3,1);
    graph.insert(2,4,2);
    graph.print();
}
