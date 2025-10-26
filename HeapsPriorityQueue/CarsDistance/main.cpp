#include <iostream>
using namespace std;

class Cars{
    public: 
    int distance;
    int idx;
    Cars(int d,int i){
        distance=d;
        idx=i;
    }
    bool operator < (const Cars& obj)const{
        return this->distance > obj.distance;
    }
};
int main(){
    int n;
    cin >> n;
    vector<pair<int,int>> pos;
    for(int i=0;i<n;i++){
        int k,j;
        cin >> k >> j;
        pos.push_back(make_pair(k,j));
    }
    vector<Cars> arr;
    for(int i=0;i<n;i++){
        int distance = pos[i].first * pos[i].first + pos[i].second*pos[i].second;
        arr.push_back(Cars(distance,i));
    }
    priority_queue<Cars> pq(arr.begin(),arr.end());
    int k;
    cin >> k;
    int count=0;
    while(!pq.empty() && count < k){
        cout << pq.top().idx;
        pq.pop();
    }
    

}