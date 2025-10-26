class Graph{
    int v;
    list<int>* l;
    public:
    Graph(int v){
        this->v=v;
        l=new list<int>[v];
    }
    void insert(int u,int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }
    bool bipartite(){
        vector<int> color(v,-1);
        queue<int> q;
        q.push(0);
        color[0]=0;
        while(q.size()>0){
            int curr = q.front();
            q.pop();
            for(auto& it: l[curr]){
                if(color[it]==-1){
                    color[it] = !color[curr];
                    q.push(it);
                }else{
                    if(color[it]==color[curr]){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        Graph grapH(graph.size());
        for(int i=0;i<graph.size();i++){
            for(int j=0;j<graph[i].size();j++){
                grapH.insert(i,graph[i][j]);
            }
        }
        return grapH.bipartite();
    }
};