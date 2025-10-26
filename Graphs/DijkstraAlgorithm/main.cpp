#include <iostream>
#include <queue>
#include <vector>
#include <climits>

using namespace std;

class Edge{
    public:
    int v;
    int w;
    Edge(int v,int w){
        this->v=v;
        this->w=w;
    }
};
void dijkstras(vector<int>& distance,vector<vector<Edge>>& Graph,int src){
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    pq.push(make_pair(0,src));
    distance[src] = 0;
    while(pq.size() > 0){
        pair<int,int> front = pq.top();
        pq.pop();
        for(Edge e: Graph[front.second]){
            if(distance[e.v] > distance[front.second] + e.w){
                distance[e.v] = distance[front.second] + e.w;
                pq.push(make_pair(distance[e.v],e.v));
            }
        }
    }
}
int main(){
    int v;
    cin >> v;
    vector<vector<Edge>> Graph(v);
    Graph[0].push_back(Edge(1,2));
    Graph[0].push_back(Edge(2,4));
    Graph[1].push_back(Edge(3,7));
    Graph[1].push_back(Edge(2,1));
    Graph[2].push_back(Edge(4,3));
    Graph[3].push_back(Edge(5,1));
    Graph[4].push_back(Edge(5,5));
    Graph[4].push_back(Edge(3,2));
    vector<int> distance(v,INT_MAX);
    dijkstras(distance,Graph,0);
    for(int i=0;i<distance.size();i++){
        cout << distance[i] << " ";
    }
}