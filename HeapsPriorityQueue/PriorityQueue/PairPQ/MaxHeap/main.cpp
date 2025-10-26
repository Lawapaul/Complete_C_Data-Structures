#include <queue>
#include <iostream>
using namespace std;

int main(){
    priority_queue <pair<int,string>> pq;
    pq.push(make_pair(90,"Harshit"));
    pq.push(make_pair(92,"Gajraj"));
    pq.push(make_pair(87,"Rajani"));
    while(!pq.empty()){
        cout << pq.top().first << " " << pq.top().second << endl;
        pq.pop();
    }
    
}