#include <iostream>
using namespace std;

class Disjoint{
    public:
    int n;
    vector<int> rank;
    vector<int> parent;
    Disjoint(int n){
        this->n=n;
        for(int i=0;i<n;i++){
            rank.push_back(0);
            parent[i]=i;
        }
    }
    int find(int x){
        if(parent[x]==x) return x;
        return parent[x] = find(parent[x]);
    }
    void unionbyRank(int a,int b){
        int parentA = find(a);
        int parentB = find(b);
        if(rank[parentA]==rank[parentB]){
            parent[parentB] = parentA;
            rank[parentA]++;
        }else if(rank[parentA] > rank[parentB]){
            parent[parentB] = parentA;
        }else{
            parent[parentA] = parentB;
        }
    }
};
int main(){
    
}