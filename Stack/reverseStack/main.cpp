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
    void pushBottom(T val){
        if(isEmpty()){
            push(val);
            return;
        }
        T temp=top();
        pop();
        pushBottom(val);
        push(temp);
    }
    void reverse(){
        if(isEmpty()){
            return;
        }
        T temp=top();
        pop();
        reverse();
        pushBottom(temp);
    }
};

int main(){
    Stack <int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << "Original: " << endl;
    while(!s.isEmpty()){
        cout << s.top() << endl;
        s.pop();
    }
    cout << "Reversed: " << endl;
    s.push(1);
    s.push(2);
    s.push(3);
    s.reverse();
    while(!s.isEmpty()){
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}