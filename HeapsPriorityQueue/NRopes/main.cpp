#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<n;i++){
        int data;
        cin >> data;
        pq.push(data);
    }
    while(pq.size()>1){
        int min1 = pq.top(); pq.pop();
        int min2=pq.top(); pq.pop();
        int cost = min1+min2;
        pq.push(cost);
    }
    cout << pq.top();
}