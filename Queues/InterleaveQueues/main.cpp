#include <iostream>
#include <queue>
using namespace std;


int main(){
    vector <int> array;
    queue <int>q1;
    queue <int> q2;
    int size;
    cin >> size;
    for(int i=0;i<size;i++){
        int data;
        cin >> data;
        array.push_back(data);
    }
    for(int i=0;i<array.size()/2;i++){
        q1.push(array[i]);
        q2.push(array[(array.size()/2)+i]);
    }
    while(!q1.empty()){
        q2.push(q1.front());
        q1.pop();
        q2.push(q2.front());
        q2.pop();
    }
    while(!q2.empty()){
        cout << q2.front() << " ";
        q2.pop();
    }

}
