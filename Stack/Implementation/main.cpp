#include <iostream>
using namespace std;

template <class T>
class Stack{
    vector <T> arr;
    public:
        void push(T val){
            arr.push_back(val);
            return;
        }
        void pop(){
            if(isEmpty()){
                cout << "Stack is Empty";
                return;
            }
            arr.pop_back();
            return;
        }
        T top(){
            return arr[arr.size()-1];
        }
        bool isEmpty(){
            return arr.size()==0;
        }
};
int main(){
    Stack <int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    while(!s.isEmpty()){
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}