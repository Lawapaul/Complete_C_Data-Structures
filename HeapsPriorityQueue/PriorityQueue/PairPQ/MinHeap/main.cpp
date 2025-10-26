#include <queue>
#include <iostream>
using namespace std;

struct ComparePair{
    bool operator () (const pair<string,int> &p1,const pair<string,int> &p2) const {
        return p1.second > p2.second;
    }
};

int main(){
    priority_queue <pair<string,int>,vector<pair<string,int>>,ComparePair> pq;
    pq.push(make_pair("Harshit",90));
    pq.push(make_pair("Gajraj",94));
    pq.push(make_pair("Rajani",87));
    while(!pq.empty()){
        cout << pq.top().first << " " << pq.top().second << endl;
        pq.pop();
    }
}