#include <iostream>
#include <stack>
using namespace std;


void stockSpan(vector <int> array){
    stack <int> s;
    vector <int> result(array.size());
    result[0]=1;
    s.push(0);
    for(int i=1;i<array.size();i++){
        while(!s.empty() && array[s.top()] < array[i]){
            s.pop();
        }
        if(s.empty()){
            result[i]=i+1;
        }else{
            int prevHigh=s.top();
            result[i]=i-prevHigh;
        }
        s.push(i);
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
    stockSpan(array);
}