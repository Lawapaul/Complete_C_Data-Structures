class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int v = points.size();
        vector<bool> mst(v,false);
        int src=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        pq.push(make_pair(0,src));
        int cost=0;
        while(pq.size() > 0){
            pair<int,int> front = pq.top();
            pq.pop();
            if(!mst[front.second]){
                mst[front.second] = true;
                cost+=front.first;
                for(auto& it: l[front.second]){
                    pq.push(make_pair(it.second,it.first));
                }
            }
        }
        return cost;
    }
};