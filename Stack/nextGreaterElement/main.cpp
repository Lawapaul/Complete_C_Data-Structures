#include <iostream>
#include <stack>
using namespace std;

void nextGreater(vector<int> array){
    vector <int> result(array.size());
    result[array.size()-1]=-1;
    stack<int> s;
    s.push(array[array.size()-1]);
    for(int i=array.size()-2;i>=0;i--){
        while(!s.empty() && s.top() < array[i]){
            s.pop();
        }
        if(s.empty()){
            result[i] = -1;
        }else{
            result[i] = s.top();
        }
        s.push(array[i]);
    }
    for(int i=0;i<result.size();i++){
        cout << result[i] << " ";
    }
}

int main(){
    vector <int> array;
    int size;
    cin >> size;
    for(int i=0;i<size;i++){
        int data;
        cin >> data;
        array.push_back(data);
    }
    nextGreater(array);
}