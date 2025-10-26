class Info{
    public:
    int u,cost,stops;
    Info(int u,int cost,int stops){
        this->u=u;
        this->cost=cost;
        this->stops=stops;
    }
};
class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        queue<Info> q;
        vector<int> distance(n,INT_MAX);
        q.push(Info(src,0,-1));
        while(q.size() > 0){
            auto current = q.front();
            q.pop();
            for(int i=0;i<flights.size();i++){
                if(flights[i][0]==current.u){
                    int v = flights[i][1];
                    int wt = flights[i][2];
                    if(distance[v] > current.cost + wt && current.stops+1<=k){
                        distance[v] = current.cost + wt;
                        q.push(Info(v,distance[v],current.stops+1));
                    }
                }
            }
        }
        return (distance[dst]!=INT_MAX) ? distance[dst] : -1;
    }
};