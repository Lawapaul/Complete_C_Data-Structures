#include <iostream>
#include <queue>
using namespace std;


int main(){
    queue<int> q;
    stack <int> s;
    int size;
    cin >> size;
    for(int i=0;i<size;i++){
        int element;
        cin >> element;
        q.push(element);
    }
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    cout << "Reversed: " << endl; 
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
}