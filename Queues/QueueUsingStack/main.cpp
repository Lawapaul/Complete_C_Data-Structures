#include <iostream>
#include <stack>
using namespace std;

class Queues{
    public:
        stack <int> s;
        void push(int data){
            if(s.empty()){
                s.push(data);
                return;
            }
            int temp=s.top();
            s.pop();
            push(data);
            s.push(temp);
        }
        void pop(){
            if(s.empty()){
                 cout << "Queue is Empty";
                 return;
            }
            s.pop();
        }
        int front(){

            return s.top();
        }
        bool Empty(){
            return s.empty();
        }

};
int main(){
    Queues q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    cout << q.front();
    return 0;
}