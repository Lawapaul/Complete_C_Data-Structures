class Graph{
    int v;
    list<int>* l;
    public:
    Graph(int v){
        this->v=v;
        l=new list<int> [v];
    }
    void insert(int u,int v){
        l[v].push_back(u);
    }
    bool helper(int src,vector<int>& visited,vector<int>& path,stack<int>& s){
        visited[src]=true;
        path[src]=true;
        for(auto& it: l[src]){
            if(!visited[it]){
                if(helper(it,visited,path,s)) return true;
            }else{
                if(path[it]) return true;
            }
        }
        path[src]=false;
        s.push(src);
        return false;
    }
    bool cycle(vector<int>& res){
        vector<int> visited(v,false);
        vector<int> path(v,false);
        stack<int> s;
        for(int i=0;i<v;i++){
            if(!visited[i] && helper(i,visited,path,s)) return true;
        }
        while(!s.empty()){
            res.push_back(s.top());
            s.pop();
        }
        return false;
    }
};
class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        Graph graph(numCourses);
        for(int i=0;i<prerequisites.size();i++){
            graph.insert(prerequisites[i][0],prerequisites[i][1]);
        }
        vector<int> res;
        if(graph.cycle(res)) return {};
        return res;

    }
};