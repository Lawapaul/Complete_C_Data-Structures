#include <iostream>
using namespace std;


bool compare(pair<double,int> p1,pair<double,int> p2){
    return p1.first>p2.first;
}
double max(vector<int> cost,vector<int> weight,int capacity){
    vector <pair<double,int>> ratio;
    for(int i=0;i<cost.size();i++){
        double r = cost[i]/(double)weight[i];
        pair<double,int> s = make_pair(r,i);
        ratio.push_back(s);
    }
    sort(ratio.begin(),ratio.end(),compare);
    double maxSum=0.0;
    for(int i=0;i<cost.size();i++){
        if(weight[ratio[i].second] <= capacity){
            maxSum+=cost[ratio[i].second];
            capacity-=weight[ratio[i].second];
        } else{
            maxSum += ratio[i].first * capacity;
            break;
        }
    }
    return maxSum;
}
int main(){
    int n,m,capacity;
    cin >> capacity;
    cin >> n;
    cin >> m;
    vector <int> cost;
    vector <int> weight;
    for(int i=0;i<n;i++){
        int data;
        cin >> data;
        cost.push_back(data);
    }
    for(int i=0;i<m;i++){
        int data;
        cin >> data;
        weight.push_back(data);
    }
    cout << max(cost,weight,capacity);
    return 0;

}