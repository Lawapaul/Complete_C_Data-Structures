#include <iostream>
#include <vector>
using namespace std;

template <class T>
class Stack{
    public:
    vector <T> stack;
    bool isEmpty(){
        return (stack.size()==0) ? true: false;
    }
    void push(T Val){
        stack.push_back(Val);
    }
    void pop(){
        if(isEmpty()){
            cout << "Stack is Empty";
            return;
        }
        stack.pop_back();
    }
    T top(){
        return stack[stack.size()-1];
    }
};
string reverse(string original){
    Stack <char> s;
    string empty="";
    for(int i=0;i<original.length();i++){
        s.push(original[i]);
    }
    while(!s.isEmpty()){
        empty+=s.top();
        s.pop();
    }
    return empty;
}
int main(){
    string original;
    getline(cin,original);
    cout << reverse(original);
    return 0;
}